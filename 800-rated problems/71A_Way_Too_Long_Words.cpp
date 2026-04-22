#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    int wordCount = 0;
    cin >> wordCount;
    vector<string> strs = {};

    // Loading the words from stdin. Adding to dynamic vector
    for(int i = 0; i < wordCount; i++) {
        string load = "";   // Placeholder string to store in vector of strings
        cin >> load;
        strs.push_back(load);
    }

    // Iterating through the vector of strings stored
    for(int i = 0; i < strs.size(); i++) {
        
        // If the string is greater than 10 in length than we can remove the middle and add lenght in num
        if (strs.at(i).length() > 10) {
            string d = "";
            d += strs.at(i)[0];
            d += to_string(strs.at(i).length() - 2);
            d += strs.at(i)[strs.at(i).length() - 1];
            strs.at(i) = d;
        }
    }

    for(string s: strs) {
        cout << s << endl;
    }
}