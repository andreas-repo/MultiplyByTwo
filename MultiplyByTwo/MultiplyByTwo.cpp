#include <iostream>
#include <regex>
#include <string>
//#include <sstream> // this will allow you to use stringstream in your program
using namespace std;

int main() {
    //create a stringstream object, to input/output strings
    //stringstream ss;
    bool running = true;

    while (running) {
        string inputValue = "";
        cout << "Enter an integer to multiply by two or enter 'quit' to close programm:\n";        
        cin >> inputValue;
        cout << "Input value is:" << inputValue << endl;
        if (inputValue != "quit") {
            int i = 0;
            if (regex_search(inputValue, regex("\\d+"))) {
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
