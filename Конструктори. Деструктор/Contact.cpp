// Ви мені так і не відписали , тому користуюсь #include<cstring>

#include <cstring>
#include "Contact.h"

// Конструктор 
Contact::Contact(const char* phone, const char* city, const char* country) 
{
	strcpy(this->phone, phone);
	strcpy(this->city, city);
	strcpy(this->country, country);
}

// Реалізація Show
void Contact::Show() const
{
	std::cout << "Phone:" << phone << std::endl;
	std::cout << "City:" << city << std::endl;
	std::cout << "Country:" << country << std::endl;
}