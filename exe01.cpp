#include<iostream>

using namespace std;

int main(){
	int num, quadrado;
	setlocale(LC_ALL, "pt");
	cout<<"DIGITE UM N�MERO QUALQUER: ";
	cin>>num;
	quadrado = num * num;
	if(quadrado >= 25){
		cout<<num<<" � MAIOR QUE "<<quadrado;
	}else{
		cout<<"\n"<<quadrado<<" � MENOR QUE "<<quadrado;
	}
}

