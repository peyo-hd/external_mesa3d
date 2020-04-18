/*
 * Copyright © 2015 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/* This file generated from v3dv_entrypoints_gen.py, don't edit directly. */

#include "v3dv_private.h"

#include "util/macros.h"

struct string_map_entry {
   uint32_t name;
   uint32_t hash;
   uint32_t num;
};

/* We use a big string constant to avoid lots of reloctions from the entry
 * point table to lots of little strings. The entries in the entry point table
 * store the index into this big string.
 */




static const char instance_strings[] =
    "vkCreateDebugReportCallbackEXT\0"
    "vkCreateDisplayPlaneSurfaceKHR\0"
    "vkCreateInstance\0"
    "vkCreateWaylandSurfaceKHR\0"
    "vkCreateXcbSurfaceKHR\0"
    "vkCreateXlibSurfaceKHR\0"
    "vkDebugReportMessageEXT\0"
    "vkDestroyDebugReportCallbackEXT\0"
    "vkDestroyInstance\0"
    "vkDestroySurfaceKHR\0"
    "vkEnumerateInstanceExtensionProperties\0"
    "vkEnumerateInstanceLayerProperties\0"
    "vkEnumerateInstanceVersion\0"
    "vkEnumeratePhysicalDeviceGroups\0"
    "vkEnumeratePhysicalDevices\0"
    "vkGetInstanceProcAddr\0"
;

static const struct string_map_entry instance_string_map_entries[] = {
    { 0, 0x987ef56, 12 }, /* vkCreateDebugReportCallbackEXT */
    { 31, 0x7ac4dacb, 7 }, /* vkCreateDisplayPlaneSurfaceKHR */
    { 62, 0x38a581a6, 0 }, /* vkCreateInstance */
    { 79, 0x2b2a4b79, 9 }, /* vkCreateWaylandSurfaceKHR */
    { 105, 0xc5e5b106, 11 }, /* vkCreateXcbSurfaceKHR */
    { 127, 0xa693bc66, 10 }, /* vkCreateXlibSurfaceKHR */
    { 150, 0xa4e75334, 14 }, /* vkDebugReportMessageEXT */
    { 174, 0x43d4c4e2, 13 }, /* vkDestroyDebugReportCallbackEXT */
    { 206, 0x9bd21af2, 1 }, /* vkDestroyInstance */
    { 224, 0xf204ce7d, 8 }, /* vkDestroySurfaceKHR */
    { 244, 0xeb27627e, 6 }, /* vkEnumerateInstanceExtensionProperties */
    { 283, 0x81f69d8, 5 }, /* vkEnumerateInstanceLayerProperties */
    { 318, 0xd0481e5c, 4 }, /* vkEnumerateInstanceVersion */
    { 345, 0x270514f0, 15 }, /* vkEnumeratePhysicalDeviceGroups */
    { 377, 0x5787c327, 2 }, /* vkEnumeratePhysicalDevices */
    { 404, 0x3d2ae9ad, 3 }, /* vkGetInstanceProcAddr */
};

/* Hash table stats:
 * size 16 entries
 * collisions entries:
 *     0      14
 *     1      0
 *     2      1
 *     3      1
 *     4      0
 *     5      0
 *     6      0
 *     7      0
 *     8      0
 *     9+     0
 */

#define none 0xffff
static const uint16_t instance_string_map[32] = {
    none,
    none,
    0x0007,
    none,
    none,
    none,
    0x0002,
    0x000e,
    none,
    none,
    none,
    0x0001,
    0x0004,
    0x000f,
    none,
    none,
    0x000d,
    none,
    0x0008,
    none,
    0x0006,
    none,
    0x0000,
    none,
    0x000b,
    0x0003,
    none,
    none,
    0x000c,
    0x0009,
    0x000a,
    0x0005,
};

static int
instance_string_map_lookup(const char *str)
{
    static const uint32_t prime_factor = 5024183;
    static const uint32_t prime_step = 19;
    const struct string_map_entry *e;
    uint32_t hash, h;
    uint16_t i;
    const char *p;

    hash = 0;
    for (p = str; *p; p++)
        hash = hash * prime_factor + *p;

    h = hash;
    while (1) {
        i = instance_string_map[h & 31];
        if (i == none)
           return -1;
        e = &instance_string_map_entries[i];
        if (e->hash == hash && strcmp(str, instance_strings + e->name) == 0)
            return e->num;
        h += prime_step;
    }

    return -1;
}

static const char *
instance_entry_name(int num)
{
   for (int i = 0; i < ARRAY_SIZE(instance_string_map_entries); i++) {
      if (instance_string_map_entries[i].num == num)
         return &instance_strings[instance_string_map_entries[i].name];
   }
   return NULL;
}


static const char physical_device_strings[] =
    "vkCreateDevice\0"
    "vkCreateDisplayModeKHR\0"
    "vkEnumerateDeviceExtensionProperties\0"
    "vkEnumerateDeviceLayerProperties\0"
    "vkGetDisplayModePropertiesKHR\0"
    "vkGetDisplayPlaneCapabilitiesKHR\0"
    "vkGetDisplayPlaneSupportedDisplaysKHR\0"
    "vkGetPhysicalDeviceDisplayPlanePropertiesKHR\0"
    "vkGetPhysicalDeviceDisplayPropertiesKHR\0"
    "vkGetPhysicalDeviceExternalBufferProperties\0"
    "vkGetPhysicalDeviceExternalBufferPropertiesKHR\0"
    "vkGetPhysicalDeviceExternalFenceProperties\0"
    "vkGetPhysicalDeviceExternalSemaphoreProperties\0"
    "vkGetPhysicalDeviceFeatures\0"
    "vkGetPhysicalDeviceFeatures2\0"
    "vkGetPhysicalDeviceFeatures2KHR\0"
    "vkGetPhysicalDeviceFormatProperties\0"
    "vkGetPhysicalDeviceFormatProperties2\0"
    "vkGetPhysicalDeviceFormatProperties2KHR\0"
    "vkGetPhysicalDeviceImageFormatProperties\0"
    "vkGetPhysicalDeviceImageFormatProperties2\0"
    "vkGetPhysicalDeviceImageFormatProperties2KHR\0"
    "vkGetPhysicalDeviceMemoryProperties\0"
    "vkGetPhysicalDeviceMemoryProperties2\0"
    "vkGetPhysicalDeviceMemoryProperties2KHR\0"
    "vkGetPhysicalDevicePresentRectanglesKHR\0"
    "vkGetPhysicalDeviceProperties\0"
    "vkGetPhysicalDeviceProperties2\0"
    "vkGetPhysicalDeviceProperties2KHR\0"
    "vkGetPhysicalDeviceQueueFamilyProperties\0"
    "vkGetPhysicalDeviceQueueFamilyProperties2\0"
    "vkGetPhysicalDeviceQueueFamilyProperties2KHR\0"
    "vkGetPhysicalDeviceSparseImageFormatProperties\0"
    "vkGetPhysicalDeviceSparseImageFormatProperties2\0"
    "vkGetPhysicalDeviceSparseImageFormatProperties2KHR\0"
    "vkGetPhysicalDeviceSurfaceCapabilities2KHR\0"
    "vkGetPhysicalDeviceSurfaceCapabilitiesKHR\0"
    "vkGetPhysicalDeviceSurfaceFormats2KHR\0"
    "vkGetPhysicalDeviceSurfaceFormatsKHR\0"
    "vkGetPhysicalDeviceSurfacePresentModesKHR\0"
    "vkGetPhysicalDeviceSurfaceSupportKHR\0"
    "vkGetPhysicalDeviceWaylandPresentationSupportKHR\0"
    "vkGetPhysicalDeviceXcbPresentationSupportKHR\0"
    "vkGetPhysicalDeviceXlibPresentationSupportKHR\0"
;

static const struct string_map_entry physical_device_string_map_entries[] = {
    { 0, 0x85ed23f, 6 }, /* vkCreateDevice */
    { 15, 0xcc0bde41, 14 }, /* vkCreateDisplayModeKHR */
    { 38, 0x5fd13eed, 8 }, /* vkEnumerateDeviceExtensionProperties */
    { 75, 0x2f8566e7, 7 }, /* vkEnumerateDeviceLayerProperties */
    { 108, 0x36b8a8de, 13 }, /* vkGetDisplayModePropertiesKHR */
    { 138, 0x4b60d48c, 15 }, /* vkGetDisplayPlaneCapabilitiesKHR */
    { 171, 0xabef4889, 12 }, /* vkGetDisplayPlaneSupportedDisplaysKHR */
    { 209, 0xb9b8ddba, 11 }, /* vkGetPhysicalDeviceDisplayPlanePropertiesKHR */
    { 254, 0xfa0cd2e, 10 }, /* vkGetPhysicalDeviceDisplayPropertiesKHR */
    { 294, 0x944476dc, 37 }, /* vkGetPhysicalDeviceExternalBufferProperties */
    { 338, 0xee68b389, 38 }, /* vkGetPhysicalDeviceExternalBufferPropertiesKHR */
    { 385, 0x3bc965eb, 40 }, /* vkGetPhysicalDeviceExternalFenceProperties */
    { 428, 0xcf251b0e, 39 }, /* vkGetPhysicalDeviceExternalSemaphoreProperties */
    { 475, 0x113e2f33, 3 }, /* vkGetPhysicalDeviceFeatures */
    { 503, 0x63c068a7, 23 }, /* vkGetPhysicalDeviceFeatures2 */
    { 532, 0x6a9a3636, 24 }, /* vkGetPhysicalDeviceFeatures2KHR */
    { 564, 0x3e54b398, 4 }, /* vkGetPhysicalDeviceFormatProperties */
    { 600, 0xca3bb9da, 27 }, /* vkGetPhysicalDeviceFormatProperties2 */
    { 637, 0x9099cbbb, 28 }, /* vkGetPhysicalDeviceFormatProperties2KHR */
    { 677, 0xdd36a867, 5 }, /* vkGetPhysicalDeviceImageFormatProperties */
    { 718, 0x35d260d3, 29 }, /* vkGetPhysicalDeviceImageFormatProperties2 */
    { 760, 0x102ff7ea, 30 }, /* vkGetPhysicalDeviceImageFormatProperties2KHR */
    { 805, 0xa90da4da, 2 }, /* vkGetPhysicalDeviceMemoryProperties */
    { 841, 0xcb4cc208, 33 }, /* vkGetPhysicalDeviceMemoryProperties2 */
    { 878, 0xc8c3da3d, 34 }, /* vkGetPhysicalDeviceMemoryProperties2KHR */
    { 918, 0x100341b4, 41 }, /* vkGetPhysicalDevicePresentRectanglesKHR */
    { 958, 0x52fe22c9, 0 }, /* vkGetPhysicalDeviceProperties */
    { 988, 0x6c4d8ee1, 25 }, /* vkGetPhysicalDeviceProperties2 */
    { 1019, 0xcd15838c, 26 }, /* vkGetPhysicalDeviceProperties2KHR */
    { 1053, 0x4e5fc88a, 1 }, /* vkGetPhysicalDeviceQueueFamilyProperties */
    { 1094, 0xcad374d8, 31 }, /* vkGetPhysicalDeviceQueueFamilyProperties2 */
    { 1136, 0x5ceb2bed, 32 }, /* vkGetPhysicalDeviceQueueFamilyProperties2KHR */
    { 1181, 0x272ef8ef, 9 }, /* vkGetPhysicalDeviceSparseImageFormatProperties */
    { 1228, 0xebddba0b, 35 }, /* vkGetPhysicalDeviceSparseImageFormatProperties2 */
    { 1276, 0x8746ed72, 36 }, /* vkGetPhysicalDeviceSparseImageFormatProperties2KHR */
    { 1327, 0x9497e378, 42 }, /* vkGetPhysicalDeviceSurfaceCapabilities2KHR */
    { 1370, 0x77890558, 17 }, /* vkGetPhysicalDeviceSurfaceCapabilitiesKHR */
    { 1412, 0xd00b7188, 43 }, /* vkGetPhysicalDeviceSurfaceFormats2KHR */
    { 1450, 0xe32227c8, 18 }, /* vkGetPhysicalDeviceSurfaceFormatsKHR */
    { 1487, 0x31c3cbd1, 19 }, /* vkGetPhysicalDeviceSurfacePresentModesKHR */
    { 1529, 0x1a687885, 16 }, /* vkGetPhysicalDeviceSurfaceSupportKHR */
    { 1566, 0x84e085ac, 20 }, /* vkGetPhysicalDeviceWaylandPresentationSupportKHR */
    { 1615, 0x41782cb9, 22 }, /* vkGetPhysicalDeviceXcbPresentationSupportKHR */
    { 1660, 0x34a063ab, 21 }, /* vkGetPhysicalDeviceXlibPresentationSupportKHR */
};

/* Hash table stats:
 * size 44 entries
 * collisions entries:
 *     0      30
 *     1      3
 *     2      5
 *     3      4
 *     4      2
 *     5      0
 *     6      0
 *     7      0
 *     8      0
 *     9+     0
 */

#define none 0xffff
static const uint16_t physical_device_string_map[64] = {
    0x0016,
    0x0001,
    0x001a,
    none,
    none,
    0x0028,
    none,
    none,
    0x0017,
    0x0006,
    0x001d,
    0x0021,
    0x0005,
    0x000e,
    0x000c,
    none,
    none,
    0x0024,
    none,
    0x0014,
    0x0026,
    0x0020,
    none,
    none,
    0x0010,
    none,
    0x0011,
    0x0025,
    0x0009,
    none,
    0x0004,
    0x001c,
    0x0013,
    0x001b,
    none,
    none,
    0x0027,
    none,
    0x001f,
    0x0003,
    none,
    none,
    0x0015,
    0x000b,
    0x0029,
    0x0002,
    0x0008,
    0x000a,
    none,
    none,
    0x0022,
    0x000d,
    0x0019,
    none,
    0x000f,
    0x002b,
    0x0023,
    0x002a,
    0x0007,
    0x0012,
    none,
    0x0018,
    0x001e,
    0x0000,
};

static int
physical_device_string_map_lookup(const char *str)
{
    static const uint32_t prime_factor = 5024183;
    static const uint32_t prime_step = 19;
    const struct string_map_entry *e;
    uint32_t hash, h;
    uint16_t i;
    const char *p;

    hash = 0;
    for (p = str; *p; p++)
        hash = hash * prime_factor + *p;

    h = hash;
    while (1) {
        i = physical_device_string_map[h & 63];
        if (i == none)
           return -1;
        e = &physical_device_string_map_entries[i];
        if (e->hash == hash && strcmp(str, physical_device_strings + e->name) == 0)
            return e->num;
        h += prime_step;
    }

    return -1;
}

static const char *
physical_device_entry_name(int num)
{
   for (int i = 0; i < ARRAY_SIZE(physical_device_string_map_entries); i++) {
      if (physical_device_string_map_entries[i].num == num)
         return &physical_device_strings[physical_device_string_map_entries[i].name];
   }
   return NULL;
}


static const char device_strings[] =
    "vkAcquireImageANDROID\0"
    "vkAcquireNextImage2KHR\0"
    "vkAcquireNextImageKHR\0"
    "vkAllocateCommandBuffers\0"
    "vkAllocateDescriptorSets\0"
    "vkAllocateMemory\0"
    "vkBeginCommandBuffer\0"
    "vkBindBufferMemory\0"
    "vkBindBufferMemory2\0"
    "vkBindImageMemory\0"
    "vkBindImageMemory2\0"
    "vkCmdBeginQuery\0"
    "vkCmdBeginRenderPass\0"
    "vkCmdBindDescriptorSets\0"
    "vkCmdBindIndexBuffer\0"
    "vkCmdBindPipeline\0"
    "vkCmdBindVertexBuffers\0"
    "vkCmdBlitImage\0"
    "vkCmdClearAttachments\0"
    "vkCmdClearColorImage\0"
    "vkCmdClearDepthStencilImage\0"
    "vkCmdCopyBuffer\0"
    "vkCmdCopyBufferToImage\0"
    "vkCmdCopyImage\0"
    "vkCmdCopyImageToBuffer\0"
    "vkCmdCopyQueryPoolResults\0"
    "vkCmdDispatch\0"
    "vkCmdDispatchBase\0"
    "vkCmdDispatchIndirect\0"
    "vkCmdDraw\0"
    "vkCmdDrawIndexed\0"
    "vkCmdDrawIndexedIndirect\0"
    "vkCmdDrawIndirect\0"
    "vkCmdEndQuery\0"
    "vkCmdEndRenderPass\0"
    "vkCmdExecuteCommands\0"
    "vkCmdFillBuffer\0"
    "vkCmdNextSubpass\0"
    "vkCmdPipelineBarrier\0"
    "vkCmdPushConstants\0"
    "vkCmdResetEvent\0"
    "vkCmdResetQueryPool\0"
    "vkCmdResolveImage\0"
    "vkCmdSetBlendConstants\0"
    "vkCmdSetDepthBias\0"
    "vkCmdSetDepthBounds\0"
    "vkCmdSetDeviceMask\0"
    "vkCmdSetEvent\0"
    "vkCmdSetLineWidth\0"
    "vkCmdSetScissor\0"
    "vkCmdSetStencilCompareMask\0"
    "vkCmdSetStencilReference\0"
    "vkCmdSetStencilWriteMask\0"
    "vkCmdSetViewport\0"
    "vkCmdUpdateBuffer\0"
    "vkCmdWaitEvents\0"
    "vkCmdWriteTimestamp\0"
    "vkCreateBuffer\0"
    "vkCreateBufferView\0"
    "vkCreateCommandPool\0"
    "vkCreateComputePipelines\0"
    "vkCreateDescriptorPool\0"
    "vkCreateDescriptorSetLayout\0"
    "vkCreateDescriptorUpdateTemplate\0"
    "vkCreateEvent\0"
    "vkCreateFence\0"
    "vkCreateFramebuffer\0"
    "vkCreateGraphicsPipelines\0"
    "vkCreateImage\0"
    "vkCreateImageView\0"
    "vkCreatePipelineCache\0"
    "vkCreatePipelineLayout\0"
    "vkCreatePrivateDataSlotEXT\0"
    "vkCreateQueryPool\0"
    "vkCreateRenderPass\0"
    "vkCreateSampler\0"
    "vkCreateSamplerYcbcrConversion\0"
    "vkCreateSemaphore\0"
    "vkCreateShaderModule\0"
    "vkCreateSwapchainKHR\0"
    "vkDestroyBuffer\0"
    "vkDestroyBufferView\0"
    "vkDestroyCommandPool\0"
    "vkDestroyDescriptorPool\0"
    "vkDestroyDescriptorSetLayout\0"
    "vkDestroyDescriptorUpdateTemplate\0"
    "vkDestroyDevice\0"
    "vkDestroyEvent\0"
    "vkDestroyFence\0"
    "vkDestroyFramebuffer\0"
    "vkDestroyImage\0"
    "vkDestroyImageView\0"
    "vkDestroyPipeline\0"
    "vkDestroyPipelineCache\0"
    "vkDestroyPipelineLayout\0"
    "vkDestroyPrivateDataSlotEXT\0"
    "vkDestroyQueryPool\0"
    "vkDestroyRenderPass\0"
    "vkDestroySampler\0"
    "vkDestroySamplerYcbcrConversion\0"
    "vkDestroySemaphore\0"
    "vkDestroyShaderModule\0"
    "vkDestroySwapchainKHR\0"
    "vkDeviceWaitIdle\0"
    "vkEndCommandBuffer\0"
    "vkFlushMappedMemoryRanges\0"
    "vkFreeCommandBuffers\0"
    "vkFreeDescriptorSets\0"
    "vkFreeMemory\0"
    "vkGetBufferMemoryRequirements\0"
    "vkGetBufferMemoryRequirements2\0"
    "vkGetDescriptorSetLayoutSupport\0"
    "vkGetDeviceGroupPeerMemoryFeatures\0"
    "vkGetDeviceGroupPresentCapabilitiesKHR\0"
    "vkGetDeviceGroupSurfacePresentModesKHR\0"
    "vkGetDeviceMemoryCommitment\0"
    "vkGetDeviceProcAddr\0"
    "vkGetDeviceQueue\0"
    "vkGetDeviceQueue2\0"
    "vkGetEventStatus\0"
    "vkGetFenceStatus\0"
    "vkGetImageDrmFormatModifierPropertiesEXT\0"
    "vkGetImageMemoryRequirements\0"
    "vkGetImageMemoryRequirements2\0"
    "vkGetImageSparseMemoryRequirements\0"
    "vkGetImageSparseMemoryRequirements2\0"
    "vkGetImageSubresourceLayout\0"
    "vkGetMemoryFdKHR\0"
    "vkGetMemoryFdPropertiesKHR\0"
    "vkGetPipelineCacheData\0"
    "vkGetPrivateDataEXT\0"
    "vkGetQueryPoolResults\0"
    "vkGetRenderAreaGranularity\0"
    "vkGetSwapchainGrallocUsage2ANDROID\0"
    "vkGetSwapchainGrallocUsageANDROID\0"
    "vkGetSwapchainImagesKHR\0"
    "vkInvalidateMappedMemoryRanges\0"
    "vkMapMemory\0"
    "vkMergePipelineCaches\0"
    "vkQueueBindSparse\0"
    "vkQueuePresentKHR\0"
    "vkQueueSignalReleaseImageANDROID\0"
    "vkQueueSubmit\0"
    "vkQueueWaitIdle\0"
    "vkResetCommandBuffer\0"
    "vkResetCommandPool\0"
    "vkResetDescriptorPool\0"
    "vkResetEvent\0"
    "vkResetFences\0"
    "vkSetEvent\0"
    "vkSetPrivateDataEXT\0"
    "vkTrimCommandPool\0"
    "vkTrimCommandPoolKHR\0"
    "vkUnmapMemory\0"
    "vkUpdateDescriptorSetWithTemplate\0"
    "vkUpdateDescriptorSets\0"
    "vkWaitForFences\0"
;

static const struct string_map_entry device_string_map_entries[] = {
    { 0, 0x6bf780dd, 150 }, /* vkAcquireImageANDROID */
    { 22, 0x82860572, 136 }, /* vkAcquireNextImage2KHR */
    { 45, 0xc3fedb2e, 124 }, /* vkAcquireNextImageKHR */
    { 67, 0x8c0c811a, 72 }, /* vkAllocateCommandBuffers */
    { 92, 0x4c449d3a, 61 }, /* vkAllocateDescriptorSets */
    { 117, 0x522b85d3, 6 }, /* vkAllocateMemory */
    { 134, 0xc54f7327, 74 }, /* vkBeginCommandBuffer */
    { 155, 0x6bcbdcb, 14 }, /* vkBindBufferMemory */
    { 174, 0xc27aaf4f, 131 }, /* vkBindBufferMemory2 */
    { 194, 0x5caaae4a, 16 }, /* vkBindImageMemory */
    { 212, 0xa9097118, 132 }, /* vkBindImageMemory2 */
    { 231, 0xf5064ea4, 111 }, /* vkCmdBeginQuery */
    { 247, 0xcb7a58e3, 117 }, /* vkCmdBeginRenderPass */
    { 268, 0x28c7a5da, 87 }, /* vkCmdBindDescriptorSets */
    { 292, 0x4c22d870, 88 }, /* vkCmdBindIndexBuffer */
    { 313, 0x3af9fd84, 77 }, /* vkCmdBindPipeline */
    { 331, 0xa9c83f1d, 89 }, /* vkCmdBindVertexBuffers */
    { 354, 0x331ebf89, 98 }, /* vkCmdBlitImage */
    { 369, 0x93cb5cb8, 105 }, /* vkCmdClearAttachments */
    { 391, 0xb4bc8d08, 103 }, /* vkCmdClearColorImage */
    { 412, 0x4f88e4ba, 104 }, /* vkCmdClearDepthStencilImage */
    { 440, 0xc939a0da, 96 }, /* vkCmdCopyBuffer */
    { 456, 0x929847e, 99 }, /* vkCmdCopyBufferToImage */
    { 479, 0x278effa9, 97 }, /* vkCmdCopyImage */
    { 494, 0x68cddbac, 100 }, /* vkCmdCopyImageToBuffer */
    { 517, 0xdee8c6d4, 115 }, /* vkCmdCopyQueryPoolResults */
    { 543, 0xbd58e867, 94 }, /* vkCmdDispatch */
    { 557, 0xfb767220, 137 }, /* vkCmdDispatchBase */
    { 575, 0xd6353005, 95 }, /* vkCmdDispatchIndirect */
    { 597, 0x9912c1a1, 90 }, /* vkCmdDraw */
    { 607, 0xbe5a8058, 91 }, /* vkCmdDrawIndexed */
    { 624, 0x94e7ed36, 93 }, /* vkCmdDrawIndexedIndirect */
    { 649, 0xe9ac41bf, 92 }, /* vkCmdDrawIndirect */
    { 667, 0xd556fd22, 112 }, /* vkCmdEndQuery */
    { 681, 0xdcdb0235, 119 }, /* vkCmdEndRenderPass */
    { 700, 0x9eaabe40, 120 }, /* vkCmdExecuteCommands */
    { 721, 0x5bdd2ae0, 102 }, /* vkCmdFillBuffer */
    { 737, 0x2eeec2f9, 118 }, /* vkCmdNextSubpass */
    { 754, 0x97fccfe8, 110 }, /* vkCmdPipelineBarrier */
    { 775, 0xb1c6b468, 116 }, /* vkCmdPushConstants */
    { 794, 0x4fccce28, 108 }, /* vkCmdResetEvent */
    { 810, 0x2f614082, 113 }, /* vkCmdResetQueryPool */
    { 830, 0x671bb594, 106 }, /* vkCmdResolveImage */
    { 848, 0x1c989dfb, 82 }, /* vkCmdSetBlendConstants */
    { 871, 0x30f14d07, 81 }, /* vkCmdSetDepthBias */
    { 889, 0x7b3a8a63, 83 }, /* vkCmdSetDepthBounds */
    { 909, 0xaecdae87, 133 }, /* vkCmdSetDeviceMask */
    { 928, 0xe257f075, 107 }, /* vkCmdSetEvent */
    { 942, 0x32282165, 80 }, /* vkCmdSetLineWidth */
    { 960, 0x48f28c7f, 79 }, /* vkCmdSetScissor */
    { 976, 0xa8f534e2, 84 }, /* vkCmdSetStencilCompareMask */
    { 1003, 0x83e2b024, 86 }, /* vkCmdSetStencilReference */
    { 1028, 0xe7c4b134, 85 }, /* vkCmdSetStencilWriteMask */
    { 1053, 0x53d6c2b, 78 }, /* vkCmdSetViewport */
    { 1070, 0xd2986b5e, 101 }, /* vkCmdUpdateBuffer */
    { 1088, 0x3b9346b3, 109 }, /* vkCmdWaitEvents */
    { 1104, 0xec4d324c, 114 }, /* vkCmdWriteTimestamp */
    { 1124, 0x7d4282b9, 34 }, /* vkCreateBuffer */
    { 1139, 0x925bd256, 36 }, /* vkCreateBufferView */
    { 1158, 0x820fe476, 69 }, /* vkCreateCommandPool */
    { 1178, 0xf70c85eb, 50 }, /* vkCreateComputePipelines */
    { 1203, 0xfb95a8a4, 58 }, /* vkCreateDescriptorPool */
    { 1226, 0x3c14cc74, 56 }, /* vkCreateDescriptorSetLayout */
    { 1254, 0xad3ce733, 138 }, /* vkCreateDescriptorUpdateTemplate */
    { 1287, 0xe7188731, 26 }, /* vkCreateEvent */
    { 1301, 0x958af968, 19 }, /* vkCreateFence */
    { 1315, 0x887a38c4, 64 }, /* vkCreateFramebuffer */
    { 1335, 0x4b59f96d, 49 }, /* vkCreateGraphicsPipelines */
    { 1361, 0x652128c2, 38 }, /* vkCreateImage */
    { 1375, 0xdce077ff, 41 }, /* vkCreateImageView */
    { 1393, 0xcbf6489f, 45 }, /* vkCreatePipelineCache */
    { 1415, 0x451ef1ed, 52 }, /* vkCreatePipelineLayout */
    { 1438, 0xc06d475f, 153 }, /* vkCreatePrivateDataSlotEXT */
    { 1465, 0x5edcd92b, 31 }, /* vkCreateQueryPool */
    { 1483, 0x109a9c18, 66 }, /* vkCreateRenderPass */
    { 1502, 0x13cf03f, 54 }, /* vkCreateSampler */
    { 1518, 0xe6a58c26, 144 }, /* vkCreateSamplerYcbcrConversion */
    { 1549, 0xf2065e5b, 24 }, /* vkCreateSemaphore */
    { 1567, 0xa0d3cea2, 43 }, /* vkCreateShaderModule */
    { 1588, 0xcdefcaa8, 121 }, /* vkCreateSwapchainKHR */
    { 1609, 0x94a07a45, 35 }, /* vkDestroyBuffer */
    { 1625, 0x98b27962, 37 }, /* vkDestroyBufferView */
    { 1645, 0xd5d83a0a, 70 }, /* vkDestroyCommandPool */
    { 1666, 0x47bdaf30, 59 }, /* vkDestroyDescriptorPool */
    { 1690, 0xa4227b08, 57 }, /* vkDestroyDescriptorSetLayout */
    { 1719, 0xbb2cbe7f, 139 }, /* vkDestroyDescriptorUpdateTemplate */
    { 1753, 0x1fbcc9cb, 1 }, /* vkDestroyDevice */
    { 1769, 0x4df27c05, 27 }, /* vkDestroyEvent */
    { 1784, 0xfc64ee3c, 20 }, /* vkDestroyFence */
    { 1799, 0xdc428e58, 65 }, /* vkDestroyFramebuffer */
    { 1820, 0xcbfb1d96, 39 }, /* vkDestroyImage */
    { 1835, 0xb5853953, 42 }, /* vkDestroyImageView */
    { 1854, 0x6aac68af, 51 }, /* vkDestroyPipeline */
    { 1872, 0x4112a673, 46 }, /* vkDestroyPipelineCache */
    { 1895, 0x9146f879, 53 }, /* vkDestroyPipelineLayout */
    { 1919, 0xe18d5d6b, 154 }, /* vkDestroyPrivateDataSlotEXT */
    { 1947, 0x37819a7f, 32 }, /* vkDestroyQueryPool */
    { 1966, 0x16f14324, 67 }, /* vkDestroyRenderPass */
    { 1986, 0x3b645153, 55 }, /* vkDestroySampler */
    { 2003, 0x20f261b2, 145 }, /* vkDestroySamplerYcbcrConversion */
    { 2035, 0xcaab1faf, 25 }, /* vkDestroySemaphore */
    { 2054, 0x2d77af6e, 44 }, /* vkDestroyShaderModule */
    { 2076, 0x5a93ab74, 122 }, /* vkDestroySwapchainKHR */
    { 2098, 0xd46c5f24, 5 }, /* vkDeviceWaitIdle */
    { 2115, 0xaffb5725, 75 }, /* vkEndCommandBuffer */
    { 2134, 0xff52f051, 10 }, /* vkFlushMappedMemoryRanges */
    { 2160, 0xb9db2b91, 73 }, /* vkFreeCommandBuffers */
    { 2181, 0x7a1347b1, 62 }, /* vkFreeDescriptorSets */
    { 2202, 0x8f6f838a, 7 }, /* vkFreeMemory */
    { 2215, 0xab98422a, 13 }, /* vkGetBufferMemoryRequirements */
    { 2245, 0xd1fd0638, 141 }, /* vkGetBufferMemoryRequirements2 */
    { 2276, 0xfeac9573, 147 }, /* vkGetDescriptorSetLayoutSupport */
    { 2308, 0x2e218c10, 130 }, /* vkGetDeviceGroupPeerMemoryFeatures */
    { 2343, 0xf72c87d4, 134 }, /* vkGetDeviceGroupPresentCapabilitiesKHR */
    { 2382, 0x6b9448c3, 135 }, /* vkGetDeviceGroupSurfacePresentModesKHR */
    { 2421, 0x46e38db5, 12 }, /* vkGetDeviceMemoryCommitment */
    { 2449, 0xba013486, 0 }, /* vkGetDeviceProcAddr */
    { 2469, 0xcc920d9a, 2 }, /* vkGetDeviceQueue */
    { 2486, 0xb11a6348, 146 }, /* vkGetDeviceQueue2 */
    { 2504, 0x96d834b, 28 }, /* vkGetEventStatus */
    { 2521, 0x5f391892, 22 }, /* vkGetFenceStatus */
    { 2538, 0x12fa78a3, 152 }, /* vkGetImageDrmFormatModifierPropertiesEXT */
    { 2579, 0x916f1e63, 15 }, /* vkGetImageMemoryRequirements */
    { 2608, 0x56e213f7, 142 }, /* vkGetImageMemoryRequirements2 */
    { 2638, 0x15855f5b, 17 }, /* vkGetImageSparseMemoryRequirements */
    { 2673, 0xbd4e3d3f, 143 }, /* vkGetImageSparseMemoryRequirements2 */
    { 2709, 0x9163b686, 40 }, /* vkGetImageSubresourceLayout */
    { 2737, 0x503c14c5, 128 }, /* vkGetMemoryFdKHR */
    { 2754, 0xb028a792, 129 }, /* vkGetMemoryFdPropertiesKHR */
    { 2781, 0x2092a349, 47 }, /* vkGetPipelineCacheData */
    { 2804, 0x2dc1491d, 156 }, /* vkGetPrivateDataEXT */
    { 2824, 0xbf3f2cb3, 33 }, /* vkGetQueryPoolResults */
    { 2846, 0xa9820d22, 68 }, /* vkGetRenderAreaGranularity */
    { 2873, 0x219d929, 149 }, /* vkGetSwapchainGrallocUsage2ANDROID */
    { 2908, 0x4979c9a3, 148 }, /* vkGetSwapchainGrallocUsageANDROID */
    { 2942, 0x57695f28, 123 }, /* vkGetSwapchainImagesKHR */
    { 2966, 0x1e115cca, 11 }, /* vkInvalidateMappedMemoryRanges */
    { 2997, 0xcb977bd8, 8 }, /* vkMapMemory */
    { 3009, 0xc3499606, 48 }, /* vkMergePipelineCaches */
    { 3031, 0xc3628a09, 18 }, /* vkQueueBindSparse */
    { 3049, 0xfc5fb6ce, 125 }, /* vkQueuePresentKHR */
    { 3067, 0xa0313eef, 151 }, /* vkQueueSignalReleaseImageANDROID */
    { 3100, 0xfa4713ec, 3 }, /* vkQueueSubmit */
    { 3114, 0x6f8fc2a5, 4 }, /* vkQueueWaitIdle */
    { 3130, 0x847dc731, 76 }, /* vkResetCommandBuffer */
    { 3151, 0x6da9f7fd, 71 }, /* vkResetCommandPool */
    { 3170, 0x9bd85f5, 60 }, /* vkResetDescriptorPool */
    { 3192, 0x6d373ba8, 30 }, /* vkResetEvent */
    { 3205, 0x684781dc, 21 }, /* vkResetFences */
    { 3219, 0x592ae5f5, 29 }, /* vkSetEvent */
    { 3230, 0x23456729, 155 }, /* vkSetPrivateDataEXT */
    { 3250, 0xfef2fb38, 126 }, /* vkTrimCommandPool */
    { 3268, 0x51177c8d, 127 }, /* vkTrimCommandPoolKHR */
    { 3289, 0x1a1a0e2f, 9 }, /* vkUnmapMemory */
    { 3303, 0x5349c9d, 140 }, /* vkUpdateDescriptorSetWithTemplate */
    { 3337, 0xbfd090ae, 63 }, /* vkUpdateDescriptorSets */
    { 3360, 0x19d64c81, 23 }, /* vkWaitForFences */
};

/* Hash table stats:
 * size 157 entries
 * collisions entries:
 *     0      114
 *     1      21
 *     2      8
 *     3      5
 *     4      3
 *     5      3
 *     6      2
 *     7      1
 *     8      0
 *     9+     0
 */

#define none 0xffff
static const uint16_t device_string_map[256] = {
    0x0047,
    none,
    none,
    none,
    0x0080,
    0x001c,
    0x008a,
    0x002c,
    0x0013,
    0x008b,
    0x0052,
    none,
    none,
    none,
    none,
    none,
    0x0070,
    none,
    none,
    none,
    none,
    none,
    none,
    0x008f,
    0x000a,
    none,
    0x0003,
    0x0054,
    none,
    0x0010,
    none,
    none,
    0x001b,
    none,
    0x0021,
    none,
    0x0033,
    0x0068,
    0x004c,
    0x0006,
    0x0028,
    0x0085,
    0x006d,
    0x0035,
    none,
    none,
    0x0002,
    0x0099,
    0x0053,
    0x0040,
    none,
    0x003f,
    0x0034,
    0x0022,
    0x001f,
    0x0061,
    0x006e,
    none,
    0x0004,
    0x0087,
    0x0058,
    none,
    0x0049,
    0x004b,
    0x0023,
    0x0095,
    none,
    0x0082,
    0x0090,
    0x0050,
    none,
    none,
    0x0076,
    0x0081,
    0x0009,
    0x0077,
    0x0038,
    none,
    none,
    0x0008,
    none,
    0x004a,
    0x007d,
    0x005b,
    none,
    none,
    0x003a,
    none,
    0x001e,
    none,
    none,
    0x004d,
    none,
    0x0067,
    0x0036,
    0x0048,
    none,
    none,
    0x0051,
    0x002d,
    0x0057,
    0x0030,
    0x0062,
    0x001a,
    0x0027,
    none,
    none,
    0x0059,
    none,
    0x0043,
    0x0065,
    none,
    0x000e,
    0x0097,
    0x0001,
    0x005d,
    0x003e,
    0x002f,
    0x003b,
    0x0069,
    none,
    0x005e,
    none,
    0x0041,
    none,
    none,
    0x0016,
    0x0031,
    none,
    0x007c,
    0x0029,
    none,
    0x000f,
    none,
    0x006f,
    0x002e,
    0x0096,
    0x0011,
    0x006c,
    none,
    none,
    0x0098,
    none,
    none,
    none,
    0x005f,
    0x0055,
    none,
    0x002a,
    none,
    0x005a,
    none,
    none,
    0x0074,
    0x0066,
    none,
    0x007a,
    0x009a,
    none,
    0x0046,
    none,
    0x001d,
    0x004e,
    0x0079,
    0x000b,
    0x0060,
    none,
    0x0084,
    0x004f,
    0x0017,
    none,
    none,
    0x0018,
    0x0075,
    0x009b,
    0x005c,
    none,
    0x006b,
    0x0063,
    0x0037,
    none,
    0x0073,
    0x0086,
    0x003d,
    0x0012,
    0x0039,
    0x0014,
    0x0093,
    none,
    none,
    none,
    0x0020,
    none,
    none,
    0x0044,
    0x0072,
    0x0042,
    0x007f,
    0x0083,
    none,
    none,
    none,
    0x006a,
    0x0007,
    none,
    0x009c,
    0x008c,
    none,
    none,
    none,
    0x007e,
    0x0005,
    0x0019,
    0x0064,
    none,
    none,
    0x0089,
    none,
    0x000d,
    none,
    0x0094,
    0x0000,
    0x0056,
    none,
    0x0024,
    none,
    0x0032,
    0x000c,
    none,
    none,
    none,
    0x0071,
    0x0026,
    none,
    none,
    0x003c,
    0x008e,
    0x0015,
    none,
    0x008d,
    0x0088,
    0x0078,
    none,
    none,
    none,
    0x0092,
    none,
    0x007b,
    none,
    0x0025,
    none,
    0x002b,
    none,
    0x0091,
    none,
    0x0045,
};

static int
device_string_map_lookup(const char *str)
{
    static const uint32_t prime_factor = 5024183;
    static const uint32_t prime_step = 19;
    const struct string_map_entry *e;
    uint32_t hash, h;
    uint16_t i;
    const char *p;

    hash = 0;
    for (p = str; *p; p++)
        hash = hash * prime_factor + *p;

    h = hash;
    while (1) {
        i = device_string_map[h & 255];
        if (i == none)
           return -1;
        e = &device_string_map_entries[i];
        if (e->hash == hash && strcmp(str, device_strings + e->name) == 0)
            return e->num;
        h += prime_step;
    }

    return -1;
}

static const char *
device_entry_name(int num)
{
   for (int i = 0; i < ARRAY_SIZE(device_string_map_entries); i++) {
      if (device_string_map_entries[i].num == num)
         return &device_strings[device_string_map_entries[i].name];
   }
   return NULL;
}


/* Weak aliases for all potential implementations. These will resolve to
 * NULL if they're not defined, which lets the resolve_entrypoint() function
 * either pick the correct entry point.
 */

  VkResult v3dv_CreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance) __attribute__ ((weak));
  void v3dv_DestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
  VkResult v3dv_EnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices) __attribute__ ((weak));
  PFN_vkVoidFunction v3dv_GetInstanceProcAddr(VkInstance instance, const char* pName) __attribute__ ((weak));
  VkResult v3dv_EnumerateInstanceVersion(uint32_t* pApiVersion) __attribute__ ((weak));
  VkResult v3dv_EnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties) __attribute__ ((weak));
  VkResult v3dv_EnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties) __attribute__ ((weak));
  VkResult v3dv_CreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
  void v3dv_DestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  VkResult v3dv_CreateWaylandSurfaceKHR(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
  VkResult v3dv_CreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
  VkResult v3dv_CreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif // VK_USE_PLATFORM_XCB_KHR
  VkResult v3dv_CreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback) __attribute__ ((weak));
  void v3dv_DestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
  void v3dv_DebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage) __attribute__ ((weak));
  VkResult v3dv_EnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) __attribute__ ((weak));

const struct v3dv_instance_dispatch_table v3dv_instance_dispatch_table = {
  .vkCreateInstance = v3dv_CreateInstance,
  .vkDestroyInstance = v3dv_DestroyInstance,
  .vkEnumeratePhysicalDevices = v3dv_EnumeratePhysicalDevices,
  .vkGetInstanceProcAddr = v3dv_GetInstanceProcAddr,
  .vkEnumerateInstanceVersion = v3dv_EnumerateInstanceVersion,
  .vkEnumerateInstanceLayerProperties = v3dv_EnumerateInstanceLayerProperties,
  .vkEnumerateInstanceExtensionProperties = v3dv_EnumerateInstanceExtensionProperties,
  .vkCreateDisplayPlaneSurfaceKHR = v3dv_CreateDisplayPlaneSurfaceKHR,
  .vkDestroySurfaceKHR = v3dv_DestroySurfaceKHR,
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  .vkCreateWaylandSurfaceKHR = v3dv_CreateWaylandSurfaceKHR,
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
  .vkCreateXlibSurfaceKHR = v3dv_CreateXlibSurfaceKHR,
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
  .vkCreateXcbSurfaceKHR = v3dv_CreateXcbSurfaceKHR,
#endif // VK_USE_PLATFORM_XCB_KHR
  .vkCreateDebugReportCallbackEXT = v3dv_CreateDebugReportCallbackEXT,
  .vkDestroyDebugReportCallbackEXT = v3dv_DestroyDebugReportCallbackEXT,
  .vkDebugReportMessageEXT = v3dv_DebugReportMessageEXT,
  .vkEnumeratePhysicalDeviceGroups = v3dv_EnumeratePhysicalDeviceGroups,
};

      void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceProperties(physicalDevice, pProperties);
      }
      void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
      }
      void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);
      }
      void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures);
      }
      void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
      }
      VkResult __attribute__ ((weak))
      v3dv_EnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkEnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties);
      }
      VkResult __attribute__ ((weak))
      v3dv_EnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkEnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
      }
      void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
      }
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
      VkBool32 __attribute__ ((weak))
      v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);
      }
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
      VkBool32 __attribute__ ((weak))
      v3dv_GetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);
      }
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
      VkBool32 __attribute__ ((weak))
      v3dv_GetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);
      }
#endif // VK_USE_PLATFORM_XCB_KHR
      void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures);
      }
            void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceProperties2(physicalDevice, pProperties);
      }
            void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);
      }
            VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);
      }
            void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
      }
            void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);
      }
            void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
      }
            void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
      }
            void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
      }
      void __attribute__ ((weak))
      v3dv_GetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats)
      {
          V3DV_FROM_HANDLE(v3dv_physical_device, v3dv_physical_device, physicalDevice);
          return v3dv_physical_device->dispatch.vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
      }

  const struct v3dv_physical_device_dispatch_table v3dv_physical_device_dispatch_table = {
    .vkGetPhysicalDeviceProperties = v3dv_GetPhysicalDeviceProperties,
    .vkGetPhysicalDeviceQueueFamilyProperties = v3dv_GetPhysicalDeviceQueueFamilyProperties,
    .vkGetPhysicalDeviceMemoryProperties = v3dv_GetPhysicalDeviceMemoryProperties,
    .vkGetPhysicalDeviceFeatures = v3dv_GetPhysicalDeviceFeatures,
    .vkGetPhysicalDeviceFormatProperties = v3dv_GetPhysicalDeviceFormatProperties,
    .vkGetPhysicalDeviceImageFormatProperties = v3dv_GetPhysicalDeviceImageFormatProperties,
    .vkCreateDevice = v3dv_CreateDevice,
    .vkEnumerateDeviceLayerProperties = v3dv_EnumerateDeviceLayerProperties,
    .vkEnumerateDeviceExtensionProperties = v3dv_EnumerateDeviceExtensionProperties,
    .vkGetPhysicalDeviceSparseImageFormatProperties = v3dv_GetPhysicalDeviceSparseImageFormatProperties,
    .vkGetPhysicalDeviceDisplayPropertiesKHR = v3dv_GetPhysicalDeviceDisplayPropertiesKHR,
    .vkGetPhysicalDeviceDisplayPlanePropertiesKHR = v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR,
    .vkGetDisplayPlaneSupportedDisplaysKHR = v3dv_GetDisplayPlaneSupportedDisplaysKHR,
    .vkGetDisplayModePropertiesKHR = v3dv_GetDisplayModePropertiesKHR,
    .vkCreateDisplayModeKHR = v3dv_CreateDisplayModeKHR,
    .vkGetDisplayPlaneCapabilitiesKHR = v3dv_GetDisplayPlaneCapabilitiesKHR,
    .vkGetPhysicalDeviceSurfaceSupportKHR = v3dv_GetPhysicalDeviceSurfaceSupportKHR,
    .vkGetPhysicalDeviceSurfaceCapabilitiesKHR = v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR,
    .vkGetPhysicalDeviceSurfaceFormatsKHR = v3dv_GetPhysicalDeviceSurfaceFormatsKHR,
    .vkGetPhysicalDeviceSurfacePresentModesKHR = v3dv_GetPhysicalDeviceSurfacePresentModesKHR,
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    .vkGetPhysicalDeviceWaylandPresentationSupportKHR = v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR,
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
    .vkGetPhysicalDeviceXlibPresentationSupportKHR = v3dv_GetPhysicalDeviceXlibPresentationSupportKHR,
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    .vkGetPhysicalDeviceXcbPresentationSupportKHR = v3dv_GetPhysicalDeviceXcbPresentationSupportKHR,
#endif // VK_USE_PLATFORM_XCB_KHR
    .vkGetPhysicalDeviceFeatures2 = v3dv_GetPhysicalDeviceFeatures2,
    .vkGetPhysicalDeviceFeatures2KHR = v3dv_GetPhysicalDeviceFeatures2,
    .vkGetPhysicalDeviceProperties2 = v3dv_GetPhysicalDeviceProperties2,
    .vkGetPhysicalDeviceProperties2KHR = v3dv_GetPhysicalDeviceProperties2,
    .vkGetPhysicalDeviceFormatProperties2 = v3dv_GetPhysicalDeviceFormatProperties2,
    .vkGetPhysicalDeviceFormatProperties2KHR = v3dv_GetPhysicalDeviceFormatProperties2,
    .vkGetPhysicalDeviceImageFormatProperties2 = v3dv_GetPhysicalDeviceImageFormatProperties2,
    .vkGetPhysicalDeviceImageFormatProperties2KHR = v3dv_GetPhysicalDeviceImageFormatProperties2,
    .vkGetPhysicalDeviceQueueFamilyProperties2 = v3dv_GetPhysicalDeviceQueueFamilyProperties2,
    .vkGetPhysicalDeviceQueueFamilyProperties2KHR = v3dv_GetPhysicalDeviceQueueFamilyProperties2,
    .vkGetPhysicalDeviceMemoryProperties2 = v3dv_GetPhysicalDeviceMemoryProperties2,
    .vkGetPhysicalDeviceMemoryProperties2KHR = v3dv_GetPhysicalDeviceMemoryProperties2,
    .vkGetPhysicalDeviceSparseImageFormatProperties2 = v3dv_GetPhysicalDeviceSparseImageFormatProperties2,
    .vkGetPhysicalDeviceSparseImageFormatProperties2KHR = v3dv_GetPhysicalDeviceSparseImageFormatProperties2,
    .vkGetPhysicalDeviceExternalBufferProperties = v3dv_GetPhysicalDeviceExternalBufferProperties,
    .vkGetPhysicalDeviceExternalBufferPropertiesKHR = v3dv_GetPhysicalDeviceExternalBufferProperties,
    .vkGetPhysicalDeviceExternalSemaphoreProperties = v3dv_GetPhysicalDeviceExternalSemaphoreProperties,
    .vkGetPhysicalDeviceExternalFenceProperties = v3dv_GetPhysicalDeviceExternalFenceProperties,
    .vkGetPhysicalDevicePresentRectanglesKHR = v3dv_GetPhysicalDevicePresentRectanglesKHR,
    .vkGetPhysicalDeviceSurfaceCapabilities2KHR = v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR,
    .vkGetPhysicalDeviceSurfaceFormats2KHR = v3dv_GetPhysicalDeviceSurfaceFormats2KHR,
  };


      PFN_vkVoidFunction __attribute__ ((weak))
      v3dv_GetDeviceProcAddr(VkDevice device, const char* pName)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetDeviceProcAddr(device, pName);
      }
      void __attribute__ ((weak))
      v3dv_DestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyDevice(device, pAllocator);
      }
      void __attribute__ ((weak))
      v3dv_GetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue);
      }
      VkResult __attribute__ ((weak))
      v3dv_QueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
      {
          V3DV_FROM_HANDLE(v3dv_queue, v3dv_queue, queue);
          return v3dv_queue->device->dispatch.vkQueueSubmit(queue, submitCount, pSubmits, fence);
      }
      VkResult __attribute__ ((weak))
      v3dv_QueueWaitIdle(VkQueue queue)
      {
          V3DV_FROM_HANDLE(v3dv_queue, v3dv_queue, queue);
          return v3dv_queue->device->dispatch.vkQueueWaitIdle(queue);
      }
      VkResult __attribute__ ((weak))
      v3dv_DeviceWaitIdle(VkDevice device)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDeviceWaitIdle(device);
      }
      VkResult __attribute__ ((weak))
      v3dv_AllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory);
      }
      void __attribute__ ((weak))
      v3dv_FreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkFreeMemory(device, memory, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_MapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkMapMemory(device, memory, offset, size, flags, ppData);
      }
      void __attribute__ ((weak))
      v3dv_UnmapMemory(VkDevice device, VkDeviceMemory memory)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkUnmapMemory(device, memory);
      }
      VkResult __attribute__ ((weak))
      v3dv_FlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
      }
      VkResult __attribute__ ((weak))
      v3dv_InvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
      }
      void __attribute__ ((weak))
      v3dv_GetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);
      }
      void __attribute__ ((weak))
      v3dv_GetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements);
      }
      VkResult __attribute__ ((weak))
      v3dv_BindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkBindBufferMemory(device, buffer, memory, memoryOffset);
      }
      void __attribute__ ((weak))
      v3dv_GetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetImageMemoryRequirements(device, image, pMemoryRequirements);
      }
      VkResult __attribute__ ((weak))
      v3dv_BindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkBindImageMemory(device, image, memory, memoryOffset);
      }
      void __attribute__ ((weak))
      v3dv_GetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
      }
      VkResult __attribute__ ((weak))
      v3dv_QueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
      {
          V3DV_FROM_HANDLE(v3dv_queue, v3dv_queue, queue);
          return v3dv_queue->device->dispatch.vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateFence(device, pCreateInfo, pAllocator, pFence);
      }
      void __attribute__ ((weak))
      v3dv_DestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyFence(device, fence, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_ResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkResetFences(device, fenceCount, pFences);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetFenceStatus(VkDevice device, VkFence fence)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetFenceStatus(device, fence);
      }
      VkResult __attribute__ ((weak))
      v3dv_WaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkWaitForFences(device, fenceCount, pFences, waitAll, timeout);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
      }
      void __attribute__ ((weak))
      v3dv_DestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroySemaphore(device, semaphore, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateEvent(device, pCreateInfo, pAllocator, pEvent);
      }
      void __attribute__ ((weak))
      v3dv_DestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyEvent(device, event, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetEventStatus(VkDevice device, VkEvent event)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetEventStatus(device, event);
      }
      VkResult __attribute__ ((weak))
      v3dv_SetEvent(VkDevice device, VkEvent event)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkSetEvent(device, event);
      }
      VkResult __attribute__ ((weak))
      v3dv_ResetEvent(VkDevice device, VkEvent event)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkResetEvent(device, event);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
      }
      void __attribute__ ((weak))
      v3dv_DestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyQueryPool(device, queryPool, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
      }
      void __attribute__ ((weak))
      v3dv_DestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyBuffer(device, buffer, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateBufferView(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateBufferView(device, pCreateInfo, pAllocator, pView);
      }
      void __attribute__ ((weak))
      v3dv_DestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyBufferView(device, bufferView, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateImage(device, pCreateInfo, pAllocator, pImage);
      }
      void __attribute__ ((weak))
      v3dv_DestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyImage(device, image, pAllocator);
      }
      void __attribute__ ((weak))
      v3dv_GetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetImageSubresourceLayout(device, image, pSubresource, pLayout);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateImageView(device, pCreateInfo, pAllocator, pView);
      }
      void __attribute__ ((weak))
      v3dv_DestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyImageView(device, imageView, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
      }
      void __attribute__ ((weak))
      v3dv_DestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyShaderModule(device, shaderModule, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
      }
      void __attribute__ ((weak))
      v3dv_DestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyPipelineCache(device, pipelineCache, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData);
      }
      VkResult __attribute__ ((weak))
      v3dv_MergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
      }
      void __attribute__ ((weak))
      v3dv_DestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyPipeline(device, pipeline, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
      }
      void __attribute__ ((weak))
      v3dv_DestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyPipelineLayout(device, pipelineLayout, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateSampler(device, pCreateInfo, pAllocator, pSampler);
      }
      void __attribute__ ((weak))
      v3dv_DestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroySampler(device, sampler, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);
      }
      void __attribute__ ((weak))
      v3dv_DestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
      }
      void __attribute__ ((weak))
      v3dv_DestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyDescriptorPool(device, descriptorPool, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_ResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkResetDescriptorPool(device, descriptorPool, flags);
      }
      VkResult __attribute__ ((weak))
      v3dv_AllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);
      }
      VkResult __attribute__ ((weak))
      v3dv_FreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);
      }
      void __attribute__ ((weak))
      v3dv_UpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
      }
      void __attribute__ ((weak))
      v3dv_DestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyFramebuffer(device, framebuffer, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateRenderPass(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
      }
      void __attribute__ ((weak))
      v3dv_DestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyRenderPass(device, renderPass, pAllocator);
      }
      void __attribute__ ((weak))
      v3dv_GetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetRenderAreaGranularity(device, renderPass, pGranularity);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
      }
      void __attribute__ ((weak))
      v3dv_DestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyCommandPool(device, commandPool, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_ResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkResetCommandPool(device, commandPool, flags);
      }
      VkResult __attribute__ ((weak))
      v3dv_AllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);
      }
      void __attribute__ ((weak))
      v3dv_FreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);
      }
      VkResult __attribute__ ((weak))
      v3dv_BeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkBeginCommandBuffer(commandBuffer, pBeginInfo);
      }
      VkResult __attribute__ ((weak))
      v3dv_EndCommandBuffer(VkCommandBuffer commandBuffer)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkEndCommandBuffer(commandBuffer);
      }
      VkResult __attribute__ ((weak))
      v3dv_ResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkResetCommandBuffer(commandBuffer, flags);
      }
      void __attribute__ ((weak))
      v3dv_CmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetLineWidth(commandBuffer, lineWidth);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants[4])
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetBlendConstants(commandBuffer, blendConstants);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetStencilReference(commandBuffer, faceMask, reference);
      }
      void __attribute__ ((weak))
      v3dv_CmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
      }
      void __attribute__ ((weak))
      v3dv_CmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
      }
      void __attribute__ ((weak))
      v3dv_CmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
      }
      void __attribute__ ((weak))
      v3dv_CmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
      }
      void __attribute__ ((weak))
      v3dv_CmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
      }
      void __attribute__ ((weak))
      v3dv_CmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
      }
      void __attribute__ ((weak))
      v3dv_CmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
      }
      void __attribute__ ((weak))
      v3dv_CmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
      }
      void __attribute__ ((weak))
      v3dv_CmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdDispatchIndirect(commandBuffer, buffer, offset);
      }
      void __attribute__ ((weak))
      v3dv_CmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
      }
      void __attribute__ ((weak))
      v3dv_CmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
      }
      void __attribute__ ((weak))
      v3dv_CmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
      }
      void __attribute__ ((weak))
      v3dv_CmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
      }
      void __attribute__ ((weak))
      v3dv_CmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
      }
      void __attribute__ ((weak))
      v3dv_CmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
      }
      void __attribute__ ((weak))
      v3dv_CmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
      }
      void __attribute__ ((weak))
      v3dv_CmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
      }
      void __attribute__ ((weak))
      v3dv_CmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
      }
      void __attribute__ ((weak))
      v3dv_CmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
      }
      void __attribute__ ((weak))
      v3dv_CmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetEvent(commandBuffer, event, stageMask);
      }
      void __attribute__ ((weak))
      v3dv_CmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdResetEvent(commandBuffer, event, stageMask);
      }
      void __attribute__ ((weak))
      v3dv_CmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
      }
      void __attribute__ ((weak))
      v3dv_CmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
      }
      void __attribute__ ((weak))
      v3dv_CmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdBeginQuery(commandBuffer, queryPool, query, flags);
      }
      void __attribute__ ((weak))
      v3dv_CmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdEndQuery(commandBuffer, queryPool, query);
      }
      void __attribute__ ((weak))
      v3dv_CmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
      }
      void __attribute__ ((weak))
      v3dv_CmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
      }
      void __attribute__ ((weak))
      v3dv_CmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
      }
      void __attribute__ ((weak))
      v3dv_CmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
      }
      void __attribute__ ((weak))
      v3dv_CmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
      }
      void __attribute__ ((weak))
      v3dv_CmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdNextSubpass(commandBuffer, contents);
      }
      void __attribute__ ((weak))
      v3dv_CmdEndRenderPass(VkCommandBuffer commandBuffer)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdEndRenderPass(commandBuffer);
      }
      void __attribute__ ((weak))
      v3dv_CmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
      }
      void __attribute__ ((weak))
      v3dv_DestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroySwapchainKHR(device, swapchain, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
      }
      VkResult __attribute__ ((weak))
      v3dv_AcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
      }
      VkResult __attribute__ ((weak))
      v3dv_QueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo)
      {
          V3DV_FROM_HANDLE(v3dv_queue, v3dv_queue, queue);
          return v3dv_queue->device->dispatch.vkQueuePresentKHR(queue, pPresentInfo);
      }
      void __attribute__ ((weak))
      v3dv_TrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkTrimCommandPool(device, commandPool, flags);
      }
            VkResult __attribute__ ((weak))
      v3dv_GetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetMemoryFdKHR(device, pGetFdInfo, pFd);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
      }
      void __attribute__ ((weak))
      v3dv_GetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
      }
      VkResult __attribute__ ((weak))
      v3dv_BindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkBindBufferMemory2(device, bindInfoCount, pBindInfos);
      }
      VkResult __attribute__ ((weak))
      v3dv_BindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkBindImageMemory2(device, bindInfoCount, pBindInfos);
      }
      void __attribute__ ((weak))
      v3dv_CmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdSetDeviceMask(commandBuffer, deviceMask);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);
      }
      VkResult __attribute__ ((weak))
      v3dv_GetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes);
      }
      VkResult __attribute__ ((weak))
      v3dv_AcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
      }
      void __attribute__ ((weak))
      v3dv_CmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
      {
          V3DV_FROM_HANDLE(v3dv_cmd_buffer, v3dv_cmd_buffer, commandBuffer);
          return v3dv_cmd_buffer->device->dispatch.vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
      }
      void __attribute__ ((weak))
      v3dv_DestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);
      }
      void __attribute__ ((weak))
      v3dv_UpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkUpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);
      }
      void __attribute__ ((weak))
      v3dv_GetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);
      }
      void __attribute__ ((weak))
      v3dv_GetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements);
      }
      void __attribute__ ((weak))
      v3dv_GetImageSparseMemoryRequirements2(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
      }
      void __attribute__ ((weak))
      v3dv_DestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
      }
      void __attribute__ ((weak))
      v3dv_GetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetDeviceQueue2(device, pQueueInfo, pQueue);
      }
      void __attribute__ ((weak))
      v3dv_GetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport);
      }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
      VkResult __attribute__ ((weak))
      v3dv_GetSwapchainGrallocUsageANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, int* grallocUsage)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetSwapchainGrallocUsageANDROID(device, format, imageUsage, grallocUsage);
      }
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
      VkResult __attribute__ ((weak))
      v3dv_GetSwapchainGrallocUsage2ANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, VkSwapchainImageUsageFlagsANDROID swapchainImageUsage, uint64_t* grallocConsumerUsage, uint64_t* grallocProducerUsage)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetSwapchainGrallocUsage2ANDROID(device, format, imageUsage, swapchainImageUsage, grallocConsumerUsage, grallocProducerUsage);
      }
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
      VkResult __attribute__ ((weak))
      v3dv_AcquireImageANDROID(VkDevice device, VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkAcquireImageANDROID(device, image, nativeFenceFd, semaphore, fence);
      }
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
      VkResult __attribute__ ((weak))
      v3dv_QueueSignalReleaseImageANDROID(VkQueue queue, uint32_t waitSemaphoreCount, const VkSemaphore* pWaitSemaphores, VkImage image, int* pNativeFenceFd)
      {
          V3DV_FROM_HANDLE(v3dv_queue, v3dv_queue, queue);
          return v3dv_queue->device->dispatch.vkQueueSignalReleaseImageANDROID(queue, waitSemaphoreCount, pWaitSemaphores, image, pNativeFenceFd);
      }
#endif // VK_USE_PLATFORM_ANDROID_KHR
      VkResult __attribute__ ((weak))
      v3dv_GetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties);
      }
      VkResult __attribute__ ((weak))
      v3dv_CreatePrivateDataSlotEXT(VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkCreatePrivateDataSlotEXT(device, pCreateInfo, pAllocator, pPrivateDataSlot);
      }
      void __attribute__ ((weak))
      v3dv_DestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkDestroyPrivateDataSlotEXT(device, privateDataSlot, pAllocator);
      }
      VkResult __attribute__ ((weak))
      v3dv_SetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkSetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, data);
      }
      void __attribute__ ((weak))
      v3dv_GetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t* pData)
      {
          V3DV_FROM_HANDLE(v3dv_device, v3dv_device, device);
          return v3dv_device->dispatch.vkGetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, pData);
      }

  const struct v3dv_device_dispatch_table v3dv_device_dispatch_table = {
    .vkGetDeviceProcAddr = v3dv_GetDeviceProcAddr,
    .vkDestroyDevice = v3dv_DestroyDevice,
    .vkGetDeviceQueue = v3dv_GetDeviceQueue,
    .vkQueueSubmit = v3dv_QueueSubmit,
    .vkQueueWaitIdle = v3dv_QueueWaitIdle,
    .vkDeviceWaitIdle = v3dv_DeviceWaitIdle,
    .vkAllocateMemory = v3dv_AllocateMemory,
    .vkFreeMemory = v3dv_FreeMemory,
    .vkMapMemory = v3dv_MapMemory,
    .vkUnmapMemory = v3dv_UnmapMemory,
    .vkFlushMappedMemoryRanges = v3dv_FlushMappedMemoryRanges,
    .vkInvalidateMappedMemoryRanges = v3dv_InvalidateMappedMemoryRanges,
    .vkGetDeviceMemoryCommitment = v3dv_GetDeviceMemoryCommitment,
    .vkGetBufferMemoryRequirements = v3dv_GetBufferMemoryRequirements,
    .vkBindBufferMemory = v3dv_BindBufferMemory,
    .vkGetImageMemoryRequirements = v3dv_GetImageMemoryRequirements,
    .vkBindImageMemory = v3dv_BindImageMemory,
    .vkGetImageSparseMemoryRequirements = v3dv_GetImageSparseMemoryRequirements,
    .vkQueueBindSparse = v3dv_QueueBindSparse,
    .vkCreateFence = v3dv_CreateFence,
    .vkDestroyFence = v3dv_DestroyFence,
    .vkResetFences = v3dv_ResetFences,
    .vkGetFenceStatus = v3dv_GetFenceStatus,
    .vkWaitForFences = v3dv_WaitForFences,
    .vkCreateSemaphore = v3dv_CreateSemaphore,
    .vkDestroySemaphore = v3dv_DestroySemaphore,
    .vkCreateEvent = v3dv_CreateEvent,
    .vkDestroyEvent = v3dv_DestroyEvent,
    .vkGetEventStatus = v3dv_GetEventStatus,
    .vkSetEvent = v3dv_SetEvent,
    .vkResetEvent = v3dv_ResetEvent,
    .vkCreateQueryPool = v3dv_CreateQueryPool,
    .vkDestroyQueryPool = v3dv_DestroyQueryPool,
    .vkGetQueryPoolResults = v3dv_GetQueryPoolResults,
    .vkCreateBuffer = v3dv_CreateBuffer,
    .vkDestroyBuffer = v3dv_DestroyBuffer,
    .vkCreateBufferView = v3dv_CreateBufferView,
    .vkDestroyBufferView = v3dv_DestroyBufferView,
    .vkCreateImage = v3dv_CreateImage,
    .vkDestroyImage = v3dv_DestroyImage,
    .vkGetImageSubresourceLayout = v3dv_GetImageSubresourceLayout,
    .vkCreateImageView = v3dv_CreateImageView,
    .vkDestroyImageView = v3dv_DestroyImageView,
    .vkCreateShaderModule = v3dv_CreateShaderModule,
    .vkDestroyShaderModule = v3dv_DestroyShaderModule,
    .vkCreatePipelineCache = v3dv_CreatePipelineCache,
    .vkDestroyPipelineCache = v3dv_DestroyPipelineCache,
    .vkGetPipelineCacheData = v3dv_GetPipelineCacheData,
    .vkMergePipelineCaches = v3dv_MergePipelineCaches,
    .vkCreateGraphicsPipelines = v3dv_CreateGraphicsPipelines,
    .vkCreateComputePipelines = v3dv_CreateComputePipelines,
    .vkDestroyPipeline = v3dv_DestroyPipeline,
    .vkCreatePipelineLayout = v3dv_CreatePipelineLayout,
    .vkDestroyPipelineLayout = v3dv_DestroyPipelineLayout,
    .vkCreateSampler = v3dv_CreateSampler,
    .vkDestroySampler = v3dv_DestroySampler,
    .vkCreateDescriptorSetLayout = v3dv_CreateDescriptorSetLayout,
    .vkDestroyDescriptorSetLayout = v3dv_DestroyDescriptorSetLayout,
    .vkCreateDescriptorPool = v3dv_CreateDescriptorPool,
    .vkDestroyDescriptorPool = v3dv_DestroyDescriptorPool,
    .vkResetDescriptorPool = v3dv_ResetDescriptorPool,
    .vkAllocateDescriptorSets = v3dv_AllocateDescriptorSets,
    .vkFreeDescriptorSets = v3dv_FreeDescriptorSets,
    .vkUpdateDescriptorSets = v3dv_UpdateDescriptorSets,
    .vkCreateFramebuffer = v3dv_CreateFramebuffer,
    .vkDestroyFramebuffer = v3dv_DestroyFramebuffer,
    .vkCreateRenderPass = v3dv_CreateRenderPass,
    .vkDestroyRenderPass = v3dv_DestroyRenderPass,
    .vkGetRenderAreaGranularity = v3dv_GetRenderAreaGranularity,
    .vkCreateCommandPool = v3dv_CreateCommandPool,
    .vkDestroyCommandPool = v3dv_DestroyCommandPool,
    .vkResetCommandPool = v3dv_ResetCommandPool,
    .vkAllocateCommandBuffers = v3dv_AllocateCommandBuffers,
    .vkFreeCommandBuffers = v3dv_FreeCommandBuffers,
    .vkBeginCommandBuffer = v3dv_BeginCommandBuffer,
    .vkEndCommandBuffer = v3dv_EndCommandBuffer,
    .vkResetCommandBuffer = v3dv_ResetCommandBuffer,
    .vkCmdBindPipeline = v3dv_CmdBindPipeline,
    .vkCmdSetViewport = v3dv_CmdSetViewport,
    .vkCmdSetScissor = v3dv_CmdSetScissor,
    .vkCmdSetLineWidth = v3dv_CmdSetLineWidth,
    .vkCmdSetDepthBias = v3dv_CmdSetDepthBias,
    .vkCmdSetBlendConstants = v3dv_CmdSetBlendConstants,
    .vkCmdSetDepthBounds = v3dv_CmdSetDepthBounds,
    .vkCmdSetStencilCompareMask = v3dv_CmdSetStencilCompareMask,
    .vkCmdSetStencilWriteMask = v3dv_CmdSetStencilWriteMask,
    .vkCmdSetStencilReference = v3dv_CmdSetStencilReference,
    .vkCmdBindDescriptorSets = v3dv_CmdBindDescriptorSets,
    .vkCmdBindIndexBuffer = v3dv_CmdBindIndexBuffer,
    .vkCmdBindVertexBuffers = v3dv_CmdBindVertexBuffers,
    .vkCmdDraw = v3dv_CmdDraw,
    .vkCmdDrawIndexed = v3dv_CmdDrawIndexed,
    .vkCmdDrawIndirect = v3dv_CmdDrawIndirect,
    .vkCmdDrawIndexedIndirect = v3dv_CmdDrawIndexedIndirect,
    .vkCmdDispatch = v3dv_CmdDispatch,
    .vkCmdDispatchIndirect = v3dv_CmdDispatchIndirect,
    .vkCmdCopyBuffer = v3dv_CmdCopyBuffer,
    .vkCmdCopyImage = v3dv_CmdCopyImage,
    .vkCmdBlitImage = v3dv_CmdBlitImage,
    .vkCmdCopyBufferToImage = v3dv_CmdCopyBufferToImage,
    .vkCmdCopyImageToBuffer = v3dv_CmdCopyImageToBuffer,
    .vkCmdUpdateBuffer = v3dv_CmdUpdateBuffer,
    .vkCmdFillBuffer = v3dv_CmdFillBuffer,
    .vkCmdClearColorImage = v3dv_CmdClearColorImage,
    .vkCmdClearDepthStencilImage = v3dv_CmdClearDepthStencilImage,
    .vkCmdClearAttachments = v3dv_CmdClearAttachments,
    .vkCmdResolveImage = v3dv_CmdResolveImage,
    .vkCmdSetEvent = v3dv_CmdSetEvent,
    .vkCmdResetEvent = v3dv_CmdResetEvent,
    .vkCmdWaitEvents = v3dv_CmdWaitEvents,
    .vkCmdPipelineBarrier = v3dv_CmdPipelineBarrier,
    .vkCmdBeginQuery = v3dv_CmdBeginQuery,
    .vkCmdEndQuery = v3dv_CmdEndQuery,
    .vkCmdResetQueryPool = v3dv_CmdResetQueryPool,
    .vkCmdWriteTimestamp = v3dv_CmdWriteTimestamp,
    .vkCmdCopyQueryPoolResults = v3dv_CmdCopyQueryPoolResults,
    .vkCmdPushConstants = v3dv_CmdPushConstants,
    .vkCmdBeginRenderPass = v3dv_CmdBeginRenderPass,
    .vkCmdNextSubpass = v3dv_CmdNextSubpass,
    .vkCmdEndRenderPass = v3dv_CmdEndRenderPass,
    .vkCmdExecuteCommands = v3dv_CmdExecuteCommands,
    .vkCreateSwapchainKHR = v3dv_CreateSwapchainKHR,
    .vkDestroySwapchainKHR = v3dv_DestroySwapchainKHR,
    .vkGetSwapchainImagesKHR = v3dv_GetSwapchainImagesKHR,
    .vkAcquireNextImageKHR = v3dv_AcquireNextImageKHR,
    .vkQueuePresentKHR = v3dv_QueuePresentKHR,
    .vkTrimCommandPool = v3dv_TrimCommandPool,
    .vkTrimCommandPoolKHR = v3dv_TrimCommandPool,
    .vkGetMemoryFdKHR = v3dv_GetMemoryFdKHR,
    .vkGetMemoryFdPropertiesKHR = v3dv_GetMemoryFdPropertiesKHR,
    .vkGetDeviceGroupPeerMemoryFeatures = v3dv_GetDeviceGroupPeerMemoryFeatures,
    .vkBindBufferMemory2 = v3dv_BindBufferMemory2,
    .vkBindImageMemory2 = v3dv_BindImageMemory2,
    .vkCmdSetDeviceMask = v3dv_CmdSetDeviceMask,
    .vkGetDeviceGroupPresentCapabilitiesKHR = v3dv_GetDeviceGroupPresentCapabilitiesKHR,
    .vkGetDeviceGroupSurfacePresentModesKHR = v3dv_GetDeviceGroupSurfacePresentModesKHR,
    .vkAcquireNextImage2KHR = v3dv_AcquireNextImage2KHR,
    .vkCmdDispatchBase = v3dv_CmdDispatchBase,
    .vkCreateDescriptorUpdateTemplate = v3dv_CreateDescriptorUpdateTemplate,
    .vkDestroyDescriptorUpdateTemplate = v3dv_DestroyDescriptorUpdateTemplate,
    .vkUpdateDescriptorSetWithTemplate = v3dv_UpdateDescriptorSetWithTemplate,
    .vkGetBufferMemoryRequirements2 = v3dv_GetBufferMemoryRequirements2,
    .vkGetImageMemoryRequirements2 = v3dv_GetImageMemoryRequirements2,
    .vkGetImageSparseMemoryRequirements2 = v3dv_GetImageSparseMemoryRequirements2,
    .vkCreateSamplerYcbcrConversion = v3dv_CreateSamplerYcbcrConversion,
    .vkDestroySamplerYcbcrConversion = v3dv_DestroySamplerYcbcrConversion,
    .vkGetDeviceQueue2 = v3dv_GetDeviceQueue2,
    .vkGetDescriptorSetLayoutSupport = v3dv_GetDescriptorSetLayoutSupport,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .vkGetSwapchainGrallocUsageANDROID = v3dv_GetSwapchainGrallocUsageANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .vkGetSwapchainGrallocUsage2ANDROID = v3dv_GetSwapchainGrallocUsage2ANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .vkAcquireImageANDROID = v3dv_AcquireImageANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .vkQueueSignalReleaseImageANDROID = v3dv_QueueSignalReleaseImageANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
    .vkGetImageDrmFormatModifierPropertiesEXT = v3dv_GetImageDrmFormatModifierPropertiesEXT,
    .vkCreatePrivateDataSlotEXT = v3dv_CreatePrivateDataSlotEXT,
    .vkDestroyPrivateDataSlotEXT = v3dv_DestroyPrivateDataSlotEXT,
    .vkSetPrivateDataEXT = v3dv_SetPrivateDataEXT,
    .vkGetPrivateDataEXT = v3dv_GetPrivateDataEXT,
  };


/** Return true if the core version or extension in which the given entrypoint
 * is defined is enabled.
 *
 * If device is NULL, all device extensions are considered enabled.
 */
bool
v3dv_instance_entrypoint_is_enabled(int index, uint32_t core_version,
                                   const struct v3dv_instance_extension_table *instance)
{
   switch (index) {
   case 0:
      /* vkCreateInstance */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 1:
      /* vkDestroyInstance */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 2:
      /* vkEnumeratePhysicalDevices */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 3:
      /* vkGetInstanceProcAddr */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 4:
      /* vkEnumerateInstanceVersion */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 5:
      /* vkEnumerateInstanceLayerProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 6:
      /* vkEnumerateInstanceExtensionProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 7:
      /* vkCreateDisplayPlaneSurfaceKHR */
      if (instance->KHR_display) return true;
      return false;
   case 8:
      /* vkDestroySurfaceKHR */
      if (instance->KHR_surface) return true;
      return false;
   case 9:
      /* vkCreateWaylandSurfaceKHR */
      if (instance->KHR_wayland_surface) return true;
      return false;
   case 10:
      /* vkCreateXlibSurfaceKHR */
      if (instance->KHR_xlib_surface) return true;
      return false;
   case 11:
      /* vkCreateXcbSurfaceKHR */
      if (instance->KHR_xcb_surface) return true;
      return false;
   case 12:
      /* vkCreateDebugReportCallbackEXT */
      if (instance->EXT_debug_report) return true;
      return false;
   case 13:
      /* vkDestroyDebugReportCallbackEXT */
      if (instance->EXT_debug_report) return true;
      return false;
   case 14:
      /* vkDebugReportMessageEXT */
      if (instance->EXT_debug_report) return true;
      return false;
   case 15:
      /* vkEnumeratePhysicalDeviceGroups */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   default:
      return false;
   }
}

/** Return true if the core version or extension in which the given entrypoint
 * is defined is enabled.
 *
 * If device is NULL, all device extensions are considered enabled.
 */
bool
v3dv_physical_device_entrypoint_is_enabled(int index, uint32_t core_version,
                                          const struct v3dv_instance_extension_table *instance)
{
   switch (index) {
   case 0:
      /* vkGetPhysicalDeviceProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 1:
      /* vkGetPhysicalDeviceQueueFamilyProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 2:
      /* vkGetPhysicalDeviceMemoryProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 3:
      /* vkGetPhysicalDeviceFeatures */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 4:
      /* vkGetPhysicalDeviceFormatProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 5:
      /* vkGetPhysicalDeviceImageFormatProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 6:
      /* vkCreateDevice */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 7:
      /* vkEnumerateDeviceLayerProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 8:
      /* vkEnumerateDeviceExtensionProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 9:
      /* vkGetPhysicalDeviceSparseImageFormatProperties */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 10:
      /* vkGetPhysicalDeviceDisplayPropertiesKHR */
      if (instance->KHR_display) return true;
      return false;
   case 11:
      /* vkGetPhysicalDeviceDisplayPlanePropertiesKHR */
      if (instance->KHR_display) return true;
      return false;
   case 12:
      /* vkGetDisplayPlaneSupportedDisplaysKHR */
      if (instance->KHR_display) return true;
      return false;
   case 13:
      /* vkGetDisplayModePropertiesKHR */
      if (instance->KHR_display) return true;
      return false;
   case 14:
      /* vkCreateDisplayModeKHR */
      if (instance->KHR_display) return true;
      return false;
   case 15:
      /* vkGetDisplayPlaneCapabilitiesKHR */
      if (instance->KHR_display) return true;
      return false;
   case 16:
      /* vkGetPhysicalDeviceSurfaceSupportKHR */
      if (instance->KHR_surface) return true;
      return false;
   case 17:
      /* vkGetPhysicalDeviceSurfaceCapabilitiesKHR */
      if (instance->KHR_surface) return true;
      return false;
   case 18:
      /* vkGetPhysicalDeviceSurfaceFormatsKHR */
      if (instance->KHR_surface) return true;
      return false;
   case 19:
      /* vkGetPhysicalDeviceSurfacePresentModesKHR */
      if (instance->KHR_surface) return true;
      return false;
   case 20:
      /* vkGetPhysicalDeviceWaylandPresentationSupportKHR */
      if (instance->KHR_wayland_surface) return true;
      return false;
   case 21:
      /* vkGetPhysicalDeviceXlibPresentationSupportKHR */
      if (instance->KHR_xlib_surface) return true;
      return false;
   case 22:
      /* vkGetPhysicalDeviceXcbPresentationSupportKHR */
      if (instance->KHR_xcb_surface) return true;
      return false;
   case 23:
      /* vkGetPhysicalDeviceFeatures2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 24:
      /* vkGetPhysicalDeviceFeatures2KHR */
      if (instance->KHR_get_physical_device_properties2) return true;
      return false;
   case 25:
      /* vkGetPhysicalDeviceProperties2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 26:
      /* vkGetPhysicalDeviceProperties2KHR */
      if (instance->KHR_get_physical_device_properties2) return true;
      return false;
   case 27:
      /* vkGetPhysicalDeviceFormatProperties2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 28:
      /* vkGetPhysicalDeviceFormatProperties2KHR */
      if (instance->KHR_get_physical_device_properties2) return true;
      return false;
   case 29:
      /* vkGetPhysicalDeviceImageFormatProperties2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 30:
      /* vkGetPhysicalDeviceImageFormatProperties2KHR */
      if (instance->KHR_get_physical_device_properties2) return true;
      return false;
   case 31:
      /* vkGetPhysicalDeviceQueueFamilyProperties2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 32:
      /* vkGetPhysicalDeviceQueueFamilyProperties2KHR */
      if (instance->KHR_get_physical_device_properties2) return true;
      return false;
   case 33:
      /* vkGetPhysicalDeviceMemoryProperties2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 34:
      /* vkGetPhysicalDeviceMemoryProperties2KHR */
      if (instance->KHR_get_physical_device_properties2) return true;
      return false;
   case 35:
      /* vkGetPhysicalDeviceSparseImageFormatProperties2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 36:
      /* vkGetPhysicalDeviceSparseImageFormatProperties2KHR */
      if (instance->KHR_get_physical_device_properties2) return true;
      return false;
   case 37:
      /* vkGetPhysicalDeviceExternalBufferProperties */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 38:
      /* vkGetPhysicalDeviceExternalBufferPropertiesKHR */
      if (instance->KHR_external_memory_capabilities) return true;
      return false;
   case 39:
      /* vkGetPhysicalDeviceExternalSemaphoreProperties */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 40:
      /* vkGetPhysicalDeviceExternalFenceProperties */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 41:
      /* vkGetPhysicalDevicePresentRectanglesKHR */
      /* All device extensions are considered enabled at the instance level */
      return true;
      return false;
   case 42:
      /* vkGetPhysicalDeviceSurfaceCapabilities2KHR */
      if (instance->KHR_get_surface_capabilities2) return true;
      return false;
   case 43:
      /* vkGetPhysicalDeviceSurfaceFormats2KHR */
      if (instance->KHR_get_surface_capabilities2) return true;
      return false;
   default:
      return false;
   }
}

/** Return true if the core version or extension in which the given entrypoint
 * is defined is enabled.
 *
 * If device is NULL, all device extensions are considered enabled.
 */
bool
v3dv_device_entrypoint_is_enabled(int index, uint32_t core_version,
                                 const struct v3dv_instance_extension_table *instance,
                                 const struct v3dv_device_extension_table *device)
{
   switch (index) {
   case 0:
      /* vkGetDeviceProcAddr */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 1:
      /* vkDestroyDevice */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 2:
      /* vkGetDeviceQueue */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 3:
      /* vkQueueSubmit */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 4:
      /* vkQueueWaitIdle */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 5:
      /* vkDeviceWaitIdle */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 6:
      /* vkAllocateMemory */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 7:
      /* vkFreeMemory */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 8:
      /* vkMapMemory */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 9:
      /* vkUnmapMemory */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 10:
      /* vkFlushMappedMemoryRanges */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 11:
      /* vkInvalidateMappedMemoryRanges */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 12:
      /* vkGetDeviceMemoryCommitment */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 13:
      /* vkGetBufferMemoryRequirements */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 14:
      /* vkBindBufferMemory */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 15:
      /* vkGetImageMemoryRequirements */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 16:
      /* vkBindImageMemory */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 17:
      /* vkGetImageSparseMemoryRequirements */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 18:
      /* vkQueueBindSparse */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 19:
      /* vkCreateFence */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 20:
      /* vkDestroyFence */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 21:
      /* vkResetFences */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 22:
      /* vkGetFenceStatus */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 23:
      /* vkWaitForFences */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 24:
      /* vkCreateSemaphore */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 25:
      /* vkDestroySemaphore */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 26:
      /* vkCreateEvent */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 27:
      /* vkDestroyEvent */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 28:
      /* vkGetEventStatus */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 29:
      /* vkSetEvent */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 30:
      /* vkResetEvent */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 31:
      /* vkCreateQueryPool */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 32:
      /* vkDestroyQueryPool */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 33:
      /* vkGetQueryPoolResults */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 34:
      /* vkCreateBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 35:
      /* vkDestroyBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 36:
      /* vkCreateBufferView */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 37:
      /* vkDestroyBufferView */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 38:
      /* vkCreateImage */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 39:
      /* vkDestroyImage */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 40:
      /* vkGetImageSubresourceLayout */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 41:
      /* vkCreateImageView */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 42:
      /* vkDestroyImageView */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 43:
      /* vkCreateShaderModule */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 44:
      /* vkDestroyShaderModule */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 45:
      /* vkCreatePipelineCache */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 46:
      /* vkDestroyPipelineCache */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 47:
      /* vkGetPipelineCacheData */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 48:
      /* vkMergePipelineCaches */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 49:
      /* vkCreateGraphicsPipelines */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 50:
      /* vkCreateComputePipelines */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 51:
      /* vkDestroyPipeline */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 52:
      /* vkCreatePipelineLayout */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 53:
      /* vkDestroyPipelineLayout */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 54:
      /* vkCreateSampler */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 55:
      /* vkDestroySampler */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 56:
      /* vkCreateDescriptorSetLayout */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 57:
      /* vkDestroyDescriptorSetLayout */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 58:
      /* vkCreateDescriptorPool */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 59:
      /* vkDestroyDescriptorPool */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 60:
      /* vkResetDescriptorPool */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 61:
      /* vkAllocateDescriptorSets */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 62:
      /* vkFreeDescriptorSets */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 63:
      /* vkUpdateDescriptorSets */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 64:
      /* vkCreateFramebuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 65:
      /* vkDestroyFramebuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 66:
      /* vkCreateRenderPass */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 67:
      /* vkDestroyRenderPass */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 68:
      /* vkGetRenderAreaGranularity */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 69:
      /* vkCreateCommandPool */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 70:
      /* vkDestroyCommandPool */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 71:
      /* vkResetCommandPool */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 72:
      /* vkAllocateCommandBuffers */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 73:
      /* vkFreeCommandBuffers */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 74:
      /* vkBeginCommandBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 75:
      /* vkEndCommandBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 76:
      /* vkResetCommandBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 77:
      /* vkCmdBindPipeline */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 78:
      /* vkCmdSetViewport */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 79:
      /* vkCmdSetScissor */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 80:
      /* vkCmdSetLineWidth */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 81:
      /* vkCmdSetDepthBias */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 82:
      /* vkCmdSetBlendConstants */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 83:
      /* vkCmdSetDepthBounds */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 84:
      /* vkCmdSetStencilCompareMask */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 85:
      /* vkCmdSetStencilWriteMask */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 86:
      /* vkCmdSetStencilReference */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 87:
      /* vkCmdBindDescriptorSets */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 88:
      /* vkCmdBindIndexBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 89:
      /* vkCmdBindVertexBuffers */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 90:
      /* vkCmdDraw */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 91:
      /* vkCmdDrawIndexed */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 92:
      /* vkCmdDrawIndirect */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 93:
      /* vkCmdDrawIndexedIndirect */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 94:
      /* vkCmdDispatch */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 95:
      /* vkCmdDispatchIndirect */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 96:
      /* vkCmdCopyBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 97:
      /* vkCmdCopyImage */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 98:
      /* vkCmdBlitImage */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 99:
      /* vkCmdCopyBufferToImage */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 100:
      /* vkCmdCopyImageToBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 101:
      /* vkCmdUpdateBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 102:
      /* vkCmdFillBuffer */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 103:
      /* vkCmdClearColorImage */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 104:
      /* vkCmdClearDepthStencilImage */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 105:
      /* vkCmdClearAttachments */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 106:
      /* vkCmdResolveImage */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 107:
      /* vkCmdSetEvent */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 108:
      /* vkCmdResetEvent */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 109:
      /* vkCmdWaitEvents */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 110:
      /* vkCmdPipelineBarrier */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 111:
      /* vkCmdBeginQuery */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 112:
      /* vkCmdEndQuery */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 113:
      /* vkCmdResetQueryPool */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 114:
      /* vkCmdWriteTimestamp */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 115:
      /* vkCmdCopyQueryPoolResults */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 116:
      /* vkCmdPushConstants */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 117:
      /* vkCmdBeginRenderPass */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 118:
      /* vkCmdNextSubpass */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 119:
      /* vkCmdEndRenderPass */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 120:
      /* vkCmdExecuteCommands */
      return VK_MAKE_VERSION(1, 0, 0) <= core_version;
   case 121:
      /* vkCreateSwapchainKHR */
      if (!device || device->KHR_swapchain) return true;
      return false;
   case 122:
      /* vkDestroySwapchainKHR */
      if (!device || device->KHR_swapchain) return true;
      return false;
   case 123:
      /* vkGetSwapchainImagesKHR */
      if (!device || device->KHR_swapchain) return true;
      return false;
   case 124:
      /* vkAcquireNextImageKHR */
      if (!device || device->KHR_swapchain) return true;
      return false;
   case 125:
      /* vkQueuePresentKHR */
      if (!device || device->KHR_swapchain) return true;
      return false;
   case 126:
      /* vkTrimCommandPool */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 127:
      /* vkTrimCommandPoolKHR */
      if (!device || device->KHR_maintenance1) return true;
      return false;
   case 128:
      /* vkGetMemoryFdKHR */
      if (!device || device->KHR_external_memory_fd) return true;
      return false;
   case 129:
      /* vkGetMemoryFdPropertiesKHR */
      if (!device || device->KHR_external_memory_fd) return true;
      return false;
   case 130:
      /* vkGetDeviceGroupPeerMemoryFeatures */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 131:
      /* vkBindBufferMemory2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 132:
      /* vkBindImageMemory2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 133:
      /* vkCmdSetDeviceMask */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 134:
      /* vkGetDeviceGroupPresentCapabilitiesKHR */
      if (!device || device->KHR_swapchain) return true;
      return false;
   case 135:
      /* vkGetDeviceGroupSurfacePresentModesKHR */
      if (!device || device->KHR_swapchain) return true;
      return false;
   case 136:
      /* vkAcquireNextImage2KHR */
      if (!device || device->KHR_swapchain) return true;
      return false;
   case 137:
      /* vkCmdDispatchBase */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 138:
      /* vkCreateDescriptorUpdateTemplate */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 139:
      /* vkDestroyDescriptorUpdateTemplate */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 140:
      /* vkUpdateDescriptorSetWithTemplate */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 141:
      /* vkGetBufferMemoryRequirements2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 142:
      /* vkGetImageMemoryRequirements2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 143:
      /* vkGetImageSparseMemoryRequirements2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 144:
      /* vkCreateSamplerYcbcrConversion */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 145:
      /* vkDestroySamplerYcbcrConversion */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 146:
      /* vkGetDeviceQueue2 */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 147:
      /* vkGetDescriptorSetLayoutSupport */
      return VK_MAKE_VERSION(1, 1, 0) <= core_version;
   case 148:
      /* vkGetSwapchainGrallocUsageANDROID */
      if (!device || device->ANDROID_native_buffer) return true;
      return false;
   case 149:
      /* vkGetSwapchainGrallocUsage2ANDROID */
      if (!device || device->ANDROID_native_buffer) return true;
      return false;
   case 150:
      /* vkAcquireImageANDROID */
      if (!device || device->ANDROID_native_buffer) return true;
      return false;
   case 151:
      /* vkQueueSignalReleaseImageANDROID */
      if (!device || device->ANDROID_native_buffer) return true;
      return false;
   case 152:
      /* vkGetImageDrmFormatModifierPropertiesEXT */
      if (!device || device->EXT_image_drm_format_modifier) return true;
      return false;
   case 153:
      /* vkCreatePrivateDataSlotEXT */
      if (!device || device->EXT_private_data) return true;
      return false;
   case 154:
      /* vkDestroyPrivateDataSlotEXT */
      if (!device || device->EXT_private_data) return true;
      return false;
   case 155:
      /* vkSetPrivateDataEXT */
      if (!device || device->EXT_private_data) return true;
      return false;
   case 156:
      /* vkGetPrivateDataEXT */
      if (!device || device->EXT_private_data) return true;
      return false;
   default:
      return false;
   }
}

int
v3dv_get_instance_entrypoint_index(const char *name)
{
   return instance_string_map_lookup(name);
}

int
v3dv_get_physical_device_entrypoint_index(const char *name)
{
   return physical_device_string_map_lookup(name);
}

int
v3dv_get_device_entrypoint_index(const char *name)
{
   return device_string_map_lookup(name);
}

const char *
v3dv_get_instance_entry_name(int index)
{
   return instance_entry_name(index);
}

const char *
v3dv_get_physical_device_entry_name(int index)
{
   return physical_device_entry_name(index);
}

const char *
v3dv_get_device_entry_name(int index)
{
   return device_entry_name(index);
}

void *
v3dv_lookup_entrypoint(const struct v3d_device_info *devinfo, const char *name)
{
   int idx = v3dv_get_instance_entrypoint_index(name);
   if (idx >= 0)
      return v3dv_instance_dispatch_table.entrypoints[idx];

   idx = v3dv_get_physical_device_entrypoint_index(name);
   if (idx >= 0)
      return v3dv_physical_device_dispatch_table.entrypoints[idx];

   idx = v3dv_get_device_entrypoint_index(name);
   if (idx >= 0)
      return v3dv_device_dispatch_table.entrypoints[idx];

   return NULL;
}