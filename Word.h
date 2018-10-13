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
public:
    Word(string word);
    string getPlainTextWord();
    void setHiddenWord();
    string getHiddenWord();
    string checkHiddenWord(char charToCheck);
};


#endif //GUESSTHEWORD_WORD_H
