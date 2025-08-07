// 771. Jewels and Stones

// You're given strings jewels representing the types of stones that are jewels,
// and stones representing the stones you have. Each character in stones is a type of stone
// you have. You want to know how many of the stones you have are also jewels.

// Letters are case sensitive, so "a" is considered a different type of stone from "A".
// contraints:
// All the characters of jewels are unique.

#include<iostream>
using namespace std;

class Solution {
public:
   int numJewelsInStones(std::string jewels, std::string stones) {
       int count = 0;
       for (char stone : stones) {
           for (char jewel : jewels) {
               if (stone == jewel) {
                   count++;
                   break;
               }
           }
       }
       return count;
   }
};

int main() {
    //Input: jewels = "aA", stones = "aAAbbbb"
    // Output: 3
    string jewels = "aA";
    string stones = "aAAbbbb";
    cout << Solution().numJewelsInStones(jewels, stones) << endl;

    return 0;
}
