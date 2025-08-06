//You are given positive integers n and m.
//
// Define two integers as follows:
    // num1: The sum of all integers in the range [1, n] (both inclusive) that are not divisible by m.
    // num2: The sum of all integers in the range [1, n] (both inclusive) that are divisible by m.
//
// Return the integer num1 - num2.

#include<iostream>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {

        int num1 = 0; // not divisible by m
        int num2 = 0; // divisible by m

        // range [1, n] with both values inclusive
        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                num2 += i;
            } else {
                num1 += i;
            }
        }

        return num1 - num2;
    }
};

int main() {
    cout << Solution().differenceOfSums(10, 3) << "\t" << 19 << endl; // expect 19
    cout << Solution().differenceOfSums(5, 6) << "\t" << 15 << endl; // expect 15
    cout << Solution().differenceOfSums(5, 1) << "\t" << -15 << endl; // expect -15
    return 0;
}
