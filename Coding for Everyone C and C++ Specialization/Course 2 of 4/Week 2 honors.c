#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { CLUBS, DIAMONDS, HEARTS, SPADES } Suit;

typedef struct {
    Suit suit;
    short pips;
} Card;

void createDeck(Card *deck) {
    int index = 0;
    for (int suit = CLUBS; suit <= SPADES; ++suit) {
        for (short pips = 1; pips <= 13; ++pips) {
            deck[index].suit = (Suit)suit;
            deck[index].pips = pips;
            index++;
        }
    }
}

void shuffleDeck(Card *deck, int n) {
    for (int i = n - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

void countPips(const Card *hand, int *pipsCount) {
    for (int i = 0; i < 7; ++i) {
        pipsCount[hand[i].pips]++;
    }
}

const char* evaluateHand(const Card *hand) {
    int pipsCount[14] = {0};  // 0th index is unused
    countPips(hand, pipsCount);

    int pairs = 0, threeOfAKind = 0, fourOfAKind = 0;
    for (int i = 1; i <= 13; ++i) {
        if (pipsCount[i] == 2) pairs++;
        if (pipsCount[i] == 3) threeOfAKind++;
        if (pipsCount[i] == 4) fourOfAKind++;
    }

    if (fourOfAKind == 1) return "Four of a Kind";
    if (threeOfAKind == 1 && pairs == 1) return "Full House";
    if (threeOfAKind == 1) return "Three of a Kind";
    if (pairs == 2) return "Two Pair";
    if (pairs == 1) return "One Pair";
    return "No Pair";
}

int main() {
    srand(time(0));

    const int NUM_HANDS = 1000000;
    const int DECK_SIZE = 52;
    const int HAND_SIZE = 7;
    Card deck[DECK_SIZE];
    Card hand[HAND_SIZE];

    int handCounts[6] = {0};  // No Pair, One Pair, Two Pair, Three of a Kind, Full House, Four of a Kind

    for (int i = 0; i < NUM_HANDS; ++i) {
        createDeck(deck);
        shuffleDeck(deck, DECK_SIZE);
        
        for (int j = 0; j < HAND_SIZE; ++j) {
            hand[j] = deck[j];
        }
        
        const char* handType = evaluateHand(hand);
        
        if (strcmp(handType, "No Pair") == 0) handCounts[0]++;
        else if (strcmp(handType, "One Pair") == 0) handCounts[1]++;
        else if (strcmp(handType, "Two Pair") == 0) handCounts[2]++;
        else if (strcmp(handType, "Three of a Kind") == 0) handCounts[3]++;
        else if (strcmp(handType, "Full House") == 0) handCounts[4]++;
        else if (strcmp(handType, "Four of a Kind") == 0) handCounts[5]++;
    }

    printf("Probabilities after %d hands:\n", NUM_HANDS);
    printf("No Pair: %.6f\n", (double)handCounts[0] / NUM_HANDS);
    printf("One Pair: %.6f\n", (double)handCounts[1] / NUM_HANDS);
    printf("Two Pair: %.6f\n", (double)handCounts[2] / NUM_HANDS);
    printf("Three of a Kind: %.6f\n", (double)handCounts[3] / NUM_HANDS);
    printf("Full House: %.6f\n", (double)handCounts[4] / NUM_HANDS);
    printf("Four of a Kind: %.6f\n", (double)handCounts[5] / NUM_HANDS);

    return 0;
}
