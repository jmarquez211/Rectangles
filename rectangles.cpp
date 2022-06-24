#include <iostream>
#include <string>

using namespace std;

const double Lx = 12.8;
const double Ly = 8;

int main(){

string a = "azul";
string r = "rojo"; //se definen dos strings indicando el color del rectangulo

string C_R1; // color del primer rectangulo
double VIR1[2]; // vertice inferior izquierdo del primer rectangulo
double LX_R1; // base del primer rectangulo
double LY_R1; // altura del segundo rectangulo

string C_R2; // color del segundo rectangulo
double VIR2[2]; // vertice inferior izquiero del segundo rectangulo
double LX_R2;  // base del segundo rectangulo
double LY_R2;  // altura del segundo rectangulo

// para el primer rectangulo

cout<<"Introduzca el color, rojo o azul, del primer rectangulo: ";
cin>>C_R1;
    if(C_R1!=a && C_R1!=r){
        cout<<"Color invalido, finaliza el programa.";
        return 0;
    }

cout<<"\nIntroduzca el vertice inferior izquierdo del rectangulo "<<C_R1 <<"\n";
cin >> VIR1[0]>> VIR1[1];
    if(VIR1[0]<0 || VIR1[1]<0 || VIR1[0]>Lx || VIR1[1]>Ly){
        cout<<"Vertice invalido, finaliza el programa.";
        return 0;
    }


cout<<"\nIntroduzca la base y la altura del rectangulo "<<C_R1<<":\n";
cin>>LX_R1>>LY_R1;

    if(LX_R1 + VIR1[0]>Lx || LY_R1 + VIR1[1]>Ly){//retorna error si los lados son iguales

        cout<<"No encaja, finaliza el programa.";

        return 0;
    }

    else if (LX_R1 == LY_R1){//retorna error si los lados son iguales
        cout << "\n Dimensiones iguales, no es un rectangulo.";
        return 0;
    }

    else if (LX_R1 + VIR1[0]<0 || LY_R1 + VIR1[1]<0){//retorna error si las longitudes son negativas
        cout << "\n Las dimensiones no son validas.";
        return 0;
    }

// para el segundo rectangulo


cout<<"\nIntroduzca el color del segundo rectangulo: ";
cin>>C_R2;

    if(C_R2==C_R1 || C_R2!=a && C_R2!=r){
    	   cout<<"Color invalido, finaliza el programa.";
       return 0;
}

cout<<"\nIntroduzca el vertice inferior izquierdo del segundo rectangulo "<<C_R2<<":\n";
cin>>VIR2[0]>>VIR2[1];
    if(VIR2[0]<0 || VIR2[1]<0 || VIR2[0]>Lx || VIR2[1]>Ly){
        cout<<"Vertice invalido, finaliza el programa";
        return 0;
    }

cout << "\nIntroduzca la base y la altura del segundo rectangulo "<<C_R2<<":\n";
cin >> LX_R2 >> LY_R2;

    if(LX_R2 + VIR2[0]>Lx || LY_R2 + VIR2[1]>Ly){
        cout<<"No encaja, finaliza el programa.";
        return 0;
    }

    else if (LX_R2 == LY_R2){
        cout << "\nDimensiones iguales, no es un rectangulo.";
        return 0;
    }

    else if (LX_R2 + VIR2[0]<0 || LY_R2 + VIR2[1]<0){
        cout << "\n Las dimensiones no son validas.";
        return 0;
    }

cout << "\nLa region limitrofe es de base " << Lx << " y altura " << Ly;
cout << "\n" << endl;

cout << "El primer rectangulo es de color " << C_R1 << " cuyo vertice es " << "("
<< VIR1[0] << "," << VIR1[1] << ")." <<" Sus dimensiones son " <<LX_R1<< " de base y " << LY_R1 << " de altura.";
cout << "\n" << endl;

cout << "El segundo rectangulo es de color " << C_R2 << " cuyo vertice es " << "("
<< VIR2[0] << "," << VIR2[1] << ")." <<" Sus dimensiones son " <<LX_R2<< " de base y " << LY_R2 << " de altura.";
cout << "\n" << endl;

cout <<"Ambos rectangulos estan contenidos en la region Lx - Ly." << endl;

    return 0;
}
