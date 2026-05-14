#pragma once
#include <string>
#include <vector>

struct GQRVPProof {
    std::string hypothesisId;
    double attestedProbability;
    double jumpRiskScore;
    std::string signature;
};

class GQRVP {
public:
    static GQRVPProof generate(const std::string& event, double p);
};
