// C++ Code Challenges, LinkedIn Learning

// Challenge #1: Checking for Palindromes
// Write a function to check if a string is a palindrome or not.
// Examples: civic, radar, level.

#include <iostream>
#include <algorithm>
#include <vector>

// is_palindrome()
// Summary: This function receives a string and returns true if the string is a palindrome, false otherwise.
// Arguments:
//           str: The string to analyze.
// Returns: A boolean value. True for palindromes, false otherwise.
bool is_palindrome(const std::string& str){

    // Write your code here
    const char* left = str.c_str();
    const char* right = str.c_str() + str.size() - 1;
    
    while (left <= right)
    {
        if(std::isalpha(*left) && std::isalpha(*right)) {
            if(std::tolower(*left) != std::tolower(*right))
                return false;
        }
        else {
            std::cout << "Text contain no alfanumeric character" << std::endl;
            return false;
        }
        
        ++left;
        --right;
    }
    
    return true;
}

// Main function
int main(){
    std::string s;
    std::cout << "Enter a string: " << std::flush;
    std::getline(std::cin,s);
    std::cout << "\n\"" << s << (is_palindrome(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";
    return 0;
}
