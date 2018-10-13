//
// Created by Alex Constantinou on 13/10/2018.
//

#ifndef GUESSTHEWORD_WORD_H
#define GUESSTHEWORD_WORD_H

#include <iostream>

using namespace std;

class Word {
private:
    string plainTextWord;
    string hiddenWord;
    int guessesRemaining = 10;
    bool win = false;
public:
    Word(string word);
    bool getWin();
    int getGuessesRemaining();
    void setHiddenWord();
    string checkHiddenWord(char charToCheck);
    void checkForWin();
};


#endif //GUESSTHEWORD_WORD_H
