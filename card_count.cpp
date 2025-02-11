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
vector<string> suits = {"spade", "diamond", "club", "heart"};
vector<Card> init_deck();
vector<Card> deal(vector<Card> deck);

int main(void)
{
    vector<Card> deck = init_deck();
    deal(deck);
    
    return 0;
}

vector<Card> init_deck() 
{ 
    vector<Card> deck;
    //vector<string> suits = {"spade", "diamond", "club", "heart"};
    for (string suit : suits) {
        for (string value : {"2","3","4","5","6","7","8","9","10","J","Q","K","A"}) { //ISSUE HERE W/ FACE CARDS: stoi usage
            deck.push_back(Card{value,suit});
        }
    }
    return deck;
}

vector<Card> deal(vector<Card> deck)
{ 
    int selectedCard = rand() % 13 + 1;
    int selectedSuit = rand() % 4 + 1;
    vector<Card> dealing;

    for (const Card& card : deck) {
        //cout << card.value << " of " << card.suit << endl;
        if (stoi(card.value) != selectedCard)
            {
                continue;
            }
        dealing.push_back(card);
        
        

    }

    selectedCard = rand() % 13 + 1;
    selectedSuit = rand() % 4 + 1;
    

    return dealing;
}

int count(int card)
{

    return card;
}

