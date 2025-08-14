/*
1480. Running Sum of 1d Array

Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 */

impl Solution {
    pub fn running_sum(nums: Vec<i32>) -> Vec<i32> {

        let mut total: i32 = 0;
        let mut arr = Vec::with_capacity(nums.len());

        for i in 0..nums.len() {
            total += nums[i];
            arr.push(total);
        }

        arr
    }
}

pub struct Solution;

fn main() {

    let test1 = vec![1,2,3,4];
    let arr = Solution::running_sum(test1);
    println!("{:?}", arr);
}
