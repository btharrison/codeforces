#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numX = 0;
    cin >> numX;
    vector<string> ops = {};

    // Loading all instructions into vector
    for(int i = 0; i < numX; i++) {
        string stuff = "";
        cin >> stuff;
        ops.push_back(stuff);
    }
    int count = 0;
    
    // We know the string will be x++ or ++x. So we know + or - will be in the middle. Check there
    for(string s: ops) {
        if(s[1] == '+') {
            count++;
        }
        else {
            count--;
        }
    }
    cout << count;
}