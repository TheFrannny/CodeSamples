#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int lives = 10;
    string phrase, input;
    cin >> phrase >> input;
    unordered_set<char> remaining;
    for(int i = 0; i < phrase.size(); i++)
        remaining.insert(phrase[i]);

    for(int i = 0; i < input.size(); i++){
        if(remaining.count(input[i])) {
            remaining.erase(input[i]);
            if(remaining.empty()) {
                cout << "WIN";
                return 0;
            }
        }
        else lives--;
        if(lives == 0){
            cout << "LOSE";
            return 0;
        }
    }
    return 0;
}