/**
@file  Liste.hpp
@description Bu hpp de LinkedList sınıfını oluşturdum düğüme veri ekleme ilk düğüme son düğüme erişme ve istenilenleri oluşturdum ek olarak düğüm sınıfından yararlanacağım için düğüm.hpp yi include ettim 
stack sınıfı düğümde include olduğu için etmeme gerek kalmadı
@course  2. Öğretim  C Şubesi   
@assignment  2. ÖDEV  ‎
@date  ‎4 ‎Aralık ‎2018 ‎Dün, ‏‎15:09:08
@author  Mücahit Mustafa Perver mail= mustiperver@gmail.com   */ 

#ifndef LISTE_HPP
#define LISTE_HPP

#include "Dugum.hpp"

class Liste
{
	private:
	Dugum *head;
	Dugum *tail;
	int elemansayisi=0;
	public:
	Liste();
	void SecimYazdir(int secim);
	void push_front(int veri);
	
	void Yaz();
	void StackYaz();
	void StackDugumYaz(int index);
	void Sola_Kaydir();
	void Saga_Kaydir();
	
	
	
};
#endif