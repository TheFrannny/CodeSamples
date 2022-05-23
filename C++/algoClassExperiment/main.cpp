#include <iostream>
#include <unordered_map>
#include <stack>
#include <chrono>
#include <cstdlib>
#include <algorithm>
using namespace std;
unsigned int arr[200000000];

// using slightly modified solution from https://www.codespeedy.com/check-for-majority-element-in-an-array-in-c/
void classAlgorithm(unsigned int *arr, int n)
{
    /*major will hold the index of the candidate, initially, it will hold the index of the first element*/
    int major = arr[0]; int freq = 1;

    //finding the element with maximum frequency
    for (int i = 1; i < n; i++) {
        if (arr[major] == arr[i])
            freq++;
        else freq--;

        /*whenever freq (frequency) becomes
        zero major is assigned a new element*/
        if (freq == 0) {
            major = i;
            freq = 1;
        }
    }

    // checks for majority element
    if (freq > n / 2)
        cout << "Class answer: " << arr[freq] << endl;

    else
        cout << "Class answer: No Majority Element" << endl;
}

void franciscoAlgorithm(unsigned int *arr, int n, int distinct){
    // initializes map, and inserts data
    unordered_map<int, int> data;
    for (int i = 0; i < n; i++)
        data[arr[i]]++;

    // finds the major if there is one
    bool tie = true;
    for (int i = 0; i < distinct;i++)
        if(data[i] > n/2)
        {
            cout << "Fran Answer: " << i << endl;
            tie = false;
            break;
        }

    if(tie)
        cout << "Fran Answer: No Majority Element" << endl;
}

int main() {
    // initialising stuff
    time_t nTime;
    srand((unsigned) time(&nTime));
    int n = sizeof(arr)/sizeof(arr[0]);

    // to change # of elements, adjust this
    int distinctElements = 10;

    // randomises first half of array
    for(int i = 0; i < n/2 - 1; i++)
        arr[i] = rand() % distinctElements;

    // selects winning number
    int majorNumber = rand() % distinctElements;

    // fill up last half of array with winning number to simulate almost worst case
    for(int i = n/2 - 1; i < n; i++)
        arr[i] = majorNumber;

    cout << "major number: " << majorNumber << endl;




    // starts timer
    std::chrono::steady_clock::time_point classStart = std::chrono::steady_clock::now();

    classAlgorithm(arr, n);

    // stops timer
    std::chrono::steady_clock::time_point classEnd = std::chrono::steady_clock::now();
    double classDifference = std::chrono::duration_cast<std::chrono::milliseconds> (classEnd - classStart).count();





    std::chrono::steady_clock::time_point franStart = std::chrono::steady_clock::now();

    franciscoAlgorithm(arr, n, distinctElements);

    std::chrono::steady_clock::time_point franEnd = std::chrono::steady_clock::now();
    double franciscoDifference = std::chrono::duration_cast<std::chrono::milliseconds> (franEnd - franStart).count();

    // displays times
    cout << "Class speed: " << classDifference << endl;
    cout << "Francisco speed: " << franciscoDifference << endl;

    double ratio = (max(classDifference, franciscoDifference)/min(classDifference, franciscoDifference))*100;
    cout << ratio << "% difference" << endl;
    return 0;
}