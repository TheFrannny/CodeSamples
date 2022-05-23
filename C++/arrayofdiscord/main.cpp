#include <iostream>
using namespace std;

int main() {
    unsigned int inputs = 0;
    cin >> inputs;
    unsigned int entries[inputs];
    for(int i = 0; i < inputs; i++)
        cin >> entries[i];

    for(int i = 1; i < inputs; i++){
        unsigned int difference = entries[i] - entries[i-1];
        if(difference < entries[i-1]){
            int reee = 1234123;
            return 0;
        }
    }
    cout << "impossible";

    return 0;
}
