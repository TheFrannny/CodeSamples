#include <bits/stdc++.h>
using namespace std;

bool checkIfPrime(int value){
    if(value == 1)
        return false;

    else if(value == 0 || value == 2)
        return true;

    else for(int i = 2; i < value; i++)
        if(value % i == 0)
            return false;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases;
    cin >> cases;

    while(cases--){
        long double distance = 0, flowers = 0, canWater = 0, highestPrime = 0, x = 0, y = 0, newX = 0, newY = 0;
        cin >> flowers >> distance;

        for(int i = 0; i < flowers; i++){
            cin >> newX >> newY;

            distance -= sqrt(pow(x - newX,2) + pow(y - newY, 2));
            x = newX; y = newY;

            if(distance >= 0){
                canWater++;
                if(checkIfPrime(canWater))
                    highestPrime = canWater;
            }
        }
        cout << highestPrime << endl;
    }
}