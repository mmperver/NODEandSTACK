/**
@file  Stack.cpp
@description Düğümlere stack oluşturmak için stack sınıfından yardım alarak gerekli metotları oluşturdum stack dolumu stack boşmu stacke eleman ekleme , stackteki elemanları gösterme , stackbasindaki elemanı gösterme
 gibi işlemleri yaptım
@course  2. Öğretim  C Şubesi   
@assignment  2. ÖDEV  ‎
@date  ‎4 ‎Aralık ‎2018 , ‏‎15:16:43
@author  Mücahit Mustafa Perver mail= mustiperver@gmail.com   */ 

#include <iostream>
#include "Stack.hpp"

using namespace std;

bool Stack::dolumu()
{
	return elemanSayisi==kapasite;
}
void Stack::YerAc(int boyut)
{
	int *temp = new int[boyut];
	for(int i=0; i<elemanSayisi;i++)
	{
		temp[i]=elemanlar[i];
	}
	if(elemanlar != NULL)
		delete [] elemanlar;
	elemanlar=temp;
	kapasite=boyut;
}

Stack::Stack()
{
	elemanlar=NULL;
	stackBasi=-1;
	elemanSayisi=0;
	kapasite=0;
}

bool Stack::isEmpty()
{
	return stackBasi==-1;
}

void Stack::push(int eleman)
{
	if(dolumu())
	  YerAc(max(1,2*kapasite));
  stackBasi++;
  elemanlar[stackBasi]=eleman;
  elemanSayisi++;
}

void Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Eleman Yok ";
		return;
	}
	stackBasi--;
	
}
int Stack::top()
{
	if(isEmpty())
	{
		cout<<"Eleman Yok";
		return 0;
	}
	return elemanlar[stackBasi];
}

int Stack::getElemansayisi()
{
	return elemanSayisi;
}

int Stack::setStackbasi()
{
	stackBasi=elemanSayisi-1;
}
Stack::~Stack()
{
	if(elemanlar != NULL)
		delete[] elemanlar;
	
	elemanlar=NULL;
}
