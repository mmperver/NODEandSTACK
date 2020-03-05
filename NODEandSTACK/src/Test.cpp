/**
@file  Test.cpp
@description programı çalıştırmak için gerekli olan cppdir ve yaptığım işlemleri burada çağırdım burada yaptığım tek şey dosya okumadır diğer metotları liste sınıfından çağırdım ve programım bitmiş oldu.
@assignment  2. ÖDEV  ‎
@date  ‎4 ‎Aralık ‎2018 ‎, ‏‎15:16:43
@author  Mücahit Mustafa Perver mail= mustiperver@gmail.com   */ 

#include <cstdlib>
#include <iostream>
#include <fstream>


#include "Liste.hpp"



using namespace std;

Liste liste;




int main(int argc, char** argv) {
   
    
    
    ifstream dosyayolu("./src/Sayi.txt");
	int sayi;
	while(dosyayolu >> sayi)
	{
		liste.push_front(sayi);
	}
    int secim;
	liste.Yaz();
	liste.SecimYazdir(secim);
	
	
	
   
    return 0;
}