#include <iostream>
#include <regex>
#include <string>

//#include <sstream> // this will allow you to use stringstream in your program
using namespace std;

bool doCheckForLetters(const::string value) {
    return regex_search(value, regex("\\d+"));
}

int add(int x, int y); // needed so MultiplyByTwo.cpp knows that add() is a function defined elsewhere

int main() {
    //create a stringstream object, to input/output strings
    //stringstream ss;
    bool running = true;

    int value = add(5, 9);
    cout << value << endl;

    while (running) {
        string inputValue = "";
        cout << "Enter an integer to multiply by two or enter 'quit' to close programm:\n";        
        cin >> inputValue;
        cout << "Input value is:" << inputValue << endl;
        if (inputValue != "quit") {
            int i = 0;
            if (doCheckForLetters(inputValue)) {
                i = stoi(inputValue);
                int result = i * 2;
                cout << "Result: " << result << endl;
            }
            else {
                cout << "Your input contains letter(s). Please only input numbers OR 'quit'!";
            }            
        } else if (inputValue == "quit") {
            running = false;
        }        
    }    
}

/*
bool is_digits(const std::string& str){
    return str.find_first_not_of("0123456789") == std::string::npos;
}*/

