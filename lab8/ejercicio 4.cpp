#include <iostream>
#include <string>
#include <string.h>
using namespace std;

/*Te piden que realices un programa para la gestion de una biblioteca. Los datos de los libros son los siguiente:

título
autor
ISBN (cadena de 17 caracteres)
prestado (true/false)
Escribir el programa en C++ que:

Defina una estructura para almacenar los datos de cualquier libro.
Ingresa los datos de 2 libros por teclado y almacenarlos en un arreglo
Verificar que los datos ingresados no representan ejemplares de un mismo tipo
Imprimir los datos por pantalla
Nota
Utilizar funciones para todas las operaciones
*/

//  
struct Libro
{
    string titulo;
    string autor;
    string ISBN;
    bool prestado;
};
 // Función para ingresar datos de un libro
 void ingresarDatos(Libro &libro) 
{
    cout << "Ingrese el titulo del libro: ";
    getline(cin, libro.titulo);
    cout << "Ingrese el autor del libro: ";
    getline(cin, libro.autor);
    cout << "Ingrese el ISBN del libro: ";
    getline(cin, libro.ISBN);
    cout << "Ingrese el estado del libro (0 para no prestado, 1 para prestado): ";
    int estado;
    cin >> estado;
    libro.prestado = (estado == 1);
    cin.ignore(); // Limpiar el buffer de entrada
} 
// Función para imprimir los datos de un libro 
 void imprimirDatos(const Libro &libro)
{
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "ISBN: " << libro.ISBN << endl;
    cout << "Estado: " << (libro.prestado ? "Prestado" : "Disponible") << endl;
}
int main()
{
    Libro libros[2];
    for (int i = 0; i < 2; i++) // Ingresar datos de los libros
    {
        cout << "Ingrese los datos del libro " << i + 1 << ":" << endl;
        ingresarDatos(libros[i]);
    }
    cout<<endl;
    cout << "Datos de los libros:" << endl;
    cout<<endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Libro " << i + 1 << ":" << endl;
        imprimirDatos(libros[i]);
        cout << endl;
    }
    return 0;
}