#include <iostream>
#include <conio.h>
using namespace std;
int arreglo[]={9,8,7,6,5,4,3,2,11,20};
int *x;
int main()
{
	for(int i=0; i<10; i++)
	{
		x=&arreglo[i];
		cout<<"\n";
		cout<<"Arreglo direccion: "<<x<<endl;
		cout<<"Arreglo valor: "<<*x<<"\n";
	}
	getch();
	return 0;
}
