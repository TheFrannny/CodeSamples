#include <iostream>
#include <vector>
#include <string>

using namespace std;
int findLowest(int first, int second, int third)
{
    int lowestScore = first;

    if(lowestScore > second)
        lowestScore = second;

    if(lowestScore > third)
        lowestScore = third;

    if(lowestScore == second)
        return 1;
    else if(lowestScore == third)
        return 2;
    else return 0;
}

int findHighest(int first, int second, int third)
{
    int highestScore = first;

    if(highestScore < second)
    {
        highestScore = second;
    }
    if(highestScore < third)
    {
        highestScore = third;
    }
    if(highestScore == second)
        return 1;
    else if(highestScore == third)
        return 2;
    else return 0;
}

int main() {
    int inputs;
    cin >> inputs;
    int values[inputs][5];
    for(int i = 0; i < inputs; i++)
    {
        cin >> values[i][0] >> values[i][1] >> values[i][2] >> values[i][3];
        values[i][4] = 0;
    }

    for(int i = 0; i < inputs; i++)
    {
        for(int j = 0; j < values[i][3]; j++)
        {
            int lowestPosition = findLowest(values[i][0],values[i][1],values[i][2]);
            int highestPosition = findHighest(values[i][0],values[i][1],values[i][2]);
            if(values[i][highestPosition] >= 4 || (values[i][highestPosition] + values[i][3]) > 7)
            {
                values[i][highestPosition] += values[i][3] - j;
                j = values[i][3];
            }
            else values[i][lowestPosition]++;
        }
        values[i][4] = values[i][0]*values[i][0] + values[i][1]*values[i][1] + values[i][2]*values[i][2] + 7*values[i][findLowest(values[i][0],values[i][1],values[i][2])];
        //cout << values[i][0] << " " << values[i][1] << " " << values[i][2] << " " << values[i][3] << " " << values[i][4] << endl;
        cout << values[i][0]*values[i][0] << " " << values[i][1]*values[i][1] << " " << values[i][2]*values[i][2] << " " << 7*values[i][findLowest(values[i][0],values[i][1],values[i][2])]  << " ";
        cout << values[i][4] << endl;
    }
    return 0;
}
