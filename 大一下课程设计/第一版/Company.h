#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include"Carstyles.h"
#include"Car.h"
using namespace std;

template<class T>
class Company
{
	int n;//总车辆数
	int value;//总价值
	vector<T> v;
public:
	Company<Carstyle>& Add()
	{
		ifstream fin;
		fin.open("./Car.txt", ios::in);
		if (!fin)
		{
			std::cerr << "Can't open the file.";
		}//验证
		this->DQ(fin);
		fin.close();
		return *this;
	}
	void DQ(ifstream& fin)
	{
		while (fin)
		{
			string bra;//车型
			fin >> bra;
			int D_num;//驾驶员数量
			int Car_id;//车辆编号
			int C_mile;//车辆里程
			int Value;//车辆价值
			if (bra == "Car")
			{
				fin >> D_num >> Car_id >> C_mile >> Value;
				Car m(bra, D_num, Car_id, C_mile, Value);
				v.push_back(m);
			}
			if (bra == "Bus")
			{
				fin >> D_num >> Car_id >> C_mile >> Value;
				Bus m(bra, D_num, Car_id, C_mile, Value);
				v.push_back(m);
			}
			if (bra == "Truck")
			{
				fin >> D_num >> Car_id >> C_mile >> Value;
				Truck m(bra, D_num, Car_id, C_mile, Value);
				v.push_back(m);
			}
		}
	}
	void S_M_N()
	{
		n = v.size();
		int c_n = 0; int b_n = 0; int t_n = 0;
		int c_v = 0; int b_v = 0; int t_v = 0;
		int c_m = 0; int b_m = 0; int t_m = 0;
		for (vector<Carstyle>::iterator itr = v.begin(); itr != v.end(); itr++)
		{
			if ((*itr).Get_brand() == "Car")
			{
				c_n++;
				c_v += (*itr).Get_value();
				cout << "Car c_v=" << c_v << endl;
				c_m += (*itr).Get_C_mile();
			}
			if ((*itr).Get_brand() == "Bus")
			{
				b_n++;
				b_v += (*itr).Get_value();
				b_m += (*itr).Get_C_mile();
			}
			if ((*itr).Get_brand() == "Truck")
			{
				t_n++;
				t_v += (*itr).Get_value();
				t_m += (*itr).Get_C_mile();
			}
		}
		this->display(c_v, c_m, b_v, b_m, t_v, t_m);
		for (vector<Carstyle>::iterator itr = v.begin(); itr != v.end(); itr++)
		{
			if ((*itr).Get_brand() == "Car")
			{
				(*itr).Set_vm(c_n, c_v, c_m);
			}
			if ((*itr).Get_brand() == "Bus")
			{
				(*itr).Set_vm(b_n, b_v, b_m);
			}
			if ((*itr).Get_brand() == "Truck")
			{
				(*itr).Set_vm(t_n, t_v, t_m);
			}
		}
	}
	void display(int c_v,int c_m, int b_v, int b_m,int t_v,int t_m)
	{
		cout << "Car类型车辆总价值：" << c_v << "万" << endl;
		cout << "Car类型车辆总路程：" << c_m << "km" << endl;
		cout << "Bus类型车辆总价值：" << b_v << "万" << endl;
		cout << "Bus类型车辆总路程：" << b_m << "km" << endl;
		cout << "Truck类型车辆总价值：" << t_v << "万" << endl;
		cout << "Truck类型车辆总路程：" << t_m << "km" << endl;
	}
};