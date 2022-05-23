#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> stacks, answer;

    int stackCount, coins;
    cin >> stackCount;

    for(int i = 1; i <= stackCount; i++){
        cin >> coins;
        stacks.emplace_back(coins, i);
    }

    while (!stacks.empty()){
        sort(stacks.begin(), stacks.end());

        if (stacks.front().first == 0){
            stacks.erase(stacks.begin());
            continue;
        }
        if(stacks.size() == 1){
            cout << "no";
            exit(0);
        }
        stacks.front().first--;
        stacks.back().first--;
        answer.emplace_back(stacks[0].second, stacks.back().second);
    }
    cout << "yes" << endl;
    for(int i = 0; i < answer.size(); i++)
        cout << answer[i].first << ' ' << answer[i].second << endl;
}