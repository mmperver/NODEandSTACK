/**
@file  Dugum.cpp
@description Düğüm oluşturmak için düğüm sınıfından yararlanarak gerekli metodu yazdım 
@course  2. Öğretim  C Şubesi   
@assignment  2. ÖDEV  ‎
@date  4 ‎Aralık ‎2018 , ‏‎15:16:43
@author  Mücahit Mustafa Perver mail= mustiperver@gmail.com   */ 

#include <iostream>
#include "Dugum.hpp"

using namespace std;

Dugum::Dugum(int veri, Dugum *ileri , Dugum *geri)
{
	this->veri=veri;
	this->ileri=ileri;
	this->geri=geri;
}