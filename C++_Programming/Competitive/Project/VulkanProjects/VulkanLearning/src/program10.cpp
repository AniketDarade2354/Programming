#include <vulkan/vulkan.h>

#include <iostream>
#include <vector>
#include <cstring>

const char* validationLayers[] = {
                                    "VK_LAYER_KHRONOS_validation"
                                };  

bool checkValidationLayerSupport()
{
    uint32_t layerCount = 0;
    bool bFlag = false;

    VkResult result = vkEnumerateInstanceLayerProperties
                        (
                            &layerCount,
                            nullptr
                        );

    if(result != VK_SUCCESS)
    {
        return bFlag;
    }

    std::vector <VkLayerProperties> layers(layerCount);

    result = vkEnumerateInstanceLayerProperties
                    (
                        &layerCount,
                        layers.data()
                    );
    
    if(result != VK_SUCCESS)
    {
        return bFlag;
    }

    for(const auto& layer : layers)
    {
        if(strcmp(layer.layerName, "VK_LAYER_KHRONOS_validation") == 0)
        {
            bFlag = true;
            break;
        }
    }
    
    return bFlag;
}

int main()
{
    //////////////////////////////////
    //
    // Check validation layer
    //
    //////////////////////////////////
    
    if(!checkValidationLayerSupport())
    {
        std::cout << "Validation layer is NOT available\n";

        return 1;
    }

    std::cout << "Validation layer is available\n";

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

    //////////////////////////////////////////
    //
    // Validation layer
    //
    //////////////////////////////////////////

    createInfo.enabledLayerCount = 1;

    createInfo.ppEnabledLayerNames = validationLayers;

    //////////////////////////////////////////
    //
    //  Extensions
    //
    //////////////////////////////////////////
    
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