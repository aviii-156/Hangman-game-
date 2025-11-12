#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define MAX_WORDS 10

// =====================
// Category Definitions
// =====================
const char *categories[] = {
    "Animals", "Cars", "Fruits", "Body Parts", "Colours"
};

// Word Lists
const char *animals[]   = {"lion", "dog", "cat", "horse", "tiger", "eagle", "frog", "cow", "goat", "sheep"};
const char *cars[]      = {"bmw", "audi", "tesla", "tata", "alto", "kia", "nano", "jeep", "ford", "fiat"};
const char *fruits[]    = {"apple", "mango", "kiwi", "banana", "grape", "pear", "plum", "lime", "melon", "papaya"};
const char *bodyparts[] = {"eye", "ear", "nose", "hand", "leg", "toe", "lip", "jaw", "arm", "chin"};
const char *colours[]   = {"red", "blue", "pink", "brown", "green", "yellow", "orange", "violet", "white", "black"};

// Store addresses of all category word lists
const char **allCats[] = {animals, cars, fruits, bodyparts, colours};

int main() {
    srand(time(0));  // Seed random number generator

    int choice, tries;
    int minL, maxL;

    // =====================
    // Difficulty Selection
    // =====================
    printf("=== Select Difficulty Level ===\n");
    printf("1. Easy   (1-4 letters)\n");
    printf("2. Medium (5-8 letters)\n");
    printf("3. Hard   (9+ letters)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        tries = 8;
        minL = 1; maxL = 4;
    } else if (choice == 2) {
        tries = 6;
        minL = 5; maxL = 8;
    } else {
        tries = 4;
        minL = 9; maxL = 20;
    }

    // =====================
    // Random Word Selection
    // =====================
    int cat = rand() % 5;              // Pick random category
    const char **words = allCats[cat]; // Get word list of chosen category
    const char *word;

    while (1) {
        word = words[rand() % MAX_WORDS];
        int len = strlen(word);
        if (len >= minL && len <= maxL)
            break;
    }

    int length = strlen(word);
    char guessed[30];
    int correct = 0;

    // Mask the word with underscores
    for (int i = 0; i < length; i++)
        guessed[i] = '_';
    guessed[length] = '\0';

    printf("\nGuess which %s is this?\n", categories[cat]);

    // =====================
    // Main Game Loop
    // =====================
    while (tries > 0 && correct < length) {
        printf("\nWord: ");
        for (int i = 0; i < length; i++)
            printf("%c ", guessed[i]);

        printf("\nTries left: %d", tries);
        printf("\nGuess a letter: ");

        char g;
        scanf(" %c", &g);
        g = tolower(g);

        int found = 0;
        for (int i = 0; i < length; i++) {
            if (word[i] == g && guessed[i] == '_') {
                guessed[i] = g;
                correct++;
                found = 1;
            }
        }

        if (found)
            printf("✅ Good guess!\n");
        else {
            printf("❌ Wrong guess!\n");
            tries--;
        }
    }

    // =====================
    // Game Result
    // =====================
    if (correct == length) {
        printf("\n🎉 Congratulations! You guessed it right: %s\n", word);
    } else {
        printf("\n💀 Game Over! The word was: %s\n", word);
    }

    return 0;
}
