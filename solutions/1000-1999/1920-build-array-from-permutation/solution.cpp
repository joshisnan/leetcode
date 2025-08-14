// Given a zero-based permutation nums (0-indexed),
// build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

// A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> array = {};
        for (int i = 0; i < nums.size(); i++) {
            array.push_back(nums[nums[i]]);
        }
        return array;
    }
};

int main() {
    vector<int> nums1 = {0,2,1,5,3,4};
    vector<int> nums1_sol = Solution().buildArray(nums1);
    for (int x : nums1_sol) {std::cout << x << ",";}
    cout << "\t" << "[0,1,2,4,5,3] expected" << endl;

    vector<int> nums2 = {5,0,1,2,3,4};
    vector<int> nums2_sol = Solution().buildArray(nums2);
    for (int y : nums2_sol) {std::cout << y << ",";}
    cout << "\t" << "[4,5,0,1,2,3] expected" << endl;

    return 0;
}
