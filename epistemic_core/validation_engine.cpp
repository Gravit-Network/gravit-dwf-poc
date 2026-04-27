#include "GQRVPProof.h"
#include "TestScenario.h"

GQRVPProof validateSignal(const TestScenario& scenario) {
    GQRVPProof proof;
    proof.proofHash = "epistemic_hash_" + scenario.asset;
    proof.valid = true;
    return proof;
}
