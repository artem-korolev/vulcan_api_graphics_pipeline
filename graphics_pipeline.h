#ifndef GRAPHICS_PIPELINE_H
#define GRAPHICS_PIPELINE_H

#include "pipeline_config.h"

VkResult createGraphicsPipeline(VkDevice device, VkPipelineLayout pipelineLayout, VkRenderPass renderPass, PipelineConfigInfo* configInfo, VkPipeline* pipeline);

#endif // GRAPHICS_PIPELINE_H