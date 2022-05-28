//
// Created by louisgeek on 2022/4/8.
//
#include "yuvc.h"


//todo yanzheng
void yuvNV21ToI420(jbyte *src, jint width, jint height, jbyte *dst) {
    const int half_width = (width + 1) / 2;
    const int half_height = (height + 1) / 2;
    //
    jint src_y_size = width * height;
    jint src_vu_size = 2 * half_width * half_height;
    jbyte *src_y = src;
    jbyte *src_vu = src + src_y_size;
    //
    jint dst_y_size = width * height;
    jint dst_u_size = half_width * half_height;
    jint dst_v_size = half_width * half_height;
    jbyte *dst_y = dst;
    jbyte *dst_u = dst + dst_y_size;
    jbyte *dst_v = dst + dst_y_size + dst_u_size;
    //
    LOGD("yuvNV21ToI420 %d X %d", width, height);
    libyuv::NV21ToI420((const uint8_t *) src_y, width,
                       (const uint8_t *) src_vu, 2 * half_width,
                       (uint8_t *) dst_y, width,
                       (uint8_t *) dst_u, half_width,
                       (uint8_t *) dst_v, half_width,
                       width, height);
}

void yuvI420ToNV21(jbyte *src, jint width, jint height, jbyte *dst) {
    const int half_width = (width + 1) / 2;
    const int half_height = (height + 1) / 2;
    //
    jint src_y_size = width * height;
    jint src_u_size = half_width * half_height;
//    jint src_v_size = half_width * half_height;
    jbyte *src_y = src;
    jbyte *src_u = src + src_y_size;
    jbyte *src_v = src + src_y_size + src_u_size;
    //
    jint dst_y_size = width * height;
//    jint dst_vu_size = 2 * half_width * half_height;
    jbyte *dst_y = dst;
    jbyte *dst_vu = dst + dst_y_size;
    //
    LOGD("yuvI420ToNV21 %d X %d", width, height);
    libyuv::I420ToNV21(
            (const uint8_t *) src_y, width,
            (const uint8_t *) src_u, half_width,
            (const uint8_t *) src_v, half_width,
            (uint8_t *) dst_y, width,
            (uint8_t *) dst_vu, 2 * half_width,
            width, height);
}

void yuvNV12ToI420(jbyte *src, jint width, jint height, jbyte *dst) {
    const int half_width = (width + 1) / 2;
    const int half_height = (height + 1) / 2;
    //
    jint src_y_size = width * height;
//    jint src_uv_size =  half_width * half_height;
    jbyte *src_y = src;
    jbyte *src_uv = src + src_y_size;
    //
    jint dst_y_size = width * height;
    jint dst_u_size = half_width * half_height;
//    jint dst_v_size = half_width * half_height;
    jbyte *dst_y = dst;
    jbyte *dst_u = dst + dst_y_size;
    jbyte *dst_v = dst + dst_y_size + dst_u_size;
    //
    LOGD("yuvNV12ToI420 %d X %d", width, height);
    libyuv::NV12ToI420((const uint8_t *) src_y, width,
                       (const uint8_t *) src_uv, 2 * half_width,
                       (uint8_t *) dst_y, width,
                       (uint8_t *) dst_u, half_width,
                       (uint8_t *) dst_v, half_width,
                       width, height);
}

//todo yanzheng
void yuvI420ToNV12(jbyte *src, jint width, jint height, jbyte *dst) {
    const int half_width = (width + 1) / 2;
    const int half_height = (height + 1) / 2;
    //
    jint src_y_size = width * height;
    jint src_u_size = half_width * half_height;
    jint src_v_size = half_width * half_height;
    jbyte *src_y = src;
    jbyte *src_u = src + src_y_size;
    jbyte *src_v = src + src_y_size + src_u_size;
    //
    jint dst_y_size = width * height;
    jint dst_uv_size = 2 * half_width * half_height;
    jbyte *dst_y = dst;
    jbyte *dst_uv = dst + dst_y_size;
    //
    LOGD("yuvI420ToNV12 %d X %d", width, height);
    libyuv::I420ToNV12(
            (const uint8_t *) src_y, width,
            (const uint8_t *) src_u, half_width,
            (const uint8_t *) src_v, half_width,
            (uint8_t *) dst_y, width,
            (uint8_t *) dst_uv, 2 * half_width,
            width, height);
}

//todo yanzheng
void yuvNV21ToNV12(jbyte *src, jint width, jint height, jbyte *dst) {
    const int half_width = (width + 1) / 2;
    const int half_height = (height + 1) / 2;
    //
    jint src_y_size = width * height;
//    jint src_vu_size = 2 * half_width * half_height;
    jbyte *src_y = src;
    jbyte *src_vu = src + src_y_size;
    //
    jint dst_y_size = width * height;
//    jint dst_uv_size = 2 * half_width * half_height;
    jbyte *dst_y = dst;
    jbyte *dst_uv = dst + dst_y_size;
    //
    LOGD("yuvNV21ToNV12 %d X %d", width, height);
    libyuv::NV21ToNV12(
            (const uint8_t *) src_y, width,
            (const uint8_t *) src_vu, 2 * half_width,
            (uint8_t *) dst_y, width,
            (uint8_t *) dst_uv, half_width,
            width, height);
}

//todo yanzheng
void yuvYUY2ToI420(jbyte *src, jint width, jint height, jbyte *dst, jint stride) {
    const int half_width = (width + 1) / 2;
    const int half_height = (height + 1) / 2;
    //
    stride ? stride : 2 * width;
    jbyte *src_yuy2 = src;
    //
    jint dst_y_size = width * height;
    jint dst_u_size = half_width * half_height;
    jint dst_v_size = half_width * half_height;
    jbyte *dst_y = dst;
    jbyte *dst_u = dst + dst_y_size;
    jbyte *dst_v = dst + dst_y_size + dst_u_size;
    //
    LOGD("yuvYUY2ToI420 %d X %d", width, height);
    libyuv::YUY2ToI420((const uint8_t *) src_yuy2, stride,
                       (uint8_t *) dst_y, width,
                       (uint8_t *) dst_u, half_width,
                       (uint8_t *) dst_v, half_width,
                       width, height);
}

//todo yanzheng
void yuvI420ToYUY2(jbyte *src, jint width, jint height, jbyte *dst, jint stride) {
    const int half_width = (width + 1) / 2;
    const int half_height = (height + 1) / 2;
    //
    jint src_y_size = width * height;
    jint src_u_size = half_width * half_height;
    jint src_v_size = half_width * half_height;
    jbyte *src_y = src;
    jbyte *src_u = src + src_y_size;
    jbyte *src_v = src + src_y_size + src_u_size;
    //
    jbyte *dst_yuy2 = dst;
    stride ? stride : 2 * width;
    //
    LOGD("yuvI420ToYUY2 %d X %d", width, height);
    libyuv::I420ToYUY2(
            (const uint8_t *) src_y, width,
            (const uint8_t *) src_u, half_width,
            (const uint8_t *) src_v, half_width,
            (uint8_t *) dst_yuy2, stride,
            width, height);
}




