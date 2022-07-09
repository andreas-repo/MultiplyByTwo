// MultiplyByTwo.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <sstream> // this will allow you to use stringstream in your program
using namespace std;

int main() {
    //create a stringstream object, to input/output strings
    stringstream ss;
    bool running = true;

    while (running) {
        string inputValue = "";
        cout << "Enter an integer to multiply by two or enter 'quit' to close programm:\n";        
        cin >> inputValue;
        cout << "Inputvalue is:" << inputValue << endl;
        if (inputValue != "quit") {
            int i = 0;
            //ss << inputValue;
            //i = std::stoi(ss.get());
            i = stoi(inputValue);
            int result = i * 2;
            cout << "Result: " << result << endl;            
        } else if (inputValue == "quit") {
            running = false;
        }
        
    }    
}



// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
