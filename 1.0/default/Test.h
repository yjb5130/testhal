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

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
extern "C" ITest* HIDL_FETCH_ITest(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace test
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_TEST_V1_0_TEST_H
