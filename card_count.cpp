#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
using namespace std;

vector<string> cards;
vector<vector<string>> deck;
struct cardPair {
    int cardOne;
    int cardTwo;
};

int main(void)
{
    cards = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    deck = {cards, cards, cards, cards};  

    /*for (const auto& row : deck) {
        for (const auto& card : row) {
            cout << card << " ";
        }
        cout << endl;
    }
    */

    return 0;
}

int deal(deck)
{ 

    return;
}

int count(int card)
{

    return card;
}

