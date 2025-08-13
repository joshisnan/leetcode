/*
3280. Convert Date to Binary

You are given a string date representing a Gregorian calendar date in the yyyy-mm-dd format.

date can be written in its binary representation obtained by converting
year, month, and day to their binary representations without any leading zeroes and
writing them down in year-month-day format.

Return the binary representation of date.

Example 1:
Input: date = "2080-02-29"
Output: "100000100000-10-11101"
Explanation:
100000100000, 10, and 11101 are the binary representations of 2080, 02, and 29 respectively.

Example 2:
Input: date = "1900-01-01"
Output: "11101101100-1-1"
Explanation:
11101101100, 1, and 1 are the binary representations of 1900, 1, and 1 respectively.
 */

#include<iostream>
#include<string>
#include<bitset>
using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        auto strip = [](const string& s) -> string {
            size_t pos = s.find('1');
            return pos == string::npos ? string("0") : s.substr(pos);
        };

        string binaryYear = strip(bitset<16>(year).to_string());
        string binaryMonth = strip(bitset<4>(month).to_string());
        string binaryDay = strip(bitset<5>(day).to_string());

        return binaryYear + "-" + binaryMonth + "-" + binaryDay;
    }
};

int main() {
    string test1 =  "2080-02-29";
    cout << Solution().convertDateToBinary(test1) << endl;
    return 0;
}
