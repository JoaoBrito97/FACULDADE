#include<iostream>

using namespace std;

int main(){
	//Receba o valor de um salário e informe se ele é maior ou menor do que o salário mínimo. Considere o valor de 1000,00 como sendo o mínimo. 
	int salario;
	cout<<"SEU SÁLARIO: ";
	cin>>salario;
	if (salario<=1000){
		cout<<salario<<" É MENOR";
		
	}else{
		cout<<salario<<" É MAIOR";
	}
}
