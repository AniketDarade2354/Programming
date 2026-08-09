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

//////////////////////////////////
//
// Debug callback
//
//////////////////////////////////

VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback
                                (
                                    VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                    VkDebugUtilsMessageTypeFlagsEXT messageType,
                                    const VkDebugUtilsMessengerCallbackDataEXT * pCallbackData,
                                    void * pUserData
                                )
{
    std::cerr   
            << "VALIDATION : "
            << pCallbackData->pMessage
            << '\n';

    return VK_FALSE;
}

//////////////////////////////////
//
// Create debug messenger
//
//////////////////////////////////

VkResult CreateDebugUtilsMessenger
        (
            VkInstance instance,
            const VkDebugUtilsMessengerCreateInfoEXT * createInfo,
            VkDebugUtilsMessengerEXT * debugMessenger
        )
{
    PFN_vkVoidFunction func = 
                            vkGetInstanceProcAddr(
                                instance,
                                "vkCreateDebugUtilsMessengerEXT"
                            );
    
    if(func == nullptr)
    {
        std::cerr
            << "vkCreateDebugUtilsMessenger was not LOADED\n";
        return VK_ERROR_EXTENSION_NOT_PRESENT;
    }

    auto createFunction = reinterpret_cast <PFN_vkCreateDebugUtilsMessengerEXT> (func);

    return createFunction(
        instance,
        createInfo,
        nullptr,
        debugMessenger
    );
}

//////////////////////////////////
//
// Destroy debug messenger
//
//////////////////////////////////

void DestroyDebugUtilsMessenger(
    VkInstance instance,
    VkDebugUtilsMessengerEXT debugMessenger
)
{
    PFN_vkVoidFunction func = vkGetInstanceProcAddr(
        instance,
        "vkDestroyDebugUtilsMessengerEXT"
    );

    if(func == nullptr)
    {
        return;
    }

    auto destroyFunction = reinterpret_cast <PFN_vkDestroyDebugUtilsMessengerEXT> (func);

    destroyFunction(
        instance,
        debugMessenger,
        nullptr
    );
}

const char* GetDeviceType(
    VkPhysicalDeviceType type
)
{
    switch (type)
    {
        case VK_PHYSICAL_DEVICE_TYPE_OTHER:
            return "Other";

        case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU:
            return "Integrated GPU";

        case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU:
            return "Discrete GPU";

        case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU:
            return "Virtual GPU";

        case VK_PHYSICAL_DEVICE_TYPE_CPU:
            return "CPU";

        default:
            return "Unknown";
    }
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

    std:: cout << "Debug extension : " << VK_EXT_DEBUG_UTILS_EXTENSION_NAME << '\n';



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

    PFN_vkVoidFunction testFunction =
    vkGetInstanceProcAddr(
        instance,
        "vkCreateDebugUtilsMessengerEXT"
    );

    if (testFunction == nullptr)
    {
        std::cout << "TEST: Function pointer is NULL\n";
    }
    else
    {
        std::cout << "TEST: Function pointer loaded\n";
    }

    //////////////////////////////////
    //
    // Debug messenger create info
    //
    //////////////////////////////////

    VkDebugUtilsMessengerCreateInfoEXT debugCreateInfo{};

    debugCreateInfo.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;

    debugCreateInfo.messageSeverity = 
        VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT |
        VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT |
        VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
        VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT ;

    debugCreateInfo.messageType = 
        VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
        VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
        VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT ;
        
    debugCreateInfo.pfnUserCallback = debugCallback; 


    //////////////////////////////////
    //
    // Create debug messenger
    //
    //////////////////////////////////

    VkDebugUtilsMessengerEXT debugMessenger;

    result = CreateDebugUtilsMessenger(
                                        instance,
                                        &debugCreateInfo,
                                        &debugMessenger 
                                        );

    if(result != VK_SUCCESS)
    {
        std::cout << "Failed to create debug messenger\n";

        std::cout << "VkResult : " << result << '\n';

        vkDestroyInstance(instance, nullptr);

        return 1;
    }
      
    std::cout << "Debug Messenger Created\n";

    uint32_t deviceCount = 0;

    result = vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr);

    if(result != VK_SUCCESS)
    {
        std::cout << "Failed to get physical device count\n";
        return 1;
    }

    std:: cout << "Physical device count : " << deviceCount << '\n';

    std::vector <VkPhysicalDevice> devices(deviceCount);

    result = vkEnumeratePhysicalDevices(instance, &deviceCount, devices.data());

    if(result != VK_SUCCESS)
    {
        std::cout << "Failed to enumerate physical devices\n";
        return 1;
    }

    for(uint32_t i = 0; i < deviceCount; i++)
    {
        std::cout << "Physical Device [ " << i << " ] found\n";
    }

    VkPhysicalDeviceProperties properties{};

    vkGetPhysicalDeviceProperties(
        devices[0],
        &properties
    );

    std::cout << "\n======================= Physical Device ====================\n";

    std::cout
            << "Device Name : "
            << properties.deviceName
            << '\n'; 
    
    std::cout 
            << "Vendor ID   : 0x"
            << std::hex
            << properties.vendorID
            << std::dec
            << '\n';

    std::cout 
            << "Device ID   : 0x"
            << std::hex
            << properties.deviceID
            << std::dec
            << '\n';

    std::cout 
            << "API Version : "
            << VK_VERSION_MAJOR(properties.apiVersion)
            << "."
            << VK_VERSION_MINOR(properties.apiVersion)
            << "."
            << VK_VERSION_PATCH(properties.apiVersion)
            << '\n';
    
    std::cout
            << "Driver Version : "
            << properties.driverVersion
            <<'\n';

    std::cout 
            << "Device Type : "
            << GetDeviceType(properties.deviceType)
            << '\n';
            

    //////////////////////////////////
    //
    // Cleanup OR Destroy instance
    //
    //////////////////////////////////

    // We will properly destroy the debug messenger
    // in the next line

    DestroyDebugUtilsMessenger(
        instance,
        debugMessenger
    );

    vkDestroyInstance(
        instance,
        nullptr
    );

    return 0;
}