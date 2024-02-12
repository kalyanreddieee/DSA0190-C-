#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.erase(std::remove(numbers.begin(), numbers.end(), 3), numbers.end());
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

