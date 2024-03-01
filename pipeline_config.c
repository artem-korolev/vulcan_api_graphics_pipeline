#include "pipeline_config.h"

void initDefaultPipelineConfigInfo(PipelineConfigInfo* configInfo) {
    // Initialize all the structures with default values
    // This is a simplified example; actual implementation would set all fields
    configInfo->viewportInfo = (VkPipelineViewportStateCreateInfo){};
    configInfo->inputAssemblyInfo = (VkPipelineInputAssemblyStateCreateInfo){};
    configInfo->rasterizationInfo = (VkPipelineRasterizationStateCreateInfo){};
    configInfo->multisampleInfo = (VkPipelineMultisampleStateCreateInfo){};
    configInfo->colorBlendAttachment = (VkPipelineColorBlendAttachmentState){};
    configInfo->colorBlendInfo = (VkPipelineColorBlendStateCreateInfo){};
    configInfo->depthStencilInfo = (VkPipelineDepthStencilStateCreateInfo){};
    configInfo->dynamicStateInfo = (VkPipelineDynamicStateCreateInfo){};
    configInfo->vertexInputInfo = (VkPipelineVertexInputStateCreateInfo){};
    // Set additional fields to default values as needed
}