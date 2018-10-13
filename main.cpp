#include <iostream>
#include "Word.h"


void clearScreen()
{
    cout << string( 100, '\n' );
}

using namespace std;

int main() {

    cout << "Welcome to guess the word" << endl;
    cout << "Player 1: Please enter a word: " << flush;
    string wordToGuess;
    char input[100];
    cin.getline(input,sizeof(input));
    Word word(input);
    clearScreen();
    word.setHiddenWord();
    while(word.getWin() == false || word.getGuessesRemaining() > 0){
        cout << "Player 2: enter a character and try and guess the word: " << flush;
        string guessChar;
        cin >> guessChar;
        while(guessChar.length() != 1) {
            cout << "Please enter 1 letter at a time: " << flush;
            cin >> guessChar;
        }
        word.checkHiddenWord(guessChar[0]);
        word.checkForWin();
    }


    return 0;
}