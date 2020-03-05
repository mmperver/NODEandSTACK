/**
@file  Stack.hpp
@description Bu hpp de stack sınıfını oluşturdum her düğüme stack eklemek için eleman çekmek için bu sınıftan yararlanıcam  
@course  2. Öğretim  C Şubesi   
@assignment  2. ÖDEV  ‎
@date  ‎4 ‎Aralık ‎2018 ‎Dün, ‏‎15:00:40 
@author  Mücahit Mustafa Perver mail= mustiperver@gmail.com   */ 
 


#ifndef STACK_HPP
#define STACK_HPP

class Stack {
	private:
	int *elemanlar;
	int stackBasi;
	int elemanSayisi;
	int kapasite;
	bool dolumu();
	void YerAc(int boyut);
	
	public:
	Stack();
	bool isEmpty();
	void push(int eleman);
	void pop();
	int top();
	~Stack();
	int getElemansayisi();
	int setStackbasi();
	
};

#endif