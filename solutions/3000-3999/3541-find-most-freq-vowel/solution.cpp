/*
3541. Find Most Frequent Vowel and Consonant

You are given a string s consisting of lowercase English letters ('a' to 'z').

Your task is to:

Find the vowel (one of 'a', 'e', 'i', 'o', or 'u') with the maximum frequency.
Find the consonant (all other letters excluding vowels) with the maximum frequency.
Return the sum of the two frequencies.

Note: If multiple vowels or consonants have the same maximum frequency, you may choose any one of them.
If there are no vowels or no consonants in the string, consider their frequency as 0.

The frequency of a letter x is the number of times it occurs in the string.


Example 1:
Input: s = "successes"
Output: 6
Explanation:
The vowels are: 'u' (frequency 1), 'e' (frequency 2). The maximum frequency is 2.
The consonants are: 's' (frequency 4), 'c' (frequency 2). The maximum frequency is 4.
The output is 2 + 4 = 6.

Example 2:
Input: s = "aeiaeia"
Output: 3
Explanation:
The vowels are: 'a' (frequency 3), 'e' ( frequency 2), 'i' (frequency 2). The maximum frequency is 3.
There are no consonants in s. Hence, maximum consonant frequency = 0.
The output is 3 + 0 = 3.

Constraints:
1 <= s.length <= 100
s consists of lowercase English letters only.
 */

#include<iostream>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        int maximum_vowel_freq = 0;
        int maximum_consonant_freq = 0;

        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (i == 'a' - 'a' || i == 'e' - 'a' || i == 'i' - 'a' ||
                i == 'o' - 'a' || i == 'u' - 'a') {
                maximum_vowel_freq = max(maximum_vowel_freq, freq[i]);
            } else {
                maximum_consonant_freq = max(maximum_consonant_freq, freq[i]);
            }
        }
        return maximum_vowel_freq + maximum_consonant_freq;
    }
};

int main() {
    cout << Solution().maxFreqSum("successes") << endl; // Output: 6
    cout << Solution().maxFreqSum("aeiaeia") << endl; // Output: 3
    return 0;
}
