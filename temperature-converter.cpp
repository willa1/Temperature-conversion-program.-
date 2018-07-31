//Thanks Artur Paiva.
//I had already made use of the "switch case" before, but did not know how to loop with the "do while".
#include <iostream>
#include <cctype>
using namespace std;
int main(){

  int escolha;
  char opc;

  do{
        printf("\033[H\033[J"); // Clear the screen

    cout << "Made by Willa Cantanhede P. de Brito\n";
    cout << "\n- [1-> Celsius to Fahrenheit]\n- [2-> Fahrenheit to Celsius]\n- [3-> Kelvin to Celsius]\n- [4-> Kelvin to Fahrenheit]\n- [5-> Celsius to Kelvin]\n- [6-> Fahrenheit to Kelvin]";
    cout << "\n-> Please choose only one option: ";
      cin >> escolha;

    switch (std::tolower(escolha)){
      case 1:{
        double c, f;
        cout << "\n-Enter the temperature in Celsius: ";
          cin >> c;
          f=(1.8*c)+32;
        cout << "-The result in Fahrenheit is: " << f;
        break;
      }
      case 2:{
        double cc, ff;
        cout << "\n-Enter the temperature in Farenheit: ";
          cin >> ff;
          cc=(ff-32)/1.8;
        cout << "-The result in Celsius is: " << cc;
        break;
      }
      case 3:{
        double k, ccc;
        cout << "\n-Enter the temperature in Kelvin: ";
          cin >> k;
          ccc=k-273.15;
        cout << "-The result in Celsius is: " << ccc;
        break;
      }
      case 4:{
        double fff, kk;
        cout << "\n-Enter the temperature in Kelvin: ";
          cin >> kk;
          fff=kk*9/5-459.67;
        cout << "-The result in Farenheit is: " << fff;
        break;
      }
      case 5:{
        double cccc, kkk;
        cout << "\n-Enter the temperature in Celsius: ";
          cin >> cccc;
          kkk=cccc+273.15;
        cout << "-The result in Kelvin is: " << kkk;
        break;
      }
      case 6:{
        double ffff, kkkk;
        cout << "\n-Enter the temperature in Farenheit: ";
          cin >> ffff;
          kkkk=(ffff+459.67)*5/9;
        cout << "-The result in Kelvin is: " << kkkk;
        break;
      }
      default:
        cout << "\nInvalid option: " << escolha;
        break;
    }

      cout << "\n\n-Return to the menu[Y/n]: ";
        cin >> opc;
      }while (std::tolower(opc) == 'y');


  return 0;
}
