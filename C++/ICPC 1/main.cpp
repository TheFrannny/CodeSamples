#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int judges = 0, ratedJudges = 0;
    cin >> judges >> ratedJudges;
    float min = 0, max = 0, base = 0;
    float ratings[ratedJudges];
    for(int i = 0; i < ratedJudges; i++){
        cin >> ratings[i];
        base += ratings[i];
    }
    int factor = (judges-ratedJudges)*3;
    min += base;
    max += base;
    min += (factor*-1);
    max += (factor);
    min /= judges;
    max /= judges;

    cout << min << " " << max;

    return 0;
}
