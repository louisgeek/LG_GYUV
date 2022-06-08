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

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvI420Scale(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                           jint src_width, jint src_height, jbyteArray dst_data,
                                           jint dst_width, jint dst_height, jint mode) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvI420Scale %d X %d", src_width, src_height);
    yuvI420Scale(src, src_width, src_height, dst, dst_width, dst_height, mode);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}
extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvI420Rotate(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data,
                                            jint degree) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvI420Rotate %d X %d", src_width, src_height);
    yuvI420Rotate(src, src_width, src_height, dst, degree);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}
extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvI420Crop(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                          jint src_width, jint src_height, jbyteArray dst_data,
                                          jint dst_width, jint dst_height, jint left, jint top) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvI420Crop %d X %d", src_width, src_height);
    yuvI420Crop(src, src_width, src_height, dst, dst_width, dst_height, left, top);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}
extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvI420Mirror(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvI420Mirror %d X %d", src_width, src_height);
    yuvI420Mirror(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}


extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuvNV16ToNV12(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuvNV16ToNV12 %d X %d", src_width, src_height);
    nv16_to_nv12(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuv420pTo422p(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuv420pTo422p %d X %d", src_width, src_height);
    yuv420p_to_yuv422p(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuv420pToNV12(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuv420pToNV12 %d X %d", src_width, src_height);
    yuv420p_to_nv12(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}
extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuv420pToNV21(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuv420pToNV21 %d X %d", src_width, src_height);
    yuv420p_to_nv21(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}
extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuv422pToNV16(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuv422pToNV16 %d X %d", src_width, src_height);
    yuv422p_to_nv16(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}
extern "C"
JNIEXPORT void JNICALL
Java_com_louisgeek_gyuv_GYUV_gyuv422pToNV61(JNIEnv *env, jobject thiz, jbyteArray src_data,
                                            jint src_width, jint src_height, jbyteArray dst_data) {
    jbyte *src = env->GetByteArrayElements(src_data, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_data, NULL);
    //
    LOGD("gyuv422pToNV61 %d X %d", src_width, src_height);
    yuv422p_to_nv61(src, src_width, src_height, dst);
    //释放
    env->ReleaseByteArrayElements(src_data, src, 0);
    env->ReleaseByteArrayElements(dst_data, dst, 0);
}

