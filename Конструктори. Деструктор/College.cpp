#include <cstring>
#include "Contact.h"

// реалізація конст.
College::College(const char* name, Contact* contacts, int number0fContacts)
{
	strcpy(this -> name, name);
	this->  contacts = new Contact[number0fContacts];
    this->  number0fContacts = number0fContacts;
    
    for (int i = 0; i < number0fContacts; ++i)
    {
	this->contacts[i] = contacts[i];
    }

}
// Реалізація Show
void College::Show() const {
	std::cout << "College name:" << name << std::endl;
	std::cout << "Contact:" << std::endl;
	
for (int i = 0; i < number0fContacts; ++i) 
	{
		contacts[i].Show();
	}

}
//очищення пам'яті 
College::~College() {
	delete[] contacts;
}
