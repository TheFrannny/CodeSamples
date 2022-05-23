#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int squares;
int prices[1001];
int memo[1001][1001];

inline int memoize(int previous, int current, int price){

    if(current < 0 || current >= squares)
        return 99999999;

    else if(current == squares - 1)
        return prices[current];

    else if(memo[previous][current] < 99999999)
        return memo[previous][current];

    memo[previous][current] = min(memoize(previous, current - previous, price + prices[current]), memoize(previous + 1, current + previous + 1, price + prices[current])) + prices[current];
    return memo[previous][current];
}
int main() {
    cin >> squares;
    for(int i = 0; i <= squares; i++)
        for(int j = 0; j <= squares; j++)
            memo[i][j] = 99999999;

    for(int i = 0; i < squares; i++)
        cin >> prices[i];

    cout << memoize(1, 1, 0) << endl;

    return 0;
}