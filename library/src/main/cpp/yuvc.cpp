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

void yuvI420Scale(jbyte *src, jint width, jint height, jbyte *dst, jint dst_width, jint dst_height,
                  jint mode) {
    jint src_y_size = width * height;
    jint src_u_size = (width >> 1) * (height >> 1);
    jbyte *src_y_data = src;
    jbyte *src_u_data = src + src_y_size;
    jbyte *src_v_data = src + src_y_size + src_u_size;

    jint dst_i420_y_size = dst_width * dst_height;
    jint dst_i420_u_size = (dst_width >> 1) * (dst_height >> 1);
    jbyte *dst_y_data = dst;
    jbyte *dst_u_data = dst + dst_i420_y_size;
    jbyte *dst_v_data = dst + dst_i420_y_size + dst_i420_u_size;

    libyuv::I420Scale((const uint8_t *) src_y_data, width,
                      (const uint8_t *) src_u_data, width >> 1,
                      (const uint8_t *) src_v_data, width >> 1,
                      width, height,
                      (uint8_t *) dst_y_data, dst_width,
                      (uint8_t *) dst_u_data, dst_width >> 1,
                      (uint8_t *) dst_v_data, dst_width >> 1,
                      dst_width, dst_height,
                      (libyuv::FilterMode) mode);
}

void yuvI420Rotate(jbyte *src, jint width, jint height, jbyte *dst, jint degree) {
    jint src_y_size = width * height;
    jint src_u_size = (width >> 1) * (height >> 1);

    jbyte *src_y_data = src;
    jbyte *src_u_data = src + src_y_size;
    jbyte *src_v_data = src + src_y_size + src_u_size;

    jbyte *dst_y_data = dst;
    jbyte *dst_u_data = dst + src_y_size;
    jbyte *dst_v_data = dst + src_y_size + src_u_size;

    //要注意这里的width和height在旋转之后是相反的
    if (degree == libyuv::kRotate90 || degree == libyuv::kRotate270) {
        libyuv::I420Rotate((const uint8_t *) src_y_data, width,
                           (const uint8_t *) src_u_data, width >> 1,
                           (const uint8_t *) src_v_data, width >> 1,
                           (uint8_t *) dst_y_data, height,
                           (uint8_t *) dst_u_data, height >> 1,
                           (uint8_t *) dst_v_data, height >> 1,
                           width, height,
                           (libyuv::RotationMode) degree);
    } else {
        libyuv::I420Rotate((const uint8_t *) src_y_data, width,
                           (const uint8_t *) src_u_data, width >> 1,
                           (const uint8_t *) src_v_data, width >> 1,
                           (uint8_t *) dst_y_data, width,
                           (uint8_t *) dst_u_data, width >> 1,
                           (uint8_t *) dst_v_data, width >> 1,
                           width, height,
                           (libyuv::RotationMode) degree);
    }
}

void yuvI420Crop(jbyte *src, jint width, jint height, jbyte *dst, jint dst_width, jint dst_height,
                 jint left, jint top) {
    int dst_i420_y_size = dst_width * dst_height;
    jint dst_i420_u_size = (dst_width >> 1) * (dst_height >> 1);

    jbyte *dst_y_data = dst;
    jbyte *dst_u_data = dst + dst_i420_y_size;
    jbyte *dst_v_data = dst + dst_i420_y_size + dst_i420_u_size;

    //KEY
    size_t src_size = width * height * 3 / 2;

    libyuv::ConvertToI420((const uint8_t *) src, src_size,
                          (uint8_t *) dst_y_data, dst_width,
                          (uint8_t *) dst_u_data, dst_width >> 1,
                          (uint8_t *) dst_v_data, dst_width >> 1,
                          left, top,
                          width, height,
                          dst_width, dst_height,
                          libyuv::kRotate0, libyuv::FOURCC_I420);
}

void yuvI420Mirror(jbyte *src, jint width, jint height, jbyte *dst) {
    jint src_y_size = width * height;
    jint src_u_size = (width >> 1) * (height >> 1);
//    jint src_u_size = src_y_size >> 2;

    jbyte *src_y_data = src;
    jbyte *src_u_data = src + src_y_size;
    jbyte *src_v_data = src + src_y_size + src_u_size;

    jbyte *dst_y_data = dst;
    jbyte *dst_u_data = dst + src_y_size;
    jbyte *dst_v_data = dst + src_y_size + src_u_size;

    libyuv::I420Mirror((const uint8_t *) src_y_data, width,
                       (const uint8_t *) src_u_data, width >> 1,
                       (const uint8_t *) src_v_data, width >> 1,
                       (uint8_t *) dst_y_data, width,
                       (uint8_t *) dst_u_data, width >> 1,
                       (uint8_t *) dst_v_data, width >> 1,
                       width, height);
}

/**
 * nv16_buff：NV16格式一帧数据，大小为 w * h * 2，作为函数输入。
 * nv12_buff：NV12格式的一帧数据，大小为 w * h * 3 / 2，作为函数输出。
 * w：图像的宽度。
 * h：图像高度。
 */
void nv16_to_nv12(jbyte *nv16_buff, jint w, jint h, jbyte *nv12_buff) {
    jbyte *nv16_y = NULL;
    jbyte *nv16_uv = NULL;
    jbyte *nv12_y = NULL;
    jbyte *nv12_u = NULL;
    jbyte *nv12_v = NULL;
    int i, j, offset;

    if (!nv16_buff || !nv12_buff || ((w * h) <= 0)) {
        printf("ERROR: %s input args invalid!\n", __func__);
    }

    /* get the right point */
    nv16_y = nv16_buff;
    nv16_uv = nv16_buff + w * h;
    nv12_y = nv12_buff;
    nv12_u = nv12_buff + w * h;
    nv12_v = nv12_u + 1;

    /* copy y dates directly */
    memcpy(nv12_y, nv16_y, w * h);
    /* get nv12_uv dates from nv16_uv
     *
     * >>>> nv16 pix formate:
     * start + 0:	Y'00	Y'01	Y'02	Y'03
     * start + 4:	Y'10	Y'11	Y'12	Y'13
     * start + 8:	Y'20	Y'21	Y'22	Y'23
     * start + 12:	Y'30	Y'31	Y'32	Y'33
     * start + 16:	Cb00	Cr00	Cb01	Cr01
     * start + 20:	Cb10	Cr10	Cb11	Cr11
     * start + 24:	Cb20	Cr20	Cb21	Cr21
     * start + 28:	Cb30	Cr30	Cb31	Cr31
     *
     * >>>> nv12 pix formate:
     * start + 0:	Y'00	Y'01	Y'02	Y'03
     * start + 4:	Y'10	Y'11	Y'12	Y'13
     * start + 8:	Y'20	Y'21	Y'22	Y'23
     * start + 12:	Y'30	Y'31	Y'32	Y'33
     * start + 16:	Ub00	Vr00
     * start + 18:	Ub01	Vr01
     * start + 20:	Ub10	Vr10
     * start + 22:	Ub11	Vr11
     *
     * nv16的uv分量与 nv12的uv分量对于关系：
     * 偶数行取Cb值，奇数行取Cr值
     * Cb00 Cb01  ----> Ub00 Ub01
     * Cr10 Cr11  ----> Vr00 Vr01
     * Cb20 Cb21  ----> Ub10 Ub11
     * Cr30 Cr31  ----> Vr10 Vr11
     */

    /* 奇数行取Cb */
    offset = 0;
    for (i = 0; i < h; i += 2) {
        offset = i * w;
        for (j = 0; j < w; j += 2) {
            *nv12_u = *(nv16_uv + offset + j);
            nv12_u += 2;
        }
    }

    /* 偶数行取Cr */
    offset = 0;
    for (i = 1; i < h; i += 2) {
        offset = i * w;
        for (j = 1; j < w; j += 2) {
            *nv12_v = *(nv16_uv + offset + j);
            nv12_v += 2;
        }
    }
}

void yuv420p_to_yuv422p(jbyte *i420, jint width, jint height, jbyte *yuv422) {
    jbyte *yuv420[3];
    yuv420[0] = i420;
    yuv420[1] = i420 + (width * height);
    yuv420[2] = i420 + (width * height) + (width * height / 4);
    int x, y;
    //亮度信号Y复制
    int Ylen = width * height;
    memcpy(yuv422, yuv420[0], Ylen);
    //色度信号U复制
    jbyte *pU422 = yuv422 + Ylen; //指向U的位置
    int Uwidth = width >> 1; //422色度信号U宽度
    int Uheight = height >> 1; //422色度信号U高度
    for (y = 0; y < Uheight; y++) {
        memcpy(pU422 + y * width, yuv420[1] + y * Uwidth, Uwidth);
        memcpy(pU422 + y * width + Uwidth, yuv420[1] + y * Uwidth, Uwidth);
    }
    //色度信号V复制
    jbyte *pV422 = yuv422 + Ylen + (Ylen >> 1); //指向V的位置
    int Vwidth = Uwidth; //422色度信号V宽度
    int Vheight = Uheight; //422色度信号U宽度
    for (y = 0; y < Vheight; y++) {
        memcpy(pV422 + y * width, yuv420[2] + y * Vwidth, Vwidth);
        memcpy(pV422 + y * width + Vwidth, yuv420[2] + y * Vwidth, Vwidth);
    }
}

/**
yyyy yyyy
uv    uv
->
yyyy yyyy
uu
vv
*/
void yuv420sp_to_yuv420p(unsigned char *yuv420sp, unsigned char *yuv420p, int width, int height) {
    int i, j;
    int y_size = width * height;

    unsigned char *y = yuv420sp;
    unsigned char *uv = yuv420sp + y_size;

    unsigned char *y_tmp = yuv420p;
    unsigned char *u_tmp = yuv420p + y_size;
    unsigned char *v_tmp = yuv420p + y_size * 5 / 4;

    // y
    memcpy(y_tmp, y, y_size);

    // u
    for (j = 0, i = 0; j < y_size / 2; j += 2, i++) {
        u_tmp[i] = uv[j];
        v_tmp[i] = uv[j + 1];
    }
}

void yuv420p_to_nv12(jbyte *yuv420p, int width, int height, jbyte *yuv420sp) {
    int i, j;
    int y_size = width * height;

    jbyte *y = yuv420p;
    jbyte *u = yuv420p + y_size;
    jbyte *v = yuv420p + y_size * 5 / 4;

    jbyte *y_tmp = yuv420sp;
    jbyte *uv_tmp = yuv420sp + y_size;

    // y
    memcpy(y_tmp, y, y_size);

    // u
    for (j = 0, i = 0; j < y_size / 2; j += 2, i++) {
        uv_tmp[j] = u[i];
        uv_tmp[j + 1] = v[i];
    }
}

void yuv420p_to_nv21(jbyte *yuv420p, int width, int height, jbyte *yuv420sp) {
    int i, j;
    int y_size = width * height;

    jbyte *y = yuv420p;
    jbyte *u = yuv420p + y_size;
    jbyte *v = yuv420p + y_size * 5 / 4;

    jbyte *y_tmp = yuv420sp;
    jbyte *uv_tmp = yuv420sp + y_size;

    // y
    memcpy(y_tmp, y, y_size);

    // u
    for (j = 0, i = 0; j < y_size / 2; j += 2, i++) {
        uv_tmp[j] = v[i];
        uv_tmp[j + 1] = u[i];
    }
}

/**
yyyy yyyy
uv    uv
->
yyyy yyyy
uu
vv
*/
void yuv422sp_to_yuv422p(unsigned char *yuv422sp, unsigned char *yuv422p, int width, int height) {
    int i, j;
    int y_size;
    int uv_size;
    unsigned char *p_y1;
    unsigned char *p_uv;

    unsigned char *p_y2;
    unsigned char *p_u;
    unsigned char *p_v;

    y_size = uv_size = width * height;

    p_y1 = yuv422sp;
    p_uv = yuv422sp + y_size;

    p_y2 = yuv422p;
    p_u = yuv422p + y_size;
    p_v = p_u + width * height / 2;

    memcpy(p_y2, p_y1, y_size);

    for (j = 0, i = 0; j < uv_size; j += 2, i++) {
        p_u[i] = p_uv[j];
        p_v[i] = p_uv[j + 1];
    }
}

void yuv422p_to_nv16(jbyte *yuv422p, int width, int height, jbyte *yuv422sp) {
    int i, j;
    int y_size;
    int uv_size;
    jbyte *p_y1;
    jbyte *p_uv;

    jbyte *p_y2;
    jbyte *p_u;
    jbyte *p_v;

    y_size = uv_size = width * height;

    p_y1 = yuv422p;

    p_y2 = yuv422sp;
    p_u = p_y1 + y_size;
    p_v = p_u + width * height / 2;

    p_uv = p_y2 + y_size;

    memcpy(p_y2, p_y1, y_size);

    for (j = 0, i = 0; j < uv_size; j += 2, i++) {
        p_uv[j] = p_u[i];
        p_uv[j + 1] = p_v[i];
    }
}

void yuv422p_to_nv61(jbyte *yuv422p, int width, int height, jbyte *yuv422sp) {
    int i, j;
    int y_size;
    int uv_size;
    jbyte *p_y1;
    jbyte *p_uv;

    jbyte *p_y2;
    jbyte *p_u;
    jbyte *p_v;

    y_size = uv_size = width * height;

    p_y1 = yuv422p;

    p_y2 = yuv422sp;
    p_u = p_y1 + y_size;
    p_v = p_u + width * height / 2;

    p_uv = p_y2 + y_size;

    memcpy(p_y2, p_y1, y_size);

    for (j = 0, i = 0; j < uv_size; j += 2, i++) {
        p_uv[j] = p_v[i];
        p_uv[j + 1] = p_u[i];
    }
}