package com.louisgeek.gyuv

object GYUV {
    init {
        System.loadLibrary("gyuv")
    }

    external fun NV21ToI420(nv21_src: ByteArray, width_src: Int, height_src: Int, i420_dst: ByteArray)

    external fun I420ToNV21(i420_src: ByteArray, width_src: Int, height_src: Int, nv21_dst: ByteArray)

    external fun NV12ToI420(nv12_src: ByteArray, width_src: Int, height_src: Int, i420_dst: ByteArray)

    external fun I420ToNV12(i420_src: ByteArray, width_src: Int, height_src: Int, nv12_dst: ByteArray)

}