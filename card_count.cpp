#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <random>
using namespace std;

vector<string> cards;
vector<vector<string>> deck;


int main(void)
{
    cards = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    deck = {cards, cards, cards, cards};  

    return 0;
}

vector<string> deal(vector<vector<string>> deck)
{ 
    int selectedCard = rand() % 13 + 1;
    int selectedSuit = rand() % 4 + 1;
    vector<string> dealing;

    for(int suit = 0; suit <= 4; suit++) {
        if (suit != selectedSuit) {
            return;
        }
        for (const auto& card : cards) {
            if (stoi(card) != selectedCard)
                {
                    return;
                }
            dealing.push_back(card);
        } 
    }
    selectedCard = rand() % 13 + 1;
    selectedSuit = rand() % 4 + 1;

    return dealing;
}

int count(int card)
{

    return card;
}