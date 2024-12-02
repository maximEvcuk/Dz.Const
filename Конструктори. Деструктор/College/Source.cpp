#include<iostream>
//  в файлах College-main ta college.cpp  чомусь немає підказок , тому код до цих файлів буде тут і я бьуду вставляти його туди  

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