#pragma once
#include <string>

struct TestScenario {
	enum Type { CLOSED_MARKET = 0, YIELD_SPIKE = 1, BLACK_SWAN = 2 };
	Type type = CLOSED_MARKET;
	std::string asset;
	float expectedYield = 0.0f;
	std::string agentId;
};
