'''
2824. Count Pairs Whose Sum is Less than Target

Given a 0-indexed integer array nums of length n and an integer target,
return the number of pairs (i, j) where 0 <= i < j < n and nums[i] + nums[j] < target.


Example 1:

Input: nums = [-1,1,2,3,1], target = 2
Output: 3
Explanation: There are 3 pairs of indices that satisfy the conditions in the statement:
- (0, 1) since 0 < 1 and nums[0] + nums[1] = 0 < target
- (0, 2) since 0 < 2 and nums[0] + nums[2] = 1 < target
- (0, 4) since 0 < 4 and nums[0] + nums[4] = 0 < target
Note that (0, 3) is not counted since nums[0] + nums[3] is not strictly less than the target.
'''

import itertools

class Solution:
    def countPairs(self, nums: list[int], target: int) -> int:

        count = 0

        for i, j in itertools.combinations(range(len(nums)), 2):
            if (nums[i] + nums[j] < target) & (0 <= i) & (i < j) :
                count += 1

        return count


def main():
    nums = [-1, 1, 2, 3, 1]
    target = 2
    solution = Solution()
    result = solution.countPairs(nums, target)
    print(f"Number of pairs: {result}")

main()
