#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int height, angle;
    cin >> height >> angle;

    cout << ceil(height / sin(angle*M_PI/180));
    return 0;
}