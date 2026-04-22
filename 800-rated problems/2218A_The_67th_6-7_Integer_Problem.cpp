#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t = 0;
    vector<int> sums = {};
    cin >> t;

    for(int i = 0; i < t; i++) {
        int sum = 0;
        int max = -68;

        for (int j = 0; j < 7; j++) {
            int add = 0;
            cin >> add;
            sum += add;
            if(add > max) {
                max = add;
            }
        }

        sums.push_back((max * 2) - sum);
    }

    for(int p: sums)  {
        cout << p << endl;
    }
}