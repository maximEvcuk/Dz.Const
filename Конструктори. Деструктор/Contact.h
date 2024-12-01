#pragma once

#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>

class Contact {
private:
	//Масив телефону
	char phone[15]; 
	//Масив міста 
	char city[30];
	//Масив країни
	char country[30];

public:
	//Конструктор 
	Contact(const char* phone, const char* city, const char* country);

	//Виведення інформації про контакт 
	void Show() const;
};

#endif // CONTACT_H
