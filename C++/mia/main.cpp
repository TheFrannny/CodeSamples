#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, left, right;
    while (cin >> a >> b >> c >> d){
        if(a == 0)
            return 0;

        left = 0; right = 0;
        if(b > a)
            swap(b , a);
        if(d > c)
            swap(d , c);

        if(a == 2 && b == 1)
            left = 10000;
        else if(a == b)
            left = a*100;
        else left = a * 10 + b;

        if(c == 2 && d == 1)
            right = 10000;
        else if(c == d)
            right = c*100;
        else right = c * 10 + d;

        if(left > right)
            cout << "Player 1 wins." << endl;
        else if(left < right)
            cout << "Player 2 wins." << endl;
        else cout << "Tie." << endl;
    }
    return 0;
}