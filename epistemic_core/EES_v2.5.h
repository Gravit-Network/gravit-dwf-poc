#pragma once
#include <vector>
#include <string>

class EESv2_5 {
public:
    void validatePortfolio(const std::vector<std::string>& positions);
    double calculateDynamicLTV();
};
