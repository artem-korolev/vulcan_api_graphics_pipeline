#include "graphics_pipeline.h"

VkResult createGraphicsPipeline(VkDevice device, VkPipelineLayout pipelineLayout, VkRenderPass renderPass, PipelineConfigInfo* configInfo, VkPipeline* pipeline) {
    VkGraphicsPipelineCreateInfo pipelineCreateInfo = {
        .sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,
        .stageCount = 2, // Example for vertex and fragment shaders
        // .pStages = shaderStages, // This should be set to an array of VkPipelineShaderStageCreateInfo
        .pVertexInputState = &configInfo->vertexInputInfo,
        .pInputAssemblyState = &configInfo->inputAssemblyInfo,
        .pViewportState = &configInfo->viewportInfo,
        .pRasterizationState = &configInfo->rasterizationInfo,
        .pMultisampleState = &configInfo->multisampleInfo,
        .pDepthStencilState = &configInfo->depthStencilInfo,
        .pColorBlendState = &configInfo->colorBlendInfo,
        .pDynamicState = &configInfo->dynamicStateInfo,
        .layout = pipelineLayout,
        .renderPass = renderPass,
        .subpass = 0,
        // Additional fields as needed
    };

    // The actual implementation would also handle shader stages and other configurations
    return vkCreateGraphicsPipelines(device, VK_NULL_HANDLE, 1, &pipelineCreateInfo, NULL, pipeline);
}