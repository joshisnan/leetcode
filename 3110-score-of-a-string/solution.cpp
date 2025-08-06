//You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

// Return the score of s.

#include<iostream>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            char a = s[i];
            char b = s[i + 1];
            int diff = int(a) - int(b);
            if (diff < 0) {
                diff *= -1;
            };
            score += diff;
            cout << int(a) << "\t" << int(b) << "\t" << diff << "\t" << endl;
        }
        return score;
    }
};

int main() {
    cout << Solution().scoreOfString("hello") << endl; // expect 13
    cout << Solution().scoreOfString("zaz") << endl; // expect 50
    return 0;
}
