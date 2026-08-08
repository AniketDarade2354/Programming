#include <vulkan/vulkan.h>
#include <iostream>

int main()
{
    uint32_t extensionCount = 0;

    VkResult result = vkEnumerateInstanceExtensionProperties
                        (
                            nullptr,
                            &extensionCount,
                            nullptr
                        );

    if(result != VK_SUCCESS)
    {
        std::cout << "Failed to get extension count\n";
        return 1;
    }

    std::cout << "Extension Count : " 
              << extensionCount
              << "\n";
    
    return 0;
}