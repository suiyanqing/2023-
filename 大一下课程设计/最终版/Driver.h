#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include"Car.h"
using namespace std;

template<typename T>
class Driver
{
	string name;
	T ID;
	int Car_id;
public:
	Driver(string nam, int Car_id, int id);
	virtual ~Driver() {};
	void display_D();//输出驾驶员信息
	int Get_Car_id(string name);//通过姓名查找驾驶员信息
	int Get_Car_id(int ID);//通过ID查找驾驶员信息
	int Get_Id();//返回ID
	bool judge(string nam);//定位驾驶员信息
	void D_Correct();//修改驾驶员信息
	string Get_name();//返回驾驶员姓名
	int Get_Car_id();//返回对应的车辆编号
};