/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_weywallet_core_BRCoreKey */

#ifndef _Included_com_weywallet_core_BRCoreKey
#define _Included_com_weywallet_core_BRCoreKey
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    getSecret
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_weywallet_core_BRCoreKey_getSecret
  (JNIEnv *, jobject);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    getPubKey
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_weywallet_core_BRCoreKey_getPubKey
  (JNIEnv *, jobject);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    getCompressed
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_weywallet_core_BRCoreKey_getCompressed
  (JNIEnv *, jobject);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    getPrivKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_weywallet_core_BRCoreKey_getPrivKey
  (JNIEnv *, jobject);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    getSeedFromPhrase
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_weywallet_core_BRCoreKey_getSeedFromPhrase
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    getAuthPrivKeyForAPI
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_weywallet_core_BRCoreKey_getAuthPrivKeyForAPI
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    getAuthPublicKeyForAPI
 * Signature: ([B)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_weywallet_core_BRCoreKey_getAuthPublicKeyForAPI
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    decryptBip38Key
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_weywallet_core_BRCoreKey_decryptBip38Key
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    createJniCoreKey
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_weywallet_core_BRCoreKey_createJniCoreKey
  (JNIEnv *, jclass);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    createCoreKeyForBIP32
 * Signature: ([BJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_weywallet_core_BRCoreKey_createCoreKeyForBIP32
  (JNIEnv *, jclass, jbyteArray, jlong, jlong);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    setPrivKey
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_weywallet_core_BRCoreKey_setPrivKey
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    setSecret
 * Signature: ([BZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_weywallet_core_BRCoreKey_setSecret
  (JNIEnv *, jobject, jbyteArray, jboolean);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    compactSign
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_weywallet_core_BRCoreKey_compactSign
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    encryptNative
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_weywallet_core_BRCoreKey_encryptNative
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    decryptNative
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_weywallet_core_BRCoreKey_decryptNative
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    address
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_weywallet_core_BRCoreKey_address
  (JNIEnv *, jobject);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    isValidBitcoinPrivateKey
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_weywallet_core_BRCoreKey_isValidBitcoinPrivateKey
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    isValidBitcoinBIP38Key
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_weywallet_core_BRCoreKey_isValidBitcoinBIP38Key
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    encodeSHA256
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_weywallet_core_BRCoreKey_encodeSHA256
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    sign
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_weywallet_core_BRCoreKey_sign
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_weywallet_core_BRCoreKey
 * Method:    verify
 * Signature: ([B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_com_weywallet_core_BRCoreKey_verify
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
