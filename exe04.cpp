#include<iostream>

using namespace std;

int main(){
	// Receba um número qualquer e informe se ele é positivo ou negativo.
	int num;
	cout<<"DIGITE UM NÚMERO: ";
	cin>>num;
	if (num<0){
		cout<<num<<" NEGATIVO";
	}else{
		cout<<num<<" POSITIVO";
	}
}
