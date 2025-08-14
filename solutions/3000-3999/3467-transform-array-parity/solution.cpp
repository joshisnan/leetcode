// 3467. Transform Array by Parity

// You are given an integer array nums.
// Transform nums by performing the following operations in the exact order specified:

// Replace each even number with 0.
// Replace each odd numbers with 1.
// Sort the modified array in non-decreasing order.
// Return the resulting array after performing these operations.

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int evenCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                evenCount += 1;
            }
        }

        for (int j = 0; j < nums.size(); j++) {
            if (j < evenCount) {
                nums[j] = 0;
            } else {
                nums[j] = 1;
            }
        }
        return nums;
    }
};

int main() {
    vector<int> test1 = {4,3,2,1};
    vector<int> sol1 = Solution().transformArray(test1);
    for (int x : sol1) {std::cout << x << ",";}
    cout << " [0,0,1,1] expected" << endl;

    vector<int> test2 = {1,5,1,4,2};
    vector<int> sol2 = Solution().transformArray(test2);
    for (int x : sol2) {std::cout << x << ",";}
    cout << " [0,0,1,1,1] expected" << endl;

    return 0;
}
