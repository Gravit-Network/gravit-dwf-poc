cmake_minimum_required(VERSION 3.22)
project(GravitDWF_PoC)

set(CMAKE_CXX_STANDARD 20)

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

target_include_directories(demo PRIVATE epistemic_core)
