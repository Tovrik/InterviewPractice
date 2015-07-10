#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

typedef unordered_map<char, int> char_map;

void populateMap(string str, char_map& map) {
    for(int i = 0; i < str.length(); ++i) {
        if(map.find(str[i]) == map.end()) {
            map.insert(make_pair(str[i], 1));
        }
        map.at(str[i])++;
    }
}

bool isPerm(string str1, string str2) {
    char_map comp, test;
    populateMap(str2, comp);
    string tempStr;
    for(int i = 0; i < str1.length(); ++i) {
        tempStr = "";
        test.clear();
        for (int j = 0; j < str2.length(); ++j) {
            tempStr += str1[i+j];
        }
        populateMap(tempStr, test);
        if(comp == test) {
            cout << "true" << endl;
            return true;
        }
    }
    cout << "false" << endl;
    return false;
}

int main() {
    isPerm("abcdefg", "cde");
    isPerm("abcdefg", "xyz");
    isPerm("abcdefg", "efgabcd");
}
