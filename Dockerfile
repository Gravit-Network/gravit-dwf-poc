FROM ubuntu:24.04
RUN apt-get update && apt-get install -y cmake g++ git
WORKDIR /app
COPY . .
RUN cmake -DENABLE_QUANTUM=ON -DENABLE_MULTI_CHAIN=ON . && make -j
CMD ["./demo", "--full-pm-pipeline", "--kalshi-mainnet"]
