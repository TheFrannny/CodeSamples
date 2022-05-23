#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <queue>
#include <cmath>

using namespace std;

int main() {

    long double cities, boxes;

    while(cin >> cities >> boxes){
        if(cities == -1)
            return 0;
        priority_queue<tuple<long double, long double, long double>> districts;
        long double population;
        for(long double i = 0; i < cities; i++){
            cin >> population;
            districts.push({population/1, population,1});
        }
        boxes -= cities;
        for(int i = 0; i < boxes; i++){
            tuple<long double, long double, long double> front = districts.top();
            districts.pop();
            districts.push({(get<1>(front)/(get<2>(front)+1)),get<1>(front), get<2>(front) + 1});
        }
        cout << ceil(get<0>(districts.top())) << endl;
    }
    return 0;
}