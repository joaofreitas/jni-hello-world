#include <jni.h>
#include <stdio.h>
#include "br_com_jni_example_HelloWorld.h"

JNIEXPORT void JNICALL

Java_br_com_jni_example_HelloWorld_print(JNIEnv *env, jobject obj) {
    printf("Hello World!\n");
    return;
}
