#include <iostream>
#include "Word.h"

using namespace std;

int main() {

    Word word("Raisin");
    word.setHiddenWord();
    word.checkHiddenWord('a');
    word.checkHiddenWord('R');
    word.checkHiddenWord('s');
    word.checkHiddenWord('i');
    word.checkHiddenWord('n');
    return 0;
}