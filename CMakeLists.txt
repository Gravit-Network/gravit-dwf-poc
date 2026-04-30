cmake_minimum_required(VERSION 3.14)
project(GravitDWFPoC LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(demo
    cmd/demo/main.cpp
    execution_pipeline/a_to_b_to_c.cpp
    market_integration/falcon_adapter.cpp
    epistemic_core/validation_engine.cpp
    epistemic_core/contradiction_graph.cpp
    epistemic_core/adversarial_model.cpp
	execution_pipeline/grpc_interface.cpp
	# replay_engine/trace_store.cpp
)

target_include_directories(demo PRIVATE
    epistemic_core execution_pipeline market_integration hft_engine replay_engine
)
