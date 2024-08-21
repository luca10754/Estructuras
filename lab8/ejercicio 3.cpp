#include <iostream>
#include <string>
#include <string.h>
using namespace std;
struct product
{
    int id;
    string name;
    char description[100];
    float price;
    int quantity;
};

int main(int argc, char const *argv[])
{
    cout << "enter product: " << endl;
    struct product p1;
    cout <<"enter id" << endl;
    cin >> p1.id;
    cin.ignore();
    cout << "enter name" << endl;
    getline(cin, p1.name);
    cout << "enter description" << endl;
    cin.getline(p1.description, 100);
    cout << "enter price" << endl;
    cin >> p1.price;
    cout << "enter quantity" << endl;
    cin >> p1.quantity;
    cout << p1.id << endl;
    cout << p1.name << endl;
    cout << p1.description << endl;
    cout << p1.price << endl;
    cout << p1.quantity << endl;
    cout << "------------------" << endl;
    return 0;
}


    /*
    cout << "enter product: " << endl;
    struct product p1;
    cout <<"enter id" << endl;
    cin >> p1.id;
    cout << "enter name" << endl;
    getline(cin, p1.name);
    cout << "enter description" << endl;
    cin.getline(p1.description, 100);
    cout << "enter price" << endl;
    cin >> p1.price;
    cout << "enter quantity" << endl;
    cin >> p1.quantity;
    cout << p1.id << endl;
    cout << p1.name << endl;
    cout << p1.description << endl;
    cout << p1.price << endl;
    cout << p1.quantity << endl;
    cout << "------------------" << endl;
    */
    
    // 2-no funciona
