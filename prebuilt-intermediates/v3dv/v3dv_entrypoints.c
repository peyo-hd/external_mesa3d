
/* Copyright © 2015-2021 Intel Corporation
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

/* This file generated from vk_entrypoints_gen.py, don't edit directly. */

#include "v3dv_entrypoints.h"

/* Weak aliases for all potential implementations. These will resolve to
 * NULL if they're not defined, which lets the resolve_entrypoint() function
 * either pick the correct entry point.
 */




#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateInstance_Weak=v3dv_CreateInstance_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateInstance=v3dv_CreateInstance_Weak")
    VkResult (*v3dv_CreateInstance_Null)(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance) = 0;
    VkResult v3dv_CreateInstance_Weak(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyInstance_Weak=v3dv_DestroyInstance_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyInstance=v3dv_DestroyInstance_Weak")
    void (*v3dv_DestroyInstance_Null)(VkInstance instance, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyInstance_Weak(VkInstance instance, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EnumeratePhysicalDevices_Weak=v3dv_EnumeratePhysicalDevices_Null")
    #pragma comment(linker, "/alternatename:v3dv_EnumeratePhysicalDevices=v3dv_EnumeratePhysicalDevices_Weak")
    VkResult (*v3dv_EnumeratePhysicalDevices_Null)(VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices) = 0;
    VkResult v3dv_EnumeratePhysicalDevices_Weak(VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetInstanceProcAddr_Weak=v3dv_GetInstanceProcAddr_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetInstanceProcAddr=v3dv_GetInstanceProcAddr_Weak")
    PFN_vkVoidFunction (*v3dv_GetInstanceProcAddr_Null)(VkInstance instance, const char* pName) = 0;
    PFN_vkVoidFunction v3dv_GetInstanceProcAddr_Weak(VkInstance instance, const char* pName);
#else
    VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL v3dv_GetInstanceProcAddr(VkInstance instance, const char* pName) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EnumerateInstanceVersion_Weak=v3dv_EnumerateInstanceVersion_Null")
    #pragma comment(linker, "/alternatename:v3dv_EnumerateInstanceVersion=v3dv_EnumerateInstanceVersion_Weak")
    VkResult (*v3dv_EnumerateInstanceVersion_Null)(uint32_t* pApiVersion) = 0;
    VkResult v3dv_EnumerateInstanceVersion_Weak(uint32_t* pApiVersion);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EnumerateInstanceVersion(uint32_t* pApiVersion) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EnumerateInstanceLayerProperties_Weak=v3dv_EnumerateInstanceLayerProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_EnumerateInstanceLayerProperties=v3dv_EnumerateInstanceLayerProperties_Weak")
    VkResult (*v3dv_EnumerateInstanceLayerProperties_Null)(uint32_t* pPropertyCount, VkLayerProperties* pProperties) = 0;
    VkResult v3dv_EnumerateInstanceLayerProperties_Weak(uint32_t* pPropertyCount, VkLayerProperties* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EnumerateInstanceExtensionProperties_Weak=v3dv_EnumerateInstanceExtensionProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_EnumerateInstanceExtensionProperties=v3dv_EnumerateInstanceExtensionProperties_Weak")
    VkResult (*v3dv_EnumerateInstanceExtensionProperties_Null)(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties) = 0;
    VkResult v3dv_EnumerateInstanceExtensionProperties_Weak(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateAndroidSurfaceKHR_Weak=v3dv_CreateAndroidSurfaceKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateAndroidSurfaceKHR=v3dv_CreateAndroidSurfaceKHR_Weak")
    VkResult (*v3dv_CreateAndroidSurfaceKHR_Null)(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateAndroidSurfaceKHR_Weak(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateAndroidSurfaceKHR(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDisplayPlaneSurfaceKHR_Weak=v3dv_CreateDisplayPlaneSurfaceKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDisplayPlaneSurfaceKHR=v3dv_CreateDisplayPlaneSurfaceKHR_Weak")
    VkResult (*v3dv_CreateDisplayPlaneSurfaceKHR_Null)(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateDisplayPlaneSurfaceKHR_Weak(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroySurfaceKHR_Weak=v3dv_DestroySurfaceKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroySurfaceKHR=v3dv_DestroySurfaceKHR_Weak")
    void (*v3dv_DestroySurfaceKHR_Null)(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroySurfaceKHR_Weak(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_VI_NN
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateViSurfaceNN_Weak=v3dv_CreateViSurfaceNN_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateViSurfaceNN=v3dv_CreateViSurfaceNN_Weak")
    VkResult (*v3dv_CreateViSurfaceNN_Null)(VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateViSurfaceNN_Weak(VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateViSurfaceNN(VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_VI_NN
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateWaylandSurfaceKHR_Weak=v3dv_CreateWaylandSurfaceKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateWaylandSurfaceKHR=v3dv_CreateWaylandSurfaceKHR_Weak")
    VkResult (*v3dv_CreateWaylandSurfaceKHR_Null)(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateWaylandSurfaceKHR_Weak(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateWaylandSurfaceKHR(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateWin32SurfaceKHR_Weak=v3dv_CreateWin32SurfaceKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateWin32SurfaceKHR=v3dv_CreateWin32SurfaceKHR_Weak")
    VkResult (*v3dv_CreateWin32SurfaceKHR_Null)(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateWin32SurfaceKHR_Weak(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateXlibSurfaceKHR_Weak=v3dv_CreateXlibSurfaceKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateXlibSurfaceKHR=v3dv_CreateXlibSurfaceKHR_Weak")
    VkResult (*v3dv_CreateXlibSurfaceKHR_Null)(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateXlibSurfaceKHR_Weak(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateXcbSurfaceKHR_Weak=v3dv_CreateXcbSurfaceKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateXcbSurfaceKHR=v3dv_CreateXcbSurfaceKHR_Weak")
    VkResult (*v3dv_CreateXcbSurfaceKHR_Null)(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateXcbSurfaceKHR_Weak(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDirectFBSurfaceEXT_Weak=v3dv_CreateDirectFBSurfaceEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDirectFBSurfaceEXT=v3dv_CreateDirectFBSurfaceEXT_Weak")
    VkResult (*v3dv_CreateDirectFBSurfaceEXT_Null)(VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateDirectFBSurfaceEXT_Weak(VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDirectFBSurfaceEXT(VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateImagePipeSurfaceFUCHSIA_Weak=v3dv_CreateImagePipeSurfaceFUCHSIA_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateImagePipeSurfaceFUCHSIA=v3dv_CreateImagePipeSurfaceFUCHSIA_Weak")
    VkResult (*v3dv_CreateImagePipeSurfaceFUCHSIA_Null)(VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateImagePipeSurfaceFUCHSIA_Weak(VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateImagePipeSurfaceFUCHSIA(VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_GGP
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateStreamDescriptorSurfaceGGP_Weak=v3dv_CreateStreamDescriptorSurfaceGGP_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateStreamDescriptorSurfaceGGP=v3dv_CreateStreamDescriptorSurfaceGGP_Weak")
    VkResult (*v3dv_CreateStreamDescriptorSurfaceGGP_Null)(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateStreamDescriptorSurfaceGGP_Weak(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateStreamDescriptorSurfaceGGP(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_GGP
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDebugReportCallbackEXT_Weak=v3dv_CreateDebugReportCallbackEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDebugReportCallbackEXT=v3dv_CreateDebugReportCallbackEXT_Weak")
    VkResult (*v3dv_CreateDebugReportCallbackEXT_Null)(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback) = 0;
    VkResult v3dv_CreateDebugReportCallbackEXT_Weak(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyDebugReportCallbackEXT_Weak=v3dv_DestroyDebugReportCallbackEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyDebugReportCallbackEXT=v3dv_DestroyDebugReportCallbackEXT_Weak")
    void (*v3dv_DestroyDebugReportCallbackEXT_Null)(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyDebugReportCallbackEXT_Weak(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DebugReportMessageEXT_Weak=v3dv_DebugReportMessageEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_DebugReportMessageEXT=v3dv_DebugReportMessageEXT_Weak")
    void (*v3dv_DebugReportMessageEXT_Null)(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage) = 0;
    void v3dv_DebugReportMessageEXT_Weak(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EnumeratePhysicalDeviceGroups_Weak=v3dv_EnumeratePhysicalDeviceGroups_Null")
    #pragma comment(linker, "/alternatename:v3dv_EnumeratePhysicalDeviceGroups=v3dv_EnumeratePhysicalDeviceGroups_Weak")
    VkResult (*v3dv_EnumeratePhysicalDeviceGroups_Null)(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) = 0;
    VkResult v3dv_EnumeratePhysicalDeviceGroups_Weak(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EnumeratePhysicalDeviceGroupsKHR_Weak=v3dv_EnumeratePhysicalDeviceGroupsKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_EnumeratePhysicalDeviceGroupsKHR=v3dv_EnumeratePhysicalDeviceGroupsKHR_Weak")
    VkResult (*v3dv_EnumeratePhysicalDeviceGroupsKHR_Null)(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) = 0;
    VkResult v3dv_EnumeratePhysicalDeviceGroupsKHR_Weak(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EnumeratePhysicalDeviceGroupsKHR(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_IOS_MVK
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateIOSSurfaceMVK_Weak=v3dv_CreateIOSSurfaceMVK_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateIOSSurfaceMVK=v3dv_CreateIOSSurfaceMVK_Weak")
    VkResult (*v3dv_CreateIOSSurfaceMVK_Null)(VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateIOSSurfaceMVK_Weak(VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateIOSSurfaceMVK(VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateMacOSSurfaceMVK_Weak=v3dv_CreateMacOSSurfaceMVK_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateMacOSSurfaceMVK=v3dv_CreateMacOSSurfaceMVK_Weak")
    VkResult (*v3dv_CreateMacOSSurfaceMVK_Null)(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateMacOSSurfaceMVK_Weak(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateMacOSSurfaceMVK(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_MACOS_MVK
#ifdef VK_USE_PLATFORM_METAL_EXT
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateMetalSurfaceEXT_Weak=v3dv_CreateMetalSurfaceEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateMetalSurfaceEXT=v3dv_CreateMetalSurfaceEXT_Weak")
    VkResult (*v3dv_CreateMetalSurfaceEXT_Null)(VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateMetalSurfaceEXT_Weak(VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateMetalSurfaceEXT(VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_METAL_EXT
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDebugUtilsMessengerEXT_Weak=v3dv_CreateDebugUtilsMessengerEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDebugUtilsMessengerEXT=v3dv_CreateDebugUtilsMessengerEXT_Weak")
    VkResult (*v3dv_CreateDebugUtilsMessengerEXT_Null)(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger) = 0;
    VkResult v3dv_CreateDebugUtilsMessengerEXT_Weak(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyDebugUtilsMessengerEXT_Weak=v3dv_DestroyDebugUtilsMessengerEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyDebugUtilsMessengerEXT=v3dv_DestroyDebugUtilsMessengerEXT_Weak")
    void (*v3dv_DestroyDebugUtilsMessengerEXT_Null)(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyDebugUtilsMessengerEXT_Weak(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_SubmitDebugUtilsMessageEXT_Weak=v3dv_SubmitDebugUtilsMessageEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_SubmitDebugUtilsMessageEXT=v3dv_SubmitDebugUtilsMessageEXT_Weak")
    void (*v3dv_SubmitDebugUtilsMessageEXT_Null)(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData) = 0;
    void v3dv_SubmitDebugUtilsMessageEXT_Weak(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_SubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateHeadlessSurfaceEXT_Weak=v3dv_CreateHeadlessSurfaceEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateHeadlessSurfaceEXT=v3dv_CreateHeadlessSurfaceEXT_Weak")
    VkResult (*v3dv_CreateHeadlessSurfaceEXT_Null)(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) = 0;
    VkResult v3dv_CreateHeadlessSurfaceEXT_Weak(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateHeadlessSurfaceEXT(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif

const struct vk_instance_entrypoint_table v3dv_instance_entrypoints = {
    .CreateInstance = v3dv_CreateInstance,
    .DestroyInstance = v3dv_DestroyInstance,
    .EnumeratePhysicalDevices = v3dv_EnumeratePhysicalDevices,
    .GetInstanceProcAddr = v3dv_GetInstanceProcAddr,
    .EnumerateInstanceVersion = v3dv_EnumerateInstanceVersion,
    .EnumerateInstanceLayerProperties = v3dv_EnumerateInstanceLayerProperties,
    .EnumerateInstanceExtensionProperties = v3dv_EnumerateInstanceExtensionProperties,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .CreateAndroidSurfaceKHR = v3dv_CreateAndroidSurfaceKHR,
#endif // VK_USE_PLATFORM_ANDROID_KHR
    .CreateDisplayPlaneSurfaceKHR = v3dv_CreateDisplayPlaneSurfaceKHR,
    .DestroySurfaceKHR = v3dv_DestroySurfaceKHR,
#ifdef VK_USE_PLATFORM_VI_NN
    .CreateViSurfaceNN = v3dv_CreateViSurfaceNN,
#endif // VK_USE_PLATFORM_VI_NN
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    .CreateWaylandSurfaceKHR = v3dv_CreateWaylandSurfaceKHR,
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .CreateWin32SurfaceKHR = v3dv_CreateWin32SurfaceKHR,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
    .CreateXlibSurfaceKHR = v3dv_CreateXlibSurfaceKHR,
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    .CreateXcbSurfaceKHR = v3dv_CreateXcbSurfaceKHR,
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    .CreateDirectFBSurfaceEXT = v3dv_CreateDirectFBSurfaceEXT,
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_FUCHSIA
    .CreateImagePipeSurfaceFUCHSIA = v3dv_CreateImagePipeSurfaceFUCHSIA,
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_GGP
    .CreateStreamDescriptorSurfaceGGP = v3dv_CreateStreamDescriptorSurfaceGGP,
#endif // VK_USE_PLATFORM_GGP
    .CreateDebugReportCallbackEXT = v3dv_CreateDebugReportCallbackEXT,
    .DestroyDebugReportCallbackEXT = v3dv_DestroyDebugReportCallbackEXT,
    .DebugReportMessageEXT = v3dv_DebugReportMessageEXT,
    .EnumeratePhysicalDeviceGroups = v3dv_EnumeratePhysicalDeviceGroups,
    .EnumeratePhysicalDeviceGroupsKHR = v3dv_EnumeratePhysicalDeviceGroupsKHR,
#ifdef VK_USE_PLATFORM_IOS_MVK
    .CreateIOSSurfaceMVK = v3dv_CreateIOSSurfaceMVK,
#endif // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    .CreateMacOSSurfaceMVK = v3dv_CreateMacOSSurfaceMVK,
#endif // VK_USE_PLATFORM_MACOS_MVK
#ifdef VK_USE_PLATFORM_METAL_EXT
    .CreateMetalSurfaceEXT = v3dv_CreateMetalSurfaceEXT,
#endif // VK_USE_PLATFORM_METAL_EXT
    .CreateDebugUtilsMessengerEXT = v3dv_CreateDebugUtilsMessengerEXT,
    .DestroyDebugUtilsMessengerEXT = v3dv_DestroyDebugUtilsMessengerEXT,
    .SubmitDebugUtilsMessageEXT = v3dv_SubmitDebugUtilsMessageEXT,
    .CreateHeadlessSurfaceEXT = v3dv_CreateHeadlessSurfaceEXT,
};


#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceProperties_Weak=v3dv_GetPhysicalDeviceProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceProperties=v3dv_GetPhysicalDeviceProperties_Weak")
    void (*v3dv_GetPhysicalDeviceProperties_Null)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties) = 0;
    void v3dv_GetPhysicalDeviceProperties_Weak(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceQueueFamilyProperties_Weak=v3dv_GetPhysicalDeviceQueueFamilyProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceQueueFamilyProperties=v3dv_GetPhysicalDeviceQueueFamilyProperties_Weak")
    void (*v3dv_GetPhysicalDeviceQueueFamilyProperties_Null)(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties) = 0;
    void v3dv_GetPhysicalDeviceQueueFamilyProperties_Weak(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceMemoryProperties_Weak=v3dv_GetPhysicalDeviceMemoryProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceMemoryProperties=v3dv_GetPhysicalDeviceMemoryProperties_Weak")
    void (*v3dv_GetPhysicalDeviceMemoryProperties_Null)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties) = 0;
    void v3dv_GetPhysicalDeviceMemoryProperties_Weak(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFeatures_Weak=v3dv_GetPhysicalDeviceFeatures_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFeatures=v3dv_GetPhysicalDeviceFeatures_Weak")
    void (*v3dv_GetPhysicalDeviceFeatures_Null)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures) = 0;
    void v3dv_GetPhysicalDeviceFeatures_Weak(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFormatProperties_Weak=v3dv_GetPhysicalDeviceFormatProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFormatProperties=v3dv_GetPhysicalDeviceFormatProperties_Weak")
    void (*v3dv_GetPhysicalDeviceFormatProperties_Null)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties) = 0;
    void v3dv_GetPhysicalDeviceFormatProperties_Weak(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceImageFormatProperties_Weak=v3dv_GetPhysicalDeviceImageFormatProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceImageFormatProperties=v3dv_GetPhysicalDeviceImageFormatProperties_Weak")
    VkResult (*v3dv_GetPhysicalDeviceImageFormatProperties_Null)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceImageFormatProperties_Weak(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDevice_Weak=v3dv_CreateDevice_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDevice=v3dv_CreateDevice_Weak")
    VkResult (*v3dv_CreateDevice_Null)(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice) = 0;
    VkResult v3dv_CreateDevice_Weak(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EnumerateDeviceLayerProperties_Weak=v3dv_EnumerateDeviceLayerProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_EnumerateDeviceLayerProperties=v3dv_EnumerateDeviceLayerProperties_Weak")
    VkResult (*v3dv_EnumerateDeviceLayerProperties_Null)(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties) = 0;
    VkResult v3dv_EnumerateDeviceLayerProperties_Weak(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EnumerateDeviceExtensionProperties_Weak=v3dv_EnumerateDeviceExtensionProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_EnumerateDeviceExtensionProperties=v3dv_EnumerateDeviceExtensionProperties_Weak")
    VkResult (*v3dv_EnumerateDeviceExtensionProperties_Null)(VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties) = 0;
    VkResult v3dv_EnumerateDeviceExtensionProperties_Weak(VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSparseImageFormatProperties_Weak=v3dv_GetPhysicalDeviceSparseImageFormatProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSparseImageFormatProperties=v3dv_GetPhysicalDeviceSparseImageFormatProperties_Weak")
    void (*v3dv_GetPhysicalDeviceSparseImageFormatProperties_Null)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties) = 0;
    void v3dv_GetPhysicalDeviceSparseImageFormatProperties_Weak(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDisplayPropertiesKHR_Weak=v3dv_GetPhysicalDeviceDisplayPropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDisplayPropertiesKHR=v3dv_GetPhysicalDeviceDisplayPropertiesKHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceDisplayPropertiesKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceDisplayPropertiesKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR_Weak=v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR=v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayPlaneSupportedDisplaysKHR_Weak=v3dv_GetDisplayPlaneSupportedDisplaysKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayPlaneSupportedDisplaysKHR=v3dv_GetDisplayPlaneSupportedDisplaysKHR_Weak")
    VkResult (*v3dv_GetDisplayPlaneSupportedDisplaysKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays) = 0;
    VkResult v3dv_GetDisplayPlaneSupportedDisplaysKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayModePropertiesKHR_Weak=v3dv_GetDisplayModePropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayModePropertiesKHR=v3dv_GetDisplayModePropertiesKHR_Weak")
    VkResult (*v3dv_GetDisplayModePropertiesKHR_Null)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties) = 0;
    VkResult v3dv_GetDisplayModePropertiesKHR_Weak(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDisplayModeKHR_Weak=v3dv_CreateDisplayModeKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDisplayModeKHR=v3dv_CreateDisplayModeKHR_Weak")
    VkResult (*v3dv_CreateDisplayModeKHR_Null)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) = 0;
    VkResult v3dv_CreateDisplayModeKHR_Weak(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayPlaneCapabilitiesKHR_Weak=v3dv_GetDisplayPlaneCapabilitiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayPlaneCapabilitiesKHR=v3dv_GetDisplayPlaneCapabilitiesKHR_Weak")
    VkResult (*v3dv_GetDisplayPlaneCapabilitiesKHR_Null)(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities) = 0;
    VkResult v3dv_GetDisplayPlaneCapabilitiesKHR_Weak(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceSupportKHR_Weak=v3dv_GetPhysicalDeviceSurfaceSupportKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceSupportKHR=v3dv_GetPhysicalDeviceSurfaceSupportKHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceSurfaceSupportKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported) = 0;
    VkResult v3dv_GetPhysicalDeviceSurfaceSupportKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR_Weak=v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR=v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR_Null)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) = 0;
    VkResult v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR_Weak(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceFormatsKHR_Weak=v3dv_GetPhysicalDeviceSurfaceFormatsKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceFormatsKHR=v3dv_GetPhysicalDeviceSurfaceFormatsKHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceSurfaceFormatsKHR_Null)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats) = 0;
    VkResult v3dv_GetPhysicalDeviceSurfaceFormatsKHR_Weak(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfacePresentModesKHR_Weak=v3dv_GetPhysicalDeviceSurfacePresentModesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfacePresentModesKHR=v3dv_GetPhysicalDeviceSurfacePresentModesKHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceSurfacePresentModesKHR_Null)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) = 0;
    VkResult v3dv_GetPhysicalDeviceSurfacePresentModesKHR_Weak(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR_Weak=v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR=v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR_Weak")
    VkBool32 (*v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display) = 0;
    VkBool32 v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display);
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceWin32PresentationSupportKHR_Weak=v3dv_GetPhysicalDeviceWin32PresentationSupportKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceWin32PresentationSupportKHR=v3dv_GetPhysicalDeviceWin32PresentationSupportKHR_Weak")
    VkBool32 (*v3dv_GetPhysicalDeviceWin32PresentationSupportKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex) = 0;
    VkBool32 v3dv_GetPhysicalDeviceWin32PresentationSupportKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex);
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL v3dv_GetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceXlibPresentationSupportKHR_Weak=v3dv_GetPhysicalDeviceXlibPresentationSupportKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceXlibPresentationSupportKHR=v3dv_GetPhysicalDeviceXlibPresentationSupportKHR_Weak")
    VkBool32 (*v3dv_GetPhysicalDeviceXlibPresentationSupportKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID) = 0;
    VkBool32 v3dv_GetPhysicalDeviceXlibPresentationSupportKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID);
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL v3dv_GetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceXcbPresentationSupportKHR_Weak=v3dv_GetPhysicalDeviceXcbPresentationSupportKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceXcbPresentationSupportKHR=v3dv_GetPhysicalDeviceXcbPresentationSupportKHR_Weak")
    VkBool32 (*v3dv_GetPhysicalDeviceXcbPresentationSupportKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id) = 0;
    VkBool32 v3dv_GetPhysicalDeviceXcbPresentationSupportKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id);
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL v3dv_GetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDirectFBPresentationSupportEXT_Weak=v3dv_GetPhysicalDeviceDirectFBPresentationSupportEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDirectFBPresentationSupportEXT=v3dv_GetPhysicalDeviceDirectFBPresentationSupportEXT_Weak")
    VkBool32 (*v3dv_GetPhysicalDeviceDirectFBPresentationSupportEXT_Null)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb) = 0;
    VkBool32 v3dv_GetPhysicalDeviceDirectFBPresentationSupportEXT_Weak(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb);
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL v3dv_GetPhysicalDeviceDirectFBPresentationSupportEXT(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalImageFormatPropertiesNV_Weak=v3dv_GetPhysicalDeviceExternalImageFormatPropertiesNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalImageFormatPropertiesNV=v3dv_GetPhysicalDeviceExternalImageFormatPropertiesNV_Weak")
    VkResult (*v3dv_GetPhysicalDeviceExternalImageFormatPropertiesNV_Null)(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceExternalImageFormatPropertiesNV_Weak(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFeatures2_Weak=v3dv_GetPhysicalDeviceFeatures2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFeatures2=v3dv_GetPhysicalDeviceFeatures2_Weak")
    void (*v3dv_GetPhysicalDeviceFeatures2_Null)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) = 0;
    void v3dv_GetPhysicalDeviceFeatures2_Weak(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFeatures2KHR_Weak=v3dv_GetPhysicalDeviceFeatures2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFeatures2KHR=v3dv_GetPhysicalDeviceFeatures2KHR_Weak")
    void (*v3dv_GetPhysicalDeviceFeatures2KHR_Null)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) = 0;
    void v3dv_GetPhysicalDeviceFeatures2KHR_Weak(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceProperties2_Weak=v3dv_GetPhysicalDeviceProperties2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceProperties2=v3dv_GetPhysicalDeviceProperties2_Weak")
    void (*v3dv_GetPhysicalDeviceProperties2_Null)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) = 0;
    void v3dv_GetPhysicalDeviceProperties2_Weak(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceProperties2KHR_Weak=v3dv_GetPhysicalDeviceProperties2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceProperties2KHR=v3dv_GetPhysicalDeviceProperties2KHR_Weak")
    void (*v3dv_GetPhysicalDeviceProperties2KHR_Null)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) = 0;
    void v3dv_GetPhysicalDeviceProperties2KHR_Weak(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFormatProperties2_Weak=v3dv_GetPhysicalDeviceFormatProperties2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFormatProperties2=v3dv_GetPhysicalDeviceFormatProperties2_Weak")
    void (*v3dv_GetPhysicalDeviceFormatProperties2_Null)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) = 0;
    void v3dv_GetPhysicalDeviceFormatProperties2_Weak(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFormatProperties2KHR_Weak=v3dv_GetPhysicalDeviceFormatProperties2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFormatProperties2KHR=v3dv_GetPhysicalDeviceFormatProperties2KHR_Weak")
    void (*v3dv_GetPhysicalDeviceFormatProperties2KHR_Null)(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) = 0;
    void v3dv_GetPhysicalDeviceFormatProperties2KHR_Weak(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceImageFormatProperties2_Weak=v3dv_GetPhysicalDeviceImageFormatProperties2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceImageFormatProperties2=v3dv_GetPhysicalDeviceImageFormatProperties2_Weak")
    VkResult (*v3dv_GetPhysicalDeviceImageFormatProperties2_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceImageFormatProperties2_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceImageFormatProperties2KHR_Weak=v3dv_GetPhysicalDeviceImageFormatProperties2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceImageFormatProperties2KHR=v3dv_GetPhysicalDeviceImageFormatProperties2KHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceImageFormatProperties2KHR_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceImageFormatProperties2KHR_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceQueueFamilyProperties2_Weak=v3dv_GetPhysicalDeviceQueueFamilyProperties2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceQueueFamilyProperties2=v3dv_GetPhysicalDeviceQueueFamilyProperties2_Weak")
    void (*v3dv_GetPhysicalDeviceQueueFamilyProperties2_Null)(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) = 0;
    void v3dv_GetPhysicalDeviceQueueFamilyProperties2_Weak(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceQueueFamilyProperties2KHR_Weak=v3dv_GetPhysicalDeviceQueueFamilyProperties2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceQueueFamilyProperties2KHR=v3dv_GetPhysicalDeviceQueueFamilyProperties2KHR_Weak")
    void (*v3dv_GetPhysicalDeviceQueueFamilyProperties2KHR_Null)(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) = 0;
    void v3dv_GetPhysicalDeviceQueueFamilyProperties2KHR_Weak(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceQueueFamilyProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceMemoryProperties2_Weak=v3dv_GetPhysicalDeviceMemoryProperties2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceMemoryProperties2=v3dv_GetPhysicalDeviceMemoryProperties2_Weak")
    void (*v3dv_GetPhysicalDeviceMemoryProperties2_Null)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) = 0;
    void v3dv_GetPhysicalDeviceMemoryProperties2_Weak(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceMemoryProperties2KHR_Weak=v3dv_GetPhysicalDeviceMemoryProperties2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceMemoryProperties2KHR=v3dv_GetPhysicalDeviceMemoryProperties2KHR_Weak")
    void (*v3dv_GetPhysicalDeviceMemoryProperties2KHR_Null)(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) = 0;
    void v3dv_GetPhysicalDeviceMemoryProperties2KHR_Weak(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceMemoryProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSparseImageFormatProperties2_Weak=v3dv_GetPhysicalDeviceSparseImageFormatProperties2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSparseImageFormatProperties2=v3dv_GetPhysicalDeviceSparseImageFormatProperties2_Weak")
    void (*v3dv_GetPhysicalDeviceSparseImageFormatProperties2_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) = 0;
    void v3dv_GetPhysicalDeviceSparseImageFormatProperties2_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSparseImageFormatProperties2KHR_Weak=v3dv_GetPhysicalDeviceSparseImageFormatProperties2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSparseImageFormatProperties2KHR=v3dv_GetPhysicalDeviceSparseImageFormatProperties2KHR_Weak")
    void (*v3dv_GetPhysicalDeviceSparseImageFormatProperties2KHR_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) = 0;
    void v3dv_GetPhysicalDeviceSparseImageFormatProperties2KHR_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceSparseImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalBufferProperties_Weak=v3dv_GetPhysicalDeviceExternalBufferProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalBufferProperties=v3dv_GetPhysicalDeviceExternalBufferProperties_Weak")
    void (*v3dv_GetPhysicalDeviceExternalBufferProperties_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) = 0;
    void v3dv_GetPhysicalDeviceExternalBufferProperties_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalBufferPropertiesKHR_Weak=v3dv_GetPhysicalDeviceExternalBufferPropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalBufferPropertiesKHR=v3dv_GetPhysicalDeviceExternalBufferPropertiesKHR_Weak")
    void (*v3dv_GetPhysicalDeviceExternalBufferPropertiesKHR_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) = 0;
    void v3dv_GetPhysicalDeviceExternalBufferPropertiesKHR_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceExternalBufferPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalSemaphoreProperties_Weak=v3dv_GetPhysicalDeviceExternalSemaphoreProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalSemaphoreProperties=v3dv_GetPhysicalDeviceExternalSemaphoreProperties_Weak")
    void (*v3dv_GetPhysicalDeviceExternalSemaphoreProperties_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) = 0;
    void v3dv_GetPhysicalDeviceExternalSemaphoreProperties_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalSemaphorePropertiesKHR_Weak=v3dv_GetPhysicalDeviceExternalSemaphorePropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalSemaphorePropertiesKHR=v3dv_GetPhysicalDeviceExternalSemaphorePropertiesKHR_Weak")
    void (*v3dv_GetPhysicalDeviceExternalSemaphorePropertiesKHR_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) = 0;
    void v3dv_GetPhysicalDeviceExternalSemaphorePropertiesKHR_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceExternalSemaphorePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalFenceProperties_Weak=v3dv_GetPhysicalDeviceExternalFenceProperties_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalFenceProperties=v3dv_GetPhysicalDeviceExternalFenceProperties_Weak")
    void (*v3dv_GetPhysicalDeviceExternalFenceProperties_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) = 0;
    void v3dv_GetPhysicalDeviceExternalFenceProperties_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalFencePropertiesKHR_Weak=v3dv_GetPhysicalDeviceExternalFencePropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceExternalFencePropertiesKHR=v3dv_GetPhysicalDeviceExternalFencePropertiesKHR_Weak")
    void (*v3dv_GetPhysicalDeviceExternalFencePropertiesKHR_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) = 0;
    void v3dv_GetPhysicalDeviceExternalFencePropertiesKHR_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceExternalFencePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ReleaseDisplayEXT_Weak=v3dv_ReleaseDisplayEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_ReleaseDisplayEXT=v3dv_ReleaseDisplayEXT_Weak")
    VkResult (*v3dv_ReleaseDisplayEXT_Null)(VkPhysicalDevice physicalDevice, VkDisplayKHR display) = 0;
    VkResult v3dv_ReleaseDisplayEXT_Weak(VkPhysicalDevice physicalDevice, VkDisplayKHR display);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AcquireXlibDisplayEXT_Weak=v3dv_AcquireXlibDisplayEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_AcquireXlibDisplayEXT=v3dv_AcquireXlibDisplayEXT_Weak")
    VkResult (*v3dv_AcquireXlibDisplayEXT_Null)(VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display) = 0;
    VkResult v3dv_AcquireXlibDisplayEXT_Weak(VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetRandROutputDisplayEXT_Weak=v3dv_GetRandROutputDisplayEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetRandROutputDisplayEXT=v3dv_GetRandROutputDisplayEXT_Weak")
    VkResult (*v3dv_GetRandROutputDisplayEXT_Null)(VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay) = 0;
    VkResult v3dv_GetRandROutputDisplayEXT_Weak(VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetRandROutputDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AcquireWinrtDisplayNV_Weak=v3dv_AcquireWinrtDisplayNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_AcquireWinrtDisplayNV=v3dv_AcquireWinrtDisplayNV_Weak")
    VkResult (*v3dv_AcquireWinrtDisplayNV_Null)(VkPhysicalDevice physicalDevice, VkDisplayKHR display) = 0;
    VkResult v3dv_AcquireWinrtDisplayNV_Weak(VkPhysicalDevice physicalDevice, VkDisplayKHR display);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetWinrtDisplayNV_Weak=v3dv_GetWinrtDisplayNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetWinrtDisplayNV=v3dv_GetWinrtDisplayNV_Weak")
    VkResult (*v3dv_GetWinrtDisplayNV_Null)(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay) = 0;
    VkResult v3dv_GetWinrtDisplayNV_Weak(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceCapabilities2EXT_Weak=v3dv_GetPhysicalDeviceSurfaceCapabilities2EXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceCapabilities2EXT=v3dv_GetPhysicalDeviceSurfaceCapabilities2EXT_Weak")
    VkResult (*v3dv_GetPhysicalDeviceSurfaceCapabilities2EXT_Null)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities) = 0;
    VkResult v3dv_GetPhysicalDeviceSurfaceCapabilities2EXT_Weak(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDevicePresentRectanglesKHR_Weak=v3dv_GetPhysicalDevicePresentRectanglesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDevicePresentRectanglesKHR=v3dv_GetPhysicalDevicePresentRectanglesKHR_Weak")
    VkResult (*v3dv_GetPhysicalDevicePresentRectanglesKHR_Null)(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects) = 0;
    VkResult v3dv_GetPhysicalDevicePresentRectanglesKHR_Weak(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceMultisamplePropertiesEXT_Weak=v3dv_GetPhysicalDeviceMultisamplePropertiesEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceMultisamplePropertiesEXT=v3dv_GetPhysicalDeviceMultisamplePropertiesEXT_Weak")
    void (*v3dv_GetPhysicalDeviceMultisamplePropertiesEXT_Null)(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties) = 0;
    void v3dv_GetPhysicalDeviceMultisamplePropertiesEXT_Weak(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceMultisamplePropertiesEXT(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR_Weak=v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR=v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities) = 0;
    VkResult v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceFormats2KHR_Weak=v3dv_GetPhysicalDeviceSurfaceFormats2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfaceFormats2KHR=v3dv_GetPhysicalDeviceSurfaceFormats2KHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceSurfaceFormats2KHR_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats) = 0;
    VkResult v3dv_GetPhysicalDeviceSurfaceFormats2KHR_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDisplayProperties2KHR_Weak=v3dv_GetPhysicalDeviceDisplayProperties2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDisplayProperties2KHR=v3dv_GetPhysicalDeviceDisplayProperties2KHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceDisplayProperties2KHR_Null)(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceDisplayProperties2KHR_Weak(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDisplayPlaneProperties2KHR_Weak=v3dv_GetPhysicalDeviceDisplayPlaneProperties2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceDisplayPlaneProperties2KHR=v3dv_GetPhysicalDeviceDisplayPlaneProperties2KHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceDisplayPlaneProperties2KHR_Null)(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceDisplayPlaneProperties2KHR_Weak(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayModeProperties2KHR_Weak=v3dv_GetDisplayModeProperties2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayModeProperties2KHR=v3dv_GetDisplayModeProperties2KHR_Weak")
    VkResult (*v3dv_GetDisplayModeProperties2KHR_Null)(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties) = 0;
    VkResult v3dv_GetDisplayModeProperties2KHR_Weak(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayPlaneCapabilities2KHR_Weak=v3dv_GetDisplayPlaneCapabilities2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDisplayPlaneCapabilities2KHR=v3dv_GetDisplayPlaneCapabilities2KHR_Weak")
    VkResult (*v3dv_GetDisplayPlaneCapabilities2KHR_Null)(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities) = 0;
    VkResult v3dv_GetDisplayPlaneCapabilities2KHR_Weak(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceCalibrateableTimeDomainsEXT_Weak=v3dv_GetPhysicalDeviceCalibrateableTimeDomainsEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceCalibrateableTimeDomainsEXT=v3dv_GetPhysicalDeviceCalibrateableTimeDomainsEXT_Weak")
    VkResult (*v3dv_GetPhysicalDeviceCalibrateableTimeDomainsEXT_Null)(VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains) = 0;
    VkResult v3dv_GetPhysicalDeviceCalibrateableTimeDomainsEXT_Weak(VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceCooperativeMatrixPropertiesNV_Weak=v3dv_GetPhysicalDeviceCooperativeMatrixPropertiesNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceCooperativeMatrixPropertiesNV=v3dv_GetPhysicalDeviceCooperativeMatrixPropertiesNV_Weak")
    VkResult (*v3dv_GetPhysicalDeviceCooperativeMatrixPropertiesNV_Null)(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceCooperativeMatrixPropertiesNV_Weak(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfacePresentModes2EXT_Weak=v3dv_GetPhysicalDeviceSurfacePresentModes2EXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSurfacePresentModes2EXT=v3dv_GetPhysicalDeviceSurfacePresentModes2EXT_Weak")
    VkResult (*v3dv_GetPhysicalDeviceSurfacePresentModes2EXT_Null)(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) = 0;
    VkResult v3dv_GetPhysicalDeviceSurfacePresentModes2EXT_Weak(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceSurfacePresentModes2EXT(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_Weak=v3dv_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR=v3dv_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_Weak")
    VkResult (*v3dv_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions) = 0;
    VkResult v3dv_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_Weak=v3dv_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR=v3dv_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_Weak")
    void (*v3dv_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_Null)(VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) = 0;
    void v3dv_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_Weak(VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_Weak=v3dv_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV=v3dv_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_Weak")
    VkResult (*v3dv_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_Null)(VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations) = 0;
    VkResult v3dv_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_Weak(VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceToolPropertiesEXT_Weak=v3dv_GetPhysicalDeviceToolPropertiesEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceToolPropertiesEXT=v3dv_GetPhysicalDeviceToolPropertiesEXT_Weak")
    VkResult (*v3dv_GetPhysicalDeviceToolPropertiesEXT_Null)(VkPhysicalDevice physicalDevice, uint32_t* pToolCount, VkPhysicalDeviceToolPropertiesEXT* pToolProperties) = 0;
    VkResult v3dv_GetPhysicalDeviceToolPropertiesEXT_Weak(VkPhysicalDevice physicalDevice, uint32_t* pToolCount, VkPhysicalDeviceToolPropertiesEXT* pToolProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceToolPropertiesEXT(VkPhysicalDevice physicalDevice, uint32_t* pToolCount, VkPhysicalDeviceToolPropertiesEXT* pToolProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFragmentShadingRatesKHR_Weak=v3dv_GetPhysicalDeviceFragmentShadingRatesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPhysicalDeviceFragmentShadingRatesKHR=v3dv_GetPhysicalDeviceFragmentShadingRatesKHR_Weak")
    VkResult (*v3dv_GetPhysicalDeviceFragmentShadingRatesKHR_Null)(VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) = 0;
    VkResult v3dv_GetPhysicalDeviceFragmentShadingRatesKHR_Weak(VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPhysicalDeviceFragmentShadingRatesKHR(VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) __attribute__ ((weak));
#endif

const struct vk_physical_device_entrypoint_table v3dv_physical_device_entrypoints = {
    .GetPhysicalDeviceProperties = v3dv_GetPhysicalDeviceProperties,
    .GetPhysicalDeviceQueueFamilyProperties = v3dv_GetPhysicalDeviceQueueFamilyProperties,
    .GetPhysicalDeviceMemoryProperties = v3dv_GetPhysicalDeviceMemoryProperties,
    .GetPhysicalDeviceFeatures = v3dv_GetPhysicalDeviceFeatures,
    .GetPhysicalDeviceFormatProperties = v3dv_GetPhysicalDeviceFormatProperties,
    .GetPhysicalDeviceImageFormatProperties = v3dv_GetPhysicalDeviceImageFormatProperties,
    .CreateDevice = v3dv_CreateDevice,
    .EnumerateDeviceLayerProperties = v3dv_EnumerateDeviceLayerProperties,
    .EnumerateDeviceExtensionProperties = v3dv_EnumerateDeviceExtensionProperties,
    .GetPhysicalDeviceSparseImageFormatProperties = v3dv_GetPhysicalDeviceSparseImageFormatProperties,
    .GetPhysicalDeviceDisplayPropertiesKHR = v3dv_GetPhysicalDeviceDisplayPropertiesKHR,
    .GetPhysicalDeviceDisplayPlanePropertiesKHR = v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR,
    .GetDisplayPlaneSupportedDisplaysKHR = v3dv_GetDisplayPlaneSupportedDisplaysKHR,
    .GetDisplayModePropertiesKHR = v3dv_GetDisplayModePropertiesKHR,
    .CreateDisplayModeKHR = v3dv_CreateDisplayModeKHR,
    .GetDisplayPlaneCapabilitiesKHR = v3dv_GetDisplayPlaneCapabilitiesKHR,
    .GetPhysicalDeviceSurfaceSupportKHR = v3dv_GetPhysicalDeviceSurfaceSupportKHR,
    .GetPhysicalDeviceSurfaceCapabilitiesKHR = v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR,
    .GetPhysicalDeviceSurfaceFormatsKHR = v3dv_GetPhysicalDeviceSurfaceFormatsKHR,
    .GetPhysicalDeviceSurfacePresentModesKHR = v3dv_GetPhysicalDeviceSurfacePresentModesKHR,
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    .GetPhysicalDeviceWaylandPresentationSupportKHR = v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR,
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetPhysicalDeviceWin32PresentationSupportKHR = v3dv_GetPhysicalDeviceWin32PresentationSupportKHR,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
    .GetPhysicalDeviceXlibPresentationSupportKHR = v3dv_GetPhysicalDeviceXlibPresentationSupportKHR,
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    .GetPhysicalDeviceXcbPresentationSupportKHR = v3dv_GetPhysicalDeviceXcbPresentationSupportKHR,
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    .GetPhysicalDeviceDirectFBPresentationSupportEXT = v3dv_GetPhysicalDeviceDirectFBPresentationSupportEXT,
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
    .GetPhysicalDeviceExternalImageFormatPropertiesNV = v3dv_GetPhysicalDeviceExternalImageFormatPropertiesNV,
    .GetPhysicalDeviceFeatures2 = v3dv_GetPhysicalDeviceFeatures2,
    .GetPhysicalDeviceFeatures2KHR = v3dv_GetPhysicalDeviceFeatures2KHR,
    .GetPhysicalDeviceProperties2 = v3dv_GetPhysicalDeviceProperties2,
    .GetPhysicalDeviceProperties2KHR = v3dv_GetPhysicalDeviceProperties2KHR,
    .GetPhysicalDeviceFormatProperties2 = v3dv_GetPhysicalDeviceFormatProperties2,
    .GetPhysicalDeviceFormatProperties2KHR = v3dv_GetPhysicalDeviceFormatProperties2KHR,
    .GetPhysicalDeviceImageFormatProperties2 = v3dv_GetPhysicalDeviceImageFormatProperties2,
    .GetPhysicalDeviceImageFormatProperties2KHR = v3dv_GetPhysicalDeviceImageFormatProperties2KHR,
    .GetPhysicalDeviceQueueFamilyProperties2 = v3dv_GetPhysicalDeviceQueueFamilyProperties2,
    .GetPhysicalDeviceQueueFamilyProperties2KHR = v3dv_GetPhysicalDeviceQueueFamilyProperties2KHR,
    .GetPhysicalDeviceMemoryProperties2 = v3dv_GetPhysicalDeviceMemoryProperties2,
    .GetPhysicalDeviceMemoryProperties2KHR = v3dv_GetPhysicalDeviceMemoryProperties2KHR,
    .GetPhysicalDeviceSparseImageFormatProperties2 = v3dv_GetPhysicalDeviceSparseImageFormatProperties2,
    .GetPhysicalDeviceSparseImageFormatProperties2KHR = v3dv_GetPhysicalDeviceSparseImageFormatProperties2KHR,
    .GetPhysicalDeviceExternalBufferProperties = v3dv_GetPhysicalDeviceExternalBufferProperties,
    .GetPhysicalDeviceExternalBufferPropertiesKHR = v3dv_GetPhysicalDeviceExternalBufferPropertiesKHR,
    .GetPhysicalDeviceExternalSemaphoreProperties = v3dv_GetPhysicalDeviceExternalSemaphoreProperties,
    .GetPhysicalDeviceExternalSemaphorePropertiesKHR = v3dv_GetPhysicalDeviceExternalSemaphorePropertiesKHR,
    .GetPhysicalDeviceExternalFenceProperties = v3dv_GetPhysicalDeviceExternalFenceProperties,
    .GetPhysicalDeviceExternalFencePropertiesKHR = v3dv_GetPhysicalDeviceExternalFencePropertiesKHR,
    .ReleaseDisplayEXT = v3dv_ReleaseDisplayEXT,
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    .AcquireXlibDisplayEXT = v3dv_AcquireXlibDisplayEXT,
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    .GetRandROutputDisplayEXT = v3dv_GetRandROutputDisplayEXT,
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .AcquireWinrtDisplayNV = v3dv_AcquireWinrtDisplayNV,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetWinrtDisplayNV = v3dv_GetWinrtDisplayNV,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .GetPhysicalDeviceSurfaceCapabilities2EXT = v3dv_GetPhysicalDeviceSurfaceCapabilities2EXT,
    .GetPhysicalDevicePresentRectanglesKHR = v3dv_GetPhysicalDevicePresentRectanglesKHR,
    .GetPhysicalDeviceMultisamplePropertiesEXT = v3dv_GetPhysicalDeviceMultisamplePropertiesEXT,
    .GetPhysicalDeviceSurfaceCapabilities2KHR = v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR,
    .GetPhysicalDeviceSurfaceFormats2KHR = v3dv_GetPhysicalDeviceSurfaceFormats2KHR,
    .GetPhysicalDeviceDisplayProperties2KHR = v3dv_GetPhysicalDeviceDisplayProperties2KHR,
    .GetPhysicalDeviceDisplayPlaneProperties2KHR = v3dv_GetPhysicalDeviceDisplayPlaneProperties2KHR,
    .GetDisplayModeProperties2KHR = v3dv_GetDisplayModeProperties2KHR,
    .GetDisplayPlaneCapabilities2KHR = v3dv_GetDisplayPlaneCapabilities2KHR,
    .GetPhysicalDeviceCalibrateableTimeDomainsEXT = v3dv_GetPhysicalDeviceCalibrateableTimeDomainsEXT,
    .GetPhysicalDeviceCooperativeMatrixPropertiesNV = v3dv_GetPhysicalDeviceCooperativeMatrixPropertiesNV,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetPhysicalDeviceSurfacePresentModes2EXT = v3dv_GetPhysicalDeviceSurfacePresentModes2EXT,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = v3dv_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR,
    .GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = v3dv_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR,
    .GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = v3dv_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV,
    .GetPhysicalDeviceToolPropertiesEXT = v3dv_GetPhysicalDeviceToolPropertiesEXT,
    .GetPhysicalDeviceFragmentShadingRatesKHR = v3dv_GetPhysicalDeviceFragmentShadingRatesKHR,
};


#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceProcAddr_Weak=v3dv_GetDeviceProcAddr_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceProcAddr=v3dv_GetDeviceProcAddr_Weak")
    PFN_vkVoidFunction (*v3dv_GetDeviceProcAddr_Null)(VkDevice device, const char* pName) = 0;
    PFN_vkVoidFunction v3dv_GetDeviceProcAddr_Weak(VkDevice device, const char* pName);
#else
    VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL v3dv_GetDeviceProcAddr(VkDevice device, const char* pName) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyDevice_Weak=v3dv_DestroyDevice_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyDevice=v3dv_DestroyDevice_Weak")
    void (*v3dv_DestroyDevice_Null)(VkDevice device, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyDevice_Weak(VkDevice device, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceQueue_Weak=v3dv_GetDeviceQueue_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceQueue=v3dv_GetDeviceQueue_Weak")
    void (*v3dv_GetDeviceQueue_Null)(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) = 0;
    void v3dv_GetDeviceQueue_Weak(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_QueueSubmit_Weak=v3dv_QueueSubmit_Null")
    #pragma comment(linker, "/alternatename:v3dv_QueueSubmit=v3dv_QueueSubmit_Weak")
    VkResult (*v3dv_QueueSubmit_Null)(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) = 0;
    VkResult v3dv_QueueSubmit_Weak(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_QueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_QueueWaitIdle_Weak=v3dv_QueueWaitIdle_Null")
    #pragma comment(linker, "/alternatename:v3dv_QueueWaitIdle=v3dv_QueueWaitIdle_Weak")
    VkResult (*v3dv_QueueWaitIdle_Null)(VkQueue queue) = 0;
    VkResult v3dv_QueueWaitIdle_Weak(VkQueue queue);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_QueueWaitIdle(VkQueue queue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DeviceWaitIdle_Weak=v3dv_DeviceWaitIdle_Null")
    #pragma comment(linker, "/alternatename:v3dv_DeviceWaitIdle=v3dv_DeviceWaitIdle_Weak")
    VkResult (*v3dv_DeviceWaitIdle_Null)(VkDevice device) = 0;
    VkResult v3dv_DeviceWaitIdle_Weak(VkDevice device);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_DeviceWaitIdle(VkDevice device) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AllocateMemory_Weak=v3dv_AllocateMemory_Null")
    #pragma comment(linker, "/alternatename:v3dv_AllocateMemory=v3dv_AllocateMemory_Weak")
    VkResult (*v3dv_AllocateMemory_Null)(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) = 0;
    VkResult v3dv_AllocateMemory_Weak(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_FreeMemory_Weak=v3dv_FreeMemory_Null")
    #pragma comment(linker, "/alternatename:v3dv_FreeMemory=v3dv_FreeMemory_Weak")
    void (*v3dv_FreeMemory_Null)(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_FreeMemory_Weak(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_FreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_MapMemory_Weak=v3dv_MapMemory_Null")
    #pragma comment(linker, "/alternatename:v3dv_MapMemory=v3dv_MapMemory_Weak")
    VkResult (*v3dv_MapMemory_Null)(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) = 0;
    VkResult v3dv_MapMemory_Weak(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_MapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_UnmapMemory_Weak=v3dv_UnmapMemory_Null")
    #pragma comment(linker, "/alternatename:v3dv_UnmapMemory=v3dv_UnmapMemory_Weak")
    void (*v3dv_UnmapMemory_Null)(VkDevice device, VkDeviceMemory memory) = 0;
    void v3dv_UnmapMemory_Weak(VkDevice device, VkDeviceMemory memory);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_UnmapMemory(VkDevice device, VkDeviceMemory memory) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_FlushMappedMemoryRanges_Weak=v3dv_FlushMappedMemoryRanges_Null")
    #pragma comment(linker, "/alternatename:v3dv_FlushMappedMemoryRanges=v3dv_FlushMappedMemoryRanges_Weak")
    VkResult (*v3dv_FlushMappedMemoryRanges_Null)(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) = 0;
    VkResult v3dv_FlushMappedMemoryRanges_Weak(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_FlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_InvalidateMappedMemoryRanges_Weak=v3dv_InvalidateMappedMemoryRanges_Null")
    #pragma comment(linker, "/alternatename:v3dv_InvalidateMappedMemoryRanges=v3dv_InvalidateMappedMemoryRanges_Weak")
    VkResult (*v3dv_InvalidateMappedMemoryRanges_Null)(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) = 0;
    VkResult v3dv_InvalidateMappedMemoryRanges_Weak(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_InvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceMemoryCommitment_Weak=v3dv_GetDeviceMemoryCommitment_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceMemoryCommitment=v3dv_GetDeviceMemoryCommitment_Weak")
    void (*v3dv_GetDeviceMemoryCommitment_Null)(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) = 0;
    void v3dv_GetDeviceMemoryCommitment_Weak(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetBufferMemoryRequirements_Weak=v3dv_GetBufferMemoryRequirements_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetBufferMemoryRequirements=v3dv_GetBufferMemoryRequirements_Weak")
    void (*v3dv_GetBufferMemoryRequirements_Null)(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) = 0;
    void v3dv_GetBufferMemoryRequirements_Weak(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_BindBufferMemory_Weak=v3dv_BindBufferMemory_Null")
    #pragma comment(linker, "/alternatename:v3dv_BindBufferMemory=v3dv_BindBufferMemory_Weak")
    VkResult (*v3dv_BindBufferMemory_Null)(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) = 0;
    VkResult v3dv_BindBufferMemory_Weak(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_BindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageMemoryRequirements_Weak=v3dv_GetImageMemoryRequirements_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageMemoryRequirements=v3dv_GetImageMemoryRequirements_Weak")
    void (*v3dv_GetImageMemoryRequirements_Null)(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements) = 0;
    void v3dv_GetImageMemoryRequirements_Weak(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_BindImageMemory_Weak=v3dv_BindImageMemory_Null")
    #pragma comment(linker, "/alternatename:v3dv_BindImageMemory=v3dv_BindImageMemory_Weak")
    VkResult (*v3dv_BindImageMemory_Null)(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) = 0;
    VkResult v3dv_BindImageMemory_Weak(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_BindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageSparseMemoryRequirements_Weak=v3dv_GetImageSparseMemoryRequirements_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageSparseMemoryRequirements=v3dv_GetImageSparseMemoryRequirements_Weak")
    void (*v3dv_GetImageSparseMemoryRequirements_Null)(VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements) = 0;
    void v3dv_GetImageSparseMemoryRequirements_Weak(VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_QueueBindSparse_Weak=v3dv_QueueBindSparse_Null")
    #pragma comment(linker, "/alternatename:v3dv_QueueBindSparse=v3dv_QueueBindSparse_Weak")
    VkResult (*v3dv_QueueBindSparse_Null)(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) = 0;
    VkResult v3dv_QueueBindSparse_Weak(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_QueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateFence_Weak=v3dv_CreateFence_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateFence=v3dv_CreateFence_Weak")
    VkResult (*v3dv_CreateFence_Null)(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) = 0;
    VkResult v3dv_CreateFence_Weak(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyFence_Weak=v3dv_DestroyFence_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyFence=v3dv_DestroyFence_Weak")
    void (*v3dv_DestroyFence_Null)(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyFence_Weak(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ResetFences_Weak=v3dv_ResetFences_Null")
    #pragma comment(linker, "/alternatename:v3dv_ResetFences=v3dv_ResetFences_Weak")
    VkResult (*v3dv_ResetFences_Null)(VkDevice device, uint32_t fenceCount, const VkFence* pFences) = 0;
    VkResult v3dv_ResetFences_Weak(VkDevice device, uint32_t fenceCount, const VkFence* pFences);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetFenceStatus_Weak=v3dv_GetFenceStatus_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetFenceStatus=v3dv_GetFenceStatus_Weak")
    VkResult (*v3dv_GetFenceStatus_Null)(VkDevice device, VkFence fence) = 0;
    VkResult v3dv_GetFenceStatus_Weak(VkDevice device, VkFence fence);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetFenceStatus(VkDevice device, VkFence fence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_WaitForFences_Weak=v3dv_WaitForFences_Null")
    #pragma comment(linker, "/alternatename:v3dv_WaitForFences=v3dv_WaitForFences_Weak")
    VkResult (*v3dv_WaitForFences_Null)(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout) = 0;
    VkResult v3dv_WaitForFences_Weak(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_WaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateSemaphore_Weak=v3dv_CreateSemaphore_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateSemaphore=v3dv_CreateSemaphore_Weak")
    VkResult (*v3dv_CreateSemaphore_Null)(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) = 0;
    VkResult v3dv_CreateSemaphore_Weak(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroySemaphore_Weak=v3dv_DestroySemaphore_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroySemaphore=v3dv_DestroySemaphore_Weak")
    void (*v3dv_DestroySemaphore_Null)(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroySemaphore_Weak(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateEvent_Weak=v3dv_CreateEvent_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateEvent=v3dv_CreateEvent_Weak")
    VkResult (*v3dv_CreateEvent_Null)(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) = 0;
    VkResult v3dv_CreateEvent_Weak(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyEvent_Weak=v3dv_DestroyEvent_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyEvent=v3dv_DestroyEvent_Weak")
    void (*v3dv_DestroyEvent_Null)(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyEvent_Weak(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetEventStatus_Weak=v3dv_GetEventStatus_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetEventStatus=v3dv_GetEventStatus_Weak")
    VkResult (*v3dv_GetEventStatus_Null)(VkDevice device, VkEvent event) = 0;
    VkResult v3dv_GetEventStatus_Weak(VkDevice device, VkEvent event);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetEventStatus(VkDevice device, VkEvent event) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_SetEvent_Weak=v3dv_SetEvent_Null")
    #pragma comment(linker, "/alternatename:v3dv_SetEvent=v3dv_SetEvent_Weak")
    VkResult (*v3dv_SetEvent_Null)(VkDevice device, VkEvent event) = 0;
    VkResult v3dv_SetEvent_Weak(VkDevice device, VkEvent event);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_SetEvent(VkDevice device, VkEvent event) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ResetEvent_Weak=v3dv_ResetEvent_Null")
    #pragma comment(linker, "/alternatename:v3dv_ResetEvent=v3dv_ResetEvent_Weak")
    VkResult (*v3dv_ResetEvent_Null)(VkDevice device, VkEvent event) = 0;
    VkResult v3dv_ResetEvent_Weak(VkDevice device, VkEvent event);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ResetEvent(VkDevice device, VkEvent event) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateQueryPool_Weak=v3dv_CreateQueryPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateQueryPool=v3dv_CreateQueryPool_Weak")
    VkResult (*v3dv_CreateQueryPool_Null)(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) = 0;
    VkResult v3dv_CreateQueryPool_Weak(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyQueryPool_Weak=v3dv_DestroyQueryPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyQueryPool=v3dv_DestroyQueryPool_Weak")
    void (*v3dv_DestroyQueryPool_Null)(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyQueryPool_Weak(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetQueryPoolResults_Weak=v3dv_GetQueryPoolResults_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetQueryPoolResults=v3dv_GetQueryPoolResults_Weak")
    VkResult (*v3dv_GetQueryPoolResults_Null)(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags) = 0;
    VkResult v3dv_GetQueryPoolResults_Weak(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ResetQueryPool_Weak=v3dv_ResetQueryPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_ResetQueryPool=v3dv_ResetQueryPool_Weak")
    void (*v3dv_ResetQueryPool_Null)(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) = 0;
    void v3dv_ResetQueryPool_Weak(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_ResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ResetQueryPoolEXT_Weak=v3dv_ResetQueryPoolEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_ResetQueryPoolEXT=v3dv_ResetQueryPoolEXT_Weak")
    void (*v3dv_ResetQueryPoolEXT_Null)(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) = 0;
    void v3dv_ResetQueryPoolEXT_Weak(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_ResetQueryPoolEXT(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateBuffer_Weak=v3dv_CreateBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateBuffer=v3dv_CreateBuffer_Weak")
    VkResult (*v3dv_CreateBuffer_Null)(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) = 0;
    VkResult v3dv_CreateBuffer_Weak(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyBuffer_Weak=v3dv_DestroyBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyBuffer=v3dv_DestroyBuffer_Weak")
    void (*v3dv_DestroyBuffer_Null)(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyBuffer_Weak(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateBufferView_Weak=v3dv_CreateBufferView_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateBufferView=v3dv_CreateBufferView_Weak")
    VkResult (*v3dv_CreateBufferView_Null)(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView) = 0;
    VkResult v3dv_CreateBufferView_Weak(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateBufferView(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyBufferView_Weak=v3dv_DestroyBufferView_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyBufferView=v3dv_DestroyBufferView_Weak")
    void (*v3dv_DestroyBufferView_Null)(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyBufferView_Weak(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateImage_Weak=v3dv_CreateImage_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateImage=v3dv_CreateImage_Weak")
    VkResult (*v3dv_CreateImage_Null)(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) = 0;
    VkResult v3dv_CreateImage_Weak(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyImage_Weak=v3dv_DestroyImage_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyImage=v3dv_DestroyImage_Weak")
    void (*v3dv_DestroyImage_Null)(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyImage_Weak(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageSubresourceLayout_Weak=v3dv_GetImageSubresourceLayout_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageSubresourceLayout=v3dv_GetImageSubresourceLayout_Weak")
    void (*v3dv_GetImageSubresourceLayout_Null)(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) = 0;
    void v3dv_GetImageSubresourceLayout_Weak(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateImageView_Weak=v3dv_CreateImageView_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateImageView=v3dv_CreateImageView_Weak")
    VkResult (*v3dv_CreateImageView_Null)(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView) = 0;
    VkResult v3dv_CreateImageView_Weak(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyImageView_Weak=v3dv_DestroyImageView_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyImageView=v3dv_DestroyImageView_Weak")
    void (*v3dv_DestroyImageView_Null)(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyImageView_Weak(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateShaderModule_Weak=v3dv_CreateShaderModule_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateShaderModule=v3dv_CreateShaderModule_Weak")
    VkResult (*v3dv_CreateShaderModule_Null)(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule) = 0;
    VkResult v3dv_CreateShaderModule_Weak(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyShaderModule_Weak=v3dv_DestroyShaderModule_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyShaderModule=v3dv_DestroyShaderModule_Weak")
    void (*v3dv_DestroyShaderModule_Null)(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyShaderModule_Weak(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreatePipelineCache_Weak=v3dv_CreatePipelineCache_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreatePipelineCache=v3dv_CreatePipelineCache_Weak")
    VkResult (*v3dv_CreatePipelineCache_Null)(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache) = 0;
    VkResult v3dv_CreatePipelineCache_Weak(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyPipelineCache_Weak=v3dv_DestroyPipelineCache_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyPipelineCache=v3dv_DestroyPipelineCache_Weak")
    void (*v3dv_DestroyPipelineCache_Null)(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyPipelineCache_Weak(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPipelineCacheData_Weak=v3dv_GetPipelineCacheData_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPipelineCacheData=v3dv_GetPipelineCacheData_Weak")
    VkResult (*v3dv_GetPipelineCacheData_Null)(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData) = 0;
    VkResult v3dv_GetPipelineCacheData_Weak(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_MergePipelineCaches_Weak=v3dv_MergePipelineCaches_Null")
    #pragma comment(linker, "/alternatename:v3dv_MergePipelineCaches=v3dv_MergePipelineCaches_Weak")
    VkResult (*v3dv_MergePipelineCaches_Null)(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches) = 0;
    VkResult v3dv_MergePipelineCaches_Weak(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_MergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateGraphicsPipelines_Weak=v3dv_CreateGraphicsPipelines_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateGraphicsPipelines=v3dv_CreateGraphicsPipelines_Weak")
    VkResult (*v3dv_CreateGraphicsPipelines_Null)(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) = 0;
    VkResult v3dv_CreateGraphicsPipelines_Weak(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateComputePipelines_Weak=v3dv_CreateComputePipelines_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateComputePipelines=v3dv_CreateComputePipelines_Weak")
    VkResult (*v3dv_CreateComputePipelines_Null)(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) = 0;
    VkResult v3dv_CreateComputePipelines_Weak(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyPipeline_Weak=v3dv_DestroyPipeline_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyPipeline=v3dv_DestroyPipeline_Weak")
    void (*v3dv_DestroyPipeline_Null)(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyPipeline_Weak(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreatePipelineLayout_Weak=v3dv_CreatePipelineLayout_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreatePipelineLayout=v3dv_CreatePipelineLayout_Weak")
    VkResult (*v3dv_CreatePipelineLayout_Null)(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout) = 0;
    VkResult v3dv_CreatePipelineLayout_Weak(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyPipelineLayout_Weak=v3dv_DestroyPipelineLayout_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyPipelineLayout=v3dv_DestroyPipelineLayout_Weak")
    void (*v3dv_DestroyPipelineLayout_Null)(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyPipelineLayout_Weak(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateSampler_Weak=v3dv_CreateSampler_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateSampler=v3dv_CreateSampler_Weak")
    VkResult (*v3dv_CreateSampler_Null)(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) = 0;
    VkResult v3dv_CreateSampler_Weak(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroySampler_Weak=v3dv_DestroySampler_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroySampler=v3dv_DestroySampler_Weak")
    void (*v3dv_DestroySampler_Null)(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroySampler_Weak(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDescriptorSetLayout_Weak=v3dv_CreateDescriptorSetLayout_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDescriptorSetLayout=v3dv_CreateDescriptorSetLayout_Weak")
    VkResult (*v3dv_CreateDescriptorSetLayout_Null)(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) = 0;
    VkResult v3dv_CreateDescriptorSetLayout_Weak(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyDescriptorSetLayout_Weak=v3dv_DestroyDescriptorSetLayout_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyDescriptorSetLayout=v3dv_DestroyDescriptorSetLayout_Weak")
    void (*v3dv_DestroyDescriptorSetLayout_Null)(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyDescriptorSetLayout_Weak(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDescriptorPool_Weak=v3dv_CreateDescriptorPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDescriptorPool=v3dv_CreateDescriptorPool_Weak")
    VkResult (*v3dv_CreateDescriptorPool_Null)(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool) = 0;
    VkResult v3dv_CreateDescriptorPool_Weak(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyDescriptorPool_Weak=v3dv_DestroyDescriptorPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyDescriptorPool=v3dv_DestroyDescriptorPool_Weak")
    void (*v3dv_DestroyDescriptorPool_Null)(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyDescriptorPool_Weak(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ResetDescriptorPool_Weak=v3dv_ResetDescriptorPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_ResetDescriptorPool=v3dv_ResetDescriptorPool_Weak")
    VkResult (*v3dv_ResetDescriptorPool_Null)(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) = 0;
    VkResult v3dv_ResetDescriptorPool_Weak(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AllocateDescriptorSets_Weak=v3dv_AllocateDescriptorSets_Null")
    #pragma comment(linker, "/alternatename:v3dv_AllocateDescriptorSets=v3dv_AllocateDescriptorSets_Weak")
    VkResult (*v3dv_AllocateDescriptorSets_Null)(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) = 0;
    VkResult v3dv_AllocateDescriptorSets_Weak(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_FreeDescriptorSets_Weak=v3dv_FreeDescriptorSets_Null")
    #pragma comment(linker, "/alternatename:v3dv_FreeDescriptorSets=v3dv_FreeDescriptorSets_Weak")
    VkResult (*v3dv_FreeDescriptorSets_Null)(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets) = 0;
    VkResult v3dv_FreeDescriptorSets_Weak(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_FreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_UpdateDescriptorSets_Weak=v3dv_UpdateDescriptorSets_Null")
    #pragma comment(linker, "/alternatename:v3dv_UpdateDescriptorSets=v3dv_UpdateDescriptorSets_Weak")
    void (*v3dv_UpdateDescriptorSets_Null)(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies) = 0;
    void v3dv_UpdateDescriptorSets_Weak(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_UpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateFramebuffer_Weak=v3dv_CreateFramebuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateFramebuffer=v3dv_CreateFramebuffer_Weak")
    VkResult (*v3dv_CreateFramebuffer_Null)(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer) = 0;
    VkResult v3dv_CreateFramebuffer_Weak(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyFramebuffer_Weak=v3dv_DestroyFramebuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyFramebuffer=v3dv_DestroyFramebuffer_Weak")
    void (*v3dv_DestroyFramebuffer_Null)(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyFramebuffer_Weak(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateRenderPass_Weak=v3dv_CreateRenderPass_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateRenderPass=v3dv_CreateRenderPass_Weak")
    VkResult (*v3dv_CreateRenderPass_Null)(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) = 0;
    VkResult v3dv_CreateRenderPass_Weak(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateRenderPass(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyRenderPass_Weak=v3dv_DestroyRenderPass_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyRenderPass=v3dv_DestroyRenderPass_Weak")
    void (*v3dv_DestroyRenderPass_Null)(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyRenderPass_Weak(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetRenderAreaGranularity_Weak=v3dv_GetRenderAreaGranularity_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetRenderAreaGranularity=v3dv_GetRenderAreaGranularity_Weak")
    void (*v3dv_GetRenderAreaGranularity_Null)(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity) = 0;
    void v3dv_GetRenderAreaGranularity_Weak(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateCommandPool_Weak=v3dv_CreateCommandPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateCommandPool=v3dv_CreateCommandPool_Weak")
    VkResult (*v3dv_CreateCommandPool_Null)(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool) = 0;
    VkResult v3dv_CreateCommandPool_Weak(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyCommandPool_Weak=v3dv_DestroyCommandPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyCommandPool=v3dv_DestroyCommandPool_Weak")
    void (*v3dv_DestroyCommandPool_Null)(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyCommandPool_Weak(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ResetCommandPool_Weak=v3dv_ResetCommandPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_ResetCommandPool=v3dv_ResetCommandPool_Weak")
    VkResult (*v3dv_ResetCommandPool_Null)(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) = 0;
    VkResult v3dv_ResetCommandPool_Weak(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AllocateCommandBuffers_Weak=v3dv_AllocateCommandBuffers_Null")
    #pragma comment(linker, "/alternatename:v3dv_AllocateCommandBuffers=v3dv_AllocateCommandBuffers_Weak")
    VkResult (*v3dv_AllocateCommandBuffers_Null)(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) = 0;
    VkResult v3dv_AllocateCommandBuffers_Weak(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_FreeCommandBuffers_Weak=v3dv_FreeCommandBuffers_Null")
    #pragma comment(linker, "/alternatename:v3dv_FreeCommandBuffers=v3dv_FreeCommandBuffers_Weak")
    void (*v3dv_FreeCommandBuffers_Null)(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) = 0;
    void v3dv_FreeCommandBuffers_Weak(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_FreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_BeginCommandBuffer_Weak=v3dv_BeginCommandBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_BeginCommandBuffer=v3dv_BeginCommandBuffer_Weak")
    VkResult (*v3dv_BeginCommandBuffer_Null)(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) = 0;
    VkResult v3dv_BeginCommandBuffer_Weak(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_BeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_EndCommandBuffer_Weak=v3dv_EndCommandBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_EndCommandBuffer=v3dv_EndCommandBuffer_Weak")
    VkResult (*v3dv_EndCommandBuffer_Null)(VkCommandBuffer commandBuffer) = 0;
    VkResult v3dv_EndCommandBuffer_Weak(VkCommandBuffer commandBuffer);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_EndCommandBuffer(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ResetCommandBuffer_Weak=v3dv_ResetCommandBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_ResetCommandBuffer=v3dv_ResetCommandBuffer_Weak")
    VkResult (*v3dv_ResetCommandBuffer_Null)(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) = 0;
    VkResult v3dv_ResetCommandBuffer_Weak(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBindPipeline_Weak=v3dv_CmdBindPipeline_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBindPipeline=v3dv_CmdBindPipeline_Weak")
    void (*v3dv_CmdBindPipeline_Null)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) = 0;
    void v3dv_CmdBindPipeline_Weak(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetViewport_Weak=v3dv_CmdSetViewport_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetViewport=v3dv_CmdSetViewport_Weak")
    void (*v3dv_CmdSetViewport_Null)(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports) = 0;
    void v3dv_CmdSetViewport_Weak(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetScissor_Weak=v3dv_CmdSetScissor_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetScissor=v3dv_CmdSetScissor_Weak")
    void (*v3dv_CmdSetScissor_Null)(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors) = 0;
    void v3dv_CmdSetScissor_Weak(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetLineWidth_Weak=v3dv_CmdSetLineWidth_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetLineWidth=v3dv_CmdSetLineWidth_Weak")
    void (*v3dv_CmdSetLineWidth_Null)(VkCommandBuffer commandBuffer, float lineWidth) = 0;
    void v3dv_CmdSetLineWidth_Weak(VkCommandBuffer commandBuffer, float lineWidth);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthBias_Weak=v3dv_CmdSetDepthBias_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthBias=v3dv_CmdSetDepthBias_Weak")
    void (*v3dv_CmdSetDepthBias_Null)(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) = 0;
    void v3dv_CmdSetDepthBias_Weak(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetBlendConstants_Weak=v3dv_CmdSetBlendConstants_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetBlendConstants=v3dv_CmdSetBlendConstants_Weak")
    void (*v3dv_CmdSetBlendConstants_Null)(VkCommandBuffer commandBuffer, const float blendConstants[4]) = 0;
    void v3dv_CmdSetBlendConstants_Weak(VkCommandBuffer commandBuffer, const float blendConstants[4]);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants[4]) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthBounds_Weak=v3dv_CmdSetDepthBounds_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthBounds=v3dv_CmdSetDepthBounds_Weak")
    void (*v3dv_CmdSetDepthBounds_Null)(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) = 0;
    void v3dv_CmdSetDepthBounds_Weak(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilCompareMask_Weak=v3dv_CmdSetStencilCompareMask_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilCompareMask=v3dv_CmdSetStencilCompareMask_Weak")
    void (*v3dv_CmdSetStencilCompareMask_Null)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) = 0;
    void v3dv_CmdSetStencilCompareMask_Weak(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilWriteMask_Weak=v3dv_CmdSetStencilWriteMask_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilWriteMask=v3dv_CmdSetStencilWriteMask_Weak")
    void (*v3dv_CmdSetStencilWriteMask_Null)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) = 0;
    void v3dv_CmdSetStencilWriteMask_Weak(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilReference_Weak=v3dv_CmdSetStencilReference_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilReference=v3dv_CmdSetStencilReference_Weak")
    void (*v3dv_CmdSetStencilReference_Null)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) = 0;
    void v3dv_CmdSetStencilReference_Weak(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBindDescriptorSets_Weak=v3dv_CmdBindDescriptorSets_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBindDescriptorSets=v3dv_CmdBindDescriptorSets_Weak")
    void (*v3dv_CmdBindDescriptorSets_Null)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets) = 0;
    void v3dv_CmdBindDescriptorSets_Weak(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBindIndexBuffer_Weak=v3dv_CmdBindIndexBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBindIndexBuffer=v3dv_CmdBindIndexBuffer_Weak")
    void (*v3dv_CmdBindIndexBuffer_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) = 0;
    void v3dv_CmdBindIndexBuffer_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBindVertexBuffers_Weak=v3dv_CmdBindVertexBuffers_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBindVertexBuffers=v3dv_CmdBindVertexBuffers_Weak")
    void (*v3dv_CmdBindVertexBuffers_Null)(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) = 0;
    void v3dv_CmdBindVertexBuffers_Weak(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDraw_Weak=v3dv_CmdDraw_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDraw=v3dv_CmdDraw_Weak")
    void (*v3dv_CmdDraw_Null)(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) = 0;
    void v3dv_CmdDraw_Weak(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexed_Weak=v3dv_CmdDrawIndexed_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexed=v3dv_CmdDrawIndexed_Weak")
    void (*v3dv_CmdDrawIndexed_Null)(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) = 0;
    void v3dv_CmdDrawIndexed_Weak(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirect_Weak=v3dv_CmdDrawIndirect_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirect=v3dv_CmdDrawIndirect_Weak")
    void (*v3dv_CmdDrawIndirect_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawIndirect_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexedIndirect_Weak=v3dv_CmdDrawIndexedIndirect_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexedIndirect=v3dv_CmdDrawIndexedIndirect_Weak")
    void (*v3dv_CmdDrawIndexedIndirect_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawIndexedIndirect_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDispatch_Weak=v3dv_CmdDispatch_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDispatch=v3dv_CmdDispatch_Weak")
    void (*v3dv_CmdDispatch_Null)(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) = 0;
    void v3dv_CmdDispatch_Weak(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDispatchIndirect_Weak=v3dv_CmdDispatchIndirect_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDispatchIndirect=v3dv_CmdDispatchIndirect_Weak")
    void (*v3dv_CmdDispatchIndirect_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) = 0;
    void v3dv_CmdDispatchIndirect_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyBuffer_Weak=v3dv_CmdCopyBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyBuffer=v3dv_CmdCopyBuffer_Weak")
    void (*v3dv_CmdCopyBuffer_Null)(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions) = 0;
    void v3dv_CmdCopyBuffer_Weak(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyImage_Weak=v3dv_CmdCopyImage_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyImage=v3dv_CmdCopyImage_Weak")
    void (*v3dv_CmdCopyImage_Null)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions) = 0;
    void v3dv_CmdCopyImage_Weak(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBlitImage_Weak=v3dv_CmdBlitImage_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBlitImage=v3dv_CmdBlitImage_Weak")
    void (*v3dv_CmdBlitImage_Null)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter) = 0;
    void v3dv_CmdBlitImage_Weak(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyBufferToImage_Weak=v3dv_CmdCopyBufferToImage_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyBufferToImage=v3dv_CmdCopyBufferToImage_Weak")
    void (*v3dv_CmdCopyBufferToImage_Null)(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions) = 0;
    void v3dv_CmdCopyBufferToImage_Weak(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyImageToBuffer_Weak=v3dv_CmdCopyImageToBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyImageToBuffer=v3dv_CmdCopyImageToBuffer_Weak")
    void (*v3dv_CmdCopyImageToBuffer_Null)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions) = 0;
    void v3dv_CmdCopyImageToBuffer_Weak(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdUpdateBuffer_Weak=v3dv_CmdUpdateBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdUpdateBuffer=v3dv_CmdUpdateBuffer_Weak")
    void (*v3dv_CmdUpdateBuffer_Null)(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) = 0;
    void v3dv_CmdUpdateBuffer_Weak(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdFillBuffer_Weak=v3dv_CmdFillBuffer_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdFillBuffer=v3dv_CmdFillBuffer_Weak")
    void (*v3dv_CmdFillBuffer_Null)(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) = 0;
    void v3dv_CmdFillBuffer_Weak(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdClearColorImage_Weak=v3dv_CmdClearColorImage_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdClearColorImage=v3dv_CmdClearColorImage_Weak")
    void (*v3dv_CmdClearColorImage_Null)(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) = 0;
    void v3dv_CmdClearColorImage_Weak(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdClearDepthStencilImage_Weak=v3dv_CmdClearDepthStencilImage_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdClearDepthStencilImage=v3dv_CmdClearDepthStencilImage_Weak")
    void (*v3dv_CmdClearDepthStencilImage_Null)(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) = 0;
    void v3dv_CmdClearDepthStencilImage_Weak(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdClearAttachments_Weak=v3dv_CmdClearAttachments_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdClearAttachments=v3dv_CmdClearAttachments_Weak")
    void (*v3dv_CmdClearAttachments_Null)(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects) = 0;
    void v3dv_CmdClearAttachments_Weak(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdResolveImage_Weak=v3dv_CmdResolveImage_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdResolveImage=v3dv_CmdResolveImage_Weak")
    void (*v3dv_CmdResolveImage_Null)(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions) = 0;
    void v3dv_CmdResolveImage_Weak(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetEvent_Weak=v3dv_CmdSetEvent_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetEvent=v3dv_CmdSetEvent_Weak")
    void (*v3dv_CmdSetEvent_Null)(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) = 0;
    void v3dv_CmdSetEvent_Weak(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdResetEvent_Weak=v3dv_CmdResetEvent_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdResetEvent=v3dv_CmdResetEvent_Weak")
    void (*v3dv_CmdResetEvent_Null)(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) = 0;
    void v3dv_CmdResetEvent_Weak(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdWaitEvents_Weak=v3dv_CmdWaitEvents_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdWaitEvents=v3dv_CmdWaitEvents_Weak")
    void (*v3dv_CmdWaitEvents_Null)(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) = 0;
    void v3dv_CmdWaitEvents_Weak(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdPipelineBarrier_Weak=v3dv_CmdPipelineBarrier_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdPipelineBarrier=v3dv_CmdPipelineBarrier_Weak")
    void (*v3dv_CmdPipelineBarrier_Null)(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) = 0;
    void v3dv_CmdPipelineBarrier_Weak(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginQuery_Weak=v3dv_CmdBeginQuery_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginQuery=v3dv_CmdBeginQuery_Weak")
    void (*v3dv_CmdBeginQuery_Null)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) = 0;
    void v3dv_CmdBeginQuery_Weak(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdEndQuery_Weak=v3dv_CmdEndQuery_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdEndQuery=v3dv_CmdEndQuery_Weak")
    void (*v3dv_CmdEndQuery_Null)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) = 0;
    void v3dv_CmdEndQuery_Weak(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginConditionalRenderingEXT_Weak=v3dv_CmdBeginConditionalRenderingEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginConditionalRenderingEXT=v3dv_CmdBeginConditionalRenderingEXT_Weak")
    void (*v3dv_CmdBeginConditionalRenderingEXT_Null)(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin) = 0;
    void v3dv_CmdBeginConditionalRenderingEXT_Weak(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdEndConditionalRenderingEXT_Weak=v3dv_CmdEndConditionalRenderingEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdEndConditionalRenderingEXT=v3dv_CmdEndConditionalRenderingEXT_Weak")
    void (*v3dv_CmdEndConditionalRenderingEXT_Null)(VkCommandBuffer commandBuffer) = 0;
    void v3dv_CmdEndConditionalRenderingEXT_Weak(VkCommandBuffer commandBuffer);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdResetQueryPool_Weak=v3dv_CmdResetQueryPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdResetQueryPool=v3dv_CmdResetQueryPool_Weak")
    void (*v3dv_CmdResetQueryPool_Null)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) = 0;
    void v3dv_CmdResetQueryPool_Weak(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdWriteTimestamp_Weak=v3dv_CmdWriteTimestamp_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdWriteTimestamp=v3dv_CmdWriteTimestamp_Weak")
    void (*v3dv_CmdWriteTimestamp_Null)(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) = 0;
    void v3dv_CmdWriteTimestamp_Weak(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyQueryPoolResults_Weak=v3dv_CmdCopyQueryPoolResults_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyQueryPoolResults=v3dv_CmdCopyQueryPoolResults_Weak")
    void (*v3dv_CmdCopyQueryPoolResults_Null)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) = 0;
    void v3dv_CmdCopyQueryPoolResults_Weak(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdPushConstants_Weak=v3dv_CmdPushConstants_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdPushConstants=v3dv_CmdPushConstants_Weak")
    void (*v3dv_CmdPushConstants_Null)(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues) = 0;
    void v3dv_CmdPushConstants_Weak(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginRenderPass_Weak=v3dv_CmdBeginRenderPass_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginRenderPass=v3dv_CmdBeginRenderPass_Weak")
    void (*v3dv_CmdBeginRenderPass_Null)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) = 0;
    void v3dv_CmdBeginRenderPass_Weak(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdNextSubpass_Weak=v3dv_CmdNextSubpass_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdNextSubpass=v3dv_CmdNextSubpass_Weak")
    void (*v3dv_CmdNextSubpass_Null)(VkCommandBuffer commandBuffer, VkSubpassContents contents) = 0;
    void v3dv_CmdNextSubpass_Weak(VkCommandBuffer commandBuffer, VkSubpassContents contents);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdEndRenderPass_Weak=v3dv_CmdEndRenderPass_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdEndRenderPass=v3dv_CmdEndRenderPass_Weak")
    void (*v3dv_CmdEndRenderPass_Null)(VkCommandBuffer commandBuffer) = 0;
    void v3dv_CmdEndRenderPass_Weak(VkCommandBuffer commandBuffer);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdEndRenderPass(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdExecuteCommands_Weak=v3dv_CmdExecuteCommands_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdExecuteCommands=v3dv_CmdExecuteCommands_Weak")
    void (*v3dv_CmdExecuteCommands_Null)(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) = 0;
    void v3dv_CmdExecuteCommands_Weak(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateSharedSwapchainsKHR_Weak=v3dv_CreateSharedSwapchainsKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateSharedSwapchainsKHR=v3dv_CreateSharedSwapchainsKHR_Weak")
    VkResult (*v3dv_CreateSharedSwapchainsKHR_Null)(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) = 0;
    VkResult v3dv_CreateSharedSwapchainsKHR_Weak(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateSwapchainKHR_Weak=v3dv_CreateSwapchainKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateSwapchainKHR=v3dv_CreateSwapchainKHR_Weak")
    VkResult (*v3dv_CreateSwapchainKHR_Null)(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) = 0;
    VkResult v3dv_CreateSwapchainKHR_Weak(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroySwapchainKHR_Weak=v3dv_DestroySwapchainKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroySwapchainKHR=v3dv_DestroySwapchainKHR_Weak")
    void (*v3dv_DestroySwapchainKHR_Null)(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroySwapchainKHR_Weak(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainImagesKHR_Weak=v3dv_GetSwapchainImagesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainImagesKHR=v3dv_GetSwapchainImagesKHR_Weak")
    VkResult (*v3dv_GetSwapchainImagesKHR_Null)(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages) = 0;
    VkResult v3dv_GetSwapchainImagesKHR_Weak(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AcquireNextImageKHR_Weak=v3dv_AcquireNextImageKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_AcquireNextImageKHR=v3dv_AcquireNextImageKHR_Weak")
    VkResult (*v3dv_AcquireNextImageKHR_Null)(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex) = 0;
    VkResult v3dv_AcquireNextImageKHR_Weak(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_QueuePresentKHR_Weak=v3dv_QueuePresentKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_QueuePresentKHR=v3dv_QueuePresentKHR_Weak")
    VkResult (*v3dv_QueuePresentKHR_Null)(VkQueue queue, const VkPresentInfoKHR* pPresentInfo) = 0;
    VkResult v3dv_QueuePresentKHR_Weak(VkQueue queue, const VkPresentInfoKHR* pPresentInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_QueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DebugMarkerSetObjectNameEXT_Weak=v3dv_DebugMarkerSetObjectNameEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_DebugMarkerSetObjectNameEXT=v3dv_DebugMarkerSetObjectNameEXT_Weak")
    VkResult (*v3dv_DebugMarkerSetObjectNameEXT_Null)(VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo) = 0;
    VkResult v3dv_DebugMarkerSetObjectNameEXT_Weak(VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_DebugMarkerSetObjectNameEXT(VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DebugMarkerSetObjectTagEXT_Weak=v3dv_DebugMarkerSetObjectTagEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_DebugMarkerSetObjectTagEXT=v3dv_DebugMarkerSetObjectTagEXT_Weak")
    VkResult (*v3dv_DebugMarkerSetObjectTagEXT_Null)(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo) = 0;
    VkResult v3dv_DebugMarkerSetObjectTagEXT_Weak(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_DebugMarkerSetObjectTagEXT(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDebugMarkerBeginEXT_Weak=v3dv_CmdDebugMarkerBeginEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDebugMarkerBeginEXT=v3dv_CmdDebugMarkerBeginEXT_Weak")
    void (*v3dv_CmdDebugMarkerBeginEXT_Null)(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) = 0;
    void v3dv_CmdDebugMarkerBeginEXT_Weak(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDebugMarkerEndEXT_Weak=v3dv_CmdDebugMarkerEndEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDebugMarkerEndEXT=v3dv_CmdDebugMarkerEndEXT_Weak")
    void (*v3dv_CmdDebugMarkerEndEXT_Null)(VkCommandBuffer commandBuffer) = 0;
    void v3dv_CmdDebugMarkerEndEXT_Weak(VkCommandBuffer commandBuffer);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDebugMarkerInsertEXT_Weak=v3dv_CmdDebugMarkerInsertEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDebugMarkerInsertEXT=v3dv_CmdDebugMarkerInsertEXT_Weak")
    void (*v3dv_CmdDebugMarkerInsertEXT_Null)(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) = 0;
    void v3dv_CmdDebugMarkerInsertEXT_Weak(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryWin32HandleNV_Weak=v3dv_GetMemoryWin32HandleNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryWin32HandleNV=v3dv_GetMemoryWin32HandleNV_Weak")
    VkResult (*v3dv_GetMemoryWin32HandleNV_Null)(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle) = 0;
    VkResult v3dv_GetMemoryWin32HandleNV_Weak(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdExecuteGeneratedCommandsNV_Weak=v3dv_CmdExecuteGeneratedCommandsNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdExecuteGeneratedCommandsNV=v3dv_CmdExecuteGeneratedCommandsNV_Weak")
    void (*v3dv_CmdExecuteGeneratedCommandsNV_Null)(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) = 0;
    void v3dv_CmdExecuteGeneratedCommandsNV_Weak(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdExecuteGeneratedCommandsNV(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdPreprocessGeneratedCommandsNV_Weak=v3dv_CmdPreprocessGeneratedCommandsNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdPreprocessGeneratedCommandsNV=v3dv_CmdPreprocessGeneratedCommandsNV_Weak")
    void (*v3dv_CmdPreprocessGeneratedCommandsNV_Null)(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) = 0;
    void v3dv_CmdPreprocessGeneratedCommandsNV_Weak(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdPreprocessGeneratedCommandsNV(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBindPipelineShaderGroupNV_Weak=v3dv_CmdBindPipelineShaderGroupNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBindPipelineShaderGroupNV=v3dv_CmdBindPipelineShaderGroupNV_Weak")
    void (*v3dv_CmdBindPipelineShaderGroupNV_Null)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) = 0;
    void v3dv_CmdBindPipelineShaderGroupNV_Weak(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBindPipelineShaderGroupNV(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetGeneratedCommandsMemoryRequirementsNV_Weak=v3dv_GetGeneratedCommandsMemoryRequirementsNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetGeneratedCommandsMemoryRequirementsNV=v3dv_GetGeneratedCommandsMemoryRequirementsNV_Weak")
    void (*v3dv_GetGeneratedCommandsMemoryRequirementsNV_Null)(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements) = 0;
    void v3dv_GetGeneratedCommandsMemoryRequirementsNV_Weak(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetGeneratedCommandsMemoryRequirementsNV(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateIndirectCommandsLayoutNV_Weak=v3dv_CreateIndirectCommandsLayoutNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateIndirectCommandsLayoutNV=v3dv_CreateIndirectCommandsLayoutNV_Weak")
    VkResult (*v3dv_CreateIndirectCommandsLayoutNV_Null)(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV* pIndirectCommandsLayout) = 0;
    VkResult v3dv_CreateIndirectCommandsLayoutNV_Weak(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV* pIndirectCommandsLayout);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateIndirectCommandsLayoutNV(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV* pIndirectCommandsLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyIndirectCommandsLayoutNV_Weak=v3dv_DestroyIndirectCommandsLayoutNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyIndirectCommandsLayoutNV=v3dv_DestroyIndirectCommandsLayoutNV_Weak")
    void (*v3dv_DestroyIndirectCommandsLayoutNV_Null)(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyIndirectCommandsLayoutNV_Weak(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyIndirectCommandsLayoutNV(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdPushDescriptorSetKHR_Weak=v3dv_CmdPushDescriptorSetKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdPushDescriptorSetKHR=v3dv_CmdPushDescriptorSetKHR_Weak")
    void (*v3dv_CmdPushDescriptorSetKHR_Null)(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites) = 0;
    void v3dv_CmdPushDescriptorSetKHR_Weak(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_TrimCommandPool_Weak=v3dv_TrimCommandPool_Null")
    #pragma comment(linker, "/alternatename:v3dv_TrimCommandPool=v3dv_TrimCommandPool_Weak")
    void (*v3dv_TrimCommandPool_Null)(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) = 0;
    void v3dv_TrimCommandPool_Weak(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_TrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_TrimCommandPoolKHR_Weak=v3dv_TrimCommandPoolKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_TrimCommandPoolKHR=v3dv_TrimCommandPoolKHR_Weak")
    void (*v3dv_TrimCommandPoolKHR_Null)(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) = 0;
    void v3dv_TrimCommandPoolKHR_Weak(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_TrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryWin32HandleKHR_Weak=v3dv_GetMemoryWin32HandleKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryWin32HandleKHR=v3dv_GetMemoryWin32HandleKHR_Weak")
    VkResult (*v3dv_GetMemoryWin32HandleKHR_Null)(VkDevice device, const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) = 0;
    VkResult v3dv_GetMemoryWin32HandleKHR_Weak(VkDevice device, const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetMemoryWin32HandleKHR(VkDevice device, const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryWin32HandlePropertiesKHR_Weak=v3dv_GetMemoryWin32HandlePropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryWin32HandlePropertiesKHR=v3dv_GetMemoryWin32HandlePropertiesKHR_Weak")
    VkResult (*v3dv_GetMemoryWin32HandlePropertiesKHR_Null)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties) = 0;
    VkResult v3dv_GetMemoryWin32HandlePropertiesKHR_Weak(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetMemoryWin32HandlePropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryFdKHR_Weak=v3dv_GetMemoryFdKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryFdKHR=v3dv_GetMemoryFdKHR_Weak")
    VkResult (*v3dv_GetMemoryFdKHR_Null)(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) = 0;
    VkResult v3dv_GetMemoryFdKHR_Weak(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryFdPropertiesKHR_Weak=v3dv_GetMemoryFdPropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryFdPropertiesKHR=v3dv_GetMemoryFdPropertiesKHR_Weak")
    VkResult (*v3dv_GetMemoryFdPropertiesKHR_Null)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties) = 0;
    VkResult v3dv_GetMemoryFdPropertiesKHR_Weak(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetSemaphoreWin32HandleKHR_Weak=v3dv_GetSemaphoreWin32HandleKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetSemaphoreWin32HandleKHR=v3dv_GetSemaphoreWin32HandleKHR_Weak")
    VkResult (*v3dv_GetSemaphoreWin32HandleKHR_Null)(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) = 0;
    VkResult v3dv_GetSemaphoreWin32HandleKHR_Weak(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetSemaphoreWin32HandleKHR(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ImportSemaphoreWin32HandleKHR_Weak=v3dv_ImportSemaphoreWin32HandleKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_ImportSemaphoreWin32HandleKHR=v3dv_ImportSemaphoreWin32HandleKHR_Weak")
    VkResult (*v3dv_ImportSemaphoreWin32HandleKHR_Null)(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo) = 0;
    VkResult v3dv_ImportSemaphoreWin32HandleKHR_Weak(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ImportSemaphoreWin32HandleKHR(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetSemaphoreFdKHR_Weak=v3dv_GetSemaphoreFdKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetSemaphoreFdKHR=v3dv_GetSemaphoreFdKHR_Weak")
    VkResult (*v3dv_GetSemaphoreFdKHR_Null)(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) = 0;
    VkResult v3dv_GetSemaphoreFdKHR_Weak(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ImportSemaphoreFdKHR_Weak=v3dv_ImportSemaphoreFdKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_ImportSemaphoreFdKHR=v3dv_ImportSemaphoreFdKHR_Weak")
    VkResult (*v3dv_ImportSemaphoreFdKHR_Null)(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) = 0;
    VkResult v3dv_ImportSemaphoreFdKHR_Weak(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetFenceWin32HandleKHR_Weak=v3dv_GetFenceWin32HandleKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetFenceWin32HandleKHR=v3dv_GetFenceWin32HandleKHR_Weak")
    VkResult (*v3dv_GetFenceWin32HandleKHR_Null)(VkDevice device, const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) = 0;
    VkResult v3dv_GetFenceWin32HandleKHR_Weak(VkDevice device, const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetFenceWin32HandleKHR(VkDevice device, const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ImportFenceWin32HandleKHR_Weak=v3dv_ImportFenceWin32HandleKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_ImportFenceWin32HandleKHR=v3dv_ImportFenceWin32HandleKHR_Weak")
    VkResult (*v3dv_ImportFenceWin32HandleKHR_Null)(VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo) = 0;
    VkResult v3dv_ImportFenceWin32HandleKHR_Weak(VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ImportFenceWin32HandleKHR(VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetFenceFdKHR_Weak=v3dv_GetFenceFdKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetFenceFdKHR=v3dv_GetFenceFdKHR_Weak")
    VkResult (*v3dv_GetFenceFdKHR_Null)(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) = 0;
    VkResult v3dv_GetFenceFdKHR_Weak(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ImportFenceFdKHR_Weak=v3dv_ImportFenceFdKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_ImportFenceFdKHR=v3dv_ImportFenceFdKHR_Weak")
    VkResult (*v3dv_ImportFenceFdKHR_Null)(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo) = 0;
    VkResult v3dv_ImportFenceFdKHR_Weak(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DisplayPowerControlEXT_Weak=v3dv_DisplayPowerControlEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_DisplayPowerControlEXT=v3dv_DisplayPowerControlEXT_Weak")
    VkResult (*v3dv_DisplayPowerControlEXT_Null)(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo) = 0;
    VkResult v3dv_DisplayPowerControlEXT_Weak(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_DisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_RegisterDeviceEventEXT_Weak=v3dv_RegisterDeviceEventEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_RegisterDeviceEventEXT=v3dv_RegisterDeviceEventEXT_Weak")
    VkResult (*v3dv_RegisterDeviceEventEXT_Null)(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) = 0;
    VkResult v3dv_RegisterDeviceEventEXT_Weak(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_RegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_RegisterDisplayEventEXT_Weak=v3dv_RegisterDisplayEventEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_RegisterDisplayEventEXT=v3dv_RegisterDisplayEventEXT_Weak")
    VkResult (*v3dv_RegisterDisplayEventEXT_Null)(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) = 0;
    VkResult v3dv_RegisterDisplayEventEXT_Weak(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_RegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainCounterEXT_Weak=v3dv_GetSwapchainCounterEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainCounterEXT=v3dv_GetSwapchainCounterEXT_Weak")
    VkResult (*v3dv_GetSwapchainCounterEXT_Null)(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue) = 0;
    VkResult v3dv_GetSwapchainCounterEXT_Weak(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupPeerMemoryFeatures_Weak=v3dv_GetDeviceGroupPeerMemoryFeatures_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupPeerMemoryFeatures=v3dv_GetDeviceGroupPeerMemoryFeatures_Weak")
    void (*v3dv_GetDeviceGroupPeerMemoryFeatures_Null)(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) = 0;
    void v3dv_GetDeviceGroupPeerMemoryFeatures_Weak(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupPeerMemoryFeaturesKHR_Weak=v3dv_GetDeviceGroupPeerMemoryFeaturesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupPeerMemoryFeaturesKHR=v3dv_GetDeviceGroupPeerMemoryFeaturesKHR_Weak")
    void (*v3dv_GetDeviceGroupPeerMemoryFeaturesKHR_Null)(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) = 0;
    void v3dv_GetDeviceGroupPeerMemoryFeaturesKHR_Weak(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetDeviceGroupPeerMemoryFeaturesKHR(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_BindBufferMemory2_Weak=v3dv_BindBufferMemory2_Null")
    #pragma comment(linker, "/alternatename:v3dv_BindBufferMemory2=v3dv_BindBufferMemory2_Weak")
    VkResult (*v3dv_BindBufferMemory2_Null)(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) = 0;
    VkResult v3dv_BindBufferMemory2_Weak(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_BindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_BindBufferMemory2KHR_Weak=v3dv_BindBufferMemory2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_BindBufferMemory2KHR=v3dv_BindBufferMemory2KHR_Weak")
    VkResult (*v3dv_BindBufferMemory2KHR_Null)(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) = 0;
    VkResult v3dv_BindBufferMemory2KHR_Weak(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_BindBufferMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_BindImageMemory2_Weak=v3dv_BindImageMemory2_Null")
    #pragma comment(linker, "/alternatename:v3dv_BindImageMemory2=v3dv_BindImageMemory2_Weak")
    VkResult (*v3dv_BindImageMemory2_Null)(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) = 0;
    VkResult v3dv_BindImageMemory2_Weak(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_BindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_BindImageMemory2KHR_Weak=v3dv_BindImageMemory2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_BindImageMemory2KHR=v3dv_BindImageMemory2KHR_Weak")
    VkResult (*v3dv_BindImageMemory2KHR_Null)(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) = 0;
    VkResult v3dv_BindImageMemory2KHR_Weak(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_BindImageMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDeviceMask_Weak=v3dv_CmdSetDeviceMask_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDeviceMask=v3dv_CmdSetDeviceMask_Weak")
    void (*v3dv_CmdSetDeviceMask_Null)(VkCommandBuffer commandBuffer, uint32_t deviceMask) = 0;
    void v3dv_CmdSetDeviceMask_Weak(VkCommandBuffer commandBuffer, uint32_t deviceMask);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDeviceMaskKHR_Weak=v3dv_CmdSetDeviceMaskKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDeviceMaskKHR=v3dv_CmdSetDeviceMaskKHR_Weak")
    void (*v3dv_CmdSetDeviceMaskKHR_Null)(VkCommandBuffer commandBuffer, uint32_t deviceMask) = 0;
    void v3dv_CmdSetDeviceMaskKHR_Weak(VkCommandBuffer commandBuffer, uint32_t deviceMask);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupPresentCapabilitiesKHR_Weak=v3dv_GetDeviceGroupPresentCapabilitiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupPresentCapabilitiesKHR=v3dv_GetDeviceGroupPresentCapabilitiesKHR_Weak")
    VkResult (*v3dv_GetDeviceGroupPresentCapabilitiesKHR_Null)(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) = 0;
    VkResult v3dv_GetDeviceGroupPresentCapabilitiesKHR_Weak(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupSurfacePresentModesKHR_Weak=v3dv_GetDeviceGroupSurfacePresentModesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupSurfacePresentModesKHR=v3dv_GetDeviceGroupSurfacePresentModesKHR_Weak")
    VkResult (*v3dv_GetDeviceGroupSurfacePresentModesKHR_Null)(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes) = 0;
    VkResult v3dv_GetDeviceGroupSurfacePresentModesKHR_Weak(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AcquireNextImage2KHR_Weak=v3dv_AcquireNextImage2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_AcquireNextImage2KHR=v3dv_AcquireNextImage2KHR_Weak")
    VkResult (*v3dv_AcquireNextImage2KHR_Null)(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex) = 0;
    VkResult v3dv_AcquireNextImage2KHR_Weak(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDispatchBase_Weak=v3dv_CmdDispatchBase_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDispatchBase=v3dv_CmdDispatchBase_Weak")
    void (*v3dv_CmdDispatchBase_Null)(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) = 0;
    void v3dv_CmdDispatchBase_Weak(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDispatchBaseKHR_Weak=v3dv_CmdDispatchBaseKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDispatchBaseKHR=v3dv_CmdDispatchBaseKHR_Weak")
    void (*v3dv_CmdDispatchBaseKHR_Null)(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) = 0;
    void v3dv_CmdDispatchBaseKHR_Weak(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDescriptorUpdateTemplate_Weak=v3dv_CreateDescriptorUpdateTemplate_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDescriptorUpdateTemplate=v3dv_CreateDescriptorUpdateTemplate_Weak")
    VkResult (*v3dv_CreateDescriptorUpdateTemplate_Null)(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) = 0;
    VkResult v3dv_CreateDescriptorUpdateTemplate_Weak(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDescriptorUpdateTemplateKHR_Weak=v3dv_CreateDescriptorUpdateTemplateKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDescriptorUpdateTemplateKHR=v3dv_CreateDescriptorUpdateTemplateKHR_Weak")
    VkResult (*v3dv_CreateDescriptorUpdateTemplateKHR_Null)(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) = 0;
    VkResult v3dv_CreateDescriptorUpdateTemplateKHR_Weak(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDescriptorUpdateTemplateKHR(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyDescriptorUpdateTemplate_Weak=v3dv_DestroyDescriptorUpdateTemplate_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyDescriptorUpdateTemplate=v3dv_DestroyDescriptorUpdateTemplate_Weak")
    void (*v3dv_DestroyDescriptorUpdateTemplate_Null)(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyDescriptorUpdateTemplate_Weak(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyDescriptorUpdateTemplateKHR_Weak=v3dv_DestroyDescriptorUpdateTemplateKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyDescriptorUpdateTemplateKHR=v3dv_DestroyDescriptorUpdateTemplateKHR_Weak")
    void (*v3dv_DestroyDescriptorUpdateTemplateKHR_Null)(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyDescriptorUpdateTemplateKHR_Weak(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyDescriptorUpdateTemplateKHR(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_UpdateDescriptorSetWithTemplate_Weak=v3dv_UpdateDescriptorSetWithTemplate_Null")
    #pragma comment(linker, "/alternatename:v3dv_UpdateDescriptorSetWithTemplate=v3dv_UpdateDescriptorSetWithTemplate_Weak")
    void (*v3dv_UpdateDescriptorSetWithTemplate_Null)(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) = 0;
    void v3dv_UpdateDescriptorSetWithTemplate_Weak(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_UpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_UpdateDescriptorSetWithTemplateKHR_Weak=v3dv_UpdateDescriptorSetWithTemplateKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_UpdateDescriptorSetWithTemplateKHR=v3dv_UpdateDescriptorSetWithTemplateKHR_Weak")
    void (*v3dv_UpdateDescriptorSetWithTemplateKHR_Null)(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) = 0;
    void v3dv_UpdateDescriptorSetWithTemplateKHR_Weak(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_UpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdPushDescriptorSetWithTemplateKHR_Weak=v3dv_CmdPushDescriptorSetWithTemplateKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdPushDescriptorSetWithTemplateKHR=v3dv_CmdPushDescriptorSetWithTemplateKHR_Weak")
    void (*v3dv_CmdPushDescriptorSetWithTemplateKHR_Null)(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData) = 0;
    void v3dv_CmdPushDescriptorSetWithTemplateKHR_Weak(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_SetHdrMetadataEXT_Weak=v3dv_SetHdrMetadataEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_SetHdrMetadataEXT=v3dv_SetHdrMetadataEXT_Weak")
    void (*v3dv_SetHdrMetadataEXT_Null)(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) = 0;
    void v3dv_SetHdrMetadataEXT_Weak(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_SetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainStatusKHR_Weak=v3dv_GetSwapchainStatusKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainStatusKHR=v3dv_GetSwapchainStatusKHR_Weak")
    VkResult (*v3dv_GetSwapchainStatusKHR_Null)(VkDevice device, VkSwapchainKHR swapchain) = 0;
    VkResult v3dv_GetSwapchainStatusKHR_Weak(VkDevice device, VkSwapchainKHR swapchain);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetRefreshCycleDurationGOOGLE_Weak=v3dv_GetRefreshCycleDurationGOOGLE_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetRefreshCycleDurationGOOGLE=v3dv_GetRefreshCycleDurationGOOGLE_Weak")
    VkResult (*v3dv_GetRefreshCycleDurationGOOGLE_Null)(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties) = 0;
    VkResult v3dv_GetRefreshCycleDurationGOOGLE_Weak(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPastPresentationTimingGOOGLE_Weak=v3dv_GetPastPresentationTimingGOOGLE_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPastPresentationTimingGOOGLE=v3dv_GetPastPresentationTimingGOOGLE_Weak")
    VkResult (*v3dv_GetPastPresentationTimingGOOGLE_Null)(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings) = 0;
    VkResult v3dv_GetPastPresentationTimingGOOGLE_Weak(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPastPresentationTimingGOOGLE(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetViewportWScalingNV_Weak=v3dv_CmdSetViewportWScalingNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetViewportWScalingNV=v3dv_CmdSetViewportWScalingNV_Weak")
    void (*v3dv_CmdSetViewportWScalingNV_Null)(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings) = 0;
    void v3dv_CmdSetViewportWScalingNV_Weak(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDiscardRectangleEXT_Weak=v3dv_CmdSetDiscardRectangleEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDiscardRectangleEXT=v3dv_CmdSetDiscardRectangleEXT_Weak")
    void (*v3dv_CmdSetDiscardRectangleEXT_Null)(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles) = 0;
    void v3dv_CmdSetDiscardRectangleEXT_Weak(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetSampleLocationsEXT_Weak=v3dv_CmdSetSampleLocationsEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetSampleLocationsEXT=v3dv_CmdSetSampleLocationsEXT_Weak")
    void (*v3dv_CmdSetSampleLocationsEXT_Null)(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo) = 0;
    void v3dv_CmdSetSampleLocationsEXT_Weak(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetBufferMemoryRequirements2_Weak=v3dv_GetBufferMemoryRequirements2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetBufferMemoryRequirements2=v3dv_GetBufferMemoryRequirements2_Weak")
    void (*v3dv_GetBufferMemoryRequirements2_Null)(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) = 0;
    void v3dv_GetBufferMemoryRequirements2_Weak(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetBufferMemoryRequirements2KHR_Weak=v3dv_GetBufferMemoryRequirements2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetBufferMemoryRequirements2KHR=v3dv_GetBufferMemoryRequirements2KHR_Weak")
    void (*v3dv_GetBufferMemoryRequirements2KHR_Null)(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) = 0;
    void v3dv_GetBufferMemoryRequirements2KHR_Weak(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetBufferMemoryRequirements2KHR(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageMemoryRequirements2_Weak=v3dv_GetImageMemoryRequirements2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageMemoryRequirements2=v3dv_GetImageMemoryRequirements2_Weak")
    void (*v3dv_GetImageMemoryRequirements2_Null)(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) = 0;
    void v3dv_GetImageMemoryRequirements2_Weak(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageMemoryRequirements2KHR_Weak=v3dv_GetImageMemoryRequirements2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageMemoryRequirements2KHR=v3dv_GetImageMemoryRequirements2KHR_Weak")
    void (*v3dv_GetImageMemoryRequirements2KHR_Null)(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) = 0;
    void v3dv_GetImageMemoryRequirements2KHR_Weak(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetImageMemoryRequirements2KHR(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageSparseMemoryRequirements2_Weak=v3dv_GetImageSparseMemoryRequirements2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageSparseMemoryRequirements2=v3dv_GetImageSparseMemoryRequirements2_Weak")
    void (*v3dv_GetImageSparseMemoryRequirements2_Null)(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) = 0;
    void v3dv_GetImageSparseMemoryRequirements2_Weak(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetImageSparseMemoryRequirements2(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageSparseMemoryRequirements2KHR_Weak=v3dv_GetImageSparseMemoryRequirements2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageSparseMemoryRequirements2KHR=v3dv_GetImageSparseMemoryRequirements2KHR_Weak")
    void (*v3dv_GetImageSparseMemoryRequirements2KHR_Null)(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) = 0;
    void v3dv_GetImageSparseMemoryRequirements2KHR_Weak(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetImageSparseMemoryRequirements2KHR(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateSamplerYcbcrConversion_Weak=v3dv_CreateSamplerYcbcrConversion_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateSamplerYcbcrConversion=v3dv_CreateSamplerYcbcrConversion_Weak")
    VkResult (*v3dv_CreateSamplerYcbcrConversion_Null)(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) = 0;
    VkResult v3dv_CreateSamplerYcbcrConversion_Weak(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateSamplerYcbcrConversionKHR_Weak=v3dv_CreateSamplerYcbcrConversionKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateSamplerYcbcrConversionKHR=v3dv_CreateSamplerYcbcrConversionKHR_Weak")
    VkResult (*v3dv_CreateSamplerYcbcrConversionKHR_Null)(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) = 0;
    VkResult v3dv_CreateSamplerYcbcrConversionKHR_Weak(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateSamplerYcbcrConversionKHR(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroySamplerYcbcrConversion_Weak=v3dv_DestroySamplerYcbcrConversion_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroySamplerYcbcrConversion=v3dv_DestroySamplerYcbcrConversion_Weak")
    void (*v3dv_DestroySamplerYcbcrConversion_Null)(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroySamplerYcbcrConversion_Weak(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroySamplerYcbcrConversionKHR_Weak=v3dv_DestroySamplerYcbcrConversionKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroySamplerYcbcrConversionKHR=v3dv_DestroySamplerYcbcrConversionKHR_Weak")
    void (*v3dv_DestroySamplerYcbcrConversionKHR_Null)(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroySamplerYcbcrConversionKHR_Weak(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroySamplerYcbcrConversionKHR(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceQueue2_Weak=v3dv_GetDeviceQueue2_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceQueue2=v3dv_GetDeviceQueue2_Weak")
    void (*v3dv_GetDeviceQueue2_Null)(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) = 0;
    void v3dv_GetDeviceQueue2_Weak(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateValidationCacheEXT_Weak=v3dv_CreateValidationCacheEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateValidationCacheEXT=v3dv_CreateValidationCacheEXT_Weak")
    VkResult (*v3dv_CreateValidationCacheEXT_Null)(VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache) = 0;
    VkResult v3dv_CreateValidationCacheEXT_Weak(VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateValidationCacheEXT(VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyValidationCacheEXT_Weak=v3dv_DestroyValidationCacheEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyValidationCacheEXT=v3dv_DestroyValidationCacheEXT_Weak")
    void (*v3dv_DestroyValidationCacheEXT_Null)(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyValidationCacheEXT_Weak(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetValidationCacheDataEXT_Weak=v3dv_GetValidationCacheDataEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetValidationCacheDataEXT=v3dv_GetValidationCacheDataEXT_Weak")
    VkResult (*v3dv_GetValidationCacheDataEXT_Null)(VkDevice device, VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData) = 0;
    VkResult v3dv_GetValidationCacheDataEXT_Weak(VkDevice device, VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetValidationCacheDataEXT(VkDevice device, VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_MergeValidationCachesEXT_Weak=v3dv_MergeValidationCachesEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_MergeValidationCachesEXT=v3dv_MergeValidationCachesEXT_Weak")
    VkResult (*v3dv_MergeValidationCachesEXT_Null)(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT* pSrcCaches) = 0;
    VkResult v3dv_MergeValidationCachesEXT_Weak(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT* pSrcCaches);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_MergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT* pSrcCaches) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDescriptorSetLayoutSupport_Weak=v3dv_GetDescriptorSetLayoutSupport_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDescriptorSetLayoutSupport=v3dv_GetDescriptorSetLayoutSupport_Weak")
    void (*v3dv_GetDescriptorSetLayoutSupport_Null)(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) = 0;
    void v3dv_GetDescriptorSetLayoutSupport_Weak(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDescriptorSetLayoutSupportKHR_Weak=v3dv_GetDescriptorSetLayoutSupportKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDescriptorSetLayoutSupportKHR=v3dv_GetDescriptorSetLayoutSupportKHR_Weak")
    void (*v3dv_GetDescriptorSetLayoutSupportKHR_Null)(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) = 0;
    void v3dv_GetDescriptorSetLayoutSupportKHR_Weak(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetDescriptorSetLayoutSupportKHR(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainGrallocUsageANDROID_Weak=v3dv_GetSwapchainGrallocUsageANDROID_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainGrallocUsageANDROID=v3dv_GetSwapchainGrallocUsageANDROID_Weak")
    VkResult (*v3dv_GetSwapchainGrallocUsageANDROID_Null)(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, int* grallocUsage) = 0;
    VkResult v3dv_GetSwapchainGrallocUsageANDROID_Weak(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, int* grallocUsage);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetSwapchainGrallocUsageANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, int* grallocUsage) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainGrallocUsage2ANDROID_Weak=v3dv_GetSwapchainGrallocUsage2ANDROID_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetSwapchainGrallocUsage2ANDROID=v3dv_GetSwapchainGrallocUsage2ANDROID_Weak")
    VkResult (*v3dv_GetSwapchainGrallocUsage2ANDROID_Null)(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, VkSwapchainImageUsageFlagsANDROID swapchainImageUsage, uint64_t* grallocConsumerUsage, uint64_t* grallocProducerUsage) = 0;
    VkResult v3dv_GetSwapchainGrallocUsage2ANDROID_Weak(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, VkSwapchainImageUsageFlagsANDROID swapchainImageUsage, uint64_t* grallocConsumerUsage, uint64_t* grallocProducerUsage);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetSwapchainGrallocUsage2ANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, VkSwapchainImageUsageFlagsANDROID swapchainImageUsage, uint64_t* grallocConsumerUsage, uint64_t* grallocProducerUsage) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AcquireImageANDROID_Weak=v3dv_AcquireImageANDROID_Null")
    #pragma comment(linker, "/alternatename:v3dv_AcquireImageANDROID=v3dv_AcquireImageANDROID_Weak")
    VkResult (*v3dv_AcquireImageANDROID_Null)(VkDevice device, VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence) = 0;
    VkResult v3dv_AcquireImageANDROID_Weak(VkDevice device, VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AcquireImageANDROID(VkDevice device, VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_QueueSignalReleaseImageANDROID_Weak=v3dv_QueueSignalReleaseImageANDROID_Null")
    #pragma comment(linker, "/alternatename:v3dv_QueueSignalReleaseImageANDROID=v3dv_QueueSignalReleaseImageANDROID_Weak")
    VkResult (*v3dv_QueueSignalReleaseImageANDROID_Null)(VkQueue queue, uint32_t waitSemaphoreCount, const VkSemaphore* pWaitSemaphores, VkImage image, int* pNativeFenceFd) = 0;
    VkResult v3dv_QueueSignalReleaseImageANDROID_Weak(VkQueue queue, uint32_t waitSemaphoreCount, const VkSemaphore* pWaitSemaphores, VkImage image, int* pNativeFenceFd);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_QueueSignalReleaseImageANDROID(VkQueue queue, uint32_t waitSemaphoreCount, const VkSemaphore* pWaitSemaphores, VkImage image, int* pNativeFenceFd) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetShaderInfoAMD_Weak=v3dv_GetShaderInfoAMD_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetShaderInfoAMD=v3dv_GetShaderInfoAMD_Weak")
    VkResult (*v3dv_GetShaderInfoAMD_Null)(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo) = 0;
    VkResult v3dv_GetShaderInfoAMD_Weak(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetShaderInfoAMD(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_SetLocalDimmingAMD_Weak=v3dv_SetLocalDimmingAMD_Null")
    #pragma comment(linker, "/alternatename:v3dv_SetLocalDimmingAMD=v3dv_SetLocalDimmingAMD_Weak")
    void (*v3dv_SetLocalDimmingAMD_Null)(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) = 0;
    void v3dv_SetLocalDimmingAMD_Weak(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_SetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetCalibratedTimestampsEXT_Weak=v3dv_GetCalibratedTimestampsEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetCalibratedTimestampsEXT=v3dv_GetCalibratedTimestampsEXT_Weak")
    VkResult (*v3dv_GetCalibratedTimestampsEXT_Null)(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation) = 0;
    VkResult v3dv_GetCalibratedTimestampsEXT_Weak(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_SetDebugUtilsObjectNameEXT_Weak=v3dv_SetDebugUtilsObjectNameEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_SetDebugUtilsObjectNameEXT=v3dv_SetDebugUtilsObjectNameEXT_Weak")
    VkResult (*v3dv_SetDebugUtilsObjectNameEXT_Null)(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo) = 0;
    VkResult v3dv_SetDebugUtilsObjectNameEXT_Weak(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_SetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_SetDebugUtilsObjectTagEXT_Weak=v3dv_SetDebugUtilsObjectTagEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_SetDebugUtilsObjectTagEXT=v3dv_SetDebugUtilsObjectTagEXT_Weak")
    VkResult (*v3dv_SetDebugUtilsObjectTagEXT_Null)(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo) = 0;
    VkResult v3dv_SetDebugUtilsObjectTagEXT_Weak(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_SetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_QueueBeginDebugUtilsLabelEXT_Weak=v3dv_QueueBeginDebugUtilsLabelEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_QueueBeginDebugUtilsLabelEXT=v3dv_QueueBeginDebugUtilsLabelEXT_Weak")
    void (*v3dv_QueueBeginDebugUtilsLabelEXT_Null)(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) = 0;
    void v3dv_QueueBeginDebugUtilsLabelEXT_Weak(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_QueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_QueueEndDebugUtilsLabelEXT_Weak=v3dv_QueueEndDebugUtilsLabelEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_QueueEndDebugUtilsLabelEXT=v3dv_QueueEndDebugUtilsLabelEXT_Weak")
    void (*v3dv_QueueEndDebugUtilsLabelEXT_Null)(VkQueue queue) = 0;
    void v3dv_QueueEndDebugUtilsLabelEXT_Weak(VkQueue queue);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_QueueEndDebugUtilsLabelEXT(VkQueue queue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_QueueInsertDebugUtilsLabelEXT_Weak=v3dv_QueueInsertDebugUtilsLabelEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_QueueInsertDebugUtilsLabelEXT=v3dv_QueueInsertDebugUtilsLabelEXT_Weak")
    void (*v3dv_QueueInsertDebugUtilsLabelEXT_Null)(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) = 0;
    void v3dv_QueueInsertDebugUtilsLabelEXT_Weak(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_QueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginDebugUtilsLabelEXT_Weak=v3dv_CmdBeginDebugUtilsLabelEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginDebugUtilsLabelEXT=v3dv_CmdBeginDebugUtilsLabelEXT_Weak")
    void (*v3dv_CmdBeginDebugUtilsLabelEXT_Null)(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) = 0;
    void v3dv_CmdBeginDebugUtilsLabelEXT_Weak(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdEndDebugUtilsLabelEXT_Weak=v3dv_CmdEndDebugUtilsLabelEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdEndDebugUtilsLabelEXT=v3dv_CmdEndDebugUtilsLabelEXT_Weak")
    void (*v3dv_CmdEndDebugUtilsLabelEXT_Null)(VkCommandBuffer commandBuffer) = 0;
    void v3dv_CmdEndDebugUtilsLabelEXT_Weak(VkCommandBuffer commandBuffer);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdInsertDebugUtilsLabelEXT_Weak=v3dv_CmdInsertDebugUtilsLabelEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdInsertDebugUtilsLabelEXT=v3dv_CmdInsertDebugUtilsLabelEXT_Weak")
    void (*v3dv_CmdInsertDebugUtilsLabelEXT_Null)(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) = 0;
    void v3dv_CmdInsertDebugUtilsLabelEXT_Weak(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryHostPointerPropertiesEXT_Weak=v3dv_GetMemoryHostPointerPropertiesEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryHostPointerPropertiesEXT=v3dv_GetMemoryHostPointerPropertiesEXT_Weak")
    VkResult (*v3dv_GetMemoryHostPointerPropertiesEXT_Null)(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) = 0;
    VkResult v3dv_GetMemoryHostPointerPropertiesEXT_Weak(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdWriteBufferMarkerAMD_Weak=v3dv_CmdWriteBufferMarkerAMD_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdWriteBufferMarkerAMD=v3dv_CmdWriteBufferMarkerAMD_Weak")
    void (*v3dv_CmdWriteBufferMarkerAMD_Null)(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) = 0;
    void v3dv_CmdWriteBufferMarkerAMD_Weak(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateRenderPass2_Weak=v3dv_CreateRenderPass2_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateRenderPass2=v3dv_CreateRenderPass2_Weak")
    VkResult (*v3dv_CreateRenderPass2_Null)(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) = 0;
    VkResult v3dv_CreateRenderPass2_Weak(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateRenderPass2(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateRenderPass2KHR_Weak=v3dv_CreateRenderPass2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateRenderPass2KHR=v3dv_CreateRenderPass2KHR_Weak")
    VkResult (*v3dv_CreateRenderPass2KHR_Null)(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) = 0;
    VkResult v3dv_CreateRenderPass2KHR_Weak(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginRenderPass2_Weak=v3dv_CmdBeginRenderPass2_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginRenderPass2=v3dv_CmdBeginRenderPass2_Weak")
    void (*v3dv_CmdBeginRenderPass2_Null)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo) = 0;
    void v3dv_CmdBeginRenderPass2_Weak(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBeginRenderPass2(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginRenderPass2KHR_Weak=v3dv_CmdBeginRenderPass2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginRenderPass2KHR=v3dv_CmdBeginRenderPass2KHR_Weak")
    void (*v3dv_CmdBeginRenderPass2KHR_Null)(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo) = 0;
    void v3dv_CmdBeginRenderPass2KHR_Weak(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdNextSubpass2_Weak=v3dv_CmdNextSubpass2_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdNextSubpass2=v3dv_CmdNextSubpass2_Weak")
    void (*v3dv_CmdNextSubpass2_Null)(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo) = 0;
    void v3dv_CmdNextSubpass2_Weak(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdNextSubpass2KHR_Weak=v3dv_CmdNextSubpass2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdNextSubpass2KHR=v3dv_CmdNextSubpass2KHR_Weak")
    void (*v3dv_CmdNextSubpass2KHR_Null)(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo) = 0;
    void v3dv_CmdNextSubpass2KHR_Weak(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdNextSubpass2KHR(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdEndRenderPass2_Weak=v3dv_CmdEndRenderPass2_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdEndRenderPass2=v3dv_CmdEndRenderPass2_Weak")
    void (*v3dv_CmdEndRenderPass2_Null)(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo) = 0;
    void v3dv_CmdEndRenderPass2_Weak(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdEndRenderPass2KHR_Weak=v3dv_CmdEndRenderPass2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdEndRenderPass2KHR=v3dv_CmdEndRenderPass2KHR_Weak")
    void (*v3dv_CmdEndRenderPass2KHR_Null)(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo) = 0;
    void v3dv_CmdEndRenderPass2KHR_Weak(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdEndRenderPass2KHR(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetSemaphoreCounterValue_Weak=v3dv_GetSemaphoreCounterValue_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetSemaphoreCounterValue=v3dv_GetSemaphoreCounterValue_Weak")
    VkResult (*v3dv_GetSemaphoreCounterValue_Null)(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) = 0;
    VkResult v3dv_GetSemaphoreCounterValue_Weak(VkDevice device, VkSemaphore semaphore, uint64_t* pValue);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetSemaphoreCounterValueKHR_Weak=v3dv_GetSemaphoreCounterValueKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetSemaphoreCounterValueKHR=v3dv_GetSemaphoreCounterValueKHR_Weak")
    VkResult (*v3dv_GetSemaphoreCounterValueKHR_Null)(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) = 0;
    VkResult v3dv_GetSemaphoreCounterValueKHR_Weak(VkDevice device, VkSemaphore semaphore, uint64_t* pValue);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetSemaphoreCounterValueKHR(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_WaitSemaphores_Weak=v3dv_WaitSemaphores_Null")
    #pragma comment(linker, "/alternatename:v3dv_WaitSemaphores=v3dv_WaitSemaphores_Weak")
    VkResult (*v3dv_WaitSemaphores_Null)(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) = 0;
    VkResult v3dv_WaitSemaphores_Weak(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_WaitSemaphores(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_WaitSemaphoresKHR_Weak=v3dv_WaitSemaphoresKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_WaitSemaphoresKHR=v3dv_WaitSemaphoresKHR_Weak")
    VkResult (*v3dv_WaitSemaphoresKHR_Null)(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) = 0;
    VkResult v3dv_WaitSemaphoresKHR_Weak(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_WaitSemaphoresKHR(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_SignalSemaphore_Weak=v3dv_SignalSemaphore_Null")
    #pragma comment(linker, "/alternatename:v3dv_SignalSemaphore=v3dv_SignalSemaphore_Weak")
    VkResult (*v3dv_SignalSemaphore_Null)(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) = 0;
    VkResult v3dv_SignalSemaphore_Weak(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_SignalSemaphore(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_SignalSemaphoreKHR_Weak=v3dv_SignalSemaphoreKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_SignalSemaphoreKHR=v3dv_SignalSemaphoreKHR_Weak")
    VkResult (*v3dv_SignalSemaphoreKHR_Null)(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) = 0;
    VkResult v3dv_SignalSemaphoreKHR_Weak(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_SignalSemaphoreKHR(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetAndroidHardwareBufferPropertiesANDROID_Weak=v3dv_GetAndroidHardwareBufferPropertiesANDROID_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetAndroidHardwareBufferPropertiesANDROID=v3dv_GetAndroidHardwareBufferPropertiesANDROID_Weak")
    VkResult (*v3dv_GetAndroidHardwareBufferPropertiesANDROID_Null)(VkDevice device, const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties) = 0;
    VkResult v3dv_GetAndroidHardwareBufferPropertiesANDROID_Weak(VkDevice device, const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetAndroidHardwareBufferPropertiesANDROID(VkDevice device, const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryAndroidHardwareBufferANDROID_Weak=v3dv_GetMemoryAndroidHardwareBufferANDROID_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetMemoryAndroidHardwareBufferANDROID=v3dv_GetMemoryAndroidHardwareBufferANDROID_Weak")
    VkResult (*v3dv_GetMemoryAndroidHardwareBufferANDROID_Null)(VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer) = 0;
    VkResult v3dv_GetMemoryAndroidHardwareBufferANDROID_Weak(VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetMemoryAndroidHardwareBufferANDROID(VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirectCount_Weak=v3dv_CmdDrawIndirectCount_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirectCount=v3dv_CmdDrawIndirectCount_Weak")
    void (*v3dv_CmdDrawIndirectCount_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawIndirectCount_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirectCountKHR_Weak=v3dv_CmdDrawIndirectCountKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirectCountKHR=v3dv_CmdDrawIndirectCountKHR_Weak")
    void (*v3dv_CmdDrawIndirectCountKHR_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawIndirectCountKHR_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirectCountAMD_Weak=v3dv_CmdDrawIndirectCountAMD_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirectCountAMD=v3dv_CmdDrawIndirectCountAMD_Weak")
    void (*v3dv_CmdDrawIndirectCountAMD_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawIndirectCountAMD_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexedIndirectCount_Weak=v3dv_CmdDrawIndexedIndirectCount_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexedIndirectCount=v3dv_CmdDrawIndexedIndirectCount_Weak")
    void (*v3dv_CmdDrawIndexedIndirectCount_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawIndexedIndirectCount_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexedIndirectCountKHR_Weak=v3dv_CmdDrawIndexedIndirectCountKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexedIndirectCountKHR=v3dv_CmdDrawIndexedIndirectCountKHR_Weak")
    void (*v3dv_CmdDrawIndexedIndirectCountKHR_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawIndexedIndirectCountKHR_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexedIndirectCountAMD_Weak=v3dv_CmdDrawIndexedIndirectCountAMD_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndexedIndirectCountAMD=v3dv_CmdDrawIndexedIndirectCountAMD_Weak")
    void (*v3dv_CmdDrawIndexedIndirectCountAMD_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawIndexedIndirectCountAMD_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetCheckpointNV_Weak=v3dv_CmdSetCheckpointNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetCheckpointNV=v3dv_CmdSetCheckpointNV_Weak")
    void (*v3dv_CmdSetCheckpointNV_Null)(VkCommandBuffer commandBuffer, const void* pCheckpointMarker) = 0;
    void v3dv_CmdSetCheckpointNV_Weak(VkCommandBuffer commandBuffer, const void* pCheckpointMarker);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void* pCheckpointMarker) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetQueueCheckpointDataNV_Weak=v3dv_GetQueueCheckpointDataNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetQueueCheckpointDataNV=v3dv_GetQueueCheckpointDataNV_Weak")
    void (*v3dv_GetQueueCheckpointDataNV_Null)(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData) = 0;
    void v3dv_GetQueueCheckpointDataNV_Weak(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetQueueCheckpointDataNV(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBindTransformFeedbackBuffersEXT_Weak=v3dv_CmdBindTransformFeedbackBuffersEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBindTransformFeedbackBuffersEXT=v3dv_CmdBindTransformFeedbackBuffersEXT_Weak")
    void (*v3dv_CmdBindTransformFeedbackBuffersEXT_Null)(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes) = 0;
    void v3dv_CmdBindTransformFeedbackBuffersEXT_Weak(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginTransformFeedbackEXT_Weak=v3dv_CmdBeginTransformFeedbackEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginTransformFeedbackEXT=v3dv_CmdBeginTransformFeedbackEXT_Weak")
    void (*v3dv_CmdBeginTransformFeedbackEXT_Null)(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) = 0;
    void v3dv_CmdBeginTransformFeedbackEXT_Weak(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdEndTransformFeedbackEXT_Weak=v3dv_CmdEndTransformFeedbackEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdEndTransformFeedbackEXT=v3dv_CmdEndTransformFeedbackEXT_Weak")
    void (*v3dv_CmdEndTransformFeedbackEXT_Null)(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) = 0;
    void v3dv_CmdEndTransformFeedbackEXT_Weak(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginQueryIndexedEXT_Weak=v3dv_CmdBeginQueryIndexedEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBeginQueryIndexedEXT=v3dv_CmdBeginQueryIndexedEXT_Weak")
    void (*v3dv_CmdBeginQueryIndexedEXT_Null)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) = 0;
    void v3dv_CmdBeginQueryIndexedEXT_Weak(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdEndQueryIndexedEXT_Weak=v3dv_CmdEndQueryIndexedEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdEndQueryIndexedEXT=v3dv_CmdEndQueryIndexedEXT_Weak")
    void (*v3dv_CmdEndQueryIndexedEXT_Null)(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) = 0;
    void v3dv_CmdEndQueryIndexedEXT_Weak(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirectByteCountEXT_Weak=v3dv_CmdDrawIndirectByteCountEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawIndirectByteCountEXT=v3dv_CmdDrawIndirectByteCountEXT_Weak")
    void (*v3dv_CmdDrawIndirectByteCountEXT_Null)(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) = 0;
    void v3dv_CmdDrawIndirectByteCountEXT_Weak(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetExclusiveScissorNV_Weak=v3dv_CmdSetExclusiveScissorNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetExclusiveScissorNV=v3dv_CmdSetExclusiveScissorNV_Weak")
    void (*v3dv_CmdSetExclusiveScissorNV_Null)(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors) = 0;
    void v3dv_CmdSetExclusiveScissorNV_Weak(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBindShadingRateImageNV_Weak=v3dv_CmdBindShadingRateImageNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBindShadingRateImageNV=v3dv_CmdBindShadingRateImageNV_Weak")
    void (*v3dv_CmdBindShadingRateImageNV_Null)(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) = 0;
    void v3dv_CmdBindShadingRateImageNV_Weak(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetViewportShadingRatePaletteNV_Weak=v3dv_CmdSetViewportShadingRatePaletteNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetViewportShadingRatePaletteNV=v3dv_CmdSetViewportShadingRatePaletteNV_Weak")
    void (*v3dv_CmdSetViewportShadingRatePaletteNV_Null)(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes) = 0;
    void v3dv_CmdSetViewportShadingRatePaletteNV_Weak(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetCoarseSampleOrderNV_Weak=v3dv_CmdSetCoarseSampleOrderNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetCoarseSampleOrderNV=v3dv_CmdSetCoarseSampleOrderNV_Weak")
    void (*v3dv_CmdSetCoarseSampleOrderNV_Null)(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders) = 0;
    void v3dv_CmdSetCoarseSampleOrderNV_Weak(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawMeshTasksNV_Weak=v3dv_CmdDrawMeshTasksNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawMeshTasksNV=v3dv_CmdDrawMeshTasksNV_Weak")
    void (*v3dv_CmdDrawMeshTasksNV_Null)(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask) = 0;
    void v3dv_CmdDrawMeshTasksNV_Weak(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawMeshTasksIndirectNV_Weak=v3dv_CmdDrawMeshTasksIndirectNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawMeshTasksIndirectNV=v3dv_CmdDrawMeshTasksIndirectNV_Weak")
    void (*v3dv_CmdDrawMeshTasksIndirectNV_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawMeshTasksIndirectNV_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawMeshTasksIndirectCountNV_Weak=v3dv_CmdDrawMeshTasksIndirectCountNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdDrawMeshTasksIndirectCountNV=v3dv_CmdDrawMeshTasksIndirectCountNV_Weak")
    void (*v3dv_CmdDrawMeshTasksIndirectCountNV_Null)(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) = 0;
    void v3dv_CmdDrawMeshTasksIndirectCountNV_Weak(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CompileDeferredNV_Weak=v3dv_CompileDeferredNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CompileDeferredNV=v3dv_CompileDeferredNV_Weak")
    VkResult (*v3dv_CompileDeferredNV_Null)(VkDevice device, VkPipeline pipeline, uint32_t shader) = 0;
    VkResult v3dv_CompileDeferredNV_Weak(VkDevice device, VkPipeline pipeline, uint32_t shader);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateAccelerationStructureNV_Weak=v3dv_CreateAccelerationStructureNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateAccelerationStructureNV=v3dv_CreateAccelerationStructureNV_Weak")
    VkResult (*v3dv_CreateAccelerationStructureNV_Null)(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure) = 0;
    VkResult v3dv_CreateAccelerationStructureNV_Weak(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateAccelerationStructureNV(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyAccelerationStructureKHR_Weak=v3dv_DestroyAccelerationStructureKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyAccelerationStructureKHR=v3dv_DestroyAccelerationStructureKHR_Weak")
    void (*v3dv_DestroyAccelerationStructureKHR_Null)(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyAccelerationStructureKHR_Weak(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyAccelerationStructureKHR(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyAccelerationStructureNV_Weak=v3dv_DestroyAccelerationStructureNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyAccelerationStructureNV=v3dv_DestroyAccelerationStructureNV_Weak")
    void (*v3dv_DestroyAccelerationStructureNV_Null)(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyAccelerationStructureNV_Weak(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyAccelerationStructureNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetAccelerationStructureMemoryRequirementsNV_Weak=v3dv_GetAccelerationStructureMemoryRequirementsNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetAccelerationStructureMemoryRequirementsNV=v3dv_GetAccelerationStructureMemoryRequirementsNV_Weak")
    void (*v3dv_GetAccelerationStructureMemoryRequirementsNV_Null)(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements) = 0;
    void v3dv_GetAccelerationStructureMemoryRequirementsNV_Weak(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetAccelerationStructureMemoryRequirementsNV(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_BindAccelerationStructureMemoryNV_Weak=v3dv_BindAccelerationStructureMemoryNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_BindAccelerationStructureMemoryNV=v3dv_BindAccelerationStructureMemoryNV_Weak")
    VkResult (*v3dv_BindAccelerationStructureMemoryNV_Null)(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos) = 0;
    VkResult v3dv_BindAccelerationStructureMemoryNV_Weak(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_BindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyAccelerationStructureNV_Weak=v3dv_CmdCopyAccelerationStructureNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyAccelerationStructureNV=v3dv_CmdCopyAccelerationStructureNV_Weak")
    void (*v3dv_CmdCopyAccelerationStructureNV_Null)(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) = 0;
    void v3dv_CmdCopyAccelerationStructureNV_Weak(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyAccelerationStructureKHR_Weak=v3dv_CmdCopyAccelerationStructureKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyAccelerationStructureKHR=v3dv_CmdCopyAccelerationStructureKHR_Weak")
    void (*v3dv_CmdCopyAccelerationStructureKHR_Null)(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo) = 0;
    void v3dv_CmdCopyAccelerationStructureKHR_Weak(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CopyAccelerationStructureKHR_Weak=v3dv_CopyAccelerationStructureKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CopyAccelerationStructureKHR=v3dv_CopyAccelerationStructureKHR_Weak")
    VkResult (*v3dv_CopyAccelerationStructureKHR_Null)(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR* pInfo) = 0;
    VkResult v3dv_CopyAccelerationStructureKHR_Weak(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR* pInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CopyAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyAccelerationStructureToMemoryKHR_Weak=v3dv_CmdCopyAccelerationStructureToMemoryKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyAccelerationStructureToMemoryKHR=v3dv_CmdCopyAccelerationStructureToMemoryKHR_Weak")
    void (*v3dv_CmdCopyAccelerationStructureToMemoryKHR_Null)(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) = 0;
    void v3dv_CmdCopyAccelerationStructureToMemoryKHR_Weak(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyAccelerationStructureToMemoryKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CopyAccelerationStructureToMemoryKHR_Weak=v3dv_CopyAccelerationStructureToMemoryKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CopyAccelerationStructureToMemoryKHR=v3dv_CopyAccelerationStructureToMemoryKHR_Weak")
    VkResult (*v3dv_CopyAccelerationStructureToMemoryKHR_Null)(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) = 0;
    VkResult v3dv_CopyAccelerationStructureToMemoryKHR_Weak(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CopyAccelerationStructureToMemoryKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyMemoryToAccelerationStructureKHR_Weak=v3dv_CmdCopyMemoryToAccelerationStructureKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyMemoryToAccelerationStructureKHR=v3dv_CmdCopyMemoryToAccelerationStructureKHR_Weak")
    void (*v3dv_CmdCopyMemoryToAccelerationStructureKHR_Null)(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) = 0;
    void v3dv_CmdCopyMemoryToAccelerationStructureKHR_Weak(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyMemoryToAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CopyMemoryToAccelerationStructureKHR_Weak=v3dv_CopyMemoryToAccelerationStructureKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CopyMemoryToAccelerationStructureKHR=v3dv_CopyMemoryToAccelerationStructureKHR_Weak")
    VkResult (*v3dv_CopyMemoryToAccelerationStructureKHR_Null)(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) = 0;
    VkResult v3dv_CopyMemoryToAccelerationStructureKHR_Weak(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CopyMemoryToAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdWriteAccelerationStructuresPropertiesKHR_Weak=v3dv_CmdWriteAccelerationStructuresPropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdWriteAccelerationStructuresPropertiesKHR=v3dv_CmdWriteAccelerationStructuresPropertiesKHR_Weak")
    void (*v3dv_CmdWriteAccelerationStructuresPropertiesKHR_Null)(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) = 0;
    void v3dv_CmdWriteAccelerationStructuresPropertiesKHR_Weak(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdWriteAccelerationStructuresPropertiesKHR(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdWriteAccelerationStructuresPropertiesNV_Weak=v3dv_CmdWriteAccelerationStructuresPropertiesNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdWriteAccelerationStructuresPropertiesNV=v3dv_CmdWriteAccelerationStructuresPropertiesNV_Weak")
    void (*v3dv_CmdWriteAccelerationStructuresPropertiesNV_Null)(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) = 0;
    void v3dv_CmdWriteAccelerationStructuresPropertiesNV_Weak(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBuildAccelerationStructureNV_Weak=v3dv_CmdBuildAccelerationStructureNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBuildAccelerationStructureNV=v3dv_CmdBuildAccelerationStructureNV_Weak")
    void (*v3dv_CmdBuildAccelerationStructureNV_Null)(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) = 0;
    void v3dv_CmdBuildAccelerationStructureNV_Weak(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_WriteAccelerationStructuresPropertiesKHR_Weak=v3dv_WriteAccelerationStructuresPropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_WriteAccelerationStructuresPropertiesKHR=v3dv_WriteAccelerationStructuresPropertiesKHR_Weak")
    VkResult (*v3dv_WriteAccelerationStructuresPropertiesKHR_Null)(VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType  queryType, size_t       dataSize, void* pData, size_t stride) = 0;
    VkResult v3dv_WriteAccelerationStructuresPropertiesKHR_Weak(VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType  queryType, size_t       dataSize, void* pData, size_t stride);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_WriteAccelerationStructuresPropertiesKHR(VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType  queryType, size_t       dataSize, void* pData, size_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdTraceRaysKHR_Weak=v3dv_CmdTraceRaysKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdTraceRaysKHR=v3dv_CmdTraceRaysKHR_Weak")
    void (*v3dv_CmdTraceRaysKHR_Null)(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) = 0;
    void v3dv_CmdTraceRaysKHR_Weak(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdTraceRaysKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdTraceRaysNV_Weak=v3dv_CmdTraceRaysNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdTraceRaysNV=v3dv_CmdTraceRaysNV_Weak")
    void (*v3dv_CmdTraceRaysNV_Null)(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) = 0;
    void v3dv_CmdTraceRaysNV_Weak(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetRayTracingShaderGroupHandlesKHR_Weak=v3dv_GetRayTracingShaderGroupHandlesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetRayTracingShaderGroupHandlesKHR=v3dv_GetRayTracingShaderGroupHandlesKHR_Weak")
    VkResult (*v3dv_GetRayTracingShaderGroupHandlesKHR_Null)(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) = 0;
    VkResult v3dv_GetRayTracingShaderGroupHandlesKHR_Weak(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetRayTracingShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetRayTracingShaderGroupHandlesNV_Weak=v3dv_GetRayTracingShaderGroupHandlesNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetRayTracingShaderGroupHandlesNV=v3dv_GetRayTracingShaderGroupHandlesNV_Weak")
    VkResult (*v3dv_GetRayTracingShaderGroupHandlesNV_Null)(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) = 0;
    VkResult v3dv_GetRayTracingShaderGroupHandlesNV_Weak(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetRayTracingShaderGroupHandlesNV(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetRayTracingCaptureReplayShaderGroupHandlesKHR_Weak=v3dv_GetRayTracingCaptureReplayShaderGroupHandlesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetRayTracingCaptureReplayShaderGroupHandlesKHR=v3dv_GetRayTracingCaptureReplayShaderGroupHandlesKHR_Weak")
    VkResult (*v3dv_GetRayTracingCaptureReplayShaderGroupHandlesKHR_Null)(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) = 0;
    VkResult v3dv_GetRayTracingCaptureReplayShaderGroupHandlesKHR_Weak(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetRayTracingCaptureReplayShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetAccelerationStructureHandleNV_Weak=v3dv_GetAccelerationStructureHandleNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetAccelerationStructureHandleNV=v3dv_GetAccelerationStructureHandleNV_Weak")
    VkResult (*v3dv_GetAccelerationStructureHandleNV_Null)(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData) = 0;
    VkResult v3dv_GetAccelerationStructureHandleNV_Weak(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetAccelerationStructureHandleNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateRayTracingPipelinesNV_Weak=v3dv_CreateRayTracingPipelinesNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateRayTracingPipelinesNV=v3dv_CreateRayTracingPipelinesNV_Weak")
    VkResult (*v3dv_CreateRayTracingPipelinesNV_Null)(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) = 0;
    VkResult v3dv_CreateRayTracingPipelinesNV_Weak(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateRayTracingPipelinesKHR_Weak=v3dv_CreateRayTracingPipelinesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateRayTracingPipelinesKHR=v3dv_CreateRayTracingPipelinesKHR_Weak")
    VkResult (*v3dv_CreateRayTracingPipelinesKHR_Null)(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) = 0;
    VkResult v3dv_CreateRayTracingPipelinesKHR_Weak(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateRayTracingPipelinesKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdTraceRaysIndirectKHR_Weak=v3dv_CmdTraceRaysIndirectKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdTraceRaysIndirectKHR=v3dv_CmdTraceRaysIndirectKHR_Weak")
    void (*v3dv_CmdTraceRaysIndirectKHR_Null)(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) = 0;
    void v3dv_CmdTraceRaysIndirectKHR_Weak(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceAccelerationStructureCompatibilityKHR_Weak=v3dv_GetDeviceAccelerationStructureCompatibilityKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceAccelerationStructureCompatibilityKHR=v3dv_GetDeviceAccelerationStructureCompatibilityKHR_Weak")
    void (*v3dv_GetDeviceAccelerationStructureCompatibilityKHR_Null)(VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility) = 0;
    void v3dv_GetDeviceAccelerationStructureCompatibilityKHR_Weak(VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetDeviceAccelerationStructureCompatibilityKHR(VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetRayTracingShaderGroupStackSizeKHR_Weak=v3dv_GetRayTracingShaderGroupStackSizeKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetRayTracingShaderGroupStackSizeKHR=v3dv_GetRayTracingShaderGroupStackSizeKHR_Weak")
    VkDeviceSize (*v3dv_GetRayTracingShaderGroupStackSizeKHR_Null)(VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) = 0;
    VkDeviceSize v3dv_GetRayTracingShaderGroupStackSizeKHR_Weak(VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader);
#else
    VKAPI_ATTR VkDeviceSize VKAPI_CALL v3dv_GetRayTracingShaderGroupStackSizeKHR(VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetRayTracingPipelineStackSizeKHR_Weak=v3dv_CmdSetRayTracingPipelineStackSizeKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetRayTracingPipelineStackSizeKHR=v3dv_CmdSetRayTracingPipelineStackSizeKHR_Weak")
    void (*v3dv_CmdSetRayTracingPipelineStackSizeKHR_Null)(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize) = 0;
    void v3dv_CmdSetRayTracingPipelineStackSizeKHR_Weak(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetRayTracingPipelineStackSizeKHR(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageViewHandleNVX_Weak=v3dv_GetImageViewHandleNVX_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageViewHandleNVX=v3dv_GetImageViewHandleNVX_Weak")
    uint32_t (*v3dv_GetImageViewHandleNVX_Null)(VkDevice device, const VkImageViewHandleInfoNVX* pInfo) = 0;
    uint32_t v3dv_GetImageViewHandleNVX_Weak(VkDevice device, const VkImageViewHandleInfoNVX* pInfo);
#else
    VKAPI_ATTR uint32_t VKAPI_CALL v3dv_GetImageViewHandleNVX(VkDevice device, const VkImageViewHandleInfoNVX* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageViewAddressNVX_Weak=v3dv_GetImageViewAddressNVX_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageViewAddressNVX=v3dv_GetImageViewAddressNVX_Weak")
    VkResult (*v3dv_GetImageViewAddressNVX_Null)(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties) = 0;
    VkResult v3dv_GetImageViewAddressNVX_Weak(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetImageViewAddressNVX(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupSurfacePresentModes2EXT_Weak=v3dv_GetDeviceGroupSurfacePresentModes2EXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceGroupSurfacePresentModes2EXT=v3dv_GetDeviceGroupSurfacePresentModes2EXT_Weak")
    VkResult (*v3dv_GetDeviceGroupSurfacePresentModes2EXT_Null)(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR* pModes) = 0;
    VkResult v3dv_GetDeviceGroupSurfacePresentModes2EXT_Weak(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR* pModes);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR* pModes) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AcquireFullScreenExclusiveModeEXT_Weak=v3dv_AcquireFullScreenExclusiveModeEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_AcquireFullScreenExclusiveModeEXT=v3dv_AcquireFullScreenExclusiveModeEXT_Weak")
    VkResult (*v3dv_AcquireFullScreenExclusiveModeEXT_Null)(VkDevice device, VkSwapchainKHR swapchain) = 0;
    VkResult v3dv_AcquireFullScreenExclusiveModeEXT_Weak(VkDevice device, VkSwapchainKHR swapchain);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ReleaseFullScreenExclusiveModeEXT_Weak=v3dv_ReleaseFullScreenExclusiveModeEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_ReleaseFullScreenExclusiveModeEXT=v3dv_ReleaseFullScreenExclusiveModeEXT_Weak")
    VkResult (*v3dv_ReleaseFullScreenExclusiveModeEXT_Null)(VkDevice device, VkSwapchainKHR swapchain) = 0;
    VkResult v3dv_ReleaseFullScreenExclusiveModeEXT_Weak(VkDevice device, VkSwapchainKHR swapchain);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AcquireProfilingLockKHR_Weak=v3dv_AcquireProfilingLockKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_AcquireProfilingLockKHR=v3dv_AcquireProfilingLockKHR_Weak")
    VkResult (*v3dv_AcquireProfilingLockKHR_Null)(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo) = 0;
    VkResult v3dv_AcquireProfilingLockKHR_Weak(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AcquireProfilingLockKHR(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ReleaseProfilingLockKHR_Weak=v3dv_ReleaseProfilingLockKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_ReleaseProfilingLockKHR=v3dv_ReleaseProfilingLockKHR_Weak")
    void (*v3dv_ReleaseProfilingLockKHR_Null)(VkDevice device) = 0;
    void v3dv_ReleaseProfilingLockKHR_Weak(VkDevice device);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_ReleaseProfilingLockKHR(VkDevice device) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetImageDrmFormatModifierPropertiesEXT_Weak=v3dv_GetImageDrmFormatModifierPropertiesEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetImageDrmFormatModifierPropertiesEXT=v3dv_GetImageDrmFormatModifierPropertiesEXT_Weak")
    VkResult (*v3dv_GetImageDrmFormatModifierPropertiesEXT_Null)(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties) = 0;
    VkResult v3dv_GetImageDrmFormatModifierPropertiesEXT_Weak(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetBufferOpaqueCaptureAddress_Weak=v3dv_GetBufferOpaqueCaptureAddress_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetBufferOpaqueCaptureAddress=v3dv_GetBufferOpaqueCaptureAddress_Weak")
    uint64_t (*v3dv_GetBufferOpaqueCaptureAddress_Null)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) = 0;
    uint64_t v3dv_GetBufferOpaqueCaptureAddress_Weak(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
#else
    VKAPI_ATTR uint64_t VKAPI_CALL v3dv_GetBufferOpaqueCaptureAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetBufferOpaqueCaptureAddressKHR_Weak=v3dv_GetBufferOpaqueCaptureAddressKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetBufferOpaqueCaptureAddressKHR=v3dv_GetBufferOpaqueCaptureAddressKHR_Weak")
    uint64_t (*v3dv_GetBufferOpaqueCaptureAddressKHR_Null)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) = 0;
    uint64_t v3dv_GetBufferOpaqueCaptureAddressKHR_Weak(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
#else
    VKAPI_ATTR uint64_t VKAPI_CALL v3dv_GetBufferOpaqueCaptureAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetBufferDeviceAddress_Weak=v3dv_GetBufferDeviceAddress_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetBufferDeviceAddress=v3dv_GetBufferDeviceAddress_Weak")
    VkDeviceAddress (*v3dv_GetBufferDeviceAddress_Null)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) = 0;
    VkDeviceAddress v3dv_GetBufferDeviceAddress_Weak(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
#else
    VKAPI_ATTR VkDeviceAddress VKAPI_CALL v3dv_GetBufferDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetBufferDeviceAddressKHR_Weak=v3dv_GetBufferDeviceAddressKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetBufferDeviceAddressKHR=v3dv_GetBufferDeviceAddressKHR_Weak")
    VkDeviceAddress (*v3dv_GetBufferDeviceAddressKHR_Null)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) = 0;
    VkDeviceAddress v3dv_GetBufferDeviceAddressKHR_Weak(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
#else
    VKAPI_ATTR VkDeviceAddress VKAPI_CALL v3dv_GetBufferDeviceAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetBufferDeviceAddressEXT_Weak=v3dv_GetBufferDeviceAddressEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetBufferDeviceAddressEXT=v3dv_GetBufferDeviceAddressEXT_Weak")
    VkDeviceAddress (*v3dv_GetBufferDeviceAddressEXT_Null)(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) = 0;
    VkDeviceAddress v3dv_GetBufferDeviceAddressEXT_Weak(VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
#else
    VKAPI_ATTR VkDeviceAddress VKAPI_CALL v3dv_GetBufferDeviceAddressEXT(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_InitializePerformanceApiINTEL_Weak=v3dv_InitializePerformanceApiINTEL_Null")
    #pragma comment(linker, "/alternatename:v3dv_InitializePerformanceApiINTEL=v3dv_InitializePerformanceApiINTEL_Weak")
    VkResult (*v3dv_InitializePerformanceApiINTEL_Null)(VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo) = 0;
    VkResult v3dv_InitializePerformanceApiINTEL_Weak(VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_InitializePerformanceApiINTEL(VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_UninitializePerformanceApiINTEL_Weak=v3dv_UninitializePerformanceApiINTEL_Null")
    #pragma comment(linker, "/alternatename:v3dv_UninitializePerformanceApiINTEL=v3dv_UninitializePerformanceApiINTEL_Weak")
    void (*v3dv_UninitializePerformanceApiINTEL_Null)(VkDevice device) = 0;
    void v3dv_UninitializePerformanceApiINTEL_Weak(VkDevice device);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_UninitializePerformanceApiINTEL(VkDevice device) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetPerformanceMarkerINTEL_Weak=v3dv_CmdSetPerformanceMarkerINTEL_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetPerformanceMarkerINTEL=v3dv_CmdSetPerformanceMarkerINTEL_Weak")
    VkResult (*v3dv_CmdSetPerformanceMarkerINTEL_Null)(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo) = 0;
    VkResult v3dv_CmdSetPerformanceMarkerINTEL_Weak(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetPerformanceStreamMarkerINTEL_Weak=v3dv_CmdSetPerformanceStreamMarkerINTEL_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetPerformanceStreamMarkerINTEL=v3dv_CmdSetPerformanceStreamMarkerINTEL_Weak")
    VkResult (*v3dv_CmdSetPerformanceStreamMarkerINTEL_Null)(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo) = 0;
    VkResult v3dv_CmdSetPerformanceStreamMarkerINTEL_Weak(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetPerformanceOverrideINTEL_Weak=v3dv_CmdSetPerformanceOverrideINTEL_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetPerformanceOverrideINTEL=v3dv_CmdSetPerformanceOverrideINTEL_Weak")
    VkResult (*v3dv_CmdSetPerformanceOverrideINTEL_Null)(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo) = 0;
    VkResult v3dv_CmdSetPerformanceOverrideINTEL_Weak(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_AcquirePerformanceConfigurationINTEL_Weak=v3dv_AcquirePerformanceConfigurationINTEL_Null")
    #pragma comment(linker, "/alternatename:v3dv_AcquirePerformanceConfigurationINTEL=v3dv_AcquirePerformanceConfigurationINTEL_Weak")
    VkResult (*v3dv_AcquirePerformanceConfigurationINTEL_Null)(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration) = 0;
    VkResult v3dv_AcquirePerformanceConfigurationINTEL_Weak(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_AcquirePerformanceConfigurationINTEL(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_ReleasePerformanceConfigurationINTEL_Weak=v3dv_ReleasePerformanceConfigurationINTEL_Null")
    #pragma comment(linker, "/alternatename:v3dv_ReleasePerformanceConfigurationINTEL=v3dv_ReleasePerformanceConfigurationINTEL_Weak")
    VkResult (*v3dv_ReleasePerformanceConfigurationINTEL_Null)(VkDevice device, VkPerformanceConfigurationINTEL configuration) = 0;
    VkResult v3dv_ReleasePerformanceConfigurationINTEL_Weak(VkDevice device, VkPerformanceConfigurationINTEL configuration);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_ReleasePerformanceConfigurationINTEL(VkDevice device, VkPerformanceConfigurationINTEL configuration) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_QueueSetPerformanceConfigurationINTEL_Weak=v3dv_QueueSetPerformanceConfigurationINTEL_Null")
    #pragma comment(linker, "/alternatename:v3dv_QueueSetPerformanceConfigurationINTEL=v3dv_QueueSetPerformanceConfigurationINTEL_Weak")
    VkResult (*v3dv_QueueSetPerformanceConfigurationINTEL_Null)(VkQueue queue, VkPerformanceConfigurationINTEL configuration) = 0;
    VkResult v3dv_QueueSetPerformanceConfigurationINTEL_Weak(VkQueue queue, VkPerformanceConfigurationINTEL configuration);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_QueueSetPerformanceConfigurationINTEL(VkQueue queue, VkPerformanceConfigurationINTEL configuration) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPerformanceParameterINTEL_Weak=v3dv_GetPerformanceParameterINTEL_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPerformanceParameterINTEL=v3dv_GetPerformanceParameterINTEL_Weak")
    VkResult (*v3dv_GetPerformanceParameterINTEL_Null)(VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue) = 0;
    VkResult v3dv_GetPerformanceParameterINTEL_Weak(VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPerformanceParameterINTEL(VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceMemoryOpaqueCaptureAddress_Weak=v3dv_GetDeviceMemoryOpaqueCaptureAddress_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceMemoryOpaqueCaptureAddress=v3dv_GetDeviceMemoryOpaqueCaptureAddress_Weak")
    uint64_t (*v3dv_GetDeviceMemoryOpaqueCaptureAddress_Null)(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) = 0;
    uint64_t v3dv_GetDeviceMemoryOpaqueCaptureAddress_Weak(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
#else
    VKAPI_ATTR uint64_t VKAPI_CALL v3dv_GetDeviceMemoryOpaqueCaptureAddress(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceMemoryOpaqueCaptureAddressKHR_Weak=v3dv_GetDeviceMemoryOpaqueCaptureAddressKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeviceMemoryOpaqueCaptureAddressKHR=v3dv_GetDeviceMemoryOpaqueCaptureAddressKHR_Weak")
    uint64_t (*v3dv_GetDeviceMemoryOpaqueCaptureAddressKHR_Null)(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) = 0;
    uint64_t v3dv_GetDeviceMemoryOpaqueCaptureAddressKHR_Weak(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
#else
    VKAPI_ATTR uint64_t VKAPI_CALL v3dv_GetDeviceMemoryOpaqueCaptureAddressKHR(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPipelineExecutablePropertiesKHR_Weak=v3dv_GetPipelineExecutablePropertiesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPipelineExecutablePropertiesKHR=v3dv_GetPipelineExecutablePropertiesKHR_Weak")
    VkResult (*v3dv_GetPipelineExecutablePropertiesKHR_Null)(VkDevice                        device, const VkPipelineInfoKHR*        pPipelineInfo, uint32_t* pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties) = 0;
    VkResult v3dv_GetPipelineExecutablePropertiesKHR_Weak(VkDevice                        device, const VkPipelineInfoKHR*        pPipelineInfo, uint32_t* pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPipelineExecutablePropertiesKHR(VkDevice                        device, const VkPipelineInfoKHR*        pPipelineInfo, uint32_t* pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPipelineExecutableStatisticsKHR_Weak=v3dv_GetPipelineExecutableStatisticsKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPipelineExecutableStatisticsKHR=v3dv_GetPipelineExecutableStatisticsKHR_Weak")
    VkResult (*v3dv_GetPipelineExecutableStatisticsKHR_Null)(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics) = 0;
    VkResult v3dv_GetPipelineExecutableStatisticsKHR_Weak(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPipelineExecutableStatisticsKHR(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPipelineExecutableInternalRepresentationsKHR_Weak=v3dv_GetPipelineExecutableInternalRepresentationsKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPipelineExecutableInternalRepresentationsKHR=v3dv_GetPipelineExecutableInternalRepresentationsKHR_Weak")
    VkResult (*v3dv_GetPipelineExecutableInternalRepresentationsKHR_Null)(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, uint32_t* pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations) = 0;
    VkResult v3dv_GetPipelineExecutableInternalRepresentationsKHR_Weak(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, uint32_t* pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetPipelineExecutableInternalRepresentationsKHR(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, uint32_t* pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetLineStippleEXT_Weak=v3dv_CmdSetLineStippleEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetLineStippleEXT=v3dv_CmdSetLineStippleEXT_Weak")
    void (*v3dv_CmdSetLineStippleEXT_Null)(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) = 0;
    void v3dv_CmdSetLineStippleEXT_Weak(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateAccelerationStructureKHR_Weak=v3dv_CreateAccelerationStructureKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateAccelerationStructureKHR=v3dv_CreateAccelerationStructureKHR_Weak")
    VkResult (*v3dv_CreateAccelerationStructureKHR_Null)(VkDevice                                           device, const VkAccelerationStructureCreateInfoKHR*        pCreateInfo, const VkAllocationCallbacks*       pAllocator, VkAccelerationStructureKHR*                        pAccelerationStructure) = 0;
    VkResult v3dv_CreateAccelerationStructureKHR_Weak(VkDevice                                           device, const VkAccelerationStructureCreateInfoKHR*        pCreateInfo, const VkAllocationCallbacks*       pAllocator, VkAccelerationStructureKHR*                        pAccelerationStructure);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateAccelerationStructureKHR(VkDevice                                           device, const VkAccelerationStructureCreateInfoKHR*        pCreateInfo, const VkAllocationCallbacks*       pAllocator, VkAccelerationStructureKHR*                        pAccelerationStructure) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBuildAccelerationStructuresKHR_Weak=v3dv_CmdBuildAccelerationStructuresKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBuildAccelerationStructuresKHR=v3dv_CmdBuildAccelerationStructuresKHR_Weak")
    void (*v3dv_CmdBuildAccelerationStructuresKHR_Null)(VkCommandBuffer                                    commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) = 0;
    void v3dv_CmdBuildAccelerationStructuresKHR_Weak(VkCommandBuffer                                    commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBuildAccelerationStructuresKHR(VkCommandBuffer                                    commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBuildAccelerationStructuresIndirectKHR_Weak=v3dv_CmdBuildAccelerationStructuresIndirectKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBuildAccelerationStructuresIndirectKHR=v3dv_CmdBuildAccelerationStructuresIndirectKHR_Weak")
    void (*v3dv_CmdBuildAccelerationStructuresIndirectKHR_Null)(VkCommandBuffer                  commandBuffer, uint32_t                                           infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress*             pIndirectDeviceAddresses, const uint32_t*                    pIndirectStrides, const uint32_t* const*             ppMaxPrimitiveCounts) = 0;
    void v3dv_CmdBuildAccelerationStructuresIndirectKHR_Weak(VkCommandBuffer                  commandBuffer, uint32_t                                           infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress*             pIndirectDeviceAddresses, const uint32_t*                    pIndirectStrides, const uint32_t* const*             ppMaxPrimitiveCounts);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBuildAccelerationStructuresIndirectKHR(VkCommandBuffer                  commandBuffer, uint32_t                                           infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress*             pIndirectDeviceAddresses, const uint32_t*                    pIndirectStrides, const uint32_t* const*             ppMaxPrimitiveCounts) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_BuildAccelerationStructuresKHR_Weak=v3dv_BuildAccelerationStructuresKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_BuildAccelerationStructuresKHR=v3dv_BuildAccelerationStructuresKHR_Weak")
    VkResult (*v3dv_BuildAccelerationStructuresKHR_Null)(VkDevice                                           device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) = 0;
    VkResult v3dv_BuildAccelerationStructuresKHR_Weak(VkDevice                                           device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_BuildAccelerationStructuresKHR(VkDevice                                           device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetAccelerationStructureDeviceAddressKHR_Weak=v3dv_GetAccelerationStructureDeviceAddressKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetAccelerationStructureDeviceAddressKHR=v3dv_GetAccelerationStructureDeviceAddressKHR_Weak")
    VkDeviceAddress (*v3dv_GetAccelerationStructureDeviceAddressKHR_Null)(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo) = 0;
    VkDeviceAddress v3dv_GetAccelerationStructureDeviceAddressKHR_Weak(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo);
#else
    VKAPI_ATTR VkDeviceAddress VKAPI_CALL v3dv_GetAccelerationStructureDeviceAddressKHR(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreateDeferredOperationKHR_Weak=v3dv_CreateDeferredOperationKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreateDeferredOperationKHR=v3dv_CreateDeferredOperationKHR_Weak")
    VkResult (*v3dv_CreateDeferredOperationKHR_Null)(VkDevice device, const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation) = 0;
    VkResult v3dv_CreateDeferredOperationKHR_Weak(VkDevice device, const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreateDeferredOperationKHR(VkDevice device, const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyDeferredOperationKHR_Weak=v3dv_DestroyDeferredOperationKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyDeferredOperationKHR=v3dv_DestroyDeferredOperationKHR_Weak")
    void (*v3dv_DestroyDeferredOperationKHR_Null)(VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyDeferredOperationKHR_Weak(VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyDeferredOperationKHR(VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeferredOperationMaxConcurrencyKHR_Weak=v3dv_GetDeferredOperationMaxConcurrencyKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeferredOperationMaxConcurrencyKHR=v3dv_GetDeferredOperationMaxConcurrencyKHR_Weak")
    uint32_t (*v3dv_GetDeferredOperationMaxConcurrencyKHR_Null)(VkDevice device, VkDeferredOperationKHR operation) = 0;
    uint32_t v3dv_GetDeferredOperationMaxConcurrencyKHR_Weak(VkDevice device, VkDeferredOperationKHR operation);
#else
    VKAPI_ATTR uint32_t VKAPI_CALL v3dv_GetDeferredOperationMaxConcurrencyKHR(VkDevice device, VkDeferredOperationKHR operation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetDeferredOperationResultKHR_Weak=v3dv_GetDeferredOperationResultKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetDeferredOperationResultKHR=v3dv_GetDeferredOperationResultKHR_Weak")
    VkResult (*v3dv_GetDeferredOperationResultKHR_Null)(VkDevice device, VkDeferredOperationKHR operation) = 0;
    VkResult v3dv_GetDeferredOperationResultKHR_Weak(VkDevice device, VkDeferredOperationKHR operation);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_GetDeferredOperationResultKHR(VkDevice device, VkDeferredOperationKHR operation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DeferredOperationJoinKHR_Weak=v3dv_DeferredOperationJoinKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_DeferredOperationJoinKHR=v3dv_DeferredOperationJoinKHR_Weak")
    VkResult (*v3dv_DeferredOperationJoinKHR_Null)(VkDevice device, VkDeferredOperationKHR operation) = 0;
    VkResult v3dv_DeferredOperationJoinKHR_Weak(VkDevice device, VkDeferredOperationKHR operation);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_DeferredOperationJoinKHR(VkDevice device, VkDeferredOperationKHR operation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetCullModeEXT_Weak=v3dv_CmdSetCullModeEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetCullModeEXT=v3dv_CmdSetCullModeEXT_Weak")
    void (*v3dv_CmdSetCullModeEXT_Null)(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) = 0;
    void v3dv_CmdSetCullModeEXT_Weak(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetFrontFaceEXT_Weak=v3dv_CmdSetFrontFaceEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetFrontFaceEXT=v3dv_CmdSetFrontFaceEXT_Weak")
    void (*v3dv_CmdSetFrontFaceEXT_Null)(VkCommandBuffer commandBuffer, VkFrontFace frontFace) = 0;
    void v3dv_CmdSetFrontFaceEXT_Weak(VkCommandBuffer commandBuffer, VkFrontFace frontFace);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetPrimitiveTopologyEXT_Weak=v3dv_CmdSetPrimitiveTopologyEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetPrimitiveTopologyEXT=v3dv_CmdSetPrimitiveTopologyEXT_Weak")
    void (*v3dv_CmdSetPrimitiveTopologyEXT_Null)(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) = 0;
    void v3dv_CmdSetPrimitiveTopologyEXT_Weak(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetViewportWithCountEXT_Weak=v3dv_CmdSetViewportWithCountEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetViewportWithCountEXT=v3dv_CmdSetViewportWithCountEXT_Weak")
    void (*v3dv_CmdSetViewportWithCountEXT_Null)(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports) = 0;
    void v3dv_CmdSetViewportWithCountEXT_Weak(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetScissorWithCountEXT_Weak=v3dv_CmdSetScissorWithCountEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetScissorWithCountEXT=v3dv_CmdSetScissorWithCountEXT_Weak")
    void (*v3dv_CmdSetScissorWithCountEXT_Null)(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors) = 0;
    void v3dv_CmdSetScissorWithCountEXT_Weak(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBindVertexBuffers2EXT_Weak=v3dv_CmdBindVertexBuffers2EXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBindVertexBuffers2EXT=v3dv_CmdBindVertexBuffers2EXT_Weak")
    void (*v3dv_CmdBindVertexBuffers2EXT_Null)(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) = 0;
    void v3dv_CmdBindVertexBuffers2EXT_Weak(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthTestEnableEXT_Weak=v3dv_CmdSetDepthTestEnableEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthTestEnableEXT=v3dv_CmdSetDepthTestEnableEXT_Weak")
    void (*v3dv_CmdSetDepthTestEnableEXT_Null)(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) = 0;
    void v3dv_CmdSetDepthTestEnableEXT_Weak(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthWriteEnableEXT_Weak=v3dv_CmdSetDepthWriteEnableEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthWriteEnableEXT=v3dv_CmdSetDepthWriteEnableEXT_Weak")
    void (*v3dv_CmdSetDepthWriteEnableEXT_Null)(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) = 0;
    void v3dv_CmdSetDepthWriteEnableEXT_Weak(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthCompareOpEXT_Weak=v3dv_CmdSetDepthCompareOpEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthCompareOpEXT=v3dv_CmdSetDepthCompareOpEXT_Weak")
    void (*v3dv_CmdSetDepthCompareOpEXT_Null)(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) = 0;
    void v3dv_CmdSetDepthCompareOpEXT_Weak(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthBoundsTestEnableEXT_Weak=v3dv_CmdSetDepthBoundsTestEnableEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetDepthBoundsTestEnableEXT=v3dv_CmdSetDepthBoundsTestEnableEXT_Weak")
    void (*v3dv_CmdSetDepthBoundsTestEnableEXT_Null)(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) = 0;
    void v3dv_CmdSetDepthBoundsTestEnableEXT_Weak(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilTestEnableEXT_Weak=v3dv_CmdSetStencilTestEnableEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilTestEnableEXT=v3dv_CmdSetStencilTestEnableEXT_Weak")
    void (*v3dv_CmdSetStencilTestEnableEXT_Null)(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) = 0;
    void v3dv_CmdSetStencilTestEnableEXT_Weak(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilOpEXT_Weak=v3dv_CmdSetStencilOpEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetStencilOpEXT=v3dv_CmdSetStencilOpEXT_Weak")
    void (*v3dv_CmdSetStencilOpEXT_Null)(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) = 0;
    void v3dv_CmdSetStencilOpEXT_Weak(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CreatePrivateDataSlotEXT_Weak=v3dv_CreatePrivateDataSlotEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_CreatePrivateDataSlotEXT=v3dv_CreatePrivateDataSlotEXT_Weak")
    VkResult (*v3dv_CreatePrivateDataSlotEXT_Null)(VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot) = 0;
    VkResult v3dv_CreatePrivateDataSlotEXT_Weak(VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_CreatePrivateDataSlotEXT(VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_DestroyPrivateDataSlotEXT_Weak=v3dv_DestroyPrivateDataSlotEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_DestroyPrivateDataSlotEXT=v3dv_DestroyPrivateDataSlotEXT_Weak")
    void (*v3dv_DestroyPrivateDataSlotEXT_Null)(VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator) = 0;
    void v3dv_DestroyPrivateDataSlotEXT_Weak(VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_DestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_SetPrivateDataEXT_Weak=v3dv_SetPrivateDataEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_SetPrivateDataEXT=v3dv_SetPrivateDataEXT_Weak")
    VkResult (*v3dv_SetPrivateDataEXT_Null)(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data) = 0;
    VkResult v3dv_SetPrivateDataEXT_Weak(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data);
#else
    VKAPI_ATTR VkResult VKAPI_CALL v3dv_SetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetPrivateDataEXT_Weak=v3dv_GetPrivateDataEXT_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetPrivateDataEXT=v3dv_GetPrivateDataEXT_Weak")
    void (*v3dv_GetPrivateDataEXT_Null)(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t* pData) = 0;
    void v3dv_GetPrivateDataEXT_Weak(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t* pData);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyBuffer2KHR_Weak=v3dv_CmdCopyBuffer2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyBuffer2KHR=v3dv_CmdCopyBuffer2KHR_Weak")
    void (*v3dv_CmdCopyBuffer2KHR_Null)(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo) = 0;
    void v3dv_CmdCopyBuffer2KHR_Weak(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyImage2KHR_Weak=v3dv_CmdCopyImage2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyImage2KHR=v3dv_CmdCopyImage2KHR_Weak")
    void (*v3dv_CmdCopyImage2KHR_Null)(VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo) = 0;
    void v3dv_CmdCopyImage2KHR_Weak(VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdBlitImage2KHR_Weak=v3dv_CmdBlitImage2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdBlitImage2KHR=v3dv_CmdBlitImage2KHR_Weak")
    void (*v3dv_CmdBlitImage2KHR_Null)(VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo) = 0;
    void v3dv_CmdBlitImage2KHR_Weak(VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyBufferToImage2KHR_Weak=v3dv_CmdCopyBufferToImage2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyBufferToImage2KHR=v3dv_CmdCopyBufferToImage2KHR_Weak")
    void (*v3dv_CmdCopyBufferToImage2KHR_Null)(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo) = 0;
    void v3dv_CmdCopyBufferToImage2KHR_Weak(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyImageToBuffer2KHR_Weak=v3dv_CmdCopyImageToBuffer2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdCopyImageToBuffer2KHR=v3dv_CmdCopyImageToBuffer2KHR_Weak")
    void (*v3dv_CmdCopyImageToBuffer2KHR_Null)(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo) = 0;
    void v3dv_CmdCopyImageToBuffer2KHR_Weak(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdResolveImage2KHR_Weak=v3dv_CmdResolveImage2KHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdResolveImage2KHR=v3dv_CmdResolveImage2KHR_Weak")
    void (*v3dv_CmdResolveImage2KHR_Null)(VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo) = 0;
    void v3dv_CmdResolveImage2KHR_Weak(VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdResolveImage2KHR(VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetFragmentShadingRateKHR_Weak=v3dv_CmdSetFragmentShadingRateKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetFragmentShadingRateKHR=v3dv_CmdSetFragmentShadingRateKHR_Weak")
    void (*v3dv_CmdSetFragmentShadingRateKHR_Null)(VkCommandBuffer           commandBuffer, const VkExtent2D*                           pFragmentSize, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]) = 0;
    void v3dv_CmdSetFragmentShadingRateKHR_Weak(VkCommandBuffer           commandBuffer, const VkExtent2D*                           pFragmentSize, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetFragmentShadingRateKHR(VkCommandBuffer           commandBuffer, const VkExtent2D*                           pFragmentSize, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_CmdSetFragmentShadingRateEnumNV_Weak=v3dv_CmdSetFragmentShadingRateEnumNV_Null")
    #pragma comment(linker, "/alternatename:v3dv_CmdSetFragmentShadingRateEnumNV=v3dv_CmdSetFragmentShadingRateEnumNV_Weak")
    void (*v3dv_CmdSetFragmentShadingRateEnumNV_Null)(VkCommandBuffer           commandBuffer, VkFragmentShadingRateNV                     shadingRate, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]) = 0;
    void v3dv_CmdSetFragmentShadingRateEnumNV_Weak(VkCommandBuffer           commandBuffer, VkFragmentShadingRateNV                     shadingRate, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_CmdSetFragmentShadingRateEnumNV(VkCommandBuffer           commandBuffer, VkFragmentShadingRateNV                     shadingRate, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
    #pragma comment(linker, "/alternatename:v3dv_GetAccelerationStructureBuildSizesKHR_Weak=v3dv_GetAccelerationStructureBuildSizesKHR_Null")
    #pragma comment(linker, "/alternatename:v3dv_GetAccelerationStructureBuildSizesKHR=v3dv_GetAccelerationStructureBuildSizesKHR_Weak")
    void (*v3dv_GetAccelerationStructureBuildSizesKHR_Null)(VkDevice                                            device, VkAccelerationStructureBuildTypeKHR                 buildType, const VkAccelerationStructureBuildGeometryInfoKHR*  pBuildInfo, const uint32_t*  pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR*           pSizeInfo) = 0;
    void v3dv_GetAccelerationStructureBuildSizesKHR_Weak(VkDevice                                            device, VkAccelerationStructureBuildTypeKHR                 buildType, const VkAccelerationStructureBuildGeometryInfoKHR*  pBuildInfo, const uint32_t*  pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR*           pSizeInfo);
#else
    VKAPI_ATTR void VKAPI_CALL v3dv_GetAccelerationStructureBuildSizesKHR(VkDevice                                            device, VkAccelerationStructureBuildTypeKHR                 buildType, const VkAccelerationStructureBuildGeometryInfoKHR*  pBuildInfo, const uint32_t*  pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR*           pSizeInfo) __attribute__ ((weak));
#endif

const struct vk_device_entrypoint_table v3dv_device_entrypoints = {
    .GetDeviceProcAddr = v3dv_GetDeviceProcAddr,
    .DestroyDevice = v3dv_DestroyDevice,
    .GetDeviceQueue = v3dv_GetDeviceQueue,
    .QueueSubmit = v3dv_QueueSubmit,
    .QueueWaitIdle = v3dv_QueueWaitIdle,
    .DeviceWaitIdle = v3dv_DeviceWaitIdle,
    .AllocateMemory = v3dv_AllocateMemory,
    .FreeMemory = v3dv_FreeMemory,
    .MapMemory = v3dv_MapMemory,
    .UnmapMemory = v3dv_UnmapMemory,
    .FlushMappedMemoryRanges = v3dv_FlushMappedMemoryRanges,
    .InvalidateMappedMemoryRanges = v3dv_InvalidateMappedMemoryRanges,
    .GetDeviceMemoryCommitment = v3dv_GetDeviceMemoryCommitment,
    .GetBufferMemoryRequirements = v3dv_GetBufferMemoryRequirements,
    .BindBufferMemory = v3dv_BindBufferMemory,
    .GetImageMemoryRequirements = v3dv_GetImageMemoryRequirements,
    .BindImageMemory = v3dv_BindImageMemory,
    .GetImageSparseMemoryRequirements = v3dv_GetImageSparseMemoryRequirements,
    .QueueBindSparse = v3dv_QueueBindSparse,
    .CreateFence = v3dv_CreateFence,
    .DestroyFence = v3dv_DestroyFence,
    .ResetFences = v3dv_ResetFences,
    .GetFenceStatus = v3dv_GetFenceStatus,
    .WaitForFences = v3dv_WaitForFences,
    .CreateSemaphore = v3dv_CreateSemaphore,
    .DestroySemaphore = v3dv_DestroySemaphore,
    .CreateEvent = v3dv_CreateEvent,
    .DestroyEvent = v3dv_DestroyEvent,
    .GetEventStatus = v3dv_GetEventStatus,
    .SetEvent = v3dv_SetEvent,
    .ResetEvent = v3dv_ResetEvent,
    .CreateQueryPool = v3dv_CreateQueryPool,
    .DestroyQueryPool = v3dv_DestroyQueryPool,
    .GetQueryPoolResults = v3dv_GetQueryPoolResults,
    .ResetQueryPool = v3dv_ResetQueryPool,
    .ResetQueryPoolEXT = v3dv_ResetQueryPoolEXT,
    .CreateBuffer = v3dv_CreateBuffer,
    .DestroyBuffer = v3dv_DestroyBuffer,
    .CreateBufferView = v3dv_CreateBufferView,
    .DestroyBufferView = v3dv_DestroyBufferView,
    .CreateImage = v3dv_CreateImage,
    .DestroyImage = v3dv_DestroyImage,
    .GetImageSubresourceLayout = v3dv_GetImageSubresourceLayout,
    .CreateImageView = v3dv_CreateImageView,
    .DestroyImageView = v3dv_DestroyImageView,
    .CreateShaderModule = v3dv_CreateShaderModule,
    .DestroyShaderModule = v3dv_DestroyShaderModule,
    .CreatePipelineCache = v3dv_CreatePipelineCache,
    .DestroyPipelineCache = v3dv_DestroyPipelineCache,
    .GetPipelineCacheData = v3dv_GetPipelineCacheData,
    .MergePipelineCaches = v3dv_MergePipelineCaches,
    .CreateGraphicsPipelines = v3dv_CreateGraphicsPipelines,
    .CreateComputePipelines = v3dv_CreateComputePipelines,
    .DestroyPipeline = v3dv_DestroyPipeline,
    .CreatePipelineLayout = v3dv_CreatePipelineLayout,
    .DestroyPipelineLayout = v3dv_DestroyPipelineLayout,
    .CreateSampler = v3dv_CreateSampler,
    .DestroySampler = v3dv_DestroySampler,
    .CreateDescriptorSetLayout = v3dv_CreateDescriptorSetLayout,
    .DestroyDescriptorSetLayout = v3dv_DestroyDescriptorSetLayout,
    .CreateDescriptorPool = v3dv_CreateDescriptorPool,
    .DestroyDescriptorPool = v3dv_DestroyDescriptorPool,
    .ResetDescriptorPool = v3dv_ResetDescriptorPool,
    .AllocateDescriptorSets = v3dv_AllocateDescriptorSets,
    .FreeDescriptorSets = v3dv_FreeDescriptorSets,
    .UpdateDescriptorSets = v3dv_UpdateDescriptorSets,
    .CreateFramebuffer = v3dv_CreateFramebuffer,
    .DestroyFramebuffer = v3dv_DestroyFramebuffer,
    .CreateRenderPass = v3dv_CreateRenderPass,
    .DestroyRenderPass = v3dv_DestroyRenderPass,
    .GetRenderAreaGranularity = v3dv_GetRenderAreaGranularity,
    .CreateCommandPool = v3dv_CreateCommandPool,
    .DestroyCommandPool = v3dv_DestroyCommandPool,
    .ResetCommandPool = v3dv_ResetCommandPool,
    .AllocateCommandBuffers = v3dv_AllocateCommandBuffers,
    .FreeCommandBuffers = v3dv_FreeCommandBuffers,
    .BeginCommandBuffer = v3dv_BeginCommandBuffer,
    .EndCommandBuffer = v3dv_EndCommandBuffer,
    .ResetCommandBuffer = v3dv_ResetCommandBuffer,
    .CmdBindPipeline = v3dv_CmdBindPipeline,
    .CmdSetViewport = v3dv_CmdSetViewport,
    .CmdSetScissor = v3dv_CmdSetScissor,
    .CmdSetLineWidth = v3dv_CmdSetLineWidth,
    .CmdSetDepthBias = v3dv_CmdSetDepthBias,
    .CmdSetBlendConstants = v3dv_CmdSetBlendConstants,
    .CmdSetDepthBounds = v3dv_CmdSetDepthBounds,
    .CmdSetStencilCompareMask = v3dv_CmdSetStencilCompareMask,
    .CmdSetStencilWriteMask = v3dv_CmdSetStencilWriteMask,
    .CmdSetStencilReference = v3dv_CmdSetStencilReference,
    .CmdBindDescriptorSets = v3dv_CmdBindDescriptorSets,
    .CmdBindIndexBuffer = v3dv_CmdBindIndexBuffer,
    .CmdBindVertexBuffers = v3dv_CmdBindVertexBuffers,
    .CmdDraw = v3dv_CmdDraw,
    .CmdDrawIndexed = v3dv_CmdDrawIndexed,
    .CmdDrawIndirect = v3dv_CmdDrawIndirect,
    .CmdDrawIndexedIndirect = v3dv_CmdDrawIndexedIndirect,
    .CmdDispatch = v3dv_CmdDispatch,
    .CmdDispatchIndirect = v3dv_CmdDispatchIndirect,
    .CmdCopyBuffer = v3dv_CmdCopyBuffer,
    .CmdCopyImage = v3dv_CmdCopyImage,
    .CmdBlitImage = v3dv_CmdBlitImage,
    .CmdCopyBufferToImage = v3dv_CmdCopyBufferToImage,
    .CmdCopyImageToBuffer = v3dv_CmdCopyImageToBuffer,
    .CmdUpdateBuffer = v3dv_CmdUpdateBuffer,
    .CmdFillBuffer = v3dv_CmdFillBuffer,
    .CmdClearColorImage = v3dv_CmdClearColorImage,
    .CmdClearDepthStencilImage = v3dv_CmdClearDepthStencilImage,
    .CmdClearAttachments = v3dv_CmdClearAttachments,
    .CmdResolveImage = v3dv_CmdResolveImage,
    .CmdSetEvent = v3dv_CmdSetEvent,
    .CmdResetEvent = v3dv_CmdResetEvent,
    .CmdWaitEvents = v3dv_CmdWaitEvents,
    .CmdPipelineBarrier = v3dv_CmdPipelineBarrier,
    .CmdBeginQuery = v3dv_CmdBeginQuery,
    .CmdEndQuery = v3dv_CmdEndQuery,
    .CmdBeginConditionalRenderingEXT = v3dv_CmdBeginConditionalRenderingEXT,
    .CmdEndConditionalRenderingEXT = v3dv_CmdEndConditionalRenderingEXT,
    .CmdResetQueryPool = v3dv_CmdResetQueryPool,
    .CmdWriteTimestamp = v3dv_CmdWriteTimestamp,
    .CmdCopyQueryPoolResults = v3dv_CmdCopyQueryPoolResults,
    .CmdPushConstants = v3dv_CmdPushConstants,
    .CmdBeginRenderPass = v3dv_CmdBeginRenderPass,
    .CmdNextSubpass = v3dv_CmdNextSubpass,
    .CmdEndRenderPass = v3dv_CmdEndRenderPass,
    .CmdExecuteCommands = v3dv_CmdExecuteCommands,
    .CreateSharedSwapchainsKHR = v3dv_CreateSharedSwapchainsKHR,
    .CreateSwapchainKHR = v3dv_CreateSwapchainKHR,
    .DestroySwapchainKHR = v3dv_DestroySwapchainKHR,
    .GetSwapchainImagesKHR = v3dv_GetSwapchainImagesKHR,
    .AcquireNextImageKHR = v3dv_AcquireNextImageKHR,
    .QueuePresentKHR = v3dv_QueuePresentKHR,
    .DebugMarkerSetObjectNameEXT = v3dv_DebugMarkerSetObjectNameEXT,
    .DebugMarkerSetObjectTagEXT = v3dv_DebugMarkerSetObjectTagEXT,
    .CmdDebugMarkerBeginEXT = v3dv_CmdDebugMarkerBeginEXT,
    .CmdDebugMarkerEndEXT = v3dv_CmdDebugMarkerEndEXT,
    .CmdDebugMarkerInsertEXT = v3dv_CmdDebugMarkerInsertEXT,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryWin32HandleNV = v3dv_GetMemoryWin32HandleNV,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .CmdExecuteGeneratedCommandsNV = v3dv_CmdExecuteGeneratedCommandsNV,
    .CmdPreprocessGeneratedCommandsNV = v3dv_CmdPreprocessGeneratedCommandsNV,
    .CmdBindPipelineShaderGroupNV = v3dv_CmdBindPipelineShaderGroupNV,
    .GetGeneratedCommandsMemoryRequirementsNV = v3dv_GetGeneratedCommandsMemoryRequirementsNV,
    .CreateIndirectCommandsLayoutNV = v3dv_CreateIndirectCommandsLayoutNV,
    .DestroyIndirectCommandsLayoutNV = v3dv_DestroyIndirectCommandsLayoutNV,
    .CmdPushDescriptorSetKHR = v3dv_CmdPushDescriptorSetKHR,
    .TrimCommandPool = v3dv_TrimCommandPool,
    .TrimCommandPoolKHR = v3dv_TrimCommandPoolKHR,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryWin32HandleKHR = v3dv_GetMemoryWin32HandleKHR,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryWin32HandlePropertiesKHR = v3dv_GetMemoryWin32HandlePropertiesKHR,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryFdKHR = v3dv_GetMemoryFdKHR,
    .GetMemoryFdPropertiesKHR = v3dv_GetMemoryFdPropertiesKHR,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetSemaphoreWin32HandleKHR = v3dv_GetSemaphoreWin32HandleKHR,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .ImportSemaphoreWin32HandleKHR = v3dv_ImportSemaphoreWin32HandleKHR,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .GetSemaphoreFdKHR = v3dv_GetSemaphoreFdKHR,
    .ImportSemaphoreFdKHR = v3dv_ImportSemaphoreFdKHR,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetFenceWin32HandleKHR = v3dv_GetFenceWin32HandleKHR,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .ImportFenceWin32HandleKHR = v3dv_ImportFenceWin32HandleKHR,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .GetFenceFdKHR = v3dv_GetFenceFdKHR,
    .ImportFenceFdKHR = v3dv_ImportFenceFdKHR,
    .DisplayPowerControlEXT = v3dv_DisplayPowerControlEXT,
    .RegisterDeviceEventEXT = v3dv_RegisterDeviceEventEXT,
    .RegisterDisplayEventEXT = v3dv_RegisterDisplayEventEXT,
    .GetSwapchainCounterEXT = v3dv_GetSwapchainCounterEXT,
    .GetDeviceGroupPeerMemoryFeatures = v3dv_GetDeviceGroupPeerMemoryFeatures,
    .GetDeviceGroupPeerMemoryFeaturesKHR = v3dv_GetDeviceGroupPeerMemoryFeaturesKHR,
    .BindBufferMemory2 = v3dv_BindBufferMemory2,
    .BindBufferMemory2KHR = v3dv_BindBufferMemory2KHR,
    .BindImageMemory2 = v3dv_BindImageMemory2,
    .BindImageMemory2KHR = v3dv_BindImageMemory2KHR,
    .CmdSetDeviceMask = v3dv_CmdSetDeviceMask,
    .CmdSetDeviceMaskKHR = v3dv_CmdSetDeviceMaskKHR,
    .GetDeviceGroupPresentCapabilitiesKHR = v3dv_GetDeviceGroupPresentCapabilitiesKHR,
    .GetDeviceGroupSurfacePresentModesKHR = v3dv_GetDeviceGroupSurfacePresentModesKHR,
    .AcquireNextImage2KHR = v3dv_AcquireNextImage2KHR,
    .CmdDispatchBase = v3dv_CmdDispatchBase,
    .CmdDispatchBaseKHR = v3dv_CmdDispatchBaseKHR,
    .CreateDescriptorUpdateTemplate = v3dv_CreateDescriptorUpdateTemplate,
    .CreateDescriptorUpdateTemplateKHR = v3dv_CreateDescriptorUpdateTemplateKHR,
    .DestroyDescriptorUpdateTemplate = v3dv_DestroyDescriptorUpdateTemplate,
    .DestroyDescriptorUpdateTemplateKHR = v3dv_DestroyDescriptorUpdateTemplateKHR,
    .UpdateDescriptorSetWithTemplate = v3dv_UpdateDescriptorSetWithTemplate,
    .UpdateDescriptorSetWithTemplateKHR = v3dv_UpdateDescriptorSetWithTemplateKHR,
    .CmdPushDescriptorSetWithTemplateKHR = v3dv_CmdPushDescriptorSetWithTemplateKHR,
    .SetHdrMetadataEXT = v3dv_SetHdrMetadataEXT,
    .GetSwapchainStatusKHR = v3dv_GetSwapchainStatusKHR,
    .GetRefreshCycleDurationGOOGLE = v3dv_GetRefreshCycleDurationGOOGLE,
    .GetPastPresentationTimingGOOGLE = v3dv_GetPastPresentationTimingGOOGLE,
    .CmdSetViewportWScalingNV = v3dv_CmdSetViewportWScalingNV,
    .CmdSetDiscardRectangleEXT = v3dv_CmdSetDiscardRectangleEXT,
    .CmdSetSampleLocationsEXT = v3dv_CmdSetSampleLocationsEXT,
    .GetBufferMemoryRequirements2 = v3dv_GetBufferMemoryRequirements2,
    .GetBufferMemoryRequirements2KHR = v3dv_GetBufferMemoryRequirements2KHR,
    .GetImageMemoryRequirements2 = v3dv_GetImageMemoryRequirements2,
    .GetImageMemoryRequirements2KHR = v3dv_GetImageMemoryRequirements2KHR,
    .GetImageSparseMemoryRequirements2 = v3dv_GetImageSparseMemoryRequirements2,
    .GetImageSparseMemoryRequirements2KHR = v3dv_GetImageSparseMemoryRequirements2KHR,
    .CreateSamplerYcbcrConversion = v3dv_CreateSamplerYcbcrConversion,
    .CreateSamplerYcbcrConversionKHR = v3dv_CreateSamplerYcbcrConversionKHR,
    .DestroySamplerYcbcrConversion = v3dv_DestroySamplerYcbcrConversion,
    .DestroySamplerYcbcrConversionKHR = v3dv_DestroySamplerYcbcrConversionKHR,
    .GetDeviceQueue2 = v3dv_GetDeviceQueue2,
    .CreateValidationCacheEXT = v3dv_CreateValidationCacheEXT,
    .DestroyValidationCacheEXT = v3dv_DestroyValidationCacheEXT,
    .GetValidationCacheDataEXT = v3dv_GetValidationCacheDataEXT,
    .MergeValidationCachesEXT = v3dv_MergeValidationCachesEXT,
    .GetDescriptorSetLayoutSupport = v3dv_GetDescriptorSetLayoutSupport,
    .GetDescriptorSetLayoutSupportKHR = v3dv_GetDescriptorSetLayoutSupportKHR,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetSwapchainGrallocUsageANDROID = v3dv_GetSwapchainGrallocUsageANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetSwapchainGrallocUsage2ANDROID = v3dv_GetSwapchainGrallocUsage2ANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .AcquireImageANDROID = v3dv_AcquireImageANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .QueueSignalReleaseImageANDROID = v3dv_QueueSignalReleaseImageANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
    .GetShaderInfoAMD = v3dv_GetShaderInfoAMD,
    .SetLocalDimmingAMD = v3dv_SetLocalDimmingAMD,
    .GetCalibratedTimestampsEXT = v3dv_GetCalibratedTimestampsEXT,
    .SetDebugUtilsObjectNameEXT = v3dv_SetDebugUtilsObjectNameEXT,
    .SetDebugUtilsObjectTagEXT = v3dv_SetDebugUtilsObjectTagEXT,
    .QueueBeginDebugUtilsLabelEXT = v3dv_QueueBeginDebugUtilsLabelEXT,
    .QueueEndDebugUtilsLabelEXT = v3dv_QueueEndDebugUtilsLabelEXT,
    .QueueInsertDebugUtilsLabelEXT = v3dv_QueueInsertDebugUtilsLabelEXT,
    .CmdBeginDebugUtilsLabelEXT = v3dv_CmdBeginDebugUtilsLabelEXT,
    .CmdEndDebugUtilsLabelEXT = v3dv_CmdEndDebugUtilsLabelEXT,
    .CmdInsertDebugUtilsLabelEXT = v3dv_CmdInsertDebugUtilsLabelEXT,
    .GetMemoryHostPointerPropertiesEXT = v3dv_GetMemoryHostPointerPropertiesEXT,
    .CmdWriteBufferMarkerAMD = v3dv_CmdWriteBufferMarkerAMD,
    .CreateRenderPass2 = v3dv_CreateRenderPass2,
    .CreateRenderPass2KHR = v3dv_CreateRenderPass2KHR,
    .CmdBeginRenderPass2 = v3dv_CmdBeginRenderPass2,
    .CmdBeginRenderPass2KHR = v3dv_CmdBeginRenderPass2KHR,
    .CmdNextSubpass2 = v3dv_CmdNextSubpass2,
    .CmdNextSubpass2KHR = v3dv_CmdNextSubpass2KHR,
    .CmdEndRenderPass2 = v3dv_CmdEndRenderPass2,
    .CmdEndRenderPass2KHR = v3dv_CmdEndRenderPass2KHR,
    .GetSemaphoreCounterValue = v3dv_GetSemaphoreCounterValue,
    .GetSemaphoreCounterValueKHR = v3dv_GetSemaphoreCounterValueKHR,
    .WaitSemaphores = v3dv_WaitSemaphores,
    .WaitSemaphoresKHR = v3dv_WaitSemaphoresKHR,
    .SignalSemaphore = v3dv_SignalSemaphore,
    .SignalSemaphoreKHR = v3dv_SignalSemaphoreKHR,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetAndroidHardwareBufferPropertiesANDROID = v3dv_GetAndroidHardwareBufferPropertiesANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetMemoryAndroidHardwareBufferANDROID = v3dv_GetMemoryAndroidHardwareBufferANDROID,
#endif // VK_USE_PLATFORM_ANDROID_KHR
    .CmdDrawIndirectCount = v3dv_CmdDrawIndirectCount,
    .CmdDrawIndirectCountKHR = v3dv_CmdDrawIndirectCountKHR,
    .CmdDrawIndirectCountAMD = v3dv_CmdDrawIndirectCountAMD,
    .CmdDrawIndexedIndirectCount = v3dv_CmdDrawIndexedIndirectCount,
    .CmdDrawIndexedIndirectCountKHR = v3dv_CmdDrawIndexedIndirectCountKHR,
    .CmdDrawIndexedIndirectCountAMD = v3dv_CmdDrawIndexedIndirectCountAMD,
    .CmdSetCheckpointNV = v3dv_CmdSetCheckpointNV,
    .GetQueueCheckpointDataNV = v3dv_GetQueueCheckpointDataNV,
    .CmdBindTransformFeedbackBuffersEXT = v3dv_CmdBindTransformFeedbackBuffersEXT,
    .CmdBeginTransformFeedbackEXT = v3dv_CmdBeginTransformFeedbackEXT,
    .CmdEndTransformFeedbackEXT = v3dv_CmdEndTransformFeedbackEXT,
    .CmdBeginQueryIndexedEXT = v3dv_CmdBeginQueryIndexedEXT,
    .CmdEndQueryIndexedEXT = v3dv_CmdEndQueryIndexedEXT,
    .CmdDrawIndirectByteCountEXT = v3dv_CmdDrawIndirectByteCountEXT,
    .CmdSetExclusiveScissorNV = v3dv_CmdSetExclusiveScissorNV,
    .CmdBindShadingRateImageNV = v3dv_CmdBindShadingRateImageNV,
    .CmdSetViewportShadingRatePaletteNV = v3dv_CmdSetViewportShadingRatePaletteNV,
    .CmdSetCoarseSampleOrderNV = v3dv_CmdSetCoarseSampleOrderNV,
    .CmdDrawMeshTasksNV = v3dv_CmdDrawMeshTasksNV,
    .CmdDrawMeshTasksIndirectNV = v3dv_CmdDrawMeshTasksIndirectNV,
    .CmdDrawMeshTasksIndirectCountNV = v3dv_CmdDrawMeshTasksIndirectCountNV,
    .CompileDeferredNV = v3dv_CompileDeferredNV,
    .CreateAccelerationStructureNV = v3dv_CreateAccelerationStructureNV,
    .DestroyAccelerationStructureKHR = v3dv_DestroyAccelerationStructureKHR,
    .DestroyAccelerationStructureNV = v3dv_DestroyAccelerationStructureNV,
    .GetAccelerationStructureMemoryRequirementsNV = v3dv_GetAccelerationStructureMemoryRequirementsNV,
    .BindAccelerationStructureMemoryNV = v3dv_BindAccelerationStructureMemoryNV,
    .CmdCopyAccelerationStructureNV = v3dv_CmdCopyAccelerationStructureNV,
    .CmdCopyAccelerationStructureKHR = v3dv_CmdCopyAccelerationStructureKHR,
    .CopyAccelerationStructureKHR = v3dv_CopyAccelerationStructureKHR,
    .CmdCopyAccelerationStructureToMemoryKHR = v3dv_CmdCopyAccelerationStructureToMemoryKHR,
    .CopyAccelerationStructureToMemoryKHR = v3dv_CopyAccelerationStructureToMemoryKHR,
    .CmdCopyMemoryToAccelerationStructureKHR = v3dv_CmdCopyMemoryToAccelerationStructureKHR,
    .CopyMemoryToAccelerationStructureKHR = v3dv_CopyMemoryToAccelerationStructureKHR,
    .CmdWriteAccelerationStructuresPropertiesKHR = v3dv_CmdWriteAccelerationStructuresPropertiesKHR,
    .CmdWriteAccelerationStructuresPropertiesNV = v3dv_CmdWriteAccelerationStructuresPropertiesNV,
    .CmdBuildAccelerationStructureNV = v3dv_CmdBuildAccelerationStructureNV,
    .WriteAccelerationStructuresPropertiesKHR = v3dv_WriteAccelerationStructuresPropertiesKHR,
    .CmdTraceRaysKHR = v3dv_CmdTraceRaysKHR,
    .CmdTraceRaysNV = v3dv_CmdTraceRaysNV,
    .GetRayTracingShaderGroupHandlesKHR = v3dv_GetRayTracingShaderGroupHandlesKHR,
    .GetRayTracingShaderGroupHandlesNV = v3dv_GetRayTracingShaderGroupHandlesNV,
    .GetRayTracingCaptureReplayShaderGroupHandlesKHR = v3dv_GetRayTracingCaptureReplayShaderGroupHandlesKHR,
    .GetAccelerationStructureHandleNV = v3dv_GetAccelerationStructureHandleNV,
    .CreateRayTracingPipelinesNV = v3dv_CreateRayTracingPipelinesNV,
    .CreateRayTracingPipelinesKHR = v3dv_CreateRayTracingPipelinesKHR,
    .CmdTraceRaysIndirectKHR = v3dv_CmdTraceRaysIndirectKHR,
    .GetDeviceAccelerationStructureCompatibilityKHR = v3dv_GetDeviceAccelerationStructureCompatibilityKHR,
    .GetRayTracingShaderGroupStackSizeKHR = v3dv_GetRayTracingShaderGroupStackSizeKHR,
    .CmdSetRayTracingPipelineStackSizeKHR = v3dv_CmdSetRayTracingPipelineStackSizeKHR,
    .GetImageViewHandleNVX = v3dv_GetImageViewHandleNVX,
    .GetImageViewAddressNVX = v3dv_GetImageViewAddressNVX,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetDeviceGroupSurfacePresentModes2EXT = v3dv_GetDeviceGroupSurfacePresentModes2EXT,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .AcquireFullScreenExclusiveModeEXT = v3dv_AcquireFullScreenExclusiveModeEXT,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .ReleaseFullScreenExclusiveModeEXT = v3dv_ReleaseFullScreenExclusiveModeEXT,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .AcquireProfilingLockKHR = v3dv_AcquireProfilingLockKHR,
    .ReleaseProfilingLockKHR = v3dv_ReleaseProfilingLockKHR,
    .GetImageDrmFormatModifierPropertiesEXT = v3dv_GetImageDrmFormatModifierPropertiesEXT,
    .GetBufferOpaqueCaptureAddress = v3dv_GetBufferOpaqueCaptureAddress,
    .GetBufferOpaqueCaptureAddressKHR = v3dv_GetBufferOpaqueCaptureAddressKHR,
    .GetBufferDeviceAddress = v3dv_GetBufferDeviceAddress,
    .GetBufferDeviceAddressKHR = v3dv_GetBufferDeviceAddressKHR,
    .GetBufferDeviceAddressEXT = v3dv_GetBufferDeviceAddressEXT,
    .InitializePerformanceApiINTEL = v3dv_InitializePerformanceApiINTEL,
    .UninitializePerformanceApiINTEL = v3dv_UninitializePerformanceApiINTEL,
    .CmdSetPerformanceMarkerINTEL = v3dv_CmdSetPerformanceMarkerINTEL,
    .CmdSetPerformanceStreamMarkerINTEL = v3dv_CmdSetPerformanceStreamMarkerINTEL,
    .CmdSetPerformanceOverrideINTEL = v3dv_CmdSetPerformanceOverrideINTEL,
    .AcquirePerformanceConfigurationINTEL = v3dv_AcquirePerformanceConfigurationINTEL,
    .ReleasePerformanceConfigurationINTEL = v3dv_ReleasePerformanceConfigurationINTEL,
    .QueueSetPerformanceConfigurationINTEL = v3dv_QueueSetPerformanceConfigurationINTEL,
    .GetPerformanceParameterINTEL = v3dv_GetPerformanceParameterINTEL,
    .GetDeviceMemoryOpaqueCaptureAddress = v3dv_GetDeviceMemoryOpaqueCaptureAddress,
    .GetDeviceMemoryOpaqueCaptureAddressKHR = v3dv_GetDeviceMemoryOpaqueCaptureAddressKHR,
    .GetPipelineExecutablePropertiesKHR = v3dv_GetPipelineExecutablePropertiesKHR,
    .GetPipelineExecutableStatisticsKHR = v3dv_GetPipelineExecutableStatisticsKHR,
    .GetPipelineExecutableInternalRepresentationsKHR = v3dv_GetPipelineExecutableInternalRepresentationsKHR,
    .CmdSetLineStippleEXT = v3dv_CmdSetLineStippleEXT,
    .CreateAccelerationStructureKHR = v3dv_CreateAccelerationStructureKHR,
    .CmdBuildAccelerationStructuresKHR = v3dv_CmdBuildAccelerationStructuresKHR,
    .CmdBuildAccelerationStructuresIndirectKHR = v3dv_CmdBuildAccelerationStructuresIndirectKHR,
    .BuildAccelerationStructuresKHR = v3dv_BuildAccelerationStructuresKHR,
    .GetAccelerationStructureDeviceAddressKHR = v3dv_GetAccelerationStructureDeviceAddressKHR,
    .CreateDeferredOperationKHR = v3dv_CreateDeferredOperationKHR,
    .DestroyDeferredOperationKHR = v3dv_DestroyDeferredOperationKHR,
    .GetDeferredOperationMaxConcurrencyKHR = v3dv_GetDeferredOperationMaxConcurrencyKHR,
    .GetDeferredOperationResultKHR = v3dv_GetDeferredOperationResultKHR,
    .DeferredOperationJoinKHR = v3dv_DeferredOperationJoinKHR,
    .CmdSetCullModeEXT = v3dv_CmdSetCullModeEXT,
    .CmdSetFrontFaceEXT = v3dv_CmdSetFrontFaceEXT,
    .CmdSetPrimitiveTopologyEXT = v3dv_CmdSetPrimitiveTopologyEXT,
    .CmdSetViewportWithCountEXT = v3dv_CmdSetViewportWithCountEXT,
    .CmdSetScissorWithCountEXT = v3dv_CmdSetScissorWithCountEXT,
    .CmdBindVertexBuffers2EXT = v3dv_CmdBindVertexBuffers2EXT,
    .CmdSetDepthTestEnableEXT = v3dv_CmdSetDepthTestEnableEXT,
    .CmdSetDepthWriteEnableEXT = v3dv_CmdSetDepthWriteEnableEXT,
    .CmdSetDepthCompareOpEXT = v3dv_CmdSetDepthCompareOpEXT,
    .CmdSetDepthBoundsTestEnableEXT = v3dv_CmdSetDepthBoundsTestEnableEXT,
    .CmdSetStencilTestEnableEXT = v3dv_CmdSetStencilTestEnableEXT,
    .CmdSetStencilOpEXT = v3dv_CmdSetStencilOpEXT,
    .CreatePrivateDataSlotEXT = v3dv_CreatePrivateDataSlotEXT,
    .DestroyPrivateDataSlotEXT = v3dv_DestroyPrivateDataSlotEXT,
    .SetPrivateDataEXT = v3dv_SetPrivateDataEXT,
    .GetPrivateDataEXT = v3dv_GetPrivateDataEXT,
    .CmdCopyBuffer2KHR = v3dv_CmdCopyBuffer2KHR,
    .CmdCopyImage2KHR = v3dv_CmdCopyImage2KHR,
    .CmdBlitImage2KHR = v3dv_CmdBlitImage2KHR,
    .CmdCopyBufferToImage2KHR = v3dv_CmdCopyBufferToImage2KHR,
    .CmdCopyImageToBuffer2KHR = v3dv_CmdCopyImageToBuffer2KHR,
    .CmdResolveImage2KHR = v3dv_CmdResolveImage2KHR,
    .CmdSetFragmentShadingRateKHR = v3dv_CmdSetFragmentShadingRateKHR,
    .CmdSetFragmentShadingRateEnumNV = v3dv_CmdSetFragmentShadingRateEnumNV,
    .GetAccelerationStructureBuildSizesKHR = v3dv_GetAccelerationStructureBuildSizesKHR,
};

