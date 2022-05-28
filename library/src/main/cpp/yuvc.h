//
// Created by louisgeek on 2022/4/9.
//
#ifndef LG_GYUV_GYUVC_H
#define LG_GYUV_GYUVC_H

#include <jni.h>
//
#include "libyuv.h"
//
#include <android/log.h>

#define TAG    "yuvc"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,TAG,__VA_ARGS__)

//
#endif //LG_GYUV_GYUVC_H

void yuvNV21ToI420(jbyte *src, jint width, jint height, jbyte *dst);

void yuvI420ToNV21(jbyte *src, jint width, jint height, jbyte *dst);

void yuvNV12ToI420(jbyte *src, jint width, jint height, jbyte *dst);

void yuvI420ToNV12(jbyte *src, jint width, jint height, jbyte *dst);

void yuvNV21ToNV12(jbyte *src, jint width, jint height, jbyte *dst);

void yuvYUY2ToI420(jbyte *src, jint width, jint height, jbyte *dst, jint stride);

void yuvI420ToYUY2(jbyte *src, jint width, jint height, jbyte *dst, jint stride);