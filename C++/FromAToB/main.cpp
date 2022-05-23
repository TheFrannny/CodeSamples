#include <iostream>
using namespace std;

int main() {
    unsigned long a,b,actions = 0;
    cin >> a >> b;
    while (a != b)
    {
        if(a > b && a % 2 == 0)
        {
            a/=2;
        } else a++;

        actions++;
    }
    cout << actions;
    return 0;
}

