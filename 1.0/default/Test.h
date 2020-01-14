#ifndef ANDROID_HARDWARE_TEST_V1_0_TEST_H
#define ANDROID_HARDWARE_TEST_V1_0_TEST_H

#include <android/hardware/test/1.0/ITest.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace android {
namespace hardware {
namespace test {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

class Test : public ITest {

public:
    Test();
    ~Test();

    // Methods from ITest follow.
    Return<void> testhal() override;
    Return<int32_t> setIntValue(int32_t value) override;
    Return<int32_t> getIntValue() override;
    Return<int32_t> setLongValue(int64_t value) override;
    Return<int64_t> getLongValue() override;
    Return<int32_t> setCharValue(int8_t value) override;
    Return<int8_t>  getCharValue() override;
    Return<int32_t> setShortValue(int16_t value) override;
    Return<int16_t> getShortValue() override;
    Return<int32_t> setFloatValue(float value) override;
    Return<float>   getFloatValue() override;
    Return<int32_t> setDoubleValue(double value) override;
    Return<double>  getDoubleValue() override;

private:
    int32_t mIntValue;
    int64_t mLongValue;
    int8_t  mCharValue;
    int16_t mShortValue;
    float   mFloatValue;
    double  mDoubleValue;
    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
//extern "C" ITest* HIDL_FETCH_ITest(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace test
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_TEST_V1_0_TEST_H
