#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m = 0;
    int n = 0;
    cin >> m;
    cin >> n;
    int area = m * n;

    int val = floor(float(area / 2));
    cout << val;
    
}