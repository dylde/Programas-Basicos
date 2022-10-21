#include <iostream>
using namespace std;
main(){
int opcion;
float a=1;
float b=1;
float c;
cout << "Que operacion desea realizar Suma [1] Resta [2] Multiplicacion [3] Division [4]." << endl;
cin >> opcion;
if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4 )
{
exit(EXIT_FAILURE); 

}
cout << "Ingrese un numero: ";
cin >> a;
cout << "Ingrese otro numero: ";
cin >> b;

if (opcion==1){

    c = a+b;
    cout<<"El resultado de la suma es: ";
}
if (opcion==2){

    c = a-b;
    cout<<"El resultado de la resta es: ";
}

if (opcion==3){

    c = a*b;
    cout<<"El resultado de la multiplicacion es: ";
}

if (opcion==4){

    c = a/b;
    cout<<"El resultado de la division es: ";
}


cout <<c;


}
		

	

