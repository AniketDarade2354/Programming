#include <vulkan/vulkan.h>
#include <iostream>

int main()
{
    //////////////////////////////////
    //
    // Application Information
    //
    //////////////////////////////////

    VkApplicationInfo appInfo{};

    // Application of appInfo
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;

    // Application name
    appInfo.pApplicationName = "VulkanLearning";

    // Application version
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);

    // Application Engine name
    appInfo.pEngineName = "No Engine";

    // Application Engine Version
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);

    // Application Api version
    appInfo.apiVersion = VK_API_VERSION_1_3;    // Vulkan version on local system E.g. Vulkan 1.3

    //////////////////////////////////
    //
    // Instance extensions
    //
    //////////////////////////////////

    const char* extensions[] =
    {
        VK_EXT_DEBUG_UTILS_EXTENSION_NAME
    };

    //////////////////////////////////
    //
    // Instance creation information
    //
    //////////////////////////////////
    
    VkInstanceCreateInfo createInfo{};

    // Instance type
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    
    // Pointer to appinfo structure
    createInfo.pApplicationInfo = &appInfo;

    createInfo.enabledExtensionCount = 1;

    createInfo.ppEnabledExtensionNames = extensions;

    //////////////////////////////////
    //
    // Create Vulkan instance
    //
    //////////////////////////////////

    VkInstance instance;

    VkResult result = vkCreateInstance(
        &createInfo,
        nullptr,
        &instance
    );

    if(result != VK_SUCCESS)
    {
        std::cout << "Failed to create Vulkan instance\n";
        return 1;
    }

    std::cout << "Vulkan Instance Created\n";

    //////////////////////////////////
    //
    // Destroy instance
    //
    //////////////////////////////////

    vkDestroyInstance(
        instance,
        nullptr
    );

    return 0;
}