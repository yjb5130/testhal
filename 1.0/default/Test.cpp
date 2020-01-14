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
    mLongValue = 0;
    mCharValue = 0;
    mShortValue = 0;
    mFloatValue = 0.0;
    mDoubleValue = 0.0;
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

Return<int32_t> Test::setLongValue(int64_t value)
{
    mLongValue = value;
    ALOGD("Hidl Test::setLongValue: %lld\n", value);
    return 0;
}

Return<int64_t> Test::getLongValue()
{
    ALOGD("Hidl Test::getLongValue: %lld\n", mLongValue);
    return mLongValue;
}

Return<int32_t> Test::setCharValue(int8_t value)
{
    mCharValue = value;
    ALOGD("Hidl Test::setCharValue: %x\n", value);
    return 0;
}

Return<int8_t>  Test::getCharValue()
{
    ALOGD("Hidl Test::getCharValue: %x\n", mCharValue);
    return mCharValue;
}

Return<int32_t> Test::setShortValue(int16_t value)
{
    mShortValue = value;
    ALOGD("Hidl Test::setShortValue: %d\n", value);
    return 0;
}

Return<int16_t> Test::getShortValue()
{
    ALOGD("Hidl Test::getShortValue: %d\n", mShortValue);
    return mShortValue;
}

Return<int32_t> Test::setFloatValue(float value)
{
    mFloatValue = value;
    ALOGD("Hidl Test::setFloatValue: %f\n", value);
    return 0;
}

Return<float>   Test::getFloatValue()
{
    ALOGD("Hidl Test::getFloatValue: %f\n", mFloatValue);
    return mFloatValue;
}

Return<int32_t> Test::setDoubleValue(double value)
{
    mDoubleValue = value;
    ALOGD("Hidl Test::setDoubleValue: %lf\n", value);
    return 0;
}

Return<double>  Test::getDoubleValue()
{
    ALOGD("Hidl Test::getDoubleValue: %lf\n", mDoubleValue);
    return mDoubleValue;
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
