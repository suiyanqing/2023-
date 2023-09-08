#pragma once
#include<iostream>
#include"Carstyles.h"
using namespace std;
class Car :public Carstyle
{
	//继承车型的信息
	int D_num;//驾驶员数量
	int Car_id;//车辆编号
	int C_mile;//此车辆里程
	int Value;//此车辆价值
public:
	Car(string m, int d_num, int car_id, int c_mile, int c_value);
	Car(Carstyle c, int d_num, int car_id, int c_mile, int c_value);
	virtual void Set_vm(int n,int v, int m);//设置value和mileage
	virtual void GET_information();
	virtual int Get_C_mile();
	virtual int Get_value();
	virtual bool Search_id(int C_id);
};
class Bus :public Carstyle
{
	//继承车型的信息
	int D_num;//驾驶员数量
	int Car_id;//车辆编号
	int C_mile;//此车辆里程
	int Value;//此车辆价值
public:
	Bus(string m, int d_num, int car_id, int c_mile, int c_value);
	Bus(Carstyle c, int d_num, int car_id, int c_mile, int c_value);
	virtual void Set_vm(int n,int v, int m);//设置value和mileage
	virtual void GET_information();
	virtual int Get_C_mile();
	virtual int Get_value();
	virtual bool Search_id(int C_id);
};
class Truck:public Carstyle
{
	//继承车型的信息
	int D_num;//驾驶员数量
	int Car_id;//车辆编号
	int C_mile;//此车辆里程
	int Value;//此车辆价值
public:
	Truck(string m, int d_num, int car_id, int c_mile, int c_value);
	Truck(Carstyle c, int d_num, int car_id, int c_mile, int c_value);
	virtual void Set_vm(int n ,int v, int m);//设置value和mileage
	virtual void GET_information();
	virtual int Get_C_mile();
	virtual int Get_value();
	virtual bool Search_id(int C_id);
};

