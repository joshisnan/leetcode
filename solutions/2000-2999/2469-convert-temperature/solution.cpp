// You are given a non-negative floating point number rounded to two decimal places celsius,
// that denotes the temperature in Celsius.

// You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].

// Return the array ans. Answers within 10-5 of the actual answer will be accepted.

// Kelvin = Celsius + 273.15
// Fahrenheit = Celsius * 1.80 + 32.00

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        ans.push_back(kelvin);
        ans.push_back(fahrenheit);
        return ans;
    }
};

int main() {
    double test1 = 36.50;
    vector<double>sol1 = Solution().convertTemperature(test1);
    cout << sol1[0] << ", " << sol1[1] << endl;

    double test2 = 122.11;
    vector<double>sol2 = Solution().convertTemperature(test2);
    cout << sol2[0] << ", " << sol2[1] << endl;

    return 0;
}
