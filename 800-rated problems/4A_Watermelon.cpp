#include <iostream>
using namespace std;
 
int main() {
  int weight = 0;
  bool found = false;

  cin >> weight;

  if(weight % 2 == 0) { // Checking if the weight is even. If it isnt. Cant be YES
    
    // Iterating through loop to get two even parts
    for(int i =1; i <= (weight / 2); i++) {
      if(((weight - i) % 2) == 0 && i % 2 == 0) {
        found = true;
      }
    }

  }

  // Checking bool from before
  if(found == true){
    cout << "YES";
  }
  else{
    cout << "NO";
  }
  
}