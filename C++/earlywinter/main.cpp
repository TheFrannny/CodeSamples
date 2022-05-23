#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

int main() {
    int years, thisYear;
    cin >> years >> thisYear;
    for(int i = 0; i < years; i++){
        int historyYear = 0;
        cin >> historyYear;
        if(historyYear <= thisYear)
        {
            cout << "It hadn't snowed this early in " << i << " years!";
            return 0;
        }
    }
    cout << "It had never snowed this early!";
    return 0;
}