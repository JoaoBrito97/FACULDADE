#include<iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int hora;
	cout<<"QUE HORAS S�O? ";
	cin>>hora;
	if(hora >= 6 and hora <= 18){
		cout<<"BOM DIA!";
	}else{
		cout<<"BOA NOITE!";		
	}
}
