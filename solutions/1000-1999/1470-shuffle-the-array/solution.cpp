// 1470. Shuffle the Array
//
// Given the array nums consisting of 2n elements in the form
// [x1,x2,...,xn,y1,y2,...,yn].
// Return the array in the form [x1,y1,x2,y2,...,xn,yn].

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back(nums[i]);
            arr.push_back(nums[i+n]);
        }
        return arr;
    }
};

int main() {
    vector<int> test1 = {2,5,1,3,4,7};
    vector<int> sol1 = Solution().shuffle(test1, 3);
    for (int val : sol1) {cout << val << " ";} cout << "expected [2,3,5,4,1,7]" << endl;
    return 0;
}
