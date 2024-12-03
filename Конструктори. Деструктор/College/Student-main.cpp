#include "Student.h"
#include "College.h"


int main() {
	Contact contacts[] = {
	Contact("123-456-7890", "Kyiv", "Ukraine")
	Contact("098-765-4321", "Lviv", "Ukraine"
};
	    Contact collegeContacts[] = {
		Contact("111-222-3333", "Odesa", "Ukraine")
		Contact("444-555-6666", "Kharkiv", "Ukraine")
};
    College college("National University", collegeContacts, 2);

	// Створення студента
	Student student("Ivan Ivanov", "01.01.2000", contacts, 2, college);

	// Виведення всієї інформації про студента
	student.Show();


return 0;
}