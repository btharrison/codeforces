#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> winL = {};
    int numParts = 0;
    int winners = 0;

    cin >> numParts;
    cin >> winners;

    int count = 0;
    int prev = 0;

for(int i = 0; i < numParts; i++) {
        int num = 0;
        cin >> num;
        int siz = winL.size();
        if (siz < winners || prev == num) {
            if(num > 0) {
                count++;
            }
            winL.push_back(num);
            prev = num;
        }
    }
    cout << count;
}