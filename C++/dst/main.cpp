#include <iostream>
using namespace std;

int main() {

    int trials = 0;
    cin >> trials;

    while (trials--){
        char direction = 'F';
        int toChange = 0, hour = 0, minute = 0, totMinutes = 0;
        cin >> direction >> toChange >> hour >> minute;

        totMinutes = (hour * 60) + minute;

        if(direction == 'F')
            totMinutes += toChange;
        else totMinutes -= toChange;

        while (totMinutes < 0)
            totMinutes += 60*24;
        while (totMinutes > 60*24 - 1)
            totMinutes -= 60*24;

        cout << totMinutes / 60 << " " << totMinutes % 60 << endl;
    }
    return 0;
}