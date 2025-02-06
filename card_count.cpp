#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <random>
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

int deal(vector<vector<string>> deck)
{ 
    int selectedCard = rand() % 13 + 1;
    int selectedSuit = rand() % 4 + 1;
    cardPair dealing;

    for(int i = 0; i < selectedSuit; i++) {
        for (int j = 0; j <selectedCard; j++) {
            dealing.cardOne = j;
            selectedCard = rand() % 13 + 1;
            selectedSuit = rand() % 4 + 1;
        
        }
    }
    
    for(int i = 0; i < selectedSuit; i++) {
        for (int j = 0; j <selectedCard; j++) {
        dealing.cardTwo = j;
        selectedCard = rand() % 13 + 1;
        selectedSuit = rand() % 4 + 1;
    
        }
    }
    


    return;
}

int count(int card)
{

    return card;
}