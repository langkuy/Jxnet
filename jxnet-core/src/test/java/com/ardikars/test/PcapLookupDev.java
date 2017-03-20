package com.ardikars.test;

import static com.ardikars.jxnet.Jxnet.*;
import org.junit.Assert;
import org.junit.Test;

public class PcapLookupDev {
	
	@Test
	public void run() {
		StringBuilder errbuf = new StringBuilder();
		String dev = PcapLookupDev(errbuf);
		if (dev == null) {
			System.err.println(errbuf.toString());
		} else {
			System.out.println(dev);
		}
		Assert.assertNotEquals(null, dev);
	}
	
}