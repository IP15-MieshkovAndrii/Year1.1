#include <iostream>
#include "function.hpp"
#include <string>
using namespace std;

int main(){
    string* text, *new_text, *max_word, *to_start;
    int lnum;
    
    text=input(lnum);
    
//    new_text = balanc(text, lnum);
    
    max_word = maxim_word(text, lnum);
    
    to_start = to_start_word(text, max_word, lnum);
    
}

