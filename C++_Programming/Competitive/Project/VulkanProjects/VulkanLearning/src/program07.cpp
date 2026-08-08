#include <vulkan/vulkan.h>
#include <iostream>
#include <vector>

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

    std::vector <VkExtensionProperties> extensions(extensionCount);
    

    result = vkEnumerateInstanceExtensionProperties
                (
                    nullptr,
                    &extensionCount,
                    extensions.data()
                );
    
    if(result != VK_SUCCESS)
    {
        std::cout << "Failed to enumerate extensions\n";
        return 1;
    }

    for(const auto& extension : extensions)
    {
        std::cout 
            << extension.extensionName
            << " : "
            << extension.specVersion
            << '\n';
    }

    return 0;
}