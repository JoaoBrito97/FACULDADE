#include<iostream>

using namespace std;

int main(){
	int num, quadrado;
	setlocale(LC_ALL, "pt");
	cout<<"DIGITE UM NÚMERO QUALQUER: ";
	cin>>num;
	quadrado = num * num;
	if(quadrado >= 25){
		cout<<num<<" É MAIOR QUE "<<quadrado;
	}else{
		cout<<"\n"<<quadrado<<" É MENOR QUE "<<quadrado;
	}
}

