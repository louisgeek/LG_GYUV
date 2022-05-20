//
// Created by louisgeek on 2022/4/7.
//
#include <jni.h>
//
#include "gyuvconvert.h"
//
#include <android/log.h>
//
#define TAG    "gyuvc"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,TAG,__VA_ARGS__)

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_NV21ToI420(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                        jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    NV21ToI420(src, src_width, src_height, dst);
    LOGD("NV21ToI420 %d X %d",src_width,src_height);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_I420ToNV21(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                        jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    I420ToNV21(src, src_width, src_height, dst);
    LOGD("I420ToNV21 %d X %d",src_width,src_height);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_NV12ToI420(JNIEnv *env, jobject thiz, jbyteArray nv12_src,
                                        jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(nv12_src, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    NV12ToI420(src, src_width, src_height, dst);
    LOGD("NV12ToI420 %d X %d",src_width,src_height);
    //释放
    env->ReleaseByteArrayElements(nv12_src, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_I420ToNV12(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                        jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    I420ToNV12(src, src_width, src_height, dst);
    LOGD("I420ToNV12 %d X %d",src_width,src_height);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_NV21ToNV12(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                        jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    NV21ToNV12(src, src_width, src_height, dst);
    LOGD("NV21ToNV12 %d X %d",src_width,src_height);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_YUY2ToI420(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                        jint src_width, jint src_height, jbyteArray dst_data,
                                        jint dst_stride) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    YUY2ToI420(src, src_width, src_height, dst,dst_stride);
    LOGD("YUY2ToI420 %d X %d",src_width,src_height);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_I420ToYUY2(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                        jint src_width, jint src_height, jbyteArray dst_data,
                                        jint dst_stride) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    I420ToYUY2(src, src_width, src_height, dst,dst_stride);
    LOGD("I420ToYUY2 %d X %d",src_width,src_height);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}