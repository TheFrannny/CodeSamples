#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main() {
    unsigned long profs = 0;
    cin >> profs;
    deque<vector<unsigned long>> fuck;
    for(unsigned long i = 0; i < profs; i++)
    {
        unsigned long num = 0;
        cin >> num;
        vector<unsigned long> val = {i + 1,num};
        fuck.push_back(val);
    }
    unsigned long place = 0;
    while (profs > 1)
    {
        place = fuck[0][1] - 1;
        place %= profs;
        for(int i = 0; i < place; i++)
        {
            vector<unsigned long> val = fuck.front();
            fuck.pop_front();
            fuck.push_back(val);
        }
        fuck.pop_front();
        profs--;
    }
    cout << fuck[0][0];
    return 0;
}
