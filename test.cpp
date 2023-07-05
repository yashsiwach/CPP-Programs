#include <iostream>
#include <bitset>
#include <string>

int main() {
    std::string binary_string = "1010"; // binary string to convert to integer
    std::bitset<8> bits(binary_string); // convert the binary string to a bitset of size 8 bits
    int num = bits.to_ulong(); // convert the bitset to an integer
    std::cout << num << std::endl; // print the integer value
    return 0;
}