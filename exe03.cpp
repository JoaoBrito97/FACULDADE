#include<iostream>

using namespace std;

int main(){
	//Receba um número qualquer e informe se ele é par ou ímpar
	int num;
	cout<<"DIGITE UM NÚMERO: ";
	cin>>num;
	if (num % 2 == 0){
		cout<<num<<" É PAR";
	}else{
		cout<<num<<" É ÍMPAR";
	}
}
