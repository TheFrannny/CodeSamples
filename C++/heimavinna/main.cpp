#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string writing, currentString = "";
    int problems = 0, last = 0;

    getline(cin, writing);
    writing += ';';

    int state = 0;
    for(int i = 0; i < writing.size(); i++){
        if(writing[i] == ';'){
            if(state == 0){
                problems++;
                currentString = "";
            }
            else{
                problems += stoi(currentString) - last + 1;
                currentString = "";
                last = 0, state = 0;
            }
        }
        else if(writing[i] == '-'){
            last = stoi(currentString);
            state = 1;
            currentString = "";
        }
        else
            currentString += writing[i];
    }

    cout << problems;
    return 0;
}