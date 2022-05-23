#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

int main() {
    string sentence = "";
    cin >> sentence;

    int days = 0;
    for(int i = 0; i < sentence.length(); i += 3){
        days += 3;
        if (sentence[i] == 'P')
            days--;
        if (sentence[i + 1] == 'E')
            days--;
        if (sentence[i + 2] == 'R')
            days--;
    }
    cout << days << endl;

    return 0;
}