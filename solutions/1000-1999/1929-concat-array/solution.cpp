// Given an integer array nums of length n,
// you want to create an array ans of length 2n where ans[i] == nums[i]
// and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

// Specifically, ans is the concatenation of two nums arrays.

// Return the array ans.

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }
        for (int j = 0; j < nums.size(); j++) {
            ans.push_back(nums[j]);
        }
        return ans;
    }
};

int main() {
    vector<int> nums1 = {1,2,1};
    vector<int> nums1_sol = Solution().getConcatenation(nums1);
    for (int x : nums1_sol) {cout << x << ",";}
    cout << "\t" << "[1,2,1,1,2,1] expected" << endl;
    return 0;
}
