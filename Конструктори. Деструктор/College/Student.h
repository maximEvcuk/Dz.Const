#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include"Contact.h"
#include"College.h"

class Student {
private:
	char FullName[100]; //ϲ�
	char birthData[11]; //���� ����������  �� ���

	Contact* contacts;
	College college;

public:
	//����������� 
	Student(const char* fullName, const char* birthDate, Contact* contacts, int numberOfContacts, const College& college);


	//��������� ���������� ��� ��������  
	void Show() const;
	//���������� ��� �������� ���'�� 
	~Student();
};
#endif // STUDENT_H