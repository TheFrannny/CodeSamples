#include <iostream>
using namespace std;
#define mod 1000000007
int main() {
    unsigned long long inputs, one = 0, two = 0, three = 0;

    cin >> inputs;
    unsigned long long values[inputs];

    for(unsigned long long i = 0; i < inputs; i++)
        cin >> values[i];

    for(unsigned long long i = 0; i < inputs; i++){
        if(values[i] == 1) one += 1;
        else if(values[i] == 2)
            two += one + two, two %= mod;
        else three += two, three %= mod;
    }

    cout << three%mod;
    return 0;
}
