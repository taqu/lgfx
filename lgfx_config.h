#ifndef INC_LGFX_CONFIG_H_
#define INC_LGFX_CONFIG_H_
/**
@file lgfx_config.h
@author t-sakai
@date 2018/09/19 create
*/

namespace lgfx
{
#ifdef LGFX_VULKAN
#define LGFX_MAX_PHYSICAL_DEVICES (4)
#define LGFX_MAX_QUEUE_FAMILY_PROPERTIES (8)
#define LGFX_MAX_LAYERS (8)
#define LGFX_MAX_INSTANCE_EXTENSION_PROPERTIES (32)
#define LGFX_MAX_DEVICE_EXTENSION_PROPERTIES (64)

#define LGFX_MAX_SURFACEFORMATS (32)
#define LGFX_MAX_PRESENTMODES (4)

#define LGFX_MAX_SWAPCHAINMIN (2)
#define LGFX_MAX_SWAPCHAINMAX (4)
#endif

}
#endif //INC_LGFX_CONFIG_H_
