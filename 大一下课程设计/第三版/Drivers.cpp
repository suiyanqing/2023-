#include"Drivers.h"
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
//void Driver::Add(vector<Driver>& D)
//{
//	ifstream fin;
//	fin.open("./Car.txt", ios::in);
//	if (!fin)
//	{
//		std::cerr << "Can't open the file.";
//	}//��֤
//	this->DQ(fin,D);
//	fin.close();
//}
//void Driver::DQ(ifstream& fin, vector<Driver> D)
//{
//	while (fin)
//	{
//		string nam;
//		int id;
//		int c_id;
//		fin >> nam >> id >> c_id;
//		Driver c(nam,id,c_id);
//		D.push_back(c);
//	}
//}
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