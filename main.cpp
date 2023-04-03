#include <iostream>
#include <string>

std::string promtForInput() {
    std::cout << "Please enter a string: ";
    
    std::string input;
    std::getline(std::cin, input);

    return input;
}

std::string reverseString(std::string input) {
    std::reverse(input.begin(), input.end());
    return input; 
}

bool checkForPalindrome(std::string input, std::string reversdString) {
    if(input.compare(reversdString) == 0) {
        std::cout << "The string you enter is a palindrome!" << std::endl;
        return true;
    } else {
        std::cout << "The string you enter is not a palindrome!" << std::endl;
        return false;
    }
}

int main() {
    std::string input = promtForInput();
    std::string reversedString = reverseString(input);

    checkForPalindrome(input, reversedString);

    return 0;
}