#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

#define ld long double
pair<long double, long double> winnerA = {0,0};
pair<long double, long double> winnerB = {0,0};

int compareY(const void* a, const void* b)
{
    auto *p1 = (pair<long double, long double> *)a, *p2 = (pair<long double, long double> *)b;
    return (p1->first - p2->first);
}
ld getDistance(pair<long double, long double> x, pair<long double, long double> y){
    return sqrt((x.first - y.first)*(x.first - y.first) + (x.second - y.second)*(x.second - y.second));
}

ld stripClosest(pair<long double, long double> strip[], long long size, long double dist){
    ld min = dist;

    qsort(strip, size, sizeof(pair<long double, long double>), compareY);
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size && (strip[j].second - strip[i].second) < min; j++)
            if(getDistance(strip[i], strip[j]) < min)
            {
                min = getDistance(strip[i], strip[j]);
            }
    }
}

long double recursiveFind(pair<long double, long double> pointSet[], long long size){
    ld lowest = 999999;
    printf("Hi im recursing\n");
    long long mid = size/2;

    if(size <= 3)
    {
        printf("No im not\n");
        for(int i = 0; i < size; ++i)
            for(int j = i + 1; j < size; ++j)
                if(getDistance(pointSet[i], pointSet[j]) < lowest)
                {
                    lowest = getDistance(pointSet[i], pointSet[j]);
                    winnerA.first = pointSet[i].first;
                    winnerA.second = pointSet[i].second;
                    winnerB.first = pointSet[i].first;
                    winnerB.second = pointSet[i].second;
                    printf("The smallest distance is %Lf %Lf %Lf %Lf\n", winnerA.first, winnerA.second, winnerB.first, winnerB.second);
                }

        return lowest;
    }



    ld dl = recursiveFind(pointSet, mid);
    ld dr = recursiveFind(pointSet + mid, size - mid);

    ld closest = min(dl, dr);

    pair<long double, long double> strip[size];
    int j = 0;
    for(int i = 0; i < size; i++)
            if(abs(pointSet[i].first - pointSet[mid].first) < closest)
                strip[j] = pointSet[i], j++;

    return min(closest, stripClosest(strip, j, closest));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long cases;
    long double x, y;



    while (cin >> cases && cases > 0){
        pair<long double, long double> points[cases];

        for(int i = 0; i < cases; i++){
            cin >> x >> y;
            points[i] = make_pair(x, y);
            printf("Made: %Lf %Lf", x, y);
        }
        for(int i = 0; i < cases; i++){
            printf("Test %Lf %Lf\n", points[i].first, points[i].second);
        }
        sort(points, points + cases);

        recursiveFind(points, cases);
        //printf("The smallest distance is %Lf %Lf %Lf %Lf\n", winnerA.first, winnerA.second, winnerB.first, winnerB.second);


    }

    return 0;
}