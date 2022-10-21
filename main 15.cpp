#include <iostream>
using namespace std;
 
main() {
int saldo_inicial= 1000,opc;
float extra, saldo = 0, retiro;

cout<<"\Bienvenido a su Cajero Virtual"<<endl;
cout<<"1. Ingresar dinero en cuenta"<<endl;
cout<<"2. Retirar dinero de la cuenta"<<endl;
cout<<"3. Salir"<<endl;
cout<<"Opcion: "<<endl;
cin>> opc;

switch(opc){
	case 1:
		cout<<"Digite la cantidad de dinero a ingresar: "<<endl;
		cin>>extra;
		saldo = saldo_inicial + extra;
		cout<<"Dinero en cuenta: "<<saldo<<endl;break;
		
	case 2:
		cout<<"Digite la cantidad de dinero a ingresar: "<<endl;
		cin>>retiro;
		
		if(retiro> saldo_inicial){
			cout<<"No tiene esa cantidad de dinero "<<endl;
		}
		else{
			saldo= saldo_inicial-retiro;
			cout<<"Dinero en cuenta: "<<saldo;
		}
	case 3: break;
}





system("pause");
}