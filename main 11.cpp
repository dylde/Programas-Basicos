#include <iostream>
using namespace std;
main() {
cout<<"Ingrese un numero entero positivo: \n";
int numero;
string binario ="";
cin>> numero;
if(numero>0) {
while(numero>0) {
if(numero%2==0) {
 binario = "0"+binario;
}else{
 binario = "1"+binario;
}
numero= (int) numero/2;
}
}else if (numero == 0) {
binario ="0";
}else{
binario= "No se puede realizar la conversión. Ingrese solo numeros positivos";
}
cout<<"El resultado de la conversion es: " <<binario<<endl;

system("pause");	
}