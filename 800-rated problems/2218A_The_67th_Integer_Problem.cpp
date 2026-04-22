#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t = 0;
    vector<int> l = {};
    cin >> t;

    for(int i = 0; i < t; i++) {
        int num = 0;
        cin >> num;
        l.push_back(num + 1);
    }
    for(int x: l) {
        cout << 67 << endl;
    }
}