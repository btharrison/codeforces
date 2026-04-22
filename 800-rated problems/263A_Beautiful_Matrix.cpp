#include <iostream>

using namespace std;

int main() {
    bool found = false;
    int count = 0;
    int y = 1;
    int moves = 0;

    for(int i = 0; i < 5; i++) {
        int num = 0;
        int x = 0;
        
        for(int j = 0; j < 5; j++) {
            cin >> num;
            if(found == false) {
                x++;
            }
            if(num != 0 ) {
                found = true;
                moves += abs(3 - x);
                moves += abs(3 - y);
            }
        }

        if(found == false) {
            y++;
        }
    }
    cout << moves;

}