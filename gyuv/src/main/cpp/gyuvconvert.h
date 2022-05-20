//
// Created by louisgeek on 2022/4/9.
//
#include <jni.h>

#include "libyuv.h"

//
#include <android/log.h>
//
#define TAG    "gyuvconvert"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,TAG,__VA_ARGS__)

#ifndef LG_GYUV_GYUVC_H
#define LG_GYUV_GYUVC_H

#endif //LG_GYUV_GYUVC_H

void NV21ToI420(jbyte *src, jint width, jint height, jbyte *dst);

void I420ToNV21(jbyte *src, jint width, jint height, jbyte *dst);

void NV12ToI420(jbyte *src, jint width, jint height, jbyte *dst);

void I420ToNV12(jbyte *src, jint width, jint height, jbyte *dst);

void NV21ToNV12(jbyte *src, jint width, jint height, jbyte *dst);

void YUY2ToI420(jbyte *src, jint width, jint height, jbyte *dst,jint stride);

void I420ToYUY2(jbyte *src, jint width, jint height, jbyte *dst,jint stride);