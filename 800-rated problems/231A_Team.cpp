
#include <iostream>
using namespace std;
 
int main() {
    int numProblems = 0;
    int count = 0;
    cin >> numProblems;

    for(int i = 0; i < numProblems; i++) {
        int p, v , t = 0;

        cin >> p;
        cin >> v;
        cin >> t;
        
        if(p + v + t >=  2){
            count++;
        }
    }
    cout << count;

}