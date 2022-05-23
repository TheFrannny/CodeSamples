#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int hands, points = 0;
    char dominant;
    cin >> hands >> dominant;
    hands *= 4;

    for(int i = 0; i < hands; i++){
        string card;
        cin >> card;
        if(card[1] == dominant){
            if(card[0] == 'A')
                points += 11;
            else if(card[0] == 'K')
                points += 4;
            else if(card[0] == 'Q')
                points += 3;
            else if(card[0] == 'J')
                points += 20;
            else if(card[0] == 'T')
                points += 10;
            else if(card[0] == '9')
                points += 14;
        }
        else{
            if(card[0] == 'A')
                points += 11;
            else if(card[0] == 'K')
                points += 4;
            else if(card[0] == 'Q')
                points += 3;
            else if(card[0] == 'J')
                points += 2;
            else if(card[0] == 'T')
                points += 10;
        }
    }
    cout << points;
    return 0;
}