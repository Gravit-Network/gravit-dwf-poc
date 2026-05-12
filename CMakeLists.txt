cmake_minimum_required(VERSION 3.22)
project(GravitDWF_PoC VERSION 2.5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(ENABLE_QUANTUM "Enable Quantum modules" ON)
option(ENABLE_MULTI_CHAIN "Enable multi-chain support" ON)

add_executable(demo
    cmd/demo/main.cpp
    epistemic_core/EES_v2.5.cpp
    epistemic_core/quantum_arb_v2.3/grover_oracle.cpp
    epistemic_core/quantum_arb_v2.3/vqe_optimizer.cpp
    epistemic_core/quantum_arb_v2.3/entanglement_sim.cpp
    liquidity_pools/quantum_allocator.cpp
    liquidity_pools/yield_engine.cpp
    perps_layer/probability_perpetuals.cpp
)

target_include_directories(demo PRIVATE epistemic_core liquidity_pools perps_layer)

if(ENABLE_QUANTUM)
    target_compile_definitions(demo PRIVATE ENABLE_QUANTUM)
endif()

if(ENABLE_MULTI_CHAIN)
    target_compile_definitions(demo PRIVATE ENABLE_MULTI_CHAIN)
endif()

install(TARGETS demo DESTINATION bin)
