package com.ardikars.jxnet;

import com.ardikars.jxnet.util.Platforms;

import java.io.File;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.List;

public class Application {

    private List<Library.Loader> libraryLoaders;
    private boolean libraryIsLoaded;

    private static Application instance;

    private String applicationName;
    private String applicationVersion;
    private Context context;

    private Application() {

    }

    public static Application getInstance() {
        if (instance == null) {
            instance = new Application();
        }
        return instance;
    }

    public void addLibrary(Library.Loader libraryLoader) {
        if (libraryLoaders == null) {
            libraryLoaders = new ArrayList<Library.Loader>();
        }
        libraryLoaders.add(libraryLoader);
    }

    public static void bootstrap(String applicationName, String applicationVersion) {
        getInstance().applicationName = applicationName;
        getInstance().applicationVersion = applicationVersion;
    }

    private static void start() throws UnsatisfiedLinkError {
        if (Platforms.isWindows()) {
            String path = "C:\\Windows\\System32\\Npcap";
            String paths = System.getProperty("java.library.path");
            String pathSparator = File.pathSeparator;
            String[] libraryPaths = paths.split(pathSparator);
            boolean isAdded = false;
            for (String str : libraryPaths) {
                if (str.equals(path)) {
                    isAdded = true;
                    break;
                }
            }
            if (!isAdded) {
                paths = paths.concat(pathSparator + path);
                System.setProperty("java.library.path", paths);
                Field sysPathsField = null;
                try {
                    sysPathsField = ClassLoader.class.getDeclaredField("sys_paths");
                } catch (NoSuchFieldException e) {
                    throw new UnsatisfiedLinkError(e.getMessage());
                }
                sysPathsField.setAccessible(true);
                try {
                    sysPathsField.set(null, null);
                } catch (IllegalAccessException e) {
                    throw new UnsatisfiedLinkError(e.getMessage());
                }
            }
        }

        Application application = getInstance();
        if (!application.libraryIsLoaded && application.libraryLoaders != null && !application.libraryLoaders.isEmpty()) {
            for (Library.Loader loader : application.libraryLoaders) {
                try {
                    loader.load();
                    application.libraryIsLoaded = true;
                    break;
                } catch (UnsatisfiedLinkError e) {
                    continue;
                }
            }
        }
    }

    public String getApplicationName() {
        return applicationName;
    }

    public String getApplicationVersion() {
        return applicationVersion;
    }

    public Context getContext() {
        return context;
    }

    @Override
    public String toString() {
        final StringBuilder sb = new StringBuilder("Application{");
        sb.append("applicationName='").append(applicationName).append('\'');
        sb.append(", applicationVersion='").append(applicationVersion).append('\'');
        sb.append('}');
        return sb.toString();
    }

    public static void run(ApplicationInitializer applicationInitializer) {
        Context context = new ApplicationContext();
        getInstance().context = context;
        applicationInitializer.initialize(context);
        Application.start();
    }

    public interface Context {

        String getApplicationName();

        String getApplicationVersion();

        void addLibrary(Library.Loader libraryLoader);

    }

}
