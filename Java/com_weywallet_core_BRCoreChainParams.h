/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_weywallet_core_BRCoreChainParams */

#ifndef _Included_com_weywallet_core_BRCoreChainParams
#define _Included_com_weywallet_core_BRCoreChainParams
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_weywallet_core_BRCoreChainParams
 * Method:    getJniMagicNumber
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_weywallet_core_BRCoreChainParams_getJniMagicNumber
  (JNIEnv *, jobject);

/*
 * Class:     com_weywallet_core_BRCoreChainParams
 * Method:    createJniMainnetChainParams
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_weywallet_core_BRCoreChainParams_createJniMainnetChainParams
  (JNIEnv *, jclass);

/*
 * Class:     com_weywallet_core_BRCoreChainParams
 * Method:    createJniTestnetChainParams
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_weywallet_core_BRCoreChainParams_createJniTestnetChainParams
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif