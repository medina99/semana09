#include <iostream>
#include <string>
#include <vector> 
using namespace std;
class CAlumno
{
    private:
        string nombre, apellido, id;
        int edad;
    public:
        CAlumno(string  pnombre, string papellido, string pid, int pedad)
        {
            nombre = pnombre;
            apellido = papellido;
            id = pid;
            edad = pedad;
        }
        CAlumno()
        {
            nombre = "";
            apellido = "";
            id = "";
            edad = 0;
        }
        ~CAlumno()
        {
            edad = 0;
        }
    
        string getNombre() {return nombre;}
        string getApellido(){return apellido;}
        string getId(){return id;}
        int getEdad(){return edad;}
        void setNombre(string value){nombre= value;}
        void setApellido(string value){apellido = value;}
        void setId(string value){id = value;}
        void setEdad (int value){edad = value;}
};

int main ()
{
  CAlumno pepito("pepe", "quevedo", "2", 65);
  cout << pepito.getNombre() << " " << pepito.getApellido() << endl;
  return 0;
}