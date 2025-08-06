//1108. Defanging an IP Address
//
// Given a valid (IPv4) IP address, return a defanged version of that IP address.
//
// A defanged IP address replaces every period "." with "[.]".

#include<iostream>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string newString;
        for (int i = 0; i < address.length(); i++) {
            if (address[i] == '.') {
                newString += "[.]";
            } else {
                newString += address[i];
            }
        }
        return newString;
    }
};

int main() {
    cout << Solution().defangIPaddr("1.1.1.1") << endl;
    cout << Solution().defangIPaddr("255.100.50.0") << endl;
    return 0;
}
