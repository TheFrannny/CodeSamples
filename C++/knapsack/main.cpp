#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

// stolen restore from https://github.com/mpfeifer1/Kattis/blob/master/knapsack.cpp
void restore(vector<vector<int>>& v, int i, int j, vector<int>& result, vector<pair<int, int>>& items) {
    if(v[i][j] == 0) {
        return;
    }

    if(v[i-1][j] == v[i][j]) {
        restore(v, i-1, j, result, items);
    }
    else {
        restore(v, i-1, j-items[i].second, result, items);
        result.push_back(i-1);
    }
}

int main() {

    int capacity, items;
    while(cin >> capacity >> items){

        vector<vector<int>> dp;
        dp.resize(items + 1, vector<int>(capacity + 1, 0));

        vector<pair<int,int>> objects;
        objects.emplace_back(0,0);

        for(int i = 0; i < items; i++) // value, weight
        {
            pair<int, int> p;
            cin >> p.first >> p.second;
            objects.push_back(p);
        }
        //sort(objects.begin(), objects.end(), less<pair<int,int>>());
        for(int i = 0; i < items + 1; i++){
            cout << (int)objects[i].first << " " << (int)objects[i].second << endl;
        }
        cout << "reeee" << endl;
        for(int i = 0; i < items + 1; i++){
            for(int j = 0; j < capacity + 1; j++)
                dp[i][j] = 0;
        }

        for(int i = 1; i < objects.size(); i++){
            for(int w = 0; w < capacity + 1; w++){
                if(objects[i].second > w)
                    dp[i][w] = dp[i-1][w];
                else
                    dp[i][w] = max(dp[i-1][w], dp[i-1][w - objects[i].second] + objects[i].first);
            }
        }
        for(int i = 1; i <= items; i++){
            for(int j = 0; j <= capacity; j++)
                cout << dp[i][j] << ' ';
            cout << endl;
        }
        vector<int> result;
        restore(dp, items, capacity, result, objects);

        cout << result.size() << endl;
        for(auto i : result)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}