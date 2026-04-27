#pragma once
#include "FalconYieldContext.h"
#include "TestScenario.h"

// Stub functions — will be replaced with real gRPC later
FalconYieldContext verifyFalconYield(const std::string& asset);
FalconYieldContext optimizeAgenticYield(const FalconYieldContext& ctx);
void registerAgentCard(const std::string& agentId);
void storeQuantumTrace(const FalconYieldContext& ctx);
std::string generateGQRVPHash(const FalconYieldContext& ctx);
