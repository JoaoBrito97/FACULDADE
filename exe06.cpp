#include<iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int hora;
	cout<<"QUE HORAS SÃO? ";
	cin>>hora;
	if(hora >= 6 and hora <= 18){
		cout<<"BOM DIA!";
	}else{
		cout<<"BOA NOITE!";		
	}
}
