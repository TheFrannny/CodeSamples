#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <vector>
#include <cstdint>
using namespace std;

long double nCr(vector<long double> &fact, long double N, long double R){
    if (R > N)
        return 0;
    return fact[N]/(fact[R] * fact[N-R]);
}

long double count(vector<long double>& values, long double size, vector<long double>& factorial){
    if(size <= 2)
        return 1;
    vector<long double> left, right;

    for(long double i = 1; i < size; i++)
        if(values[i] >= values[0])
            right.push_back(values[i]);
        else left.push_back(values[i]);

    return nCr(factorial, size - 1, left.size()) * count(left, left.size(), factorial) * count(right, right.size(), factorial);
}

int main() {
    long double number;
    while(cin >> number){
        if(number == 0)
            return 0;

        vector<long double> nodes, fact;
        nodes.resize(number);
        fact.resize(number,1);

        for(long double i = 0; i < number; i++){
            cin >> nodes[i];
        }

        for (long double i = 1; i < number; i++)
            fact[i] = fact[i - 1] * i;
        cout.precision(99);
        cout << count(nodes, number, fact) << endl;
    }
    return 0;
}
