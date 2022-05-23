#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string word;

    cin >> word;

    for(int i = 0; i < word.size() - 1; i++){
        if(word[i] == 's' && word[i+1] == 's') {
            cout << "hiss";
            return 0;
        }
    }

    cout << "no hiss";
    return 0;
}
