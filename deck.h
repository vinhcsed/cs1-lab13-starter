/*                           *\  
    DO NOT MODIFY THIS FILE
\*                           */

#include <iostream>
#include <ctime>
#include <random>
#include <vector>
using namespace std;

#ifndef DECK_H
#define DECK_H

#include "card.h"

const int MAX_CARDS = 52;

class Deck {
    private:
        // Vector to represent a deck of Cards
        vector<Card> cards;
        // Helper function to compare Cards
        bool comesBefore(const Card&, const Card&);
        

    public:
        Deck();
        Deck(const Deck&);
        ~Deck();

        bool isEmpty() const;
        int getSize() const;
        Card peek() const;
        Card draw();
        void addTop(const Card&);
        void shuffle();
        void print(ostream&) const;

        // ~~~ New Lab 12 Methods ~~~
        /* Deck& operator=(const Deck&)
            update assignment to return this object */
        Deck& operator=(const Deck&);

        /* void Deck::sort()
            sorts the deck in rank/suit order */
        // Must implement using SELECTION SORT
        void sort();

        /* int Deck::find(const Card&)
            returns the index of the first occurence
            of a Card in the deck */
        // Must implement using BINARY SEARCH
        int find(const Card&) const;
};

ostream& operator<<(ostream&, const Deck&);

#endif
