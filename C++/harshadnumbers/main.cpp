#include <iostream>
#include <string>
using namespace std;
int main() {
    long long num;
    cin >> num;
    while (true){
        long long sum = 0;
        string name = to_string(num);
        for(int i = 0; i < name.size(); i++){
            char fuck = name[i];
            string fuck2 = "";
            fuck2 += fuck;
            sum += stoi(fuck2);
        }
        if(num % sum == 0)
            break;
        num ++;
    }
    cout << num;
    return 0;
}
