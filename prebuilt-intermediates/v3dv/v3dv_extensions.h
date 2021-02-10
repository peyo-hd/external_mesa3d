/*
 * Copyright 2017 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL VMWARE AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


#ifndef V3DV_EXTENSIONS_H
#define V3DV_EXTENSIONS_H

#include "stdbool.h"

#define V3DV_INSTANCE_EXTENSION_COUNT 9

extern const VkExtensionProperties v3dv_instance_extensions[];

struct v3dv_instance_extension_table {
   union {
      bool extensions[V3DV_INSTANCE_EXTENSION_COUNT];
      struct {
         bool KHR_display;
         bool KHR_external_memory_capabilities;
         bool KHR_get_physical_device_properties2;
         bool KHR_get_surface_capabilities2;
         bool KHR_surface;
         bool KHR_wayland_surface;
         bool KHR_xcb_surface;
         bool KHR_xlib_surface;
         bool EXT_debug_report;
      };
   };
};

extern const struct v3dv_instance_extension_table v3dv_instance_extensions_supported;


#define V3DV_DEVICE_EXTENSION_COUNT 8

extern const VkExtensionProperties v3dv_device_extensions[];

struct v3dv_device_extension_table {
   union {
      bool extensions[V3DV_DEVICE_EXTENSION_COUNT];
      struct {
        bool KHR_external_memory;
        bool KHR_external_memory_fd;
        bool KHR_maintenance1;
        bool KHR_swapchain;
        bool EXT_external_memory_dma_buf;
        bool EXT_image_drm_format_modifier;
        bool EXT_private_data;
        bool ANDROID_native_buffer;
      };
   };
};

struct v3dv_physical_device;

void
v3dv_physical_device_get_supported_extensions(const struct v3dv_physical_device *device,
                                             struct v3dv_device_extension_table *extensions);

#endif /* V3DV_EXTENSIONS_H */
