//
// Created by Alex Constantinou on 13/10/2018.
//

#include <iostream>
#include <sstream>
#include "Word.h"

using namespace std;

Word::Word(string word) {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout << word << endl;
    this->plainTextWord = word;
};

string Word::getHiddenWord() {
    return hiddenWord;
}

string Word::getPlainTextWord() {
    return plainTextWord;
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
    cout << hiddenWord << endl;
    return hiddenWord;
}
