#pragma once
#ifndef COLLEGE_H
#define COLLEGE_H

#include<iostream>
#include"Contact.h"

class College {
private:
	//����� ��������
	Contact*contacts;
	//����� �������
	char name[50];
	//������� ����.
	int number0fContacts;
	

public:
	//����������� 
	College(const char* name, Contact* contacts, int number0fContacts);

	//��������� ���������� ��� ������� 
	void Show() const;
//���������� ��� �������� ���'�� 
	~College();
};

#endif // COLLEGE_H
