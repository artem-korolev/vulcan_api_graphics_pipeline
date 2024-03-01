#ifndef SHADER_STAGE_H
#define SHADER_STAGE_H

#include <vulkan/vulkan.h>

VkShaderModule createShaderStage(VkDevice device, VkShaderStageFlagBits stage, const char* shaderSrc);
void destroyShaderStage(VkDevice device, VkShaderModule shaderModule);

#endif // SHADER_STAGE_H