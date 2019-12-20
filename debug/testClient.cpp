#define LOG_TAG "TEST_CLINET"
#include <android/hardware/test/1.0/ITest.h>
#include <log/log.h>

using android::hardware::test::V1_0::ITest;
using android::hardware::hidl_vec;
using android::sp;

int main(){
    sp<ITest> service = ITest::getService();
    if( service == nullptr ){
        ALOGE("Can't find ITest service...");
        return -1;
    }
    ALOGE("ITest test");
    service->testhal();

    return 0;
}
