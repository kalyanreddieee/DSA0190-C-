 #include <iostream>

bool isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPalindrome(number))
        std::cout << number << " is a palindrome." << std::endl;
    else
        std::cout << number << " is not a palindrome." << std::endl;

    return 0;
}

