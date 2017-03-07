#include <jni.h>
#include <string>
#include "com_example_wangxi_ffmpegtest_VideoUtils.h"
#include <android/log.h>

//编码
#include "include/libavcodec/avcodec.h"
//封装格式处理
#include "include/libavformat/avformat.h"
//像素处理
#include "include/libswscale/swscale.h"

#define LOGI(FORMAT,...) __android_log_print(ANDROID_LOG_INFO,"jason",FORMAT,##__VA_ARGS__);
#define LOGE(FORMAT,...) __android_log_print(ANDROID_LOG_ERROR,"jason",FORMAT,##__VA_ARGS__);

extern "C"
jstring
Java_com_example_wangxi_ffmpegtest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT void JNICALL Java_com_example_wangxi_ffmpegtest_VideoUtils_decode
        (JNIEnv *env, jclass jcls, jstring input_jstr, jstring output_jstr);
