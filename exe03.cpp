#include<iostream>

using namespace std;

int main(){
	//Receba um n�mero qualquer e informe se ele � par ou �mpar
	int num;
	cout<<"DIGITE UM N�MERO: ";
	cin>>num;
	if (num % 2 == 0){
		cout<<num<<" � PAR";
	}else{
		cout<<num<<" � �MPAR";
	}
}
