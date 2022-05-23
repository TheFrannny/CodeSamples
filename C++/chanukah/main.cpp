#include <iostream>
using namespace std;

int main() {
    int events = 0;
    cin >> events;

    while (events--){
        int day = 0, end = 0;
        cin >> day >> end;

        int candles = 0;
        for(int j = 1; j <= end; j++){
            candles += j + 1;
        }
        cout << day << " " << candles << endl;
    }
    return 0;
}