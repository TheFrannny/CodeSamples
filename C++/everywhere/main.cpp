#include <iostream>
using namespace std;

int main() {
    int trips = 0;
    cin >> trips;

    for(int k = 0; k < trips; k++){

        int matches = 0, spots = 0;
        cin >> spots;
        string hits[spots];

        for(int i = 0; i < spots; i++)
            cin >> hits[i];
        for(int i = 0; i < spots; i++)
            for(int j = i + 1; j < spots; j++)
                if(!hits[j].compare(hits[i]) && hits[j] != " ")
                    hits[j] = " ";

        for(int i = 0; i < spots; i++)
            if(hits[i] != " ")
                matches++;

        cout << matches << endl;
    }
    return 0;
}