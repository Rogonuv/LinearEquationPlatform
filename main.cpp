#include <chrono>
#include <fstream>
#include <iostream>
using namespace std;


int main() 
{
  ofstream archivo("registro.txt", ios::app);
  auto inicio = chrono::steady_clock::now();
  int intentos = 0;
  int codigo;
 cout << "SISTEMA DE ACCESO" << endl;
 cout << "Ingrese el codigo de acceso" << endl;
  cin >> codigo;
  intentos++;
  while (codigo != 2468)
  {
    cout << "Codigo incorrecto." << endl;
    cout << "Ingrese el codigo de acceso" << endl;
    cin >> codigo;
    intentos++;
  }
  auto fin = chrono::steady_clock::now();
  auto duration = chrono::duration_cast<chrono::seconds>(fin - inicio);
 cout << "Acceso correcto." << endl;
 cout << "Intentos: " << intentos << endl;
 cout << "Tiempo utilizado: " << duration.count() << " segundos." << endl;
 archivo << "Intentos: " << intentos << endl;
 archivo << "Tiempo utilizado: " << duration.count() << " segundos." << endl;
 archivo.close();

  return 0;
}