#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

long double distance(pair<long double, long double> x, pair<long double, long double> y){
    return sqrt(pow(x.first - y.first, 2) + pow(x.second - y.second, 2));
}

struct edge{
    int a;
    int b;
    long double dist;
};

bool compare(edge first, edge second){
    return second.dist > first.dist;
}

int check(vector<int>& set, int a) {

    if(set[a] == -1)
        return a;

    return check(set, set[a]);
}

void combine(vector<int>& set, int a, int b) {
    a = check(set, a);
    b = check(set, b);

    if(a == b)
        return;

    set[a] = b;
}

int main() {
    ios::sync_with_stdio(false);
    int patches = 0;
    cin >> patches;

    for(int k = 0; k < patches; k++){
        long double ink = 0;
        int count = 0;
        cin >> count;
        vector<pair<long double, long double>> freckle(count);
        for(int i = 0; i < count; i++){
            cin >> freckle[i].first >> freckle[i].second;
        }


        vector<edge> edges;
        for(int i = 0; i < count; i++)
            for(int j = i + 1; j < count; j++)
                edges.push_back({i, j, distance(freckle[i], freckle[j])});

        sort(edges.begin(), edges.end(), compare);

        vector<int> sets(count, -1);

        for(auto& i : edges) {
            if(check(sets, i.a) != check(sets, i.b)) {
                ink += i.dist;
                combine(sets, i.a, i.b);
            }
        }
        cout << fixed;
        cout.precision(2);
        cout << ink << endl << endl;
    }
    return 0;
}