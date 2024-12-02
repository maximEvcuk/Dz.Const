#pragma once
#ifndef COLLEGE_H
#define COLLEGE_H

#include<iostream>
#include"Contact.h"

class College {
private:
	//Масив контактів
	Contact*contacts;
	//Масив коледжу
	char name[50];
	//кількість конт.
	int number0fContacts;
	

public:
	//Конструктор 
	College(const char* name, Contact* contacts, int number0fContacts);

	//Виведення інформації про контакт 
	void Show() const;
//Деструктор для очищення пам'яті 
	~College();
};

#endif // COLLEGE_H
