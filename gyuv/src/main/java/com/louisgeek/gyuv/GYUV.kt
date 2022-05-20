package com.louisgeek.gyuv

object GYUV {
    init {
        System.loadLibrary("gyuv")
    }

    external fun NV21ToI420(src_data: ByteArray, src_width: Int, src_height: Int, dst_data: ByteArray)

    external fun I420ToNV21(src_data: ByteArray, src_width: Int, src_height: Int, dst_data: ByteArray)

    external fun NV12ToI420(src_data: ByteArray, src_width: Int, src_height: Int, dst_data: ByteArray)

    external fun I420ToNV12(src_data: ByteArray, src_width: Int, src_height: Int, dst_data: ByteArray)

    external fun NV21ToNV12(src_data: ByteArray, src_width: Int, src_height: Int, dst_data: ByteArray)

    external fun YUY2ToI420(src_data: ByteArray, src_width: Int, src_height: Int, dst_data: ByteArray, dst_stride: Int)

    external fun I420ToYUY2(src_data: ByteArray, src_width: Int, src_height: Int, dst_data: ByteArray, dst_stride: Int)
    
    
}