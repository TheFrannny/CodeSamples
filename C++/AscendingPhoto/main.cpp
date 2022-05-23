#include <bits/stdc++.h>

using namespace std;

int main()
{
    int howMany = 0;
    cin >> howMany;
    int inputs[howMany];
    for(int i = 0; i < howMany; i++)
        cin >> inputs[i];
    int n = sizeof(inputs ) / sizeof(inputs[0]);
    howMany = n;
    int compaerison[n];

    for (int z = 0; z < howMany; z++)
    {
        compaerison[z] = 1;
    }

    for (int b = 1; b < howMany; b++)
    {
        for (int a = 0; a < b; a++)
        {
            if (compaerison[b] < compaerison[a] + 1 && inputs[b] >= inputs[a])
                compaerison[b] = 1 + compaerison[a];
        }
    }

    int hits = 0;
    for (int i = 0; i < howMany; i++)
    {
        if (hits < compaerison[i])
            hits = compaerison[i];
    }

    int count = howMany - hits;
    if(count != 0)
        count++;

    cout << count;
    return 0;
}