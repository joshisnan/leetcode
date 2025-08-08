// Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
// The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

#include<iostream>

class Solution {
public:
    int mySqrt(int x) {
        unsigned left = 1;
        unsigned right = x + 1u;

        while (left < right) {
            const unsigned mid = (left + right) / 2;
            if (mid > x / mid)
                right = mid;
            else
             left = mid + 1;
        }
        return left - 1;
    }
};

int main() {
    std::cout << Solution().mySqrt(1) << "\n";
    std::cout << Solution().mySqrt(4) << "\n";
    std::cout << Solution().mySqrt(35) << "\n";
    std::cout << Solution().mySqrt(36) << "\n";
    std::cout << Solution().mySqrt(9801) << "\n"; // expect 99
    std::cout << Solution().mySqrt(2147395600) << "\n"; // expect 46340
    return 0;
};
