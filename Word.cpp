//
// Created by Alex Constantinou on 13/10/2018.
//

#include <iostream>
#include <sstream>
#include "Word.h"

using namespace std;

Word::Word(string word) {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    this->plainTextWord = word;
};

bool Word::getWin() {
    return win;
}

int Word::getGuessesRemaining() {
    return getGuessesRemaining();
}

void Word::setHiddenWord() {
    stringstream ss;
    for(char& c : plainTextWord) {
        if(c == ' '){
            ss << ' ';
        } else {
            ss << '*';
        }
    }
    hiddenWord = ss.str();
    cout << ss.str() << endl;
}

string Word::checkHiddenWord(char charToCheck) {
    char toLowerCase = tolower(charToCheck);
    for(int i = 0; i <= plainTextWord.size(); i++){
        if(plainTextWord[i] == toLowerCase){
            hiddenWord[i] = toLowerCase;
        }
    }
    if (plainTextWord.find(charToCheck) == string::npos) {
        cout << "Letter not found" << hiddenWord << endl;
        guessesRemaining --;
    }
    cout << "Hidden Word: " << hiddenWord << endl;
    cout << "Guesses remaining " << guessesRemaining << endl;
    return hiddenWord;
}

void Word::checkForWin() {
    char n = hiddenWord.find('*');
    if (n == string::npos) {
        win = true;
        cout << "You win" << endl;
        exit(0);
    } else if(guessesRemaining <= 0){
        cout << "You lose" << endl;
        exit(0);
    }
}
