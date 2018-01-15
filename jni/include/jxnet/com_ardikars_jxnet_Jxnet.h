/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ardikars_jxnet_Jxnet */

#ifndef _Included_com_ardikars_jxnet_Jxnet
#define _Included_com_ardikars_jxnet_Jxnet
#ifdef __cplusplus
extern "C" {
#endif
#undef com_ardikars_jxnet_Jxnet_OK
#define com_ardikars_jxnet_Jxnet_OK 0L
/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapFindAllDevs
 * Signature: (Ljava/util/List;Ljava/lang/StringBuilder;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapFindAllDevs
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapOpenLive
 * Signature: (Ljava/lang/String;IIILjava/lang/StringBuilder;)Lcom/ardikars/jxnet/Pcap;
 */
JNIEXPORT jobject JNICALL Java_com_ardikars_jxnet_Jxnet_PcapOpenLive
  (JNIEnv *, jclass, jstring, jint, jint, jint, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapLoop
 * Signature: (Lcom/ardikars/jxnet/Pcap;ILcom/ardikars/jxnet/PcapHandler;Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapLoop
  (JNIEnv *, jclass, jobject, jint, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDispatch
 * Signature: (Lcom/ardikars/jxnet/Pcap;ILcom/ardikars/jxnet/PcapHandler;Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDispatch
  (JNIEnv *, jclass, jobject, jint, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDumpOpen
 * Signature: (Lcom/ardikars/jxnet/Pcap;Ljava/lang/String;)Lcom/ardikars/jxnet/PcapDumper;
 */
JNIEXPORT jobject JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDumpOpen
  (JNIEnv *, jclass, jobject, jstring);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDump
 * Signature: (Lcom/ardikars/jxnet/PcapDumper;Lcom/ardikars/jxnet/PcapPktHdr;Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDump
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapOpenOffline
 * Signature: (Ljava/lang/String;Ljava/lang/StringBuilder;)Lcom/ardikars/jxnet/Pcap;
 */
JNIEXPORT jobject JNICALL Java_com_ardikars_jxnet_Jxnet_PcapOpenOffline
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapCompile
 * Signature: (Lcom/ardikars/jxnet/Pcap;Lcom/ardikars/jxnet/BpfProgram;Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapCompile
  (JNIEnv *, jclass, jobject, jobject, jstring, jint, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetFilter
 * Signature: (Lcom/ardikars/jxnet/Pcap;Lcom/ardikars/jxnet/BpfProgram;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetFilter
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSendPacket
 * Signature: (Lcom/ardikars/jxnet/Pcap;Ljava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSendPacket
  (JNIEnv *, jclass, jobject, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapNext
 * Signature: (Lcom/ardikars/jxnet/Pcap;Lcom/ardikars/jxnet/PcapPktHdr;)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_ardikars_jxnet_Jxnet_PcapNext
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapNextEx
 * Signature: (Lcom/ardikars/jxnet/Pcap;Lcom/ardikars/jxnet/PcapPktHdr;Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapNextEx
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapClose
 * Signature: (Lcom/ardikars/jxnet/Pcap;)V
 */
JNIEXPORT void JNICALL Java_com_ardikars_jxnet_Jxnet_PcapClose
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDumpFlush
 * Signature: (Lcom/ardikars/jxnet/PcapDumper;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDumpFlush
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDumpClose
 * Signature: (Lcom/ardikars/jxnet/PcapDumper;)V
 */
JNIEXPORT void JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDumpClose
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDataLink
 * Signature: (Lcom/ardikars/jxnet/Pcap;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDataLink
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetDataLink
 * Signature: (Lcom/ardikars/jxnet/Pcap;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetDataLink
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapBreakLoop
 * Signature: (Lcom/ardikars/jxnet/Pcap;)V
 */
JNIEXPORT void JNICALL Java_com_ardikars_jxnet_Jxnet_PcapBreakLoop
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapLookupDev
 * Signature: (Ljava/lang/StringBuilder;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ardikars_jxnet_Jxnet_PcapLookupDev
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapGetErr
 * Signature: (Lcom/ardikars/jxnet/Pcap;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ardikars_jxnet_Jxnet_PcapGetErr
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapLibVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ardikars_jxnet_Jxnet_PcapLibVersion
  (JNIEnv *, jclass);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapIsSwapped
 * Signature: (Lcom/ardikars/jxnet/Pcap;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapIsSwapped
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSnapshot
 * Signature: (Lcom/ardikars/jxnet/Pcap;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSnapshot
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapStrError
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ardikars_jxnet_Jxnet_PcapStrError
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapMajorVersion
 * Signature: (Lcom/ardikars/jxnet/Pcap;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapMajorVersion
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapMinorVersion
 * Signature: (Lcom/ardikars/jxnet/Pcap;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapMinorVersion
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDataLinkValToName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDataLinkValToName
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDataLinkValToDescription
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDataLinkValToDescription
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDataLinkNameToVal
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDataLinkNameToVal
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetNonBlock
 * Signature: (Lcom/ardikars/jxnet/Pcap;ILjava/lang/StringBuilder;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetNonBlock
  (JNIEnv *, jclass, jobject, jint, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapGetNonBlock
 * Signature: (Lcom/ardikars/jxnet/Pcap;Ljava/lang/StringBuilder;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapGetNonBlock
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapOpenDead
 * Signature: (II)Lcom/ardikars/jxnet/Pcap;
 */
JNIEXPORT jobject JNICALL Java_com_ardikars_jxnet_Jxnet_PcapOpenDead
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapDumpFTell
 * Signature: (Lcom/ardikars/jxnet/PcapDumper;)J
 */
JNIEXPORT jlong JNICALL Java_com_ardikars_jxnet_Jxnet_PcapDumpFTell
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapFreeCode
 * Signature: (Lcom/ardikars/jxnet/BpfProgram;)V
 */
JNIEXPORT void JNICALL Java_com_ardikars_jxnet_Jxnet_PcapFreeCode
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapStats
 * Signature: (Lcom/ardikars/jxnet/Pcap;Lcom/ardikars/jxnet/PcapStat;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapStats
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapLookupNet
 * Signature: (Ljava/lang/String;Lcom/ardikars/jxnet/Inet4Address;Lcom/ardikars/jxnet/Inet4Address;Ljava/lang/StringBuilder;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapLookupNet
  (JNIEnv *, jclass, jstring, jobject, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapCompileNoPcap
 * Signature: (IILcom/ardikars/jxnet/BpfProgram;Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapCompileNoPcap
  (JNIEnv *, jclass, jint, jint, jobject, jstring, jint, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapPError
 * Signature: (Lcom/ardikars/jxnet/Pcap;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_ardikars_jxnet_Jxnet_PcapPError
  (JNIEnv *, jclass, jobject, jstring);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapCreate
 * Signature: (Ljava/lang/String;Ljava/lang/StringBuilder;)Lcom/ardikars/jxnet/Pcap;
 */
JNIEXPORT jobject JNICALL Java_com_ardikars_jxnet_Jxnet_PcapCreate
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetSnaplen
 * Signature: (Lcom/ardikars/jxnet/Pcap;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetSnaplen
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetPromisc
 * Signature: (Lcom/ardikars/jxnet/Pcap;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetPromisc
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetTimeout
 * Signature: (Lcom/ardikars/jxnet/Pcap;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetTimeout
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetBufferSize
 * Signature: (Lcom/ardikars/jxnet/Pcap;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetBufferSize
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapCanSetRfMon
 * Signature: (Lcom/ardikars/jxnet/Pcap;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapCanSetRfMon
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetRfMon
 * Signature: (Lcom/ardikars/jxnet/Pcap;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetRfMon
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetImmediateMode
 * Signature: (Lcom/ardikars/jxnet/Pcap;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetImmediateMode
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapActivate
 * Signature: (Lcom/ardikars/jxnet/Pcap;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapActivate
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetDirection
 * Signature: (Lcom/ardikars/jxnet/Pcap;Lcom/ardikars/jxnet/PcapDirection;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetDirection
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetTStampPrecision
 * Signature: (Lcom/ardikars/jxnet/Pcap;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetTStampPrecision
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapSetTStampType
 * Signature: (Lcom/ardikars/jxnet/Pcap;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapSetTStampType
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapGetTStampPrecision
 * Signature: (Lcom/ardikars/jxnet/Pcap;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapGetTStampPrecision
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapListDataLinks
 * Signature: (Lcom/ardikars/jxnet/Pcap;Ljava/util/List;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapListDataLinks
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapListTStampTypes
 * Signature: (Lcom/ardikars/jxnet/Pcap;Ljava/util/List;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapListTStampTypes
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapTStampTypeNameToVal
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapTStampTypeNameToVal
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapTStampTypeValToName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ardikars_jxnet_Jxnet_PcapTStampTypeValToName
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapTStampTypeValToDescription
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ardikars_jxnet_Jxnet_PcapTStampTypeValToDescription
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapStatusToStr
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ardikars_jxnet_Jxnet_PcapStatusToStr
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapOpenDeadWithTStampPrecision
 * Signature: (III)Lcom/ardikars/jxnet/Pcap;
 */
JNIEXPORT jobject JNICALL Java_com_ardikars_jxnet_Jxnet_PcapOpenDeadWithTStampPrecision
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapOfflineFilter
 * Signature: (Lcom/ardikars/jxnet/BpfProgram;Lcom/ardikars/jxnet/PcapPktHdr;Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapOfflineFilter
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapOpenOfflineWithTStampPrecision
 * Signature: (Ljava/lang/String;ILjava/lang/StringBuilder;)Lcom/ardikars/jxnet/Pcap;
 */
JNIEXPORT jobject JNICALL Java_com_ardikars_jxnet_Jxnet_PcapOpenOfflineWithTStampPrecision
  (JNIEnv *, jclass, jstring, jint, jobject);

/*
 * Class:     com_ardikars_jxnet_Jxnet
 * Method:    PcapInject
 * Signature: (Lcom/ardikars/jxnet/Pcap;Ljava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_com_ardikars_jxnet_Jxnet_PcapInject
  (JNIEnv *, jclass, jobject, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
