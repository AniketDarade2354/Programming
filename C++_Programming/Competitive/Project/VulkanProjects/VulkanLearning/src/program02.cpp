#include <vulkan/vulkan.h>
#include <iostream>

int main()
{
    VkInstance instance;
    
    VkResult Result = vkCreateInstance(
        nullptr,
        nullptr,
        &instance
    );

    if(Result != VK_SUCCESS)
    {
        std::cout << "Failed to create Vulkan instance\n";
        return 1;
    }

    std::cout << "Vulkan instance created successfully\n";

    vkDestroyInstance(instance, nullptr);

    return 0;
}