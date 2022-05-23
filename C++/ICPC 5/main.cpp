#include <iostream>

using namespace std;
int main() {
    long participants = 0, totMessages = 0, totalUnread = 0;
    cin >> participants >> totMessages;
    long content[totMessages];


    for(long i = 0; i < totMessages; i++)
        cin >> content[i];

    for(long i = 0; i < totMessages; i++){

        totalUnread += participants;
        long space = 1;

        for(long j = i - 1; j >= 0; j--){

            if(content[i] == content[j])
                break;

            space++;
        }
        totalUnread -= space;
        cout << totalUnread << endl;
    }
    return 0;
}
