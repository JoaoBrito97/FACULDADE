#include<iostream>

using namespace std;

int main(){
	// Receba um n�mero qualquer e informe se ele � positivo ou negativo.
	int num;
	cout<<"DIGITE UM N�MERO: ";
	cin>>num;
	if (num<0){
		cout<<num<<" NEGATIVO";
	}else{
		cout<<num<<" POSITIVO";
	}
}
