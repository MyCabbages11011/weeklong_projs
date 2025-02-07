#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <random>
using namespace std;

struct Card {
    string value;
    string suit;
};

vector<Card> deck(4);

int main(void)
{
    vector<Card> deck = init_deck();
    
    return 0;
}

vector<Card> init_deck() 
{ 
    //vector<Card> deck(4);
    vector<string> suits = {"spade", "diamond", "club", "ace"};
    for (string suit : suits) {
        for (string value : {"2","3","4","5","6","7","8","9","10","J","Q","K","A"}) {
            deck.push_back(Card{value,suit});
        }
    }

    return deck;
}

vector<string> deal(vector<Card> deck)
{ 
    int selectedCard = rand() % 13 + 1;
    int selectedSuit = rand() % 4 + 1;
    vector<Card> dealing;

    for(int suit = 0; suit <= 4; suit++) {
        if (suit != selectedSuit) {
            return;
        }
        for (const auto& card : deck[suit]) {
            if (stoi(card) != selectedCard)
                {
                    return;
                }
            dealing.push_back(card);
            //vector<string> for_removal =  deck[suit];
           // auto kill = remove(for_removal.begin(), for_removal.end(), card);
           // for_removal.erase(kill, for_removal.end())
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