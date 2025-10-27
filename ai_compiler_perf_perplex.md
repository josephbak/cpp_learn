# AI Compiler & Performance Project Ideas (2025 Market Ranking)

This list ranks project ideas for employability and usefulness in the **AI compiler** and **performance optimization** job market of 2025. Each idea highlights relevant technologies, job-readiness value, and links to specific LLVM/MLIR or AI runtime skills.

| Rank | Project Idea | Description | Key Technologies | Employability Value |
|------|---------------|-------------|------------------|----------------------|
| 1 | **LLVM-based Model Compiler (like lleaves++)** | Build a compiler that converts ML models (LightGBM, XGBoost, or tiny neural nets) to optimized native binaries using LLVM IR. | LLVM, llvmlite/MLIR, Python/C++ | ⭐⭐⭐⭐⭐ Demonstrates real compiler pipeline knowledge and model acceleration expertise. |
| 2 | **MLIR Dialect for Matrix Ops / AI Kernels** | Implement a custom MLIR dialect and lowering pass for matmul or attention-style operators. | MLIR, C++, Python, affine/SCF dialects | ⭐⭐⭐⭐⭐ High demand for MLIR and backend lowering skills in compiler teams. |
| 3 | **IREE Runtime Optimization for RISC-V or CPU** | Integrate and tune IREE’s codegen for specific hardware backends (RVV vectorization, AVX, NEON). | IREE, MLIR, CPU SIMD extensions (RVV/AVX) | ⭐⭐⭐⭐ Deep hardware–compiler integration that tech companies value highly. |
| 4 | **Kernel Auto-Tuner for AI Operators** | Create an auto-tuning system that benchmarks and selects best tile/unroll/vectorization configurations. | LLVM, TVM, NumPy, C++ | ⭐⭐⭐⭐ Shows research–implementation balance with profiling and optimization. |
| 5 | **Graph Compiler for Simple NN Models** | Parse a PyTorch or ONNX model and lower to LLVM/MLIR IR for CPU inference. | ONNX, MLIR, LLVM | ⭐⭐⭐⭐ Demonstrates end-to-end systems thinking beyond traditional ML code. |
| 6 | **Dynamic Quantization Pass in MLIR** | Implement compile-time quantization optimization in MLIR (int8 packing, dequant rewrite). | MLIR, C++, quant dialect | ⭐⭐⭐⭐ Strong signal for compiler + numerical optimization knowledge. |
| 7 | **Parallel Tree Inference Engine** | Like lleaves, but with lock-free batch-parallel inference, caching, and OpenMP. | C++, LLVM, multithreading | ⭐⭐⭐ Practical hybrid systems/MLperf-style skill. |
| 8 | **GPU IR Lowering Proof-of-Concept** | Create a pipeline lowering MLIR functions to GPU dialect, then to PTX or SPIR-V. | MLIR GPU & SPIR dialects, LLVM | ⭐⭐⭐⭐ Niche but very impressive for accelerator compiler roles. |
| 9 | **Performance Profiler for MLIR/LLVM Pipelines** | Build tooling to measure and visualize pass timing and IR transformations for compiler debugging. | LLVM APIs, Python, graphviz | ⭐⭐⭐ Valuable engineering tool project. |
| 10 | **Numerical Kernel Explorer (GEMM, Conv)** | Implement kernel microbenchmarks to experiment with loop unrolling, cache blocking, and vectorization. | C++, LLVM, perf/VTune | ⭐⭐ Foundational but critical for optimization interviews. |

## Recommended Stack to Learn While Building
- Languages: C++, Python, a bit of Rust or RISC-V assembly
- Libraries/Frameworks: LLVM, MLIR, IREE, TVM, XLA
- Tools: CMake, perf/VTune, Clang, Polly, RISC-V toolchain
- Concepts: Loop tiling, vectorization, affine transforms, lowering, IR optimization

## Tips to Maximize Employability
1. Make all projects public on GitHub, with build/run scripts and benchmarks.
2. Write technical blog posts or design documents explaining the IR structure.
3. Add performance comparisons (e.g., LightGBM vs lleaves, PyTorch vs your compiler).
4. Demonstrate reproducibility—Dockerfiles, CI tests, and minimal dependencies.

---

This curated roadmap aligns with growing demand for **AI compiler and optimization engineers** at major research and hardware companies in 2025.
