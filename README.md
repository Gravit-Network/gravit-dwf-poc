# Gravit × DWF PoC
**Epistemic Execution Infrastructure for Capital Markets**

Live on Solana Mainnet with full multi-chain support (Arbitrum, Aptos, Cosmos).

**Prediction Markets 2.0**
Kalshi tokenized positions → Verifiable basket collateral → Leveraged probability perpetuals → Quantum cross-market arbitrage → Multi-chain DeFi liquidity pools.

**Quick Start**
```bash
git clone --recursive https://github.com/GravitOpenNetwork/gravit-dwf-poc.git && cd gravit-dwf-poc
cmake -DENABLE_QUANTUM=ON -DENABLE_MULTI_CHAIN=ON .. && make -j
./demo --full-pm-pipeline --kalshi-mainnet --quantum-arb --multi-chain --liquidity-pools
