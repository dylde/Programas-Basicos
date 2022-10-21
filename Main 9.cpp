#include <iostream>
using namespace std;
main() {
int inicio=0,fin=0,res=0;
 cout<<"Ingrese la tabla inicial:";
 cin>>inicio; //1
 cout<<"Ingrese la tabla final:";
 cin>>fin; // 10
 
 for (int tabla=inicio;tabla<=fin;tabla++){
 	cout<<"Esta es la Tabla del "<<tabla<<endl;
 	for (int i=1;i<=10;i++){
 	res = tabla*i;
 	cout<<tabla<< " X "<<i<<" = "<<res<<endl;
 	
 }
 	
 }


	system("pause");
}