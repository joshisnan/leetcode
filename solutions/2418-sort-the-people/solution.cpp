/*
2418. Sort the People

You are given an array of strings names, and an array heights that consists of distinct positive integers.
Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.


Example 1:
Input: names = ["Mary","John","Emma"], heights = [180,165,170]
Output: ["Mary","Emma","John"]
Explanation: Mary is the tallest, followed by Emma and John.

Example 2:
Input: names = ["Alice","Bob","Bob"], heights = [155,185,150]
Output: ["Bob","Alice","Bob"]
Explanation: The first Bob is the tallest, followed by Alice and the second Bob.
 */

#include<iostream>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }
        sort(people.begin(), people.end(), greater<pair<int, string>>());
        vector<string> sortedNames;
        for (auto& person : people) {
            sortedNames.push_back(person.second);
        }
        return sortedNames;
    }
};

int main() {
    Solution solution;
    vector<string> names = {"Mary","John","Emma"};
    vector<int> heights = {180,165,170};
    vector<string> sortedNames = solution.sortPeople(names, heights);
    for (auto& name : sortedNames) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}
