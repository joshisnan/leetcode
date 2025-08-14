/*
1534. Count Good Triplets

Given an array of integers arr, and three integers a, b and c.
You need to find the number of good triplets.

A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:

0 <= i < j < k < arr.length
|arr[i] - arr[j]| <= a
|arr[j] - arr[k]| <= b
|arr[i] - arr[k]| <= c
Where |x| denotes the absolute value of x.

Return the number of good triplets.

Example 1:
Input: arr = [3,0,1,1,9,7], a = 7, b = 2, c = 3
Output: 4
Explanation: There are 4 good triplets: [(3,0,1), (3,0,1), (3,1,1), (0,1,1)].

Example 2:
Input: arr = [1,1,2,2,3], a = 0, b = 0, c = 1
Output: 0
Explanation: No triplet satisfies all conditions.
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        int n = arr.size();
        if (n < 3) {
            return 0;
        }

        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                // Check the first condition early to potentially skip the inner loop.
                if (abs(arr[i] - arr[j]) <= a) {
                    for (int k = j + 1; k < n; ++k) {
                        // Check the remaining two conditions.
                        if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> arr1 = {3, 0, 1, 1, 9, 7};
    int a1 = 7, b1 = 2, c1 = 3;
    cout << "Example 1 Output: " << sol.countGoodTriplets(arr1, a1, b1, c1) << endl;

    // Example 2
    vector<int> arr2 = {1, 1, 2, 2, 3};
    int a2 = 0, b2 = 0, c2 = 1;
    cout << "Example 2 Output: " << sol.countGoodTriplets(arr2, a2, b2, c2) << endl;

    return 0;
}