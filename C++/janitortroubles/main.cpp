#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, sum;

    cin >> a >> b >> c >> d;

    sum = (a + b + c + d) / 2;

    cout.precision(15);

    cout << sqrt((sum-a)*(sum-b)*(sum-c)*(sum-d));
    return 0;
}
