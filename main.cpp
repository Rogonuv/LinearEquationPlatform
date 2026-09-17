#include <chrono>
#include <fstream>
#include <iostream>
using namespace std;


int main() 
{
  auto inicio = chrono::steady_clock::now();
  int intentos = 0;
  char variable = 'x';
  char igual = '=';
  char menos = '-';
  int coef;
  int numero1;
  int numero2;
  char dividir = '/';
  numero2 = rand() % 100 + 1;
  numero1 = rand() % 10 + 1;
  coef = rand() % 5 + 1;
  char variable2 = 'x';
  char igual2 = '=';
  char menos2 = '-';
  int coef2 = coef;
  int numero3 = numero1;
  int numero4 = numero2;
  double resultado = numero2 - numero1;
  double resultado2 = resultado;
  double resultado3 = resultado / coef;
  double resultado4 = resultado3;
  cout << "Despeje la variable: " << coef << variable << " + " << numero1 << " " << igual << " " << numero2 << endl;
  cin >> coef >> variable >> igual >> numero2 >> menos >> numero1;
  intentos++; 
  while (true) // Loop until the user provides the correct answer
  { 
    if (coef == coef2 && variable == variable2 && igual == igual2 && numero2 == numero4 && menos == menos2 && numero1 == numero3) 
    {
     cout << "Correcto!" << endl; 
     break;
    }
    else 
    {
     cout << "Incorrecto, debe despejar la variable" << endl;
     cin >> coef >> variable >> igual >> numero2 >> menos >> numero1;
    }
    intentos++;
  }

  cout << "Ejecute la resta" << endl;
  cin >> coef >> variable >> igual >> resultado;
    while (true) // Loop until the user provides the correct answer
  { 
    if (coef == coef2 && variable == variable2 && igual == igual2 && resultado == resultado2) 
    {
     cout << "Correcto!" << endl; 
     break;
    }
    else 
    {
     cout << "Incorrecto, debe ejecutar la resta" << endl;
     cin >> coef >> variable >> igual >> resultado;
    }
    intentos++;
  }
  cout << "Pase a dividir el coeficiente" << endl;
  cin >> variable >> igual >> resultado >> dividir >> coef;
    while (true) // Loop until the user provides the correct answer
  { 
    if (variable == variable2 && igual == igual2 && resultado == resultado2 && dividir == '/' && coef == coef2) 
    {
     cout << "Correcto!" << endl; 
     break;
    }
    else 
    {
     cout << "Incorrecto, debe despejar la variable" << endl;
     cin >> variable >> igual >> resultado >> dividir >> coef;
    }
    intentos++;
  }
  cout << "Ejecute la division" << endl;
  cin >> variable >> igual >> resultado3;
    while (true) // Loop until the user provides the correct answer
  { 
    if (variable == variable2 && igual == igual2 && resultado3 == resultado4) 
    {
     cout << "Correcto!" << endl; 
     break;
    }
    else 
    {
     cout << "Incorrecto, debe ejecutar la division" << endl;
     cin >> variable >> igual >> resultado3;
    }
    intentos++;
  }
  auto final = chrono::steady_clock::now();
  auto duracion = chrono::duration_cast<chrono::seconds>(final - inicio).count();
  cout << "¡Felicidades! Has completado el juego." << endl;
  cout << intentos << endl;
  cout << "Tiempo transcurrido: " << duracion << " segundos" << endl;
  fstream archivo("resultados.txt", ios::app);
  archivo << "Intentos: " << intentos << endl;
  archivo << "Tiempo transcurrido: " << duracion << " segundos" << endl;
  archivo.close();
  return 0;
}