//*escriba un numero se 4 para arriba
#include <iostream>
using namespace std;
main(){
int n;
cin>>n;
cout<<"---------Cuadro--------"<<endl;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cout<<"& ";
	}
	cout<<endl;
}
cout<<"---------Cuadro Contorno--------"<<endl<<endl;
for(int j=0;j<n;j++)
	{
		cout<<"& ";
	}
	cout<<endl;
for(int i=0;i<(n-2);i++)
{
	cout<<"& ";
	for(int j=0;j<(n-2);j++)
	{
		cout<<"  ";
	}
	cout<<"&"<<endl;
}
for(int j=0;j<n;j++)
	{
		cout<<"& ";
	}
 cout<<endl;
 cout<<"---------Triangulo--------"<<endl<<endl;
for(int i=0;i<n;i++)
{

	for(int j=i;j<n;j++)
	{
		cout<<" ";
	}
		for(int j=0;j<=i;j++)
	{
		cout<<"& ";
	}

		cout<<endl;
	}
cout<<endl;
cout<<"---------Flecha--------"<<endl<<endl;
for(int i=0;i<n;i++)
{

	for(int j=i;j<n;j++)
	{
		cout<<" ";
	}
		for(int j=0;j<=i;j++)
	{
		cout<<"& ";
	}

		cout<<endl;
	}
	for(int i=0;i<n;i++)
{

	for(int j=0;j<(n*2)/3;j++)
	{
		cout<<" ";
	}
		for(int j=0;j<=((n*2)/3)+1;j++)
	{
		cout<<"&";
	}

		cout<<endl;
	}
	 cout<<endl;
cout<<"---------Rombo--------"<<endl<<endl;
for(int i=0;i<n;i++)
{

	for(int j=i;j<n;j++)
	{
		cout<<" ";
	}
		for(int j=0;j<=i;j++)
	{
		cout<<"& ";
	}

		cout<<endl;
	}
	for(int i=1;i<n;i++)
{

		for(int j=0;j<=i;j++)
	{
		cout<<" ";
	}
		for(int j=i;j<n;j++)
	{
		cout<<"& ";
	}

		cout<<endl;
	}
cout<<endl;
cout<<"---------Rombo Contorno--------"<<endl<<endl;
for(int i=0;i<n;i++)
{

	for(int j=i;j<n;j++)
	{
		cout<<" ";
	}
	    if(i>0)cout<<"*";
		for(int j=0;j<(i*2)-1;j++)
	{
		cout<<" ";
	}
        cout<<"*";
		cout<<endl;
	}
	for(int i=1;i<n;i++)
{

		for(int j=0;j<=i;j++)
	{
		cout<<" ";
	}
	    cout<<"*";
		for(int j=i;j<((n*2)-i-3);j++)
	{
		cout<<" ";
	}
        if(i<n-1)cout<<"*";
		cout<<endl;
	}





	system("pause");
}