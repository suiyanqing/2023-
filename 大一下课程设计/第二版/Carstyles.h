#pragma once
#include<iostream>
using namespace std;
class Carstyle
{
protected:
	string brand;//品牌
	int All_mileage;//此品牌车辆的总里程
	int numb;//此品牌车辆的数量
	int All_value;//此品牌车辆的总价值
public:
	Carstyle() {}
	Carstyle(string m);
	virtual void  display();
	//void Mileage_add(int* p);
	void Set_mileage(int mile);
	void Set_numb(int num);
	void Set_value(int valu);
	string Get_brand();
	int Get_All_mileage();
	int Get_numb();
	int Get_All_value();
	virtual void Set_vm(int n, int v, int m);//设置value和mileage
	virtual void GET_information();//显示信息
	virtual bool Search_id(int C_id);//通过车辆编号查找
	virtual int Get_C_mile();
	virtual int Get_value();
};