#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.precision(8);

    double price, lawns;
    cin >> price >> lawns;

    double totCost = 0;
    for(int i = 0; i < lawns; i++){

        double x, y;
        cin >> x >> y;

        totCost += x*y;
    }

    totCost *= price;
    cout << totCost << endl;
    return 0;
}
