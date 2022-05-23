#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int tot = 0;
    cin >> num;
    for(int i = 0; i < num; i++){
        int x = 0;
        cin >> x;
        if(x < 0)
            tot++;
    }
    cout << tot << endl;
    return 0;
}