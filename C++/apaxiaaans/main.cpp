#include <iostream>
using namespace std;
int main() {
    string name, trueName = "";
    cin >> name;
    char last = name[0];
    trueName += last;
    for(int i = 1; i < name.size(); i++){
        if(name[i] != last)
            trueName += name[i];
        last = name[i];
    }
    cout << trueName;
    return 0;
}
