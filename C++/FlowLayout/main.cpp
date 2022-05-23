#include <iostream>
#include <vector>

using namespace std;
int main() {
    int max;
    vector<vector<int>> inputs;
    vector<vector<int>> row;
    bool active = true;

    while(active)
    {
        cin >> max;
        if(max > 0)
        {
            inputs.clear();
            while(true)
            {
                int a = 0;
                int b = 0;
                cin >> a >> b;
                if(a == -1)
                    break;
                inputs.push_back({a,b});
            }
            int highestWidth = 0;
            int currentWidth = 0;
            int currentHeight = 0;
            row.clear();
            for(int i = 0; i < inputs.size(); i++)
            {
                int add = currentWidth + inputs[i][0];
                if(add <= max)
                {
                    row.push_back(inputs[i]);
                    currentWidth = add;
                    if(currentWidth > highestWidth)
                    {
                        highestWidth = currentWidth;
                        //cout << "New Highestwidth: " << highestWidth << endl;
                    }


                } else{
                    int newHeight = 0;
                    for(int j = 0; j < row.size(); j++)
                    {
                        if(row[j][1] > newHeight)
                        {
                            newHeight = row[j][1];
                        }
                    }
                    currentHeight += newHeight;
                    row.clear();
                    currentWidth = inputs[i][0];
                    row.push_back(inputs[i]);
                }
            }
            if(!row.empty())
            {
                int newHeight = 0;
                for(int j = 0; j < row.size(); j++)
                {
                    if(row[j][1] > newHeight)
                        newHeight = row[j][1];
                }
                currentHeight += newHeight;
            }
            cout << highestWidth << " x " << currentHeight << endl;
        }
        else break;
    }
    return 0;
}
