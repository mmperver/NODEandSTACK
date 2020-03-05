/**
@file  Liste.cpp
@description Liste işlemlerini yapmak için liste.hpp den yararlandım ,düğüm oluşturma düğümlere veri ekleme işlemleri bizden istenilen sağa sola kaydırma işlemlerini , düğümdeki durumları ve tüm durumları gösterme işlemlerini bu cpp de yaptım ve secimyazdır metodunuda burada yazdım.
@course  2. Öğretim  C Şubesi   
@assignment  2. ÖDEV  ‎
@date  ‎4 ‎Aralık ‎2018 , ‏‎15:16:43
@author  Mücahit Mustafa Perver mail= mustiperver@gmail.com   */ 


#include <iostream>
#include "Liste.hpp"

using namespace std;

Liste::Liste()
{
	head = NULL;
	tail = NULL;
}

void Liste::push_front(int veri)
{
	Dugum *yeni = new Dugum(veri , NULL , NULL );
	if(head==NULL)
	{
		head=yeni;
		tail=yeni;
		head->stack.push(head->veri);
		
	}
	else{
		head->geri=yeni;
		yeni->ileri=head;
		tail->ileri=yeni;
		yeni->geri=tail;
		tail=yeni;
		tail->stack.push(tail->veri);
	}
	elemansayisi++;
}



void Liste::Sola_Kaydir()
{
	Dugum *temp2=tail;
	
	Dugum *temp=head;
	int tempveri=tail->veri;
	for(int i=0;i<elemansayisi-1;i++)
	{
		temp->geri->veri=temp->veri;
		temp->geri->stack.push(temp->veri);
		temp=temp->ileri;
	}
	tail->geri->veri=tempveri;
	tail->geri->stack.push(tempveri);
	
	Yaz();
}
void Liste::Saga_Kaydir()
{
	
	Dugum *temp=tail;
	int tempveri=tail->veri;
	for(int i=0;i<elemansayisi-1;i++)
	{
		
		temp->veri=temp->geri->veri;
		temp->stack.push(temp->geri->veri);
		temp=temp->geri;
	}
	head->veri=tempveri;
	head->stack.push(tempveri);
	Yaz();
}

void Liste::Yaz()
{
	Dugum *yeni=head;
	for(int i=0;i<elemansayisi;i++)
	{
		cout<<yeni->veri<<" ";
		yeni=yeni->ileri;
		
	}
	cout<<endl;
}

void Liste::StackYaz()
{
	Dugum *yeni = head;
	int stackEleman=0;
	for(int i=0;i<elemansayisi;i++)
	{
		cout<<yeni->veri<<"\t:\t";
		stackEleman=yeni->stack.getElemansayisi();
		
		for(int k=0; k<stackEleman ; k++)
		{
			cout<<yeni->stack.top()<<"\t";
			yeni->stack.pop();
		}
		yeni->stack.setStackbasi();
		yeni=yeni->ileri;
		cout<<endl;
		
	}
	cout<<endl;
}

void Liste::StackDugumYaz(int index)
{
	int sira=1;
	
	Dugum *temp = head;
	
	while(temp != NULL)
	{
		if(sira==index)
			break;
		temp=temp->ileri;
		sira++;
	}
	
	int stackEleman=0;
	
	cout<<temp->veri<<"\t:\t";
	stackEleman=temp->stack.getElemansayisi();
	for(int i=0;i<stackEleman;i++)
	{
		cout<<temp->stack.top()<<"\t";
		temp->stack.pop();
	}
	temp->stack.setStackbasi();
	cout<<endl;
	
	cout<<endl;
	
	
}

void Liste::SecimYazdir(int secim)
{
	
	cout<<"1- Sola Hareket"<<endl;
	cout<<"2- Saga Hareket"<<endl;
	cout<<"3- Bir Dugumun Durumlarini Yazdir"<<endl;
	cout<<"4- Tum Durumlari Yazdir"<<endl;
	cout<<"5- Cikis"<<endl;
	cout<<"Seciminizi Giriniz : ";
        cin>>secim;
        if(secim==1)
		{
            Sola_Kaydir();
			cout<<endl;
			SecimYazdir(secim);
			
		}
        else if(secim==2)
		{
            Saga_Kaydir();
			cout<<endl;
			SecimYazdir(secim);
			
		}
        else if(secim==3)
        {
            int index=0;
            cout<<"Hangi Dugum ";
            cin>>index;
            StackDugumYaz(index);
			cout<<endl;
			SecimYazdir(secim);
			
        }
        else if(secim==4)
		{
            StackYaz();
			cout<<endl;
			SecimYazdir(secim);
			
		}
		
		
}


