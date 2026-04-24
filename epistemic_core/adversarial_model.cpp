#include "GQRVPProof.h"

bool isAdversarial(const TestScenario& scenario) {
    // GQRVP adversarial resistance check
    return scenario.expectedYield > 50.0;  // example black-swan threshold
}
