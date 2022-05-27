package com.louisgeek.gyuv

object GYUV {
    init {
        System.loadLibrary("gyuv")
    }

    external fun gyuvNV21ToI420(
        src_data: ByteArray,
        src_width: Int,
        src_height: Int,
        dst_data: ByteArray
    )

    external fun gyuvI420ToNV21(
        src_data: ByteArray,
        src_width: Int,
        src_height: Int,
        dst_data: ByteArray
    )

    external fun gyuvNV12ToI420(
        src_data: ByteArray,
        src_width: Int,
        src_height: Int,
        dst_data: ByteArray
    )

    external fun gyuvI420ToNV12(
        src_data: ByteArray,
        src_width: Int,
        src_height: Int,
        dst_data: ByteArray
    )

    external fun gyuvNV21ToNV12(
        src_data: ByteArray,
        src_width: Int,
        src_height: Int,
        dst_data: ByteArray
    )
//    external fun gyuvNV12ToNV21(src_data: ByteArray, src_width: Int, src_height: Int, dst_data: ByteArray)

    external fun gyuvYUY2ToI420(
        src_data: ByteArray,
        src_width: Int,
        src_height: Int,
        dst_data: ByteArray,
        dst_stride: Int
    )

    external fun gyuvI420ToYUY2(
        src_data: ByteArray,
        src_width: Int,
        src_height: Int,
        dst_data: ByteArray,
        dst_stride: Int
    )

//!    external fun gyuvYUY2ToNV12(src_data: ByteArray, src_width: Int, src_height: Int, dst_data: ByteArray, dst_stride: Int)


}