#include <iostream>
#include <queue>
using namespace std;

int main() {
    unsigned int howManySets,valuesPerSet;
    cin >> howManySets;

    //loops for every set
    for(unsigned int i = 0; i < howManySets; i++)
    {
        cin >> valuesPerSet;

        unsigned long totMedian = 0;
        unsigned int values[valuesPerSet];
        priority_queue<unsigned int> originalQueue;

        //grabs all user input
        for(unsigned int j = 0; j < valuesPerSet; j++)
            cin >> values[j];

        //pushes another value into the queue and grabs median
        for(unsigned int j = 0; j < valuesPerSet; j++)
        {
            originalQueue.push(values[j]);
            priority_queue<unsigned int> newQ = originalQueue;

            //odds
            if((j+1)%2 == 1)
            {
                for(unsigned int k = 0; k < j/2; k++)
                    newQ.pop();

                totMedian += newQ.top();

            //evens
            }else{
                for(unsigned int k = 0; k < j/2; k++)
                    newQ.pop();

                unsigned int second = newQ.top();
                newQ.pop();

                totMedian += (newQ.top() + second) / 2;
            }
        }
        cout << totMedian << endl;
    }
    return 0;
}
