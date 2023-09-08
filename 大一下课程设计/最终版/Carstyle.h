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
	bool ZU;//是否租出
	string location;//车辆位置
public:
	Carstyle() {}
	Carstyle(string m,bool zu,string L);
	virtual ~Carstyle() {};
	void  display();
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
	virtual int GET_D_NUM();//返回驾驶员数量
	virtual int GET_C_ID();//返回车辆编号
	virtual int GET_C_MILE();//返回车辆里程
	virtual int GET_C_VALUE();//返回车辆价值
	virtual int GET_ZU();//返回车辆状态
	virtual string GET_LOCATION();//返回车辆的位置


	//修改
	virtual void C_BRAND(string s) {};
	virtual void C_D_NUM(int a) {};
	virtual void C_CAR_ID(int a) {};
	virtual void C_MILE(int a) {};
	virtual void C_VALUE(int a) {};
	virtual int C_ZU(bool ZU) { return 1; };
	virtual void C_Location(string L) {};

	string& R_BRAND();//f返回车辆的类型
};