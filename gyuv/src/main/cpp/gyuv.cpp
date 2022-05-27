//
// Created by louisgeek on 2022/4/7.
//
#include <jni.h>
//
#include "yuvc.h"
//
#include <android/log.h>
//
#define TAG    "gyuv"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,TAG,__VA_ARGS__)

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvNV21ToI420(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvNV21ToI420 %d X %d", src_width, src_height);
    yuvNV21ToI420(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvI420ToNV21(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvI420ToNV21 %d X %d", src_width, src_height);
    yuvI420ToNV21(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvNV12ToI420(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvNV12ToI420 %d X %d", src_width, src_height);
    yuvNV12ToI420(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvI420ToNV12(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvI420ToNV12 %d X %d", src_width, src_height);
    yuvI420ToNV12(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvNV21ToNV12(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvNV21ToNV12 %d X %d", src_width, src_height);
    yuvNV21ToNV12(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvYUY2ToI420(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data,
                                            jint dst_stride) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvYUY2ToI420 %d X %d", src_width, src_height);
    yuvYUY2ToI420(src, src_width, src_height, dst, dst_stride);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvI420ToYUY2(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data,
                                            jint dst_stride) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvI420ToYUY2 %d X %d", src_width, src_height);
    yuvI420ToYUY2(src, src_width, src_height, dst, dst_stride);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}