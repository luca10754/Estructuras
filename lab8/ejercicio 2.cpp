#include <iostream>
#include <string>
#include <string.h>
using namespace std;
struct person
{
    char name[50];
    int age;
};

struct filming
{
    char place[50];
    float budget;
};

struct movie
{
    struct person director;
    struct person actor1;
    struct person actor2;
    struct filming location;
};
int main(int argc, char const *argv[])
{
    struct person p[10];
    strcpy(p[0].name, "Juan");
    p[0].age = 20;
    cout << p[0].name << endl;
    cout << p[0].age << endl;


    struct filming f[10];
    strcpy(f[0].place, "New York");
    f[0].budget = 1000;
    cout << f[0].place << endl;
    cout << f[0].budget << endl;


    struct movie m[10];
    strcpy(m[0].director.name, "Pedro");
    cout<<m[0].director.name<<endl;
    strcpy(m[0].actor1.name, "Maria");
    cout<<m[0].actor1.name<<endl;
    strcpy(m[0].actor2.name, "Jose");
    cout<<m[0].actor2.name<<endl;
    strcpy(m[0].location.place, "Chicago");
    cout<<m[0].location.place<<endl;

    // la opcion 4 es la correcta:"todas las anteriores son falsas"
    
    return 0;
}
