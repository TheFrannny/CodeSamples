#include <iostream>
#include <vector>

using namespace std;

struct patient{
    string name;
    long double time, severity, active = 1;
};
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long double queries, constant, activeCount = 0;
    cin >> queries >> constant;

    vector<patient> reee;

    while (queries--){
        long double type, time, best = -1;
        cin >> type >> time;

        if(type == 1){
            string name;
            long double severity;
            cin >> name >> severity;
            reee.push_back({name, time, severity, 1});
            activeCount++;
        } else if(type == 2){
            for(long long i = 0; i < reee.size(); i++){

                if(reee[i].active == 0 || reee[i].time > time)
                    continue;
                else if(best == -1)
                {
                    //cout << "Reeeee " << activeCount << endl;
                    best = i;
                    continue;
                }

                long double trueSeverity = reee[i].active*(reee[i].severity + constant*(time - reee[i].time));
                //cout << "My true: " << trueSeverity << " " << reee[i].severity << " " << constant*(time - reee[i].time) << endl;
                if (trueSeverity > reee[best].active*(reee[best].severity + constant*(time - reee[best].time)))
                    best = i;
                else if(trueSeverity == reee[best].active*(reee[best].severity + constant*(time - reee[best].time))){
                    string bestName = min(reee[i].name, reee[best].name);
                    if(reee[i].name == bestName)
                        best = i;
                }
                //cout << "Reeeee 2 " << activeCount << endl;
            }
            if(!reee.empty() && best != -1 && reee[best].active)
            {
                //cout << "Science: " << reee[best].time << " " << reee[best].severity << endl;
                cout << reee[best].name << endl;
                reee[best].active = 0;
                activeCount--;
            }
            else{
                cout << "doctor takes a break";
                //return 0;
            }
        } else{
            string name;
            cin >> name;
            for(int i = 0; i < reee.size(); i++)
                if(reee[i].name == name){
                    if(reee[i].time <= time)
                        reee[i].active = 0;
                }
        }
    }
    return 0;
}