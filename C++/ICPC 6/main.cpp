#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
int main() {
    string input;
    cin >> input;
    map<int,int> reee;
    int nums[input.length()];
    long long movements = 0;
    for(int i = 0; i < input.length(); i++){
        char reee = input[i];
        string fuckk = "";
        fuckk = reee;
        nums[i] = stoi(fuckk);
        //cout << nums[i] << " ";
    }
    sort(nums, nums + input.length());
    for(int i = 0; i < input.length(); i++){
        //cout << nums[i] << " ";
    }

    //cout << "Start: " << movements << endl;
    for(int i = 0; i < input.length() - 1; i++){
        int fuck = nums[i+1] - nums[i] + 1;
        cout << "Adding: " << fuck << endl;
        movements += fuck;
        //cout << "adding: " << fuck << endl;
    }
    if(movements == 0)
        movements++;
    cout << movements;

    return 0;
}
