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
    ALOGD("ITest test");
    service->testhal();

    service->setIntValue(11);
    int s32Value = service->getIntValue();
    ALOGD("service->getIntValue: %d\n", s32Value);


    service->setLongValue(123456789123456789l);
    long long s64Value = service->getLongValue();
    ALOGD("service->getLongValue: %lld\n", s64Value);

    return 0;
}
