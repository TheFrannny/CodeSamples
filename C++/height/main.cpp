#include <iostream>

using namespace std;

int main() {
    int classes;
    cin >> classes;
    while (classes--){

        int values[20], group, steps = 0;
        cin >> group;

        for(int i = 0; i < 20; i++)
            cin >> values[i];

        for(int i = 0; i < 20; i++)
            for(int j = i + 1; j < 20; j++)
                if(values[i] > values[j])
                    steps++;

        cout << group << " " << steps << endl;
    }
    return 0;
}