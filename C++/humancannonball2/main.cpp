#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int shots;
    cin >> shots;

    while (shots--){
        double initialVelocity, angle, distance, lowerWall, higherWall, time, hitHeight;
        cin >> initialVelocity >> angle >> distance >> lowerWall >> higherWall;

        angle /= 180/M_PI;

        time = distance/(initialVelocity*cos(angle));

        hitHeight = initialVelocity*time*sin(angle) - 9.81*time*time/2;

        if(higherWall - hitHeight >= 1 && hitHeight - lowerWall >= 1)
            cout << "Safe" << endl;
        else
            cout << "Not Safe" << endl;
    }
    return 0;
}