#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long size, command;
    cin >> size >> command;
    vector <long long> elements;
    unordered_set<long long> set;

    for(int i = 0; i < size; i++){
        long long yum;
        cin >> yum;
        elements.emplace_back(yum);
    }
    sort(elements.begin(), elements.end());

    if(command == 1){
        int left = 0, right = size - 1;
        for(int i = 0; i < size; i++){
            if(elements[left] + elements[right] == 7777){
                cout << "Yes";
                return 0;
            } else if(elements[left] + elements[right] < 7777)
                left++;
            else right--;
            if(left > right){
                cout << "No";
                return 0;
            }
        }
        cout << "No";

    } else if(command == 2){
        for(long long & element : elements)
            set.insert(element);

        if(elements.size() != set.size())
            cout << "Contains duplicate";
        else cout << "Unique";

    } else if(command == 3){
        long long index = 0, count = 1;

        for(int i = 1; i < size; i++){
            if(elements[i] == elements[index])
                count++;
            else count--;
            if(count == 0)
                index = i;
        }
        if(count >= 1)
            cout << elements[index];
        else cout << -1;

    } else if(command == 4){
        cout << elements[(size-1)/2] << " ";
        if(size%2 == 0)
            cout << elements[size/2];

    } else{
        for(int i = 0; i < size; i++)
            if(elements[i] > 999)
                return 0;
            else if(elements[i] >= 100)
                cout << elements[i] << " ";
    }
    return 0;
}