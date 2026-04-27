#include "GQRVPProof.h"
#include "TestScenario.h"

bool isAdversarial(const TestScenario& scenario) {
    return scenario.expectedYield > 50.0f;
}
