#include"Driver.h"
Driver<int>::Driver(string nam, int Car_id, int id) :name(nam), Car_id(Car_id), ID(id)
{
	cout << "��ʻԱ��Ϣ�������" << endl;
}
void Driver<int>::display_D()
{
	cout << "��ʻԱ������" << name << endl;
	cout << "��ʻԱID��" << ID << endl;
	cout << "������ţ�" << Car_id << endl;
}
int Driver<int>::Get_Car_id(string name)
{
	return Car_id;
}
int Driver<int>::Get_Car_id(int ID)
{
	return Car_id;
}
bool Driver<int>::judge(string nam)
{
	if (name == nam) return true;
	else return false;
}
int Driver<int>::Get_Id()
{
	return ID;
}
void Driver<int>::D_Correct()
{
	cout << "����������ĺ��������ID��������ţ�";
	string nam;
	int id;
	int C_id;
	cin >> nam >> id >> C_id;
	if (nam == "0" || id == 0 || C_id == 0)
	{
		cerr << "�޸���Ϣ����" << endl;
	}
	else
	{
		name = nam;
		ID = id;
		Car_id = C_id;
	}
}
string Driver<int>::Get_name()
{
	return name;
}
int Driver<int>::Get_Car_id()
{
	return Car_id;
}