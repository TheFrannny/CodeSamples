#include <iostream>
using namespace std;
int main() {
    int xVal=0, yVal=0, xyProduct;
    string xStr, yStr;
    cin >> xStr >> yStr;
    string answer = "";
    for(auto index : xStr)
        if(index == 'S') xVal++;

    for(auto index : yStr)
        if(index == 'S') yVal++;

    xyProduct = xVal*yVal;

    while (xyProduct--)
        answer += "S(";

    answer += "0";

    xyProduct = xVal*yVal;

    while (xyProduct--)
        answer += ")";

    cout << answer;
    return 0;
}
