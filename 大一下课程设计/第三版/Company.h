#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include"Carstyles.h"
#include"Car.h"
using namespace std;


class Company
{
	int n;//总车辆数
	int value;//总价值
	int mileage;//总里程
	vector<Carstyle*> v;
public:
	Company& Add()
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
			string bra;
			fin >> bra;
			int D_num;
			int Car_id;
			int C_mile;
			int Value;
			if (bra == "Car")
			{
				fin >> D_num >> Car_id >> C_mile >> Value;
				Carstyle* p = new Car(bra, D_num, Car_id, C_mile, Value);
				v.push_back(p);
			}
			if (bra == "Bus")
			{
				fin >> D_num >> Car_id >> C_mile >> Value;
				Carstyle* p = new Bus(bra, D_num, Car_id, C_mile, Value);
				v.push_back(p);
			}
			if (bra == "Truck")
			{
				fin >> D_num >> Car_id >> C_mile >> Value;
				Carstyle* p = new Truck(bra, D_num, Car_id, C_mile, Value);
				v.push_back(p);
			}
		}
	}
	void S_M_N()
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
				//cout << "Car_Value=" << c_v << endl;
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
		this->display(c_n,c_v, c_m, b_n,b_v, b_m, t_n,t_v, t_m);
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

	void display(int c_n,int c_v, int c_m, int b_n,int b_v, int b_m, int t_n,int t_v, int t_m)
	{
		cout << "Car类型车辆总价值：" << c_v << "万" << endl;
		cout << "Car类型车辆总路程：" << c_m << "km" << endl;
		cout << "Bus类型车辆总价值：" << b_v << "万" << endl;
		cout << "Bus类型车辆总路程：" << b_m << "km" << endl;
		cout << "Truck类型车辆总价值：" << t_v << "万" << endl;
		cout << "Truck类型车辆总路程：" << t_m << "km" << endl;
		cout << "公司车辆总数：" << c_n + b_n + t_n << "辆" << endl;
		cout << "公司车辆总价值：" << c_v + b_v + t_v << "万" << endl;
		cout << "公司车辆总里程：" << c_m + b_m + t_m << "km" << endl;
	}
	~Company()
	{
		for (int i = 0; i < v.size(); i++)
		{
			delete v[i];
		}
		v.clear();
	}
	friend string C_A(Company& V);
	friend void C_FIN(Company& V);
	friend string DELETE_C(Company& V);
	friend string S_Car(string k, Company& V);//Search_Car
	friend string C_C(string k, Company& V);

};