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

    service->setCharValue(0x41);
    char s8Value = service->getCharValue();
    ALOGD("service->getCharValue: %x\n", s8Value);

    service->setShortValue(1234);
    short s16Value = service->getShortValue();
    ALOGD("service->getShortValue: %d\n", s16Value);

    service->setFloatValue(1.234);
    float floatValue = service->getFloatValue();
    ALOGD("service->getFloatValue: %f\n", floatValue);

    service->setDoubleValue(5.6789);
    double doubleValue = service->getDoubleValue();
    ALOGD("service->getDoubleValue: %lf\n", doubleValue);

    return 0;
}
