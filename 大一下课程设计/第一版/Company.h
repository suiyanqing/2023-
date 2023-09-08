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
	int n;//�ܳ�����
	int value;//�ܼ�ֵ
	vector<T> v;
public:
	Company<Carstyle>& Add()
	{
		ifstream fin;
		fin.open("./Car.txt", ios::in);
		if (!fin)
		{
			std::cerr << "Can't open the file.";
		}//��֤
		this->DQ(fin);
		fin.close();
		return *this;
	}
	void DQ(ifstream& fin)
	{
		while (fin)
		{
			string bra;//����
			fin >> bra;
			int D_num;//��ʻԱ����
			int Car_id;//�������
			int C_mile;//�������
			int Value;//������ֵ
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
		cout << "Car���ͳ����ܼ�ֵ��" << c_v << "��" << endl;
		cout << "Car���ͳ�����·�̣�" << c_m << "km" << endl;
		cout << "Bus���ͳ����ܼ�ֵ��" << b_v << "��" << endl;
		cout << "Bus���ͳ�����·�̣�" << b_m << "km" << endl;
		cout << "Truck���ͳ����ܼ�ֵ��" << t_v << "��" << endl;
		cout << "Truck���ͳ�����·�̣�" << t_m << "km" << endl;
	}
};