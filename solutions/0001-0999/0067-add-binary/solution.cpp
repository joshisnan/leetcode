// Given two binary strings a and b, return their sum as a binary string.
// Thanks to user: niits for their helpful video

#include<iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry) {
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';

            res += carry % 2 + '0';
            carry /= 2;
        }

        reverse(begin(res), end(res));
        return res;
    }
};

int main(){
    cout << Solution().addBinary("11", "1") << endl; // expected "100"
    cout << Solution().addBinary("1010", "1011") << endl; // expected "10101"
    cout << Solution().addBinary("10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101", "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011") << endl; // expected "110111101100010011000101110110100000011101000101011001000011011000001100011110011010010011000000000"
    cout << Solution().addBinary("11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111", "1") << endl;
    return 0;
};
