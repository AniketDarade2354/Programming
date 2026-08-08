#include <vulkan/vulkan.h>

#include <iostream>
#include <vector>
#include <cstring>

bool chechkExtensionSupport(
                                const char* extensionName
                            )
{
    uint32_t extensionCount = 0;
    bool bFlag = false;

    VkResult result = vkEnumerateInstanceExtensionProperties(
                            nullptr,
                            &extensionCount,
                            nullptr
                        );

    if(result != VK_SUCCESS)
    {
        return false;
    }

    std::vector<VkExtensionProperties> extensions(extensionCount);

    result = vkEnumerateInstanceExtensionProperties(
                    nullptr,
                    &extensionCount,
                    extensions.data()
                );

    if(result != VK_SUCCESS)
    {
        return false;
    }

    for(const auto& extension : extensions)
    {
        if(strcmp(extension.extensionName, extensionName) == 0)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    const char * extensionName = VK_EXT_DEBUG_UTILS_EXTENSION_NAME;

    if(chechkExtensionSupport(extensionName))
    {
        std:: cout
                << "Extension is supported : \n"
                << extensionName
                << '\n';
    }
    else
    {
        std::cout 
                << "Extension is NOT supported : \n"
                << extensionName
                << '\n';

        return 1;
    }

    return 0;
}