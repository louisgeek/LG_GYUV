//
// Created by louisgeek on 2022/4/8.
//

#include <jni.h>
//
#include "libyuv.h"


void I420ToNV12(jbyte *src, jint width, jint height, jbyte *dst) {
    jint src_y_size = width * height;
    jint src_u_size = (width >> 1) * (height >> 1);
    jbyte *src_y = src;
    jbyte *src_u = src + src_y_size;
    jbyte *src_v = src + src_y_size + src_u_size;
    //
    jint dst_y_size = width * height;
    jbyte *dst_y = dst;
    jbyte *dst_uv = dst + dst_y_size;
    //
    libyuv::I420ToNV12(
            (const uint8_t *) src_y, width,
            (const uint8_t *) src_u, width >> 1,
            (const uint8_t *) src_v, width >> 1,
            (uint8_t *) dst_y, width,
            (uint8_t *) dst_uv, width,
            width, height);
}

void NV12ToI420(jbyte *src, jint width, jint height, jbyte *dst) {
    jint src_y_size = width * height;
    jint src_u_size = (width >> 1) * (height >> 1);

    jbyte *src_y = src;
    jbyte *src_uv = src + src_y_size;
    //
    jint dst_y_size = width * height;
    jbyte *dst_y = dst;
    jbyte *dst_u = dst + dst_y_size;
    jbyte *dst_v = dst + dst_y_size+ src_u_size;
    //
    libyuv::NV12ToI420(
            (const uint8_t *) src_y, width,
            (const uint8_t *) src_uv, width >> 1,
            (uint8_t *) dst_y, width >> 1,
            (uint8_t *) dst_u, width,
            (uint8_t *) dst_v, width,
            width, height);
}

void I420ToNV21(jbyte *src, jint width, jint height, jbyte *dst) {
    jint src_y_size = width * height;
    jint src_u_size = (width >> 1) * (height >> 1);
    jbyte *src_y = src;
    jbyte *src_u = src + src_y_size;
    jbyte *src_v = src + src_y_size + src_u_size;
    //
    jint dst_y_size = width * height;
    jbyte *dst_y = dst;
    jbyte *dst_vu = dst + dst_y_size;
    //
    libyuv::I420ToNV21(
            (const uint8_t *) src_y, width,
            (const uint8_t *) src_u, width >> 1,
            (const uint8_t *) src_v, width >> 1,
            (uint8_t *) dst_y, width,
            (uint8_t *) dst_vu, width,
            width, height);
}

void NV21ToI420(jbyte *src, jint width, jint height, jbyte *dst) {
    jint src_y_size = width * height;
    jint src_u_size = (width >> 1) * (height >> 1);

    jbyte *src_y = src;
    jbyte *src_vu = src + src_y_size;
    //
    jbyte *dst_y = dst;
    jbyte *dst_u = dst + src_y_size;
    jbyte *dst_v = dst + src_y_size + src_u_size;
    //
    libyuv::NV21ToI420((const uint8_t *) src_y, width,
                       (const uint8_t *) src_vu, width,
                       (uint8_t *) dst_y, width,
                       (uint8_t *) dst_u, width >> 1,
                       (uint8_t *) dst_v, width >> 1,
                       width, height);
}