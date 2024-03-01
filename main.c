#include "shader_stage.h"
#include "pipeline_config.h"
#include "graphics_pipeline.h"
#include "utils.h"

#include <vulkan/vulkan.h>
#include <stdio.h>

int main() {
    // Initialization code for Vulkan and VkDevice would go here.

    // Example usage of the library:
    VkDevice device; // Assume device is initialized.
    VkRenderPass renderPass; // Assume renderPass is initialized.
    VkPipelineLayout pipelineLayout; // Assume pipelineLayout is initialized.

    // Create shader stages
    VkShaderModule vertShaderModule = createShaderStage(device, VK_SHADER_STAGE_VERTEX_BIT, "vertex_shader.spv");
    VkShaderModule fragShaderModule = createShaderStage(device, VK_SHADER_STAGE_FRAGMENT_BIT, "fragment_shader.spv");

    // Configure pipeline
    PipelineConfigInfo configInfo;
    initDefaultPipelineConfigInfo(&configInfo);
    configInfo.vertexInputInfo.vertexBindingDescriptionCount = 0;
    configInfo.vertexInputInfo.vertexAttributeDescriptionCount = 0;

    // Create graphics pipeline
    VkPipeline graphicsPipeline;
    createGraphicsPipeline(device, pipelineLayout, renderPass, &configInfo, &graphicsPipeline);

    // Cleanup
    destroyShaderStage(device, vertShaderModule);
    destroyShaderStage(device, fragShaderModule);
    vkDestroyPipeline(device, graphicsPipeline, NULL);

    // Cleanup code for Vulkan and VkDevice would go here.

    return 0;
}