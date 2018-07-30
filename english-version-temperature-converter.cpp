#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){

  char escolha;
  char opc;

  inicio:
  system("clear");

    cout << "Made by Willa Cantanhede P. de Brito\n";
    cout << "\n- [A-> Celsius to Fahrenheit]\n- [B-> Fahrenheit to Celsius]\n- [C-> Kelvin to Celsius]\n- [D-> Kelvin to Fahrenheit]\n- [E-> Celsius to Kelvin]\n- [F-> Fahrenheit to Kelvin]";
    cout << "\n-> Please choose only one option: ";
      cin >> escolha;

      if(escolha=='A' || escolha=='a'){
        double c, f;
          cout << "\n-Enter the temperature in Celsius: ";
            cin >> c;
            f=(1.8*c)+32;
          cout << "-The result in Fahrenheit is: " << f;

    }else if(escolha=='B' || escolha=='b'){
        double cc, ff;
          cout << "\n-Enter the temperature in Farenheit: ";
            cin >> ff;
            cc=(ff-32)/1.8;
          cout << "-The result in Celsius is: " << cc;

    }else if(escolha=='C' || escolha=='c'){
        double k, ccc;
          cout << "\n-Enter the temperature in Kelvin: ";
            cin >> k;
            ccc=k-273.15;
            cout << "-The result in Celsius is: " << ccc;

    }else if(escolha=='D' || escolha=='d'){
      double fff, kk;
        cout << "\n-Enter the temperature in Kelvin: ";
          cin >> kk;
          fff=kk*9/5-459.67;
          cout << "-The result in Farenheit is: " << fff;

    }else if(escolha=='E' || escolha=='e'){
      double cccc, kkk;
        cout << "\n-Enter the temperature in Celsius: ";
          cin >> cccc;
          kkk=cccc+273.15;
          cout << "-The result in Kelvin is: " << kkk;

    }else if(escolha=='F' || escolha=='f'){
      double ffff, kkkk;
        cout << "\n-Enter the temperature in Farenheit: ";
          cin >> ffff;
          kkkk=(ffff+459.67)*5/9;
          cout << "-The result in Kelvin is: " << kkkk;

    }

      cout << "\n\n-Return to the menu[Y/n]: ";
        cin >> opc;
        if(opc=='Y' || opc=='y'){
          goto inicio;
        }

  return 0;
}
