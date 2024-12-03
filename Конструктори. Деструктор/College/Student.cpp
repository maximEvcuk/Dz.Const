#include "Student.h"
#include <cstring> // ��� ������������ strcpy

// ��������� ������������
Student::Student(const char* fullName, const char* birthDate, Contact* contacts, int numberOfContacts, const College& college)
    : college(college) { // ����������� �������
    strcpy(this->fullName, fullName);
    strcpy(this->birthDate, birthDate);

    this->contacts = new Contact[numberOfContacts]; // �������� ���'�� ��� ��������

    for (int i = 0; i < numberOfContacts; ++i) {
        this->contacts[i] = contacts[i]; // ������� ��������
    }
}

// ��������� ������ Show - �������� ��� ���������� ��� ��������
void Student::Show() const {
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Birth Date: " << birthDate << std::endl;
    std::cout << "Contacts: " << std::endl;
    for (int i = 0; i < numberOfContacts; ++i) {
        contacts[i].Show(); // ��������� ����� Show ��� ������� ��������
    }
    std::cout << "College Information: " << std::endl;
    college.Show(); // �������� ���������� ��� ������
}

// ���������� ��� �������� ���'��
Student::~Student() {
    delete[] contacts; // ������ ���'�� 
}