#include<iostream>
//  � ������ College-main ta college.cpp  ������ ���� ������� , ���� ��� �� ��� ����� ���� ��� � � ����� ��������� ���� ����  

for (int i = 0; i < number0fContacts; ++i)
{
	this->contacts[i] = contacts[i];
}

void College::Show() const {
	std::cout << "College name:" << name << std::endl;
	std::cout << "Contact:" << std::endl;
	for (int i = 0; i < number0fContacts; ++i) 
	{
		contacts[i].Show();
	}

}
College::~College() {
	delete[] contacts;
}