include"College.h"

int main(){
//Створення контактів 
Contact contacts[] = {
    Contact("123-456-7890", "Kyiv", "Ukraine");
    Contact("098-765-4321", "Lviv", "Ukraine");
};

// Створення коледжу
College colleege("National University", contacts, 2);

// видаллення інф. про коледж 
college.Show();

return 0;
}