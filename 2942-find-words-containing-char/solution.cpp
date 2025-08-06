// You are given a 0-indexed array of strings words and a character x.

// Return an array of indices representing the words that contain the character x.

// Note that the returned array may be in any order.

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> array;
        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != std::string::npos) {
                array.push_back(i);
            }
        }
        return array;
    }
};

int main() {
    vector<string> test1 = {"abc","bcd","aaaa","cbc"};
    vector<int> results = Solution().findWordsContaining(test1, 'a');
    for (int x : results) {cout << x << ",";}
    cout << endl;
    return 0;
}
