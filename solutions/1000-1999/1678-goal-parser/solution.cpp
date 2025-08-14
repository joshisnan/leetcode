/*
1678. Goal Parser Interpretation

You own a Goal Parser that can interpret a string command.
The command consists of an alphabet of "G", "()" and/or "(al)" in some order.
The Goal Parser will interpret "G" as the string
"G", "()" as the string "o", and "(al)" as the string "al".
The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.


Example 1:
Input: command = "G()(al)"
Output: "Goal"
Explanation: The Goal Parser interprets the command as follows:
G -> G
() -> o
(al) -> al
The final concatenated result is "Goal".

Example 2:
Input: command = "G()()()()(al)"
Output: "Gooooal"

Example 3:
Input: command = "(al)G(al)()()G"
Output: "alGalooG"
 */

#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string parsedString = "";
        for (size_t i = 0; i < command.size(); ++i) {
            if (command[i] == 'G') {
                parsedString += 'G';
            } else if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    parsedString += 'o';
                    i++;
                } else if (command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')') {
                    parsedString += "al";
                    i += 3;
                }
            }
        }
        return parsedString;
    }
};

int main() {
    cout << Solution().interpret("G()(al)") << endl; // "Goal"
    cout << Solution().interpret("G()()()()(al)") << endl; // "Gooooal"
    cout << Solution().interpret("(al)G(al)()()G") << endl; // "alGalooG"
    return 0;
}
