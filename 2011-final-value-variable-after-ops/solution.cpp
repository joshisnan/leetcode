// 2011. Final Value of Variable After Performing Operations

// There is a programming language with only four operations and one variable X:

// ++X and X++ increments the value of the variable X by 1.
// --X and X-- decrements the value of the variable X by 1.
// Initially, the value of X is 0.

// Given an array of strings operations containing a list of operations,
// return the final value of X after performing all the operations.

#include<iostream>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (int i = 0; i < operations.size(); i++) {
            string command = operations[i];
            if (command == "--X" || command == "X--") {
                x -= 1;
            } else {
                x += 1;
            }
        }
        return x;

    }
};

int main() {
    vector<string> test1 = {"--X","X++","X++"};
    cout << Solution().finalValueAfterOperations(test1) << " expected 1" << endl;

    vector<string> test2 = {"++X","++X","X++"};
    cout << Solution().finalValueAfterOperations(test2) << " expected 3" << endl;

    return 0;
}
