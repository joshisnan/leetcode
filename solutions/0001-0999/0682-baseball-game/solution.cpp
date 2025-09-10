/*
682. Baseball Game
You are keeping the scores for a baseball game with strange rules.
At the beginning of the game, you start with an empty record.

You are given a list of strings operations, where operations[i] is the ith operation
you must apply to the record and is one of the following:

An integer x.
Record a new score of x.
'+'.
Record a new score that is the sum of the previous two scores.
'D'.
Record a new score that is the double of the previous score.
'C'.
Invalidate the previous score, removing it from the record.
Return the sum of all the scores on the record after applying all the operations.

The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.

Example 1:
Input: ops = ["5","2","C","D","+"]
Output: 30
Explanation:
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.

Example 2:
Input: ops = ["5","-2","4","C","D","9","+","+"]
Output: 27
Explanation:
"5" - Add 5 to the record, record is now [5].
"-2" - Add -2 to the record, record is now [5, -2].
"4" - Add 4 to the record, record is now [5, -2, 4].
"C" - Invalidate and remove the previous score, record is now [5, -2].
"D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
"9" - Add 9 to the record, record is now [5, -2, -4, 9].
"+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
"+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.

Example 3:
Input: ops = ["1","C"]
Output: 0
Explanation:
"1" - Add 1 to the record, record is now [1].
"C" - Invalidate and remove the previous score, record is now [].
Since the record is empty, the total sum is 0.
 */

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                sum -= stoi(operations[i - 1]);
                operations.erase(operations.begin() + i - 1);
                operations.erase(operations.begin() + i - 1);
                i -= 2;
            } else if (operations[i] == "D") {
                int val = 2 * stoi(operations[i - 1]);
                sum += val;
                operations[i] = to_string(val);
            } else if (operations[i] == "+") {
                int val = stoi(operations[i - 1]) + stoi(operations[i - 2]);
                sum += val;
                operations[i] = to_string(val);
            } else {
                sum += stoi(operations[i]);
            }
        }
        return sum;
    }
};


int main() {
    vector<string> ops = {"5","2","C","D","+"};
    cout << Solution().calPoints(ops) << endl; // 30

    vector<string> ops2 = {"5","-2","4","C","D","9","+","+"};
    cout << Solution().calPoints(ops2) << endl; // 27

    vector<string> ops3 = {"1","C"};
    cout << Solution().calPoints(ops3) << endl; // 0

    return 0;
}
