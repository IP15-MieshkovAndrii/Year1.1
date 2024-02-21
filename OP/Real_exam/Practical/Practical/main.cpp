#include <iostream>
#include <string>
using namespace std;
int main() {
    string text;
    string line;
    // ascii код комбінації клавіш Ctrl + D
    int ascii_code = 94;
    // поки не натиснута комбінація клавіш Ctrl + D
    while(int(line[0]) != ascii_code){
        getline(cin, line);
        text += line + '\n';
    }
    // відкидаємо 4 зайвих символи (2 зайвих \n і ^D)
        text = text.substr(0, text.size()-4);
    cout<<text;
}
