//
// Created by louisgeek on 2022/4/9.
//
#ifndef LG_GYUV_GYUVC_H
#define LG_GYUV_GYUVC_H
//
#include "libyuv.h"
//
#include <jni.h>
#include <android/log.h>
#include <string.h>

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


void yuvI420Scale(jbyte *src, jint width, jint height, jbyte *dst, jint dst_width, jint dst_height,
                  jint mode);

void yuvI420Rotate(jbyte *src, jint width, jint height, jbyte *dst, jint degree);

void yuvI420Crop(jbyte *src, jint width, jint height, jbyte *dst, jint dst_width, jint dst_height,
                 jint left, jint top);

void yuvI420Mirror(jbyte *src, jint width, jint height, jbyte *dst);


void nv16_to_nv12(jbyte *src, jint width, jint height, jbyte *dst);

void yuv420p_to_nv12(jbyte *src, jint width, jint height, jbyte *dst);

void yuv420p_to_nv21(jbyte *src, jint width, jint height, jbyte *dst);

void yuv422p_to_nv16(jbyte *src, jint width, jint height, jbyte *dst);

void yuv422p_to_nv61(jbyte *src, jint width, jint height, jbyte *dst);
