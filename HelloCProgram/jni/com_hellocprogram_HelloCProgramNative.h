/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_hellocprogram_HelloCProgramNative */

#ifndef _Included_com_hellocprogram_HelloCProgramNative
#define _Included_com_hellocprogram_HelloCProgramNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_hellocprogram_HelloCProgramNative
 * Method:    nativePrintHello
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_hellocprogram_HelloCProgramNative_nativePrintHello
  (JNIEnv *, jclass);

/*
 * Class:     com_hellocprogram_HelloCProgramNative
 * Method:    sum
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_hellocprogram_HelloCProgramNative_sum
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_hellocprogram_HelloCProgramNative
 * Method:    testlog
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_hellocprogram_HelloCProgramNative_testlog
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
