#include <iostream>
using namespace std;

int main() {
    int totalPeople, position;
    cin >> totalPeople;
    int values[totalPeople + 1];
    values[0] = 1;

    for(int i = 1; i < totalPeople; i++){
        cin >> position;
        values[position + 1] = i + 1;
    }
    for(int i = 0; i < totalPeople; i++)
        cout << values[i] << " ";

    return 0;
}