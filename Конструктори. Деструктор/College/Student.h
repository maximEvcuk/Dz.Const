#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include"Contact.h"
#include"College.h"

class Student {
private:
	char FullName[100]; //ПІБ
	char birthData[11]; //дата народження  всі дані

	Contact* contacts;
	College college;

public:
	//Конструктор 
	Student(const char* fullName, const char* birthDate, Contact* contacts, int numberOfContacts, const College& college);


	//Виведення інформації про студента  
	void Show() const;
	//Деструктор для очищення пам'яті 
	~Student();
};
#endif // STUDENT_H