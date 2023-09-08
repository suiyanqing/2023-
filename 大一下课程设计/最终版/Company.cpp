#include"Company.h"
#include<stdio.h>
Company& Company::Add()
{
	ifstream fin;
	fin.open("./Car.txt", ios::in);
	if (!fin)
	{
		std::cerr << "Can't open the file.";
		exit(1);
	}//��֤
	this->DQ(fin);
	fin.close();
	return *this;
}
void Company::DQ(ifstream& fin)
{
	while (fin)
	{
		string bra;
		fin >> bra;
		int D_num;
		int Car_id;
		int C_mile;
		int Value;
		bool zu;
		string L;
		if (bra == "Car")
		{
			fin >> D_num >> Car_id >> C_mile >> Value>>zu>>L;
			Carstyle* p = new Car(bra,zu,L, D_num, Car_id, C_mile, Value);
			v.push_back(p);
		}
		if (bra == "Bus")
		{
			fin >> D_num >> Car_id >> C_mile >> Value>>zu>>L;
			Carstyle* p = new Bus(bra,zu,L, D_num, Car_id, C_mile, Value);
			v.push_back(p);
		}
		if (bra == "Truck")
		{
			fin >> D_num >> Car_id >> C_mile >> Value>>zu>>L;
			Carstyle* p = new Truck(bra,zu,L, D_num, Car_id, C_mile, Value);
			v.push_back(p);
		}
	}

}
void Company::S_M_N()
{
	n = v.size();
	int c_n = 0; int b_n = 0; int t_n = 0;
	int c_v = 0; int b_v = 0; int t_v = 0;
	int c_m = 0; int b_m = 0; int t_m = 0;
	for (vector<Carstyle*>::iterator itr = v.begin(); itr != v.end(); itr++)
	{
		if ((*itr)->Get_brand() == "Car")
		{
			c_n++;
			c_v += (*itr)->Get_value();
			c_m += (*itr)->Get_C_mile();
		}
		if ((*itr)->Get_brand() == "Bus")
		{
			b_n++;
			b_v += (*itr)->Get_value();
			b_m += (*itr)->Get_C_mile();
		}
		if ((*itr)->Get_brand() == "Truck")
		{
			t_n++;
			t_v += (*itr)->Get_value();
			t_m += (*itr)->Get_C_mile();
		}
	}
	this->display(c_n, c_v, c_m, b_n, b_v, b_m, t_n, t_v, t_m);
	for (vector<Carstyle*>::iterator itr = v.begin(); itr != v.end(); itr++)
	{
		if ((*itr)->Get_brand() == "Car")
		{
			(*itr)->Set_vm(c_n, c_v, c_m);
		}
		if ((*itr)->Get_brand() == "Bus")
		{
			(*itr)->Set_vm(b_n, b_v, b_m);
		}
		if ((*itr)->Get_brand() == "Truck")
		{
			(*itr)->Set_vm(t_n, t_v, t_m);
		}
	}
}
void Company::display(int c_n, int c_v, int c_m, int b_n, int b_v, int b_m, int t_n, int t_v, int t_m)
{
	cout << "Car���ͳ����ܼ�ֵ��" << c_v << "��" << endl;
	cout << "Car���ͳ�����·�̣�" << c_m << "km" << endl;
	cout << "Bus���ͳ����ܼ�ֵ��" << b_v << "��" << endl;
	cout << "Bus���ͳ�����·�̣�" << b_m << "km" << endl;
	cout << "Truck���ͳ����ܼ�ֵ��" << t_v << "��" << endl;
	cout << "Truck���ͳ�����·�̣�" << t_m << "km" << endl;
	cout << "��˾����������" << c_n + b_n + t_n << "��" << endl;
	cout << "��˾�����ܼ�ֵ��" << c_v + b_v + t_v << "��" << endl;
	cout << "��˾��������̣�" << c_m + b_m + t_m << "km" << endl;
}
Company::~Company()
{
	for (int i = 0; i < v.size(); i++)
	{
		delete v[i];
	}
	v.clear();
}