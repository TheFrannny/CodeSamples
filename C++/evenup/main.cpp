#include <iostream>
#include <stack>
using namespace std;

int main() {
    int cards, card;
    stack<int> hand;
    cin >> cards;
    for(int i = 0; i < cards; i++){
        cin >> card;
        if(hand.empty())
            hand.push(card);
        else{
            if((hand.top() + card)%2 == 0)
                hand.pop();
            else hand.push(card);
        }
    }
    cards = 0;
    while(!hand.empty()){
        cards++;
        hand.pop();
    }
    cout << cards;
}