// 1512. Number of Good Pairs

// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.

#include<iostream>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if ( j >= i) {continue;}
                if (nums[i] == nums[j]) {
                    total += 1;
                }
            }
        }
        return total;
    }
};

int main() {
    vector<int> test1 = {1,2,3,1,1,3};
    cout << Solution().numIdenticalPairs(test1) << " expect 4" << endl;

    vector<int> test2 = {1,1,1,1};
    cout << Solution().numIdenticalPairs(test2) << " expect 6" << endl;

    vector<int> test3 = {1,2,3};
    cout << Solution().numIdenticalPairs(test3) << " expect 0" << endl;

    return 0;
}
