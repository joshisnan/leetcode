/*
1662. Check If Two String Arrays are Equivalent

Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

Example 1:

Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.
Example 2:

Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
Output: false
Example 3:

Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
Output: true
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string s1, s2;
        
        for (int i = 0; i < word1.size(); i++) {s1 += word1[i];}
        for (int j = 0; j < word2.size(); j++) {s2 += word2[j];}

        if (s1 == s2) return true;
        else return false;
    }
};

int main() {
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"ab", "c"};
    cout << Solution().arrayStringsAreEqual(word1, word2) << endl;

    vector<string> word3= {"a", "cb"};
    vector<string> word4 = {"ab", "c"};
    cout << Solution().arrayStringsAreEqual(word3, word4) << endl;

    return 0;
}
