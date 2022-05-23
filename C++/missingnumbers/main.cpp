#include <iostream>
using namespace std;

int main() {
    int numbers, perfect = 1;
    cin >> numbers;
    long set[numbers];
    for(int i = 0; i < numbers; i++)
        cin >> set[i];
    for(int i = 1; i < set[numbers-1]; i++) {
        int found = 0;
        for (int j = 0; j < numbers; j++) {
            if (set[j] == i) {
                found = 1;
                break;
            }
        }
        if (!found){
            perfect = 0;
            cout << i << endl;
        }
    }
    if(perfect)
        cout << "good job";

    return 0;
}