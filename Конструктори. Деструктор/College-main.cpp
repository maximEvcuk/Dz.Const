include"College.h"

int main(){
//��������� �������� 
Contact contacts[] = {
    Contact("123-456-7890", "Kyiv", "Ukraine");
    Contact("098-765-4321", "Lviv", "Ukraine");
};

// ��������� �������
College colleege("National University", contacts, 2);

// ���������� ���. ��� ������ 
college.Show();

return 0;
}