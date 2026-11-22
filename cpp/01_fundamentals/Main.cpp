
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    std::cout << "C++ environment ready!" << std::endl;

    for (int number : numbers) {
        std::cout << number << std::endl;
    }

    return 0;
}
