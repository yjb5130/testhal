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

}

Test::~Test()
{

}


// Methods from ITest follow.
Return<void> Test::testhal() {
    // TODO implement
    ALOGE("Hidl Test::testhal()");
    return Void();
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
