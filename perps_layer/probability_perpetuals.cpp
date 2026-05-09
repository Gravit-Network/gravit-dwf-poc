#include "probability_perpetuals.h"

void ProbabilityPerps::openPosition(const std::string& market, double leverage) {
    std::cout << "[Perps] Opened " << leverage << "x position on " << market << "\n";
    std::cout << "[Funding Rate] Gravit-anchored epoch drift applied.\n";
}
