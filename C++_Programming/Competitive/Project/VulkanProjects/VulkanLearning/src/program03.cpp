#include <vulkan/vulkan.h>

int main()
{
    VkInstance instance;

    VkResult result = vkCreateInstance(
        nullptr,
        nullptr,
        &instance
    );


    return 0;
}