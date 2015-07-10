/*
Given a string, write a function to check if it is a permutation of a palindrome
*/

#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

bool isPalindromePerm(string str) {
    bool doesExist[27] = {0};
    for(int i = 0; i < str.length(); ++i) {
        doesExist[str[i] - 97] = !doesExist[str[i] - 97];
        cout << str[i] - 97 << endl;
    }
    int sum = 0;
    for(int i = 0; i < 27; ++i) {
        cout << doesExist[i];
        sum += doesExist[i];
    }
    if(sum > 1) {
        cout << "false" << endl;
        return false;
    }
    cout << "true" << endl;
    return true;
}

int main() {
    isPalindromePerm("abcdabc");
    isPalindromePerm("a");
    isPalindromePerm("abcd");
}
