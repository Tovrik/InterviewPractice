/*
Implement an algorithm to determine if a string has all unique characters.
What if you cannot use additional data structures?
*/

#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

bool uniqueString(string str) {
    unordered_map<char, int> counts;
    for(int i = 0; i < str.length(); ++i) {
        if(counts.count(str[i]) > 0) {
            return false;
        }
        counts.insert(make_pair<char, int>(str[i], 1));
    }
    return true;
}

int main() {
    cout << uniqueString("abcdefghijklmnop") << endl;
    cout << uniqueString("aabbcc") << endl;
}
