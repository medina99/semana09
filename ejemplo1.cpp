#include <iostream>
#include <string>
#include <vector> 
using namespace std;
struct TAlumno
{
    string nombre, apellido, id;
    int edad;
    void hablar ()
    {
        cout <<"mi nombre es: " << nombre << " " << apellido << endl;
    }
};
int main ()
{
    int x =0;
    int y;
    y=10;
    TAlumno luan = {"luan", "dañino", "71589695", 19};
    TAlumno jaimito;
    jaimito.nombre ="jaimito";
    jaimito.apellido ="quevedo";
    jaimito.id ="71569482";
    jaimito.edad =70;
    luan.hablar();
    jaimito.hablar();
    return 0;
}