/*
Nama			: Meira Dwiana Anjani
NPM				: 140810180015
Kelas			: A
Tanggal Buat	: 7 Mei 2019
Nama Program	: Exercise 2 Praktikum Strukdat
*/

#include<iostream>
using namespace std;

struct Stack{
	char x;
	Stack* next;
};
  
typedef Stack* pointer;
typedef pointer list;

void createList (list& Top){
	Top=NULL;
}

void createElement(pointer& pBaru){
	pBaru=new Stack;
	cin>>pBaru->x;
}

void push(list& Top,pointer pBaru){
	if(Top==NULL){
		Top=pBaru;
	}
	else {
		pBaru->next=Top;	
		Top=pBaru;
	}
}

void pop(list& Top){
	pointer pHapus;
	cout << Top->x;
	if(Top->next==NULL){
		Top=NULL;
	}
	else {
		pHapus=Top;
		Top=Top->next;
		pHapus->next=NULL;
	}
}

int main(){
	int x;
	pointer pBaru;
	list Top;
	cout << "-----PROGRAM REVERSE HURUF-----"<<endl;
	cout << "Banyaknya Huruf yg di Reverse : "; cin>>x;
	
	createList(Top);
	
	for (int i=0;i<x;i++){
    	cout<<"Input : ";
    	createElement(pBaru);
    	push(Top,pBaru);
    }
    
    cout << "Output : ";
	for (int i=0;i<x;i++){
    	pop(Top); cout << " " ;
	}	
   	
}

