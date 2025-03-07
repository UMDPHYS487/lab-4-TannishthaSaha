#include <iostream>
#include <bitset>

int main() {
    std::bitset<8> b{0b01110010}; // Define a bitset with an initial value
    std::cout << b << " (initial value)\n";

    b = ~b; // Flip all bits using the bitwise NOT operator

    std::cout << b << " (flipped value)\n"; // Print the modified bitset

    return 0;
}
