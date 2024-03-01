#ifndef PIPELINE_CONFIG_H
#define PIPELINE_CONFIG_H

#include <vulkan/vulkan.h>

typedef struct PipelineConfigInfo {
    VkPipelineViewportStateCreateInfo viewportInfo;
    VkPipelineInputAssemblyStateCreateInfo inputAssemblyInfo;
    VkPipelineRasterizationStateCreateInfo rasterizationInfo;
    VkPipelineMultisampleStateCreateInfo multisampleInfo;
    VkPipelineColorBlendAttachmentState colorBlendAttachment;
    VkPipelineColorBlendStateCreateInfo colorBlendInfo;
    VkPipelineDepthStencilStateCreateInfo depthStencilInfo;
    VkPipelineDynamicStateCreateInfo dynamicStateInfo;
    VkPipelineVertexInputStateCreateInfo vertexInputInfo;
    // Additional fields can be added as needed
} PipelineConfigInfo;

void initDefaultPipelineConfigInfo(PipelineConfigInfo* configInfo);

#endif // PIPELINE_CONFIG_H