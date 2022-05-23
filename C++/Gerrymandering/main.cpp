#include <iostream>
#include <vector>
#include <vector>

using namespace std;
double Gap(int A, int B, int totalVoters);
int main() {
    int precincts;
    int districts;
    int wastedA = 0;
    int wastedB = 0;
    int totalVotes = 0;
    cin >> precincts >> districts;

    vector<vector<int>> values;
    for(int i = 0; i < precincts; i++)
    {
        int p = 0;
        int a = 0;
        int b = 0;
        cin >> p >> a >> b;
        totalVotes += a + b;
        vector<int> reee = {p,a,b};
        values.push_back(vector<int> {p,a,b});
    }
    for(int i = 0; i < districts; i++)
    {
        int districtTotalA = 0;
        int districtTotalB = 0;
        for(int j = 0; j < precincts; j++)
        {
            if((values[j][0]) == i + 1){
                districtTotalA += (values[j][1]);
                districtTotalB += (values[j][2]);
            }
        }
        if(districtTotalA < districtTotalB){
            wastedA += districtTotalA;
            int calc = districtTotalB - (((districtTotalA + districtTotalB)/2) + 1);
            wastedB += calc;

            cout << "B " << districtTotalA << " " << calc << endl;

        }
        else{
            int calc = districtTotalA - (((districtTotalA + districtTotalB)/2) + 1);
            wastedA += calc;
            wastedB += districtTotalB;

            cout << "A " << calc << " " << districtTotalB << endl;
        }

    }
    cout << Gap(wastedA, wastedB, totalVotes) << endl;
    return 0;
}

double Gap(int A, int B, int totalVoters) {

    double efficiency = double(double(A-B)/double(totalVoters));
    if(efficiency < 0.0)
        efficiency *= -1.0;
    return efficiency;
}



