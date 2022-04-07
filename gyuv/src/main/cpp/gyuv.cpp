#include <jni.h>
//
#include "libyuv.h"





extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_NV21ToI420(JNIEnv *env, jobject thiz, jbyteArray nv21_src,
                                        jint width_src, jint height_src, jbyteArray i420_dst) {
    //libyuv.h
    libyuv::NV21ToI420(src, dst, width_src, height_src);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_I420ToNV21(JNIEnv *env, jobject thiz, jbyteArray i420_src,
                                        jint width_src, jint height_src, jbyteArray nv21_dst) {

    jbyte *src = env->GetByteArrayElements(i420_src, NULL);
    jbyte *dst = env->GetByteArrayElements(nv21_dst, NULL);
    //libyuv.h
    libyuv::I420ToNV21(src, dst, width, height);
    //释放
    env->ReleaseByteArrayElements(i420_src, src, 0);
    env->ReleaseByteArrayElements(nv21_dst, dst, 0);
}



extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_NV12ToI420(JNIEnv *env, jobject thiz, jbyteArray nv12_src,
                                        jint width_src, jint height_src, jbyteArray i420_dst) {
    //libyuv.h
    libyuv::NV12ToI420(src, dst, width_src, height_src);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_I420ToNV12(JNIEnv *env, jobject thiz, jbyteArray i420_src,
                                        jint width_src, jint height_src, jbyteArray nv12_dst) {

    jbyte *src = env->GetByteArrayElements(i420_src, NULL);
    jbyte *dst = env->GetByteArrayElements(nv12_dst, NULL);
    //libyuv.h
    libyuv::I420ToNV12(src, dst, width_src, height_src);
    //释放
    env->ReleaseByteArrayElements(i420_src, src, 0);
    env->ReleaseByteArrayElements(nv12_dst, dst, 0);
}