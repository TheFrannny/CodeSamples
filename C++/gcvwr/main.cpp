#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

    int gcvwr, truck, items, toRemove;
    cin >> gcvwr >> truck >> items;

    gcvwr -= truck;
    gcvwr *= .9;

    for(int i = 0; i < items; i++){
        cin >> toRemove;
        gcvwr -= toRemove;
    }
    cout << gcvwr;
    return 0;
}
