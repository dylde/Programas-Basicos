#include <iostream>
using namespace std;
main(){
int opcion;
float a;
float b;
cout << "Que operacion desea realizar Km a Millas [1] Metros a Pulgadas [2] Libras a Kilos [3] Kilos a Libras [4]." << endl;
cin >> opcion;
if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4 )
{
exit(EXIT_FAILURE); 

}
cout << "Ingrese una cantidad: ";
cin >> a;
if (opcion==1){

    b = a*0.62;
    cout<<"El resultado en millas es: ";
}
if (opcion==2){

    b = a*39.37;
    cout<<"El resultado en pulgadas es: ";
}

if (opcion==3){

    b = a*0.45;
    cout<<"El resultado en kilos es: ";
}

if (opcion==4){

    b = a*2.21;
    cout<<"El resultado en libras es: ";
}


cout <<b;


}
	
