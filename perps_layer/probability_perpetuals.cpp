// Probability Perpetuals Engine - Gravit x DWF
#include "probability_perpetuals.h"
#include <iostream>

void ProbabilityPerps::openPosition(const std::string& market, double leverage) {
    std::cout << "[Perps Layer] Opened " << leverage << "x leveraged position on " << market << std::endl;
    std::cout << "[Status] Funding rate anchored via Gravit EES v2.5" << std::endl;
}
