#include <iostream>
#include "TestScenario.h"
#include "FalconYieldContext.h"
#include "grpc_interface.h"
#include "a_to_b_to_c.h"

int main() {
    std::cout << "=== Gravit × DWF Demo (Triad v2.0) ===" << std::endl;
    TestScenario scenario;
    scenario.asset = "sUSDF";
    scenario.agentId = "agent_falcon_001";
    FalconYieldContext result = executeAtoBtoC(scenario);
    std::cout << "Cumulative payout: $" << result.cumulativePayout / 1000000 << "M" << std::endl;
    std::cout << "Overcollateralization: " << result.overcollateralization << "%" << std::endl;
    std::cout << "Decision: " << (result.proof.valid ? "ACCEPTED" : "REJECTED") << std::endl;
    std::cout << "Demo completed." << std::endl;
    return 0;
}
