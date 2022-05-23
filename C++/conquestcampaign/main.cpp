#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <queue>
#include <cmath>

using namespace std;

int main() {

    int cols, rows, drops, targets;

    cin >> rows >> cols >> drops;

    targets = rows * cols;

    int landing[cols][rows];
    priority_queue<pair<int,int>> zones;

    for(int i = 0; i < cols; i++)
        for(int j = 0; j < rows; j++)
            landing[i][j] = 0;

    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
            cout << landing[i][j] << ' ';
        cout << endl;
    }

    while (drops--){
        int x, y;
        cin >> x >> y;
        x--; y--;
        landing[x][y] = 1;
        cout << "Pooshing: " << x << ' ' << y << ' ' << landing[x][y] << endl;
        zones.push({x,y});
    }
    cout << "Fuck: " << landing[1][2] << endl;
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
            cout << landing[i][j] << ' ';
        cout << endl;
    }
    int days = 0;
    while (!zones.empty()){
        cout << "Science 1\n";
        priority_queue<pair<int,int>> zones2;
        while (!zones.empty()){
            cout << "Science 2\n";
            targets--;
            int x, y;
            x = zones.top().first;
            y = zones.top().second;
            zones.pop();
            if(x - 1 > 0 && landing[x-1][y] == 0){
                landing[x-1][y] = 1;
                zones2.push({x-1,y});
                cout << "Pooshing1: " << x-1 << ' ' << y << endl;
            }
            if(x + 1 < cols && landing[x+1][y] == 0){
                landing[x+1][y] = 1;
                zones2.push({x+1,y});
                cout << "Pooshing2: " << x+1 << ' ' << y << endl;
            }
            if(y - 1 > 0 && landing[x][y-1] == 0){
                landing[x][y-1] = 1;
                zones2.push({x,y-1});
                cout << "Pooshing3: " << x << ' ' << y-1 << endl;
            }
            if(y + 1 < rows && landing[x][y+1] == 0){
                landing[x][y+1] = 1;
                zones2.push({x,y+1});
                cout << "Pooshing4: " << x << ' ' << y+1 << endl;
            }
        }
        zones = zones2;
        days++;
    }
    cout << days;
    return 0;
}