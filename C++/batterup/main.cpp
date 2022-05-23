#include <iostream>
using namespace std;

int main() {
    cout.precision(17);
    long double values, actualValues, tallies = 0, entry = 0;
    cin >> values;
    actualValues = values;

    for(int i = 0; i < values; i++){

        cin >> entry;

        if(entry == -1)
            actualValues--;

        else tallies += entry;
    }
    cout << tallies/actualValues;

    return 0;
}