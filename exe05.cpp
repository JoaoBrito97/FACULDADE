#include<iostream>

using namespace std;

int main(){
	//Receba o valor de um sal�rio e informe se ele � maior ou menor do que o sal�rio m�nimo. Considere o valor de 1000,00 como sendo o m�nimo. 
	int salario;
	cout<<"SEU S�LARIO: ";
	cin>>salario;
	if (salario<=1000){
		cout<<salario<<" � MENOR";
		
	}else{
		cout<<salario<<" � MAIOR";
	}
}
