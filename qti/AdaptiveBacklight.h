#ifndef VENDOR_LINEAGE_LIVEDISPLAY_V2_0_ADAPTIVEBACKLIGHT_H
#define VENDOR_LINEAGE_LIVEDISPLAY_V2_0_ADAPTIVEBACKLIGHT_H

#include <vendor/lineage/livedisplay/2.0/IAdaptiveBacklight.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor {
namespace lineage {
namespace livedisplay {
namespace V2_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct AdaptiveBacklight : public IAdaptiveBacklight {
    // Methods from ::vendor::lineage::livedisplay::V2_0::IAdaptiveBacklight follow.
    Return<bool> isEnabled() override;
    Return<bool> setEnabled(bool enabled) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IAdaptiveBacklight* HIDL_FETCH_IAdaptiveBacklight(const char* name);

}  // namespace implementation
}  // namespace V2_0
}  // namespace livedisplay
}  // namespace lineage
}  // namespace vendor

#endif  // VENDOR_LINEAGE_LIVEDISPLAY_V2_0_ADAPTIVEBACKLIGHT_H