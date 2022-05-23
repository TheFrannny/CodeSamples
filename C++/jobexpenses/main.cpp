#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    long incidents, charge, sum = 0;

    cin >> incidents;

    while (incidents--){
        cin >> charge;
        if(charge < 0)
            sum += charge;
    }
    cout << abs(sum);
    return 0;
}
