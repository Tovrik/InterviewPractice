#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;


void replace(string str, int len) {
    int count = 0, i = 0, end = len - 1;
    while (count < len) {
        if(str[i] == ' ') {
            for(int j = end; j > i; --j) {
                str[j + 2] = str[j];
            }
            str[i] = '%';
            str[i + 1] = '2';
            str[i + 2] = '0';
            end += 2;
        }
        count++;
        i++;
    }
    cout << str;
}

int main() {
    replace("Mr John Smith    ", 13);
}
