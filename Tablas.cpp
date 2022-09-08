//Programa 04/05/21
//Castillo Padrón Stefany Joana

#include<iostream>
using namespace std;
int main ()
//BLUCLE
{
	int num=0;
	int opc = 0;
	do{
		
		cout<<"Por favor teclee el numero que desee entre el 1 y 10: "<<endl;;
		cin>>num;
		if(num>=1 && num<=10)
		{
			for (int i=1; i<=10;i++)
			{
				int tabla= i*num;
				cout<<num;
				cout<<" x ";
				cout<<i;
				cout<<" = ";
				cout<<tabla<<endl;
			}
			cout<<"¿Desea volver y teclear un nuevo digito? (1. SI / 2. NO): ";
			cin>>opc;
			//system("cls");
		}
		else{
			cout<<"NUMERO INTRODUCIDO INVALIDO, POR FAVOR TECLEE UN DIGITO QUE SE ENCUENTRE ENTRE EL 1 Y 10"<<endl;
		}
	}while(opc==1);
}
	
