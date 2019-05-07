/*
Nama			: Meira Dwiana Anjani
NPM				: 140810180015
Kelas			: A
Tanggal Buat	: 7 Mei 2019
Nama Program	: Exercise 1 Praktikum Strukdat
*/

#include<iostream>
using namespace std;

const int maxElement = 255;

struct Stack {
	char isi[maxElement];
	int TOP;
};
Stack S;

void createStack (Stack& S){
	S.TOP = -1;
}

void push(Stack& S, char elementBaru) {
	if (S.TOP == maxElement-1){
		cout<<"Tumpukan sudah penuh "<<endl;
	}
	
 	else{
		S.TOP=S.TOP + 1;
		S.isi[S.TOP] = elementBaru;
	}
}

void pop (Stack& S) {
	while(S.TOP != -1){
    	cout<<S.isi[S.TOP]<<" ";
    	S.TOP--;
	}
}

int main(){
	char elementBaru;
	int x;
	
	createStack(S);
	cout << "-----PROGRAM REVERSE HURUF-----"<<endl;
	cout<<"Banyaknya Huruf yg di Reverse : ";cin>>x;
	x--; 
 	
	for(int i=0; i<=x; i++){
		cout<<"Input : ";
		cin>>elementBaru;
		push(S, elementBaru);
	}
 	
	cout<<"Output : ";
	pop (S);
}
