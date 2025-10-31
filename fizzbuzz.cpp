//You are given a number  and you have to print your answer according to the following rules://
//If the number is divisible by 5, you print "Buzz" (without quotes)//
//If the number is divisible by both 3 and 5, you print "FizzBuzz" (without quotes)//
//In any other case, you print the number itself//
//Note: You should add a newline character after print() statement.//

//Examples://
//Input: number = 3//
//Output: Fizz//
//Explanation: Here, the number is divisible by 3, so Fizz is printed.//
//Input: number = 5//
//utput: Buzz//
//Explanation: Here the number is divisible by 5, so Buzz is printed.//
//Input: number = 15//
//Output: FizzBuzz//
//Explanation: Here, the number 15 is divisible by both 3 and 5, so FizzBuzz is printed.//*
//Constraints: 1 <= number <= 100 //
//Expected Complexities//
//Time Complexity: O(1)//
//Auxiliary Space: O(1)//
// User function Template for C++
//Expected Complexities//
//Time Complexity: O(1)//
//Auxiliary Space: O(1)//
// User function Template for C++

#include <iostream>

void fizzBuzz(int number) {
    if (number % 3 == 0 && number % 5 == 0) {
        std::cout << "FizzBuzz\n";
    } else if (number % 5 == 0) {
        std::cout << "Buzz\n";
    } else if (number % 3 == 0) {
        std::cout << "Fizz\n";
    } else {
        std::cout << number << "\n";
    }
}

int main() {
    int number;
    std::cin >> number;
    fizzBuzz(number);
    return 0;
}