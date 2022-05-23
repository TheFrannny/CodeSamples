#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>
#include <queue>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int howMany, value;;
    cin >> howMany;
    priority_queue<int> solutionSet, sonjaSet;

    for(int i = 0; i < howMany; i++){
        cin >> value;
        solutionSet.emplace(value);
    }
    for(int i = 0; i < howMany - 1; i++){
        cin >> value;
        sonjaSet.emplace(value);
    }
    while (!sonjaSet.empty()){
        if(solutionSet.top() != sonjaSet.top()){
            cout << solutionSet.top();
            return 0;
        }
        solutionSet.pop();
        sonjaSet.pop();
    }
    cout << solutionSet.top();
    return 0;
}