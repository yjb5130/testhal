#include "Test.h"
#define LOG_TAG "TestService"

#include <log/log.h>

namespace android {
namespace hardware {
namespace test {
namespace V1_0 {
namespace implementation {

Test::Test()
{
    mIntValue = 0;
}

Test::~Test()
{

}


// Methods from ITest follow.
Return<void> Test::testhal() {
    // TODO implement
    ALOGD("Hidl Test::testhal()");
    return Void();
}

Return<int32_t> Test::setIntValue(int32_t value)
{
    mIntValue = value;
    ALOGD("Hidl Test::setIntValue: %d\n", value);
    return 0;
}

Return<int32_t> Test::getIntValue()
{
    ALOGD("Hidl Test::getIntValue: %d\n", mIntValue);
    return mIntValue;
}



// Methods from ::android::hidl::base::V1_0::IBase follow.

//ITest* HIDL_FETCH_ITest(const char* /* name */) {
//    return new Test();
//}

}  // namespace implementation
}  // namespace V1_0
}  // namespace test
}  // namespace hardware
}  // namespace android
