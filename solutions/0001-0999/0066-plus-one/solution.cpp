/*
 * 66. Plus One

 You are given a large integer represented as an integer array digits,
 where each digits[i] is the ith digit of the integer.
 The digits are ordered from most significant to least significant in left-to-right order.
 The large integer does not contain any leading 0's.

 Increment the large integer by one and return the resulting array of digits.

 Example 1:

 Input: digits = [1,2,3]
 Output: [1,2,4]
 Explanation: The array represents the integer 123.
 Incrementing by one gives 123 + 1 = 124.
 Thus, the result should be [1,2,4].
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        // If the loop completes, all digits were 9s.
        // We need to add a 1 to the front of the vector.
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    vector<int> test1 = {9, 9, 9};
    Solution sol;
    vector<int> result = sol.plusOne(test1);
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;
    return 0;
}