#include <vulkan/vulkan.h>
#include <iostream>

int main()
{
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

    VkInstanceCreateInfo createInfo{};

    // Instance type
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    
    // Pointer to appinfo structure
    createInfo.pApplicationInfo = &appInfo;

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

    vkDestroyInstance(
        instance,
        nullptr
    );

    return 0;
}