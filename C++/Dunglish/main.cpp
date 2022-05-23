#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int wordCount = 0;
    cin >> wordCount;

    vector<string> input;
    for(int i = 0; i < wordCount; i++)
    {
        string toAdd;
        cin >> toAdd;
        input.push_back(toAdd);
    }
    int trans = 0;
    cin >> trans;
    string translations[trans][3];
    for(int i = 0; i < trans; i++)
    {
        cin >> translations[i][0] >> translations[i][1] >> translations[i][2];
    }

    int variations[wordCount][2];
    int correct = 1;
    int incorrect = 1;

    for(int i = 0; i < wordCount; i++)
    {
        variations[i][0] = 0;
        variations[i][1] = 0;
    }
    for(int i = 0; i < wordCount; i++)
    {
        for(int j = 0; j < trans; j++)
        {
            if(input[i] == translations[j][0])
            {
                if(translations[j][2] == "correct")
                {
                    variations[i][0]++;
                }
                else variations[i][1]++;
            }
        }
    }
    for(int i = 0; i < wordCount; i++)
    {
        correct *= variations[i][0];
        incorrect *= (variations[i][0] + variations[i][1]);
    }
    incorrect -= correct;
    if(correct + incorrect != 1)
    {
        cout << correct << " correct" << endl;
        cout << incorrect << " incorrect" << endl;
    }
    else
    {
        for(int i = 0; i < wordCount; i++)
        {
            for(int j = 0; j < trans; j++)
            {
                if(translations[j][0] == input[i])
                    cout << translations[j][1] << " ";
            }
        }
        if(correct == 0)
        {
            cout << endl << "incorrect";
        } else cout << endl << "correct";
    }
    return 0;
}
