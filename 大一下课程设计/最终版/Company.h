#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include"Carstyle.h"
#include"Car.h"
using namespace std;


class Company
{
	int n;//总车辆数
	int value;//总价值
	int mileage;//总里程
	vector<Carstyle*> v;
public:
	Company& Add();
	void DQ(ifstream& fin);//读取文件数据
	void S_M_N();//计算总价值和总里程，并输出
	void display(int c_n, int c_v, int c_m, int b_n, int b_v, int b_m, int t_n, int t_v, int t_m);//将输入的参数输出
	~Company();
	friend string C_A(Company& V);
	friend void C_FIN(Company& V);//将修改后的Company对象输入到Car.txt文件中
	friend string DELETE_C(Company& V);//删除Company中的车辆信息
	friend string S_Car(string k, Company& V);//Search_Car
	friend string C_C(string k, Company& V);//修改车辆信息

};