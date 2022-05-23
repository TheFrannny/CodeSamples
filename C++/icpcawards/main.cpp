#include <iostream>
#include <vector>
using namespace std;
int main() {
    int contestants = 0, winners = 0;
    cin >> contestants;
    vector<string> universities;

    while(contestants-- && winners < 12){
        string x = "", y = "";
        cin >> x >> y;
        bool match = false;
        for(int i = 0; i < universities.size(); i++){
            if(universities[i] == x){
                match = true; break;
            }
        }
        if(!match){
            cout << x << " " << y << endl;
            universities.push_back(x);
            winners++;
        }
    }
    return 0;
}