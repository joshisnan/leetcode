/*
2108. Find First Palindromic String in the Array

Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.

Example 1:

Input: words = ["abc","car","ada","racecar","cool"]
Output: "ada"
Explanation: The first string that is palindromic is "ada".
Note that "racecar" is also palindromic, but it is not the first.
Example 2:

Input: words = ["notapalindrome","racecar"]
Output: "racecar"
Explanation: The first and only string that is palindromic is "racecar".
Example 3:

Input: words = ["def","ghi"]
Output: ""
Explanation: There are no palindromic strings, so the empty string is returned.
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for (int i = 0; i < words.size(); i++) {
            std::string stringReversed;
            for (int j = words[i].size() - 1; j >= 0; j--) {
                stringReversed += words[i][j];
            }
            if (words[i] == stringReversed) {
                return stringReversed;
            } else {
                continue;
            }
        }
        return "";
    }
};

int main() {

    vector<string> words1 = {"abc","car","ada","racecar","cool"};
    string result1 = Solution().firstPalindrome(words1);
    cout << &result1 << endl;

    vector<string> words2 = {"notapalindrome","racecar"};
    string result2 = Solution().firstPalindrome(words2);
    cout << &result2 << endl;

    vector<string> words3 = {"def","ghi"};
    string result3 = Solution().firstPalindrome(words3);
    cout << &result3 << endl;

    return 0;
}
