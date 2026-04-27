cmake_minimum_required(VERSION 3.14)
project(GravitDWFPoC)

add_executable(demo
	cmd/demo/main.cpp
	execution_pipeline/a_to_b_to_c.cpp
	execution_pipeline/grpc_interface.cpp
	market_integration/falcon_adapter.cpp
	replay_engine/trace_store.cpp
	epistemic_core/validation_engine.cpp
	epistemic_core/contradiction_graph.cpp
	epistemic_core/adversarial_model.cpp
)

target_include_directories(demo PRIVATE
	epistemic_core
	execution_pipeline
	market_integration
	hft_engine
	replay_engine
)

set_target_properties(demo PROPERTIES CXX_STANDARD 20)
