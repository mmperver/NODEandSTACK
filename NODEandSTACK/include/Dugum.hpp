/**
@file  Dugum.hpp
@description Bu hpp de dugum sınıfını oluşturdum ek olarak stack sınıfından yararlanacağım için stack.hppyi include ettim
@course  2. Öğretim  C Şubesi   
@assignment  2. ÖDEV  ‎
@date  4 ‎Aralık ‎2018 ‎Dün, ‏‎14:58:09
@author  Mücahit Mustafa Perver mail= mustiperver@gmail.com   */ 


#ifndef DUGUM_HPP
#define DUGUM_HPP

#include "Stack.HPP"


class Dugum{
	
	public:
	int veri;
	
	Dugum *ileri;
	Dugum *geri;
	
	Dugum(int veri, Dugum *ileri , Dugum *geri);
	
	Stack stack;
	
	
};

#endif