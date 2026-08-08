#include <vulkan/vulkan.h>
#include <iostream>

int main()
{
    VkInstance instance;

    VkInstanceCreateInfo createInfo{};      // create structure and initialize all to default values {}

    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;

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

    vkDestroyInstance(instance, nullptr);

    return 0;
}