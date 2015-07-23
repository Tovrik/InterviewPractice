/*
Implement a method to perform basic string compression using the counts of repeated characters.
EXAMPLE
INPUT  : aabcccccaaa
OUTPUT : a2b1c5a3
*/

#include <string>
#include <unordered_map>
#include <iostream>
#include <sstream>
using namespace std;

string compress(string str) {
    char temp = str[0], buffer[3];
    int count = 1;
    string newStr = "";
    for(int i = 1; i < str.length() + 1; ++i) {
        if(temp == str[i])
            count++;
        else {
            stringstream ss;
            ss << count;
            string strCount;
            ss >> strCount;
            newStr += temp;
            newStr += strCount;
            count = 1;
            temp = str[i];
        }
    }
    if(newStr.length() < str.length()) {
        return newStr;
    }
    return str;
}

int main() {
    cout << compress("aaaaabbbbbbbccccdddeeeeeeeeeee") << endl;
    cout << compress("abcdefg") << endl;
}
