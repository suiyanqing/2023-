#include"Drivers.h"
Driver::Driver(string nam, int Car_id, int id):name(nam), Car_id(Car_id), ID(id)
{
	cout << "驾驶员信息创建完成" << endl;
}
void Driver::display_D()
{
	cout << "驾驶员姓名：" << name << endl;
	cout << "驾驶员ID：" << ID << endl;
	cout << "车辆编号：" << Car_id << endl;
}
int Driver::Get_Car_id(string name)
{
	return Car_id;
}
int Driver::Get_Car_id(int ID)
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
//	}//验证
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
bool Driver::judge(string nam)
{
	if (name == nam) return true;
	else return false;
}
int Driver::Get_Id()
{
	return ID;
}
void Driver::D_Correct()
{
	cout << "请依次输入改后的姓名、ID、车辆编号：";
	string nam;
	int id;
	int C_id;
	cin >> nam >> id >> C_id;
	if (nam == "0" || id == 0 || C_id == 0)
	{
		cerr << "修改信息错误" << endl;
	}
	else
	{
		name = nam;
		ID = id;
		Car_id = C_id;
	}
}