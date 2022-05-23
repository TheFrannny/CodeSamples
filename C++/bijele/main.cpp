#include <iostream>
using namespace std;

int main() {
    int kings, queens, rooks, bishops, knights, pawns;

    cin >> kings >> queens >> rooks >> bishops >> knights >> pawns;

    cout << 1 - kings << " " << 1 - queens << " " << 2 - rooks << " " << 2 - bishops << " " << 2 - knights << " " << 8 - pawns << endl;

    return 0;
}