#include "Student.h"
#include <cstring> // Для використання strcpy

// Реалізація конструктора
Student::Student(const char* fullName, const char* birthDate, Contact* contacts, int numberOfContacts, const College& college)
    : college(college) { // Ініціалізація коледжу
    strcpy(this->fullName, fullName);
    strcpy(this->birthDate, birthDate);

    this->contacts = new Contact[numberOfContacts]; // Виділення пам'яті для контактів

    for (int i = 0; i < numberOfContacts; ++i) {
        this->contacts[i] = contacts[i]; // Копіюємо контакти
    }
}

// Реалізація методу Show - виводить всю інформацію про студента
void Student::Show() const {
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Birth Date: " << birthDate << std::endl;
    std::cout << "Contacts: " << std::endl;
    for (int i = 0; i < numberOfContacts; ++i) {
        contacts[i].Show(); // Викликаємо метод Show для кожного контакту
    }
    std::cout << "College Information: " << std::endl;
    college.Show(); // Виводимо інформацію про коледж
}

// Деструктор для очищення пам'яті
Student::~Student() {
    delete[] contacts; // чистка пам'яті 
}