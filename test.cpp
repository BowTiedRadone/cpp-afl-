#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input-file>" << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1], std::ios::binary); // Open input file in binary mode
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open input file: " << argv[1] << std::endl;
        return 1;
    }

    // Read entire content of the file into a vector
    std::vector<char> buffer((std::istreambuf_iterator<char>(inputFile)),
                             std::istreambuf_iterator<char>());

    // Ensure null-terminated string
    buffer.push_back('\0');

    // Inserting an infinite loop conditionally
    if (buffer.size() > 200) {
        while (true) {
            buffer.push_back('\0');
            // This loop will continue indefinitely if buffer size is greater than 200
        }
    }

    return 0;
}