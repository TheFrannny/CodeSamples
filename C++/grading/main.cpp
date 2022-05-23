#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <queue>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d, e, grade;
    cin >> a >> b >> c >> d >> e >> grade;
    if(grade >= a)
        cout << 'A';
    else if(grade >= b)
        cout << 'B';
    else if(grade >= c)
        cout << 'C';
    else if(grade >= d)
        cout << 'D';
    else if(grade >= e)
        cout << 'E';
    else cout << 'F';
    return 0;
}