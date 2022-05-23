#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <queue>
using namespace std;

int main() {

    map<int,int> scores;
    set<int> solved;
    for(int i = 65; i < 91; i++)
        scores[i] = 0;

    int time;
    char letter;
    string correctness;
    cin >> time;

    while (time != -1){
        cin >> letter >> correctness;

        if(correctness == "right"){
            solved.insert(letter);
            scores[letter] += time;
        }
        else scores[letter] += 20;

        cin >> time;
    }

    int points = 0;
    for(int i = 65; i < 91; i++)
        if(solved.count(i))
            points += scores[i];

    cout << solved.size() << ' ' << points;
    return 0;
}