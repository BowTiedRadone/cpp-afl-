# AFL++ Fuzz Testing with C++

This repository contains a lightweight C++ program designed to demonstrate fuzz testing with AFL++. The example program reads input from a file, processes the data, and intentionally includes a potential buffer overflow vulnerability. By using AFL++, we can generate crashes and identify flaws in the code, providing a practical introduction to fuzzing techniques and AFL++ usage.

## Getting Started

### Prerequisites

1. A Linux distribution
2. [`afl++` installed](https://github.com/AFLplusplus/AFLplusplus)
3. `afl-clang-fast` installed (it is usually installed by default after a proper afl++ installation)

### Steps

1. Clone the repository:
    ```sh
    git clone https://github.com/BowTiedRadone/cpp-aflPlusPlus.git
    ```
2. Build the program using `afl-clang-fast++`:
    ```sh
    cd cpp-aflPlusPlus
    afl-clang-fast++ -o test test.cpp
    ```
    Optionally, you can build with sanitizers enabled (e.g., AddressSanitizer):
    ```sh
    afl-clang-fast++ -fsanitize=address -o test test.cpp

    ```
3. Run AFL++:
    ```sh
    afl-fuzz -i ./input -o ./output ./test @@
    ```
4. Explore the findings inside the `output` folder!

## Conclusion

Happy fuzzing!