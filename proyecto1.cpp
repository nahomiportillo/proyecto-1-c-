#include <iostream>
#include <string>
#include <math.h>
using namespace std; 

int main(void){
    while(true){
        string nombre;
        cout << "porfavor ingrese el nombre del estudiante: " << endl;
        cin >> nombre;

        string notas[4]={
            "ingrese la nota_1: ",
            "ingrese la nota_2: ",
            "ingrese la nota_3: ",
            "ingrese la nota_4: "
        };
        
        int suma = 0;
        int cal[4];
       
        for (int j = 0; j < 4; j++){
        cout << notas[j];
        cin >> cal[j];
        };
    
        cout << "el promedio de " << nombre << " es: " << (cal[0]+cal[1]+cal[2]+cal[3])/4 << endl; 
        
    }
}