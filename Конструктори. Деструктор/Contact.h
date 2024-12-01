#pragma once

#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>

class Contact {
private:
	//����� ��������
	char phone[15]; 
	//����� ���� 
	char city[30];
	//����� �����
	char country[30];

public:
	//����������� 
	Contact(const char* phone, const char* city, const char* country);

	//��������� ���������� ��� ������� 
	void Show() const;
};

#endif // CONTACT_H
