/* This file generated from v3dv_entrypoints_gen.py, don't edit directly. */

struct v3dv_instance_dispatch_table {
   union {
      void *entrypoints[16];
      struct {
          PFN_vkCreateInstance vkCreateInstance;
          PFN_vkDestroyInstance vkDestroyInstance;
          PFN_vkEnumeratePhysicalDevices vkEnumeratePhysicalDevices;
          PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr;
          PFN_vkEnumerateInstanceVersion vkEnumerateInstanceVersion;
          PFN_vkEnumerateInstanceLayerProperties vkEnumerateInstanceLayerProperties;
          PFN_vkEnumerateInstanceExtensionProperties vkEnumerateInstanceExtensionProperties;
          PFN_vkCreateDisplayPlaneSurfaceKHR vkCreateDisplayPlaneSurfaceKHR;
          PFN_vkDestroySurfaceKHR vkDestroySurfaceKHR;
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
          PFN_vkCreateWaylandSurfaceKHR vkCreateWaylandSurfaceKHR;
#else
          void *vkCreateWaylandSurfaceKHR;
# endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
          PFN_vkCreateXlibSurfaceKHR vkCreateXlibSurfaceKHR;
#else
          void *vkCreateXlibSurfaceKHR;
# endif
#ifdef VK_USE_PLATFORM_XCB_KHR
          PFN_vkCreateXcbSurfaceKHR vkCreateXcbSurfaceKHR;
#else
          void *vkCreateXcbSurfaceKHR;
# endif
          PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT;
          PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT;
          PFN_vkDebugReportMessageEXT vkDebugReportMessageEXT;
          PFN_vkEnumeratePhysicalDeviceGroups vkEnumeratePhysicalDeviceGroups;
      };
   };
};

struct v3dv_physical_device_dispatch_table {
   union {
      void *entrypoints[44];
      struct {
          PFN_vkGetPhysicalDeviceProperties vkGetPhysicalDeviceProperties;
          PFN_vkGetPhysicalDeviceQueueFamilyProperties vkGetPhysicalDeviceQueueFamilyProperties;
          PFN_vkGetPhysicalDeviceMemoryProperties vkGetPhysicalDeviceMemoryProperties;
          PFN_vkGetPhysicalDeviceFeatures vkGetPhysicalDeviceFeatures;
          PFN_vkGetPhysicalDeviceFormatProperties vkGetPhysicalDeviceFormatProperties;
          PFN_vkGetPhysicalDeviceImageFormatProperties vkGetPhysicalDeviceImageFormatProperties;
          PFN_vkCreateDevice vkCreateDevice;
          PFN_vkEnumerateDeviceLayerProperties vkEnumerateDeviceLayerProperties;
          PFN_vkEnumerateDeviceExtensionProperties vkEnumerateDeviceExtensionProperties;
          PFN_vkGetPhysicalDeviceSparseImageFormatProperties vkGetPhysicalDeviceSparseImageFormatProperties;
          PFN_vkGetPhysicalDeviceDisplayPropertiesKHR vkGetPhysicalDeviceDisplayPropertiesKHR;
          PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
          PFN_vkGetDisplayPlaneSupportedDisplaysKHR vkGetDisplayPlaneSupportedDisplaysKHR;
          PFN_vkGetDisplayModePropertiesKHR vkGetDisplayModePropertiesKHR;
          PFN_vkCreateDisplayModeKHR vkCreateDisplayModeKHR;
          PFN_vkGetDisplayPlaneCapabilitiesKHR vkGetDisplayPlaneCapabilitiesKHR;
          PFN_vkGetPhysicalDeviceSurfaceSupportKHR vkGetPhysicalDeviceSurfaceSupportKHR;
          PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
          PFN_vkGetPhysicalDeviceSurfaceFormatsKHR vkGetPhysicalDeviceSurfaceFormatsKHR;
          PFN_vkGetPhysicalDeviceSurfacePresentModesKHR vkGetPhysicalDeviceSurfacePresentModesKHR;
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
          PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR vkGetPhysicalDeviceWaylandPresentationSupportKHR;
#else
          void *vkGetPhysicalDeviceWaylandPresentationSupportKHR;
# endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
          PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR vkGetPhysicalDeviceXlibPresentationSupportKHR;
#else
          void *vkGetPhysicalDeviceXlibPresentationSupportKHR;
# endif
#ifdef VK_USE_PLATFORM_XCB_KHR
          PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR vkGetPhysicalDeviceXcbPresentationSupportKHR;
#else
          void *vkGetPhysicalDeviceXcbPresentationSupportKHR;
# endif
          PFN_vkGetPhysicalDeviceFeatures2 vkGetPhysicalDeviceFeatures2;
          PFN_vkGetPhysicalDeviceFeatures2KHR vkGetPhysicalDeviceFeatures2KHR;
          PFN_vkGetPhysicalDeviceProperties2 vkGetPhysicalDeviceProperties2;
          PFN_vkGetPhysicalDeviceProperties2KHR vkGetPhysicalDeviceProperties2KHR;
          PFN_vkGetPhysicalDeviceFormatProperties2 vkGetPhysicalDeviceFormatProperties2;
          PFN_vkGetPhysicalDeviceFormatProperties2KHR vkGetPhysicalDeviceFormatProperties2KHR;
          PFN_vkGetPhysicalDeviceImageFormatProperties2 vkGetPhysicalDeviceImageFormatProperties2;
          PFN_vkGetPhysicalDeviceImageFormatProperties2KHR vkGetPhysicalDeviceImageFormatProperties2KHR;
          PFN_vkGetPhysicalDeviceQueueFamilyProperties2 vkGetPhysicalDeviceQueueFamilyProperties2;
          PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR vkGetPhysicalDeviceQueueFamilyProperties2KHR;
          PFN_vkGetPhysicalDeviceMemoryProperties2 vkGetPhysicalDeviceMemoryProperties2;
          PFN_vkGetPhysicalDeviceMemoryProperties2KHR vkGetPhysicalDeviceMemoryProperties2KHR;
          PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 vkGetPhysicalDeviceSparseImageFormatProperties2;
          PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
          PFN_vkGetPhysicalDeviceExternalBufferProperties vkGetPhysicalDeviceExternalBufferProperties;
          PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR vkGetPhysicalDeviceExternalBufferPropertiesKHR;
          PFN_vkGetPhysicalDeviceExternalSemaphoreProperties vkGetPhysicalDeviceExternalSemaphoreProperties;
          PFN_vkGetPhysicalDeviceExternalFenceProperties vkGetPhysicalDeviceExternalFenceProperties;
          PFN_vkGetPhysicalDevicePresentRectanglesKHR vkGetPhysicalDevicePresentRectanglesKHR;
          PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR vkGetPhysicalDeviceSurfaceCapabilities2KHR;
          PFN_vkGetPhysicalDeviceSurfaceFormats2KHR vkGetPhysicalDeviceSurfaceFormats2KHR;
      };
   };
};

struct v3dv_device_dispatch_table {
   union {
      void *entrypoints[157];
      struct {
          PFN_vkGetDeviceProcAddr vkGetDeviceProcAddr;
          PFN_vkDestroyDevice vkDestroyDevice;
          PFN_vkGetDeviceQueue vkGetDeviceQueue;
          PFN_vkQueueSubmit vkQueueSubmit;
          PFN_vkQueueWaitIdle vkQueueWaitIdle;
          PFN_vkDeviceWaitIdle vkDeviceWaitIdle;
          PFN_vkAllocateMemory vkAllocateMemory;
          PFN_vkFreeMemory vkFreeMemory;
          PFN_vkMapMemory vkMapMemory;
          PFN_vkUnmapMemory vkUnmapMemory;
          PFN_vkFlushMappedMemoryRanges vkFlushMappedMemoryRanges;
          PFN_vkInvalidateMappedMemoryRanges vkInvalidateMappedMemoryRanges;
          PFN_vkGetDeviceMemoryCommitment vkGetDeviceMemoryCommitment;
          PFN_vkGetBufferMemoryRequirements vkGetBufferMemoryRequirements;
          PFN_vkBindBufferMemory vkBindBufferMemory;
          PFN_vkGetImageMemoryRequirements vkGetImageMemoryRequirements;
          PFN_vkBindImageMemory vkBindImageMemory;
          PFN_vkGetImageSparseMemoryRequirements vkGetImageSparseMemoryRequirements;
          PFN_vkQueueBindSparse vkQueueBindSparse;
          PFN_vkCreateFence vkCreateFence;
          PFN_vkDestroyFence vkDestroyFence;
          PFN_vkResetFences vkResetFences;
          PFN_vkGetFenceStatus vkGetFenceStatus;
          PFN_vkWaitForFences vkWaitForFences;
          PFN_vkCreateSemaphore vkCreateSemaphore;
          PFN_vkDestroySemaphore vkDestroySemaphore;
          PFN_vkCreateEvent vkCreateEvent;
          PFN_vkDestroyEvent vkDestroyEvent;
          PFN_vkGetEventStatus vkGetEventStatus;
          PFN_vkSetEvent vkSetEvent;
          PFN_vkResetEvent vkResetEvent;
          PFN_vkCreateQueryPool vkCreateQueryPool;
          PFN_vkDestroyQueryPool vkDestroyQueryPool;
          PFN_vkGetQueryPoolResults vkGetQueryPoolResults;
          PFN_vkCreateBuffer vkCreateBuffer;
          PFN_vkDestroyBuffer vkDestroyBuffer;
          PFN_vkCreateBufferView vkCreateBufferView;
          PFN_vkDestroyBufferView vkDestroyBufferView;
          PFN_vkCreateImage vkCreateImage;
          PFN_vkDestroyImage vkDestroyImage;
          PFN_vkGetImageSubresourceLayout vkGetImageSubresourceLayout;
          PFN_vkCreateImageView vkCreateImageView;
          PFN_vkDestroyImageView vkDestroyImageView;
          PFN_vkCreateShaderModule vkCreateShaderModule;
          PFN_vkDestroyShaderModule vkDestroyShaderModule;
          PFN_vkCreatePipelineCache vkCreatePipelineCache;
          PFN_vkDestroyPipelineCache vkDestroyPipelineCache;
          PFN_vkGetPipelineCacheData vkGetPipelineCacheData;
          PFN_vkMergePipelineCaches vkMergePipelineCaches;
          PFN_vkCreateGraphicsPipelines vkCreateGraphicsPipelines;
          PFN_vkCreateComputePipelines vkCreateComputePipelines;
          PFN_vkDestroyPipeline vkDestroyPipeline;
          PFN_vkCreatePipelineLayout vkCreatePipelineLayout;
          PFN_vkDestroyPipelineLayout vkDestroyPipelineLayout;
          PFN_vkCreateSampler vkCreateSampler;
          PFN_vkDestroySampler vkDestroySampler;
          PFN_vkCreateDescriptorSetLayout vkCreateDescriptorSetLayout;
          PFN_vkDestroyDescriptorSetLayout vkDestroyDescriptorSetLayout;
          PFN_vkCreateDescriptorPool vkCreateDescriptorPool;
          PFN_vkDestroyDescriptorPool vkDestroyDescriptorPool;
          PFN_vkResetDescriptorPool vkResetDescriptorPool;
          PFN_vkAllocateDescriptorSets vkAllocateDescriptorSets;
          PFN_vkFreeDescriptorSets vkFreeDescriptorSets;
          PFN_vkUpdateDescriptorSets vkUpdateDescriptorSets;
          PFN_vkCreateFramebuffer vkCreateFramebuffer;
          PFN_vkDestroyFramebuffer vkDestroyFramebuffer;
          PFN_vkCreateRenderPass vkCreateRenderPass;
          PFN_vkDestroyRenderPass vkDestroyRenderPass;
          PFN_vkGetRenderAreaGranularity vkGetRenderAreaGranularity;
          PFN_vkCreateCommandPool vkCreateCommandPool;
          PFN_vkDestroyCommandPool vkDestroyCommandPool;
          PFN_vkResetCommandPool vkResetCommandPool;
          PFN_vkAllocateCommandBuffers vkAllocateCommandBuffers;
          PFN_vkFreeCommandBuffers vkFreeCommandBuffers;
          PFN_vkBeginCommandBuffer vkBeginCommandBuffer;
          PFN_vkEndCommandBuffer vkEndCommandBuffer;
          PFN_vkResetCommandBuffer vkResetCommandBuffer;
          PFN_vkCmdBindPipeline vkCmdBindPipeline;
          PFN_vkCmdSetViewport vkCmdSetViewport;
          PFN_vkCmdSetScissor vkCmdSetScissor;
          PFN_vkCmdSetLineWidth vkCmdSetLineWidth;
          PFN_vkCmdSetDepthBias vkCmdSetDepthBias;
          PFN_vkCmdSetBlendConstants vkCmdSetBlendConstants;
          PFN_vkCmdSetDepthBounds vkCmdSetDepthBounds;
          PFN_vkCmdSetStencilCompareMask vkCmdSetStencilCompareMask;
          PFN_vkCmdSetStencilWriteMask vkCmdSetStencilWriteMask;
          PFN_vkCmdSetStencilReference vkCmdSetStencilReference;
          PFN_vkCmdBindDescriptorSets vkCmdBindDescriptorSets;
          PFN_vkCmdBindIndexBuffer vkCmdBindIndexBuffer;
          PFN_vkCmdBindVertexBuffers vkCmdBindVertexBuffers;
          PFN_vkCmdDraw vkCmdDraw;
          PFN_vkCmdDrawIndexed vkCmdDrawIndexed;
          PFN_vkCmdDrawIndirect vkCmdDrawIndirect;
          PFN_vkCmdDrawIndexedIndirect vkCmdDrawIndexedIndirect;
          PFN_vkCmdDispatch vkCmdDispatch;
          PFN_vkCmdDispatchIndirect vkCmdDispatchIndirect;
          PFN_vkCmdCopyBuffer vkCmdCopyBuffer;
          PFN_vkCmdCopyImage vkCmdCopyImage;
          PFN_vkCmdBlitImage vkCmdBlitImage;
          PFN_vkCmdCopyBufferToImage vkCmdCopyBufferToImage;
          PFN_vkCmdCopyImageToBuffer vkCmdCopyImageToBuffer;
          PFN_vkCmdUpdateBuffer vkCmdUpdateBuffer;
          PFN_vkCmdFillBuffer vkCmdFillBuffer;
          PFN_vkCmdClearColorImage vkCmdClearColorImage;
          PFN_vkCmdClearDepthStencilImage vkCmdClearDepthStencilImage;
          PFN_vkCmdClearAttachments vkCmdClearAttachments;
          PFN_vkCmdResolveImage vkCmdResolveImage;
          PFN_vkCmdSetEvent vkCmdSetEvent;
          PFN_vkCmdResetEvent vkCmdResetEvent;
          PFN_vkCmdWaitEvents vkCmdWaitEvents;
          PFN_vkCmdPipelineBarrier vkCmdPipelineBarrier;
          PFN_vkCmdBeginQuery vkCmdBeginQuery;
          PFN_vkCmdEndQuery vkCmdEndQuery;
          PFN_vkCmdResetQueryPool vkCmdResetQueryPool;
          PFN_vkCmdWriteTimestamp vkCmdWriteTimestamp;
          PFN_vkCmdCopyQueryPoolResults vkCmdCopyQueryPoolResults;
          PFN_vkCmdPushConstants vkCmdPushConstants;
          PFN_vkCmdBeginRenderPass vkCmdBeginRenderPass;
          PFN_vkCmdNextSubpass vkCmdNextSubpass;
          PFN_vkCmdEndRenderPass vkCmdEndRenderPass;
          PFN_vkCmdExecuteCommands vkCmdExecuteCommands;
          PFN_vkCreateSwapchainKHR vkCreateSwapchainKHR;
          PFN_vkDestroySwapchainKHR vkDestroySwapchainKHR;
          PFN_vkGetSwapchainImagesKHR vkGetSwapchainImagesKHR;
          PFN_vkAcquireNextImageKHR vkAcquireNextImageKHR;
          PFN_vkQueuePresentKHR vkQueuePresentKHR;
          PFN_vkTrimCommandPool vkTrimCommandPool;
          PFN_vkTrimCommandPoolKHR vkTrimCommandPoolKHR;
          PFN_vkGetMemoryFdKHR vkGetMemoryFdKHR;
          PFN_vkGetMemoryFdPropertiesKHR vkGetMemoryFdPropertiesKHR;
          PFN_vkGetDeviceGroupPeerMemoryFeatures vkGetDeviceGroupPeerMemoryFeatures;
          PFN_vkBindBufferMemory2 vkBindBufferMemory2;
          PFN_vkBindImageMemory2 vkBindImageMemory2;
          PFN_vkCmdSetDeviceMask vkCmdSetDeviceMask;
          PFN_vkGetDeviceGroupPresentCapabilitiesKHR vkGetDeviceGroupPresentCapabilitiesKHR;
          PFN_vkGetDeviceGroupSurfacePresentModesKHR vkGetDeviceGroupSurfacePresentModesKHR;
          PFN_vkAcquireNextImage2KHR vkAcquireNextImage2KHR;
          PFN_vkCmdDispatchBase vkCmdDispatchBase;
          PFN_vkCreateDescriptorUpdateTemplate vkCreateDescriptorUpdateTemplate;
          PFN_vkDestroyDescriptorUpdateTemplate vkDestroyDescriptorUpdateTemplate;
          PFN_vkUpdateDescriptorSetWithTemplate vkUpdateDescriptorSetWithTemplate;
          PFN_vkGetBufferMemoryRequirements2 vkGetBufferMemoryRequirements2;
          PFN_vkGetImageMemoryRequirements2 vkGetImageMemoryRequirements2;
          PFN_vkGetImageSparseMemoryRequirements2 vkGetImageSparseMemoryRequirements2;
          PFN_vkCreateSamplerYcbcrConversion vkCreateSamplerYcbcrConversion;
          PFN_vkDestroySamplerYcbcrConversion vkDestroySamplerYcbcrConversion;
          PFN_vkGetDeviceQueue2 vkGetDeviceQueue2;
          PFN_vkGetDescriptorSetLayoutSupport vkGetDescriptorSetLayoutSupport;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
          PFN_vkGetSwapchainGrallocUsageANDROID vkGetSwapchainGrallocUsageANDROID;
#else
          void *vkGetSwapchainGrallocUsageANDROID;
# endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
          PFN_vkGetSwapchainGrallocUsage2ANDROID vkGetSwapchainGrallocUsage2ANDROID;
#else
          void *vkGetSwapchainGrallocUsage2ANDROID;
# endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
          PFN_vkAcquireImageANDROID vkAcquireImageANDROID;
#else
          void *vkAcquireImageANDROID;
# endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
          PFN_vkQueueSignalReleaseImageANDROID vkQueueSignalReleaseImageANDROID;
#else
          void *vkQueueSignalReleaseImageANDROID;
# endif
          PFN_vkGetImageDrmFormatModifierPropertiesEXT vkGetImageDrmFormatModifierPropertiesEXT;
          PFN_vkCreatePrivateDataSlotEXT vkCreatePrivateDataSlotEXT;
          PFN_vkDestroyPrivateDataSlotEXT vkDestroyPrivateDataSlotEXT;
          PFN_vkSetPrivateDataEXT vkSetPrivateDataEXT;
          PFN_vkGetPrivateDataEXT vkGetPrivateDataEXT;
      };
   };
};

extern const struct v3dv_instance_dispatch_table v3dv_instance_dispatch_table;
extern const struct v3dv_physical_device_dispatch_table v3dv_physical_device_dispatch_table;
extern const struct v3dv_device_dispatch_table v3dv_device_dispatch_table;

  VkResult v3dv_CreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance);
  void v3dv_DestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_EnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
  PFN_vkVoidFunction v3dv_GetInstanceProcAddr(VkInstance instance, const char* pName);
  VkResult v3dv_EnumerateInstanceVersion(uint32_t* pApiVersion);
  VkResult v3dv_EnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties);
  VkResult v3dv_EnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties);
  VkResult v3dv_CreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
  void v3dv_DestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  VkResult v3dv_CreateWaylandSurfaceKHR(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
  VkResult v3dv_CreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
  VkResult v3dv_CreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif // VK_USE_PLATFORM_XCB_KHR
  VkResult v3dv_CreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
  void v3dv_DestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);
  void v3dv_DebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage);
  VkResult v3dv_EnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);

  void v3dv_GetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties);
  void v3dv_GetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties);
  void v3dv_GetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties);
  void v3dv_GetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures);
  void v3dv_GetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties);
  VkResult v3dv_GetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties);
  VkResult v3dv_CreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice);
  VkResult v3dv_EnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties);
  VkResult v3dv_EnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties);
  void v3dv_GetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties);
  VkResult v3dv_GetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties);
  VkResult v3dv_GetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties);
  VkResult v3dv_GetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays);
  VkResult v3dv_GetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
  VkResult v3dv_CreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode);
  VkResult v3dv_GetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities);
  VkResult v3dv_GetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported);
  VkResult v3dv_GetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities);
  VkResult v3dv_GetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats);
  VkResult v3dv_GetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes);
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  VkBool32 v3dv_GetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
  VkBool32 v3dv_GetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID);
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
  VkBool32 v3dv_GetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id);
#endif // VK_USE_PLATFORM_XCB_KHR
  void v3dv_GetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
      void v3dv_GetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
      void v3dv_GetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties);
      VkResult v3dv_GetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
      void v3dv_GetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties);
      void v3dv_GetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
      void v3dv_GetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
      void v3dv_GetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
      void v3dv_GetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
  void v3dv_GetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
  VkResult v3dv_GetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects);
  VkResult v3dv_GetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities);
  VkResult v3dv_GetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats);

  PFN_vkVoidFunction v3dv_GetDeviceProcAddr(VkDevice device, const char* pName);
  void v3dv_DestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator);
  void v3dv_GetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue);
  VkResult v3dv_QueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
  VkResult v3dv_QueueWaitIdle(VkQueue queue);
  VkResult v3dv_DeviceWaitIdle(VkDevice device);
  VkResult v3dv_AllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory);
  void v3dv_FreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_MapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData);
  void v3dv_UnmapMemory(VkDevice device, VkDeviceMemory memory);
  VkResult v3dv_FlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
  VkResult v3dv_InvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
  void v3dv_GetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes);
  void v3dv_GetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements);
  VkResult v3dv_BindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset);
  void v3dv_GetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements);
  VkResult v3dv_BindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset);
  void v3dv_GetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements);
  VkResult v3dv_QueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence);
  VkResult v3dv_CreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
  void v3dv_DestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_ResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences);
  VkResult v3dv_GetFenceStatus(VkDevice device, VkFence fence);
  VkResult v3dv_WaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout);
  VkResult v3dv_CreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore);
  void v3dv_DestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent);
  void v3dv_DestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_GetEventStatus(VkDevice device, VkEvent event);
  VkResult v3dv_SetEvent(VkDevice device, VkEvent event);
  VkResult v3dv_ResetEvent(VkDevice device, VkEvent event);
  VkResult v3dv_CreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool);
  void v3dv_DestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_GetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags);
  VkResult v3dv_CreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer);
  void v3dv_DestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreateBufferView(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView);
  void v3dv_DestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage);
  void v3dv_DestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator);
  void v3dv_GetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout);
  VkResult v3dv_CreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView);
  void v3dv_DestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule);
  void v3dv_DestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache);
  void v3dv_DestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_GetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData);
  VkResult v3dv_MergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches);
  VkResult v3dv_CreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
  VkResult v3dv_CreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
  void v3dv_DestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout);
  void v3dv_DestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler);
  void v3dv_DestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout);
  void v3dv_DestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool);
  void v3dv_DestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_ResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);
  VkResult v3dv_AllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets);
  VkResult v3dv_FreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets);
  void v3dv_UpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies);
  VkResult v3dv_CreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer);
  void v3dv_DestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_CreateRenderPass(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
  void v3dv_DestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator);
  void v3dv_GetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity);
  VkResult v3dv_CreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool);
  void v3dv_DestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_ResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags);
  VkResult v3dv_AllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers);
  void v3dv_FreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);
  VkResult v3dv_BeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo);
  VkResult v3dv_EndCommandBuffer(VkCommandBuffer commandBuffer);
  VkResult v3dv_ResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags);
  void v3dv_CmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
  void v3dv_CmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports);
  void v3dv_CmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors);
  void v3dv_CmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth);
  void v3dv_CmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
  void v3dv_CmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants[4]);
  void v3dv_CmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);
  void v3dv_CmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);
  void v3dv_CmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);
  void v3dv_CmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);
  void v3dv_CmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets);
  void v3dv_CmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
  void v3dv_CmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets);
  void v3dv_CmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);
  void v3dv_CmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance);
  void v3dv_CmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
  void v3dv_CmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
  void v3dv_CmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
  void v3dv_CmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);
  void v3dv_CmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions);
  void v3dv_CmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions);
  void v3dv_CmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter);
  void v3dv_CmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions);
  void v3dv_CmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions);
  void v3dv_CmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData);
  void v3dv_CmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);
  void v3dv_CmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges);
  void v3dv_CmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges);
  void v3dv_CmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects);
  void v3dv_CmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions);
  void v3dv_CmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
  void v3dv_CmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
  void v3dv_CmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
  void v3dv_CmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
  void v3dv_CmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
  void v3dv_CmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query);
  void v3dv_CmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
  void v3dv_CmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query);
  void v3dv_CmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
  void v3dv_CmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues);
  void v3dv_CmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents);
  void v3dv_CmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents);
  void v3dv_CmdEndRenderPass(VkCommandBuffer commandBuffer);
  void v3dv_CmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);
  VkResult v3dv_CreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain);
  void v3dv_DestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_GetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages);
  VkResult v3dv_AcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex);
  VkResult v3dv_QueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo);
  void v3dv_TrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
      VkResult v3dv_GetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd);
  VkResult v3dv_GetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties);
  void v3dv_GetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
  VkResult v3dv_BindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
  VkResult v3dv_BindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
  void v3dv_CmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask);
  VkResult v3dv_GetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities);
  VkResult v3dv_GetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes);
  VkResult v3dv_AcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex);
  void v3dv_CmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
  VkResult v3dv_CreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
  void v3dv_DestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
  void v3dv_UpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData);
  void v3dv_GetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
  void v3dv_GetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
  void v3dv_GetImageSparseMemoryRequirements2(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
  VkResult v3dv_CreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
  void v3dv_DestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);
  void v3dv_GetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);
  void v3dv_GetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  VkResult v3dv_GetSwapchainGrallocUsageANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, int* grallocUsage);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  VkResult v3dv_GetSwapchainGrallocUsage2ANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, VkSwapchainImageUsageFlagsANDROID swapchainImageUsage, uint64_t* grallocConsumerUsage, uint64_t* grallocProducerUsage);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  VkResult v3dv_AcquireImageANDROID(VkDevice device, VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  VkResult v3dv_QueueSignalReleaseImageANDROID(VkQueue queue, uint32_t waitSemaphoreCount, const VkSemaphore* pWaitSemaphores, VkImage image, int* pNativeFenceFd);
#endif // VK_USE_PLATFORM_ANDROID_KHR
  VkResult v3dv_GetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties);
  VkResult v3dv_CreatePrivateDataSlotEXT(VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot);
  void v3dv_DestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator);
  VkResult v3dv_SetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data);
  void v3dv_GetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t* pData);
