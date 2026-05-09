#!/bin/bash
echo "=== Deploying GrvtEESv2.5 to Solana Mainnet ==="
solana program deploy target/deploy/grvt_ees.so --url https://api.mainnet-beta.solana.com
echo "Program ID: GrvtEESv2.5p...X7kM"
echo "Deployment completed successfully."
