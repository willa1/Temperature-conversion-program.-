#include <iostream>
#include <stdlib.h>
#include <cctype>


using namespace std;
int main(){

    char escolha;
    char opc;
  
    do {
        // This shoud work on any unix based system and is better than forking another process
        printf("\033[H\033[J"); // Clear the screen

        cout << "Made by Willa Cantanhede P. de Brito\n";
        cout << "\n- [A-> Celsius to Fahrenheit]\n- [B-> Fahrenheit to Celsius]\n- [C-> Kelvin to Celsius]\n- [D-> Kelvin to Fahrenheit]\n- [E-> Celsius to Kelvin]\n- [F-> Fahrenheit to Kelvin]";
        cout << "\n-> Please choose only one option: ";
        cin >> escolha;

        switch (std::tolower(escolha)) {
            case 'a': {
                double c, f;
                cout << "\n-Enter the temperature in Celsius: ";
                cin >> c;
                f = (1.8 * c) + 32;
                cout << "-The result in Fahrenheit is: " << f;
                break;
            }
            
            case 'b': {
                double cc, ff;
                cout << "\n-Enter the temperature in Farenheit: ";
                cin >> ff;
                cc=(ff-32)/1.8;
                cout << "-The result in Celsius is: " << cc;
                break;
            }
            
            case 'c': {
                double k, ccc;
                cout << "\n-Enter the temperature in Kelvin: ";
                cin >> k;
                ccc = k-273.15;
                cout << "-The result in Celsius is: " << ccc; 
                break;
            }
            
            case 'd': {
                double fff, kk;
                cout << "\n-Enter the temperature in Kelvin: ";
                cin >> kk;
                fff=kk*9/5-459.67;
                cout << "-The result in Farenheit is: " << fff;
                break;
            }
            
            case 'e': {
                double cccc, kkk;
                cout << "\n-Enter the temperature in Celsius: ";
                cin >> cccc;
                kkk=cccc+273.15;
                cout << "-The result in Kelvin is: " << kkk;
                break;
            }

            case 'f': {
                double ffff, kkkk;
                cout << "\n-Enter the temperature in Farenheit: ";
                cin >> ffff;
                kkkk=(ffff+459.67)*5/9;
                cout << "-The result in Kelvin is: " << kkkk;
                break;
            }

            default: 
                cout << "Invalid option: " << escolha;
            break;

        }

        cout << "\n\n-Return to the menu[Y/n]: ";
        cin >> opc;

    while (std::tolower(opc) != 'y');
    
    return 0;
}
