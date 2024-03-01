#include "shader_stage.h"
#include "utils.h"

#include <stdlib.h>

VkShaderModule createShaderStage(VkDevice device, VkShaderStageFlagBits stage, const char* shaderSrc) {
    // Read the shader code from the file
    size_t shaderSize;
    char* shaderCode = readFile(shaderSrc, &shaderSize);
    if (shaderCode == NULL) {
        return VK_NULL_HANDLE;
    }

    // Create the shader module
    VkShaderModuleCreateInfo createInfo = {
        .sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO,
        .codeSize = shaderSize,
        .pCode = (const uint32_t*)shaderCode
    };

    VkShaderModule shaderModule;
    if (vkCreateShaderModule(device, &createInfo, NULL, &shaderModule) != VK_SUCCESS) {
        free(shaderCode);
        return VK_NULL_HANDLE;
    }

    free(shaderCode);
    return shaderModule;
}

void destroyShaderStage(VkDevice device, VkShaderModule shaderModule) {
    vkDestroyShaderModule(device, shaderModule, NULL);
}