#include <iostream>
#include <vector>
using namespace std;
int main() {

    unsigned long howMany, counter = 0, input = 0;
    cin >> howMany;
    vector<int> values;

    for (unsigned long i = 0; i < howMany; i++)
    {
        cin >> input;
        if(input > counter)
        {
            counter = input;
            values.push_back(input);
        }
    }

    cout << values.size() << endl;
    for(int i = 0; i < values.size(); i++)
        cout << values[i] << " ";

    return 0;
}
