LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := testClient
LOCAL_PROPRIETARY_MODULE := true
ALL_DEFAULT_INSTALLED_MODULES += $(LOCAL_MODULE)
LOCAL_SRC_FILES := \
  testClient.cpp

LOCAL_SHARED_LIBRARIES := \
  libbase \
  liblog \
  libdl \
  libutils \
  libhardware \
  libhidlbase \
  libhidltransport \
  android.hardware.test@1.0

include $(BUILD_EXECUTABLE)