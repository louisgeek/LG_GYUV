//
// Created by louisgeek on 2022/4/7.
//
#include <jni.h>
//
#include "gyuvc.h"
//
//#include <android/log.h>
//
//#define TAG    "gyuvc"
//#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,TAG,__VA_ARGS__)



extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_NV21ToI420(JNIEnv *env, jobject thiz, jbyteArray nv21_src,
                                        jint width_src, jint height_src, jbyteArray i420_dst) {
    jbyte *src = env->GetByteArrayElements(nv21_src, NULL);
    jbyte *dst = env->GetByteArrayElements(i420_dst, NULL);
    //
    NV21ToI420(src, width_src, height_src, dst);
    //释放
    env->ReleaseByteArrayElements(nv21_src, src, 0);
    env->ReleaseByteArrayElements(i420_dst, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_I420ToNV21(JNIEnv *env, jobject thiz, jbyteArray i420_src,
                                        jint width_src, jint height_src, jbyteArray nv21_dst) {
    jbyte *src = env->GetByteArrayElements(i420_src, NULL);
    jbyte *dst = env->GetByteArrayElements(nv21_dst, NULL);
    //
    I420ToNV21(src, width_src, height_src, dst);
    //释放
    env->ReleaseByteArrayElements(i420_src, src, 0);
    env->ReleaseByteArrayElements(nv21_dst, dst, 0);
}



extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_NV12ToI420(JNIEnv *env, jobject thiz, jbyteArray nv12_src,
                                        jint width_src, jint height_src, jbyteArray i420_dst) {
    jbyte *src = env->GetByteArrayElements(nv12_src, NULL);
    jbyte *dst = env->GetByteArrayElements(i420_dst, NULL);
    //
    NV12ToI420(src, width_src, height_src, dst);
    //释放
    env->ReleaseByteArrayElements(nv12_src, src, 0);
    env->ReleaseByteArrayElements(i420_dst, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_I420ToNV12(JNIEnv *env, jobject thiz, jbyteArray i420_src,
                                        jint width_src, jint height_src, jbyteArray nv12_dst) {
    jbyte *src = env->GetByteArrayElements(i420_src, NULL);
    jbyte *dst = env->GetByteArrayElements(nv12_dst, NULL);
    //
    I420ToNV12(src, width_src, height_src, dst);
    //释放
    env->ReleaseByteArrayElements(i420_src, src, 0);
    env->ReleaseByteArrayElements(nv12_dst, dst, 0);
}