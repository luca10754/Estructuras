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
    struct product p[10];
    p[0].id = 1;
    p[0].name = "papotico";
    strcpy(p[0].description, "papelito");
    p[0].price = 50000;
    p[0].quantity = 10;
    cout << p[0].id << endl;
    cout << p[0].name << endl;
    cout << p[0].description << endl;
    cout << p[0].price << endl;
    cout << p[0].quantity << endl;

    return 0;
}
