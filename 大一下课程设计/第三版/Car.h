#pragma once
#include"Carstyles.h"
using namespace std;
class Car :public Carstyle
{
	//�̳г��͵���Ϣ
	int D_num;//��ʻԱ����
	int Car_id;//�������
	int C_mile;//�˳������
	int Value;//�˳�����ֵ
public:
	Car(string m, int d_num, int car_id, int c_mile, int c_value);
	Car(Carstyle c, int d_num, int car_id, int c_mile, int c_value);
	virtual ~Car() {};
	virtual void Set_vm(int n, int v, int m);//����value��mileage
	virtual void GET_information();
	virtual int Get_C_mile();
	virtual int Get_value();
	virtual bool Search_id(int C_id);
	virtual int GET_D_NUM();
	virtual int GET_C_ID();
	virtual int GET_C_MILE();
	virtual int GET_C_VALUE();

	virtual void C_BRAND(string s);
	virtual void C_D_NUM(int a);
	virtual void C_CAR_ID(int a);
	virtual void C_MILE(int a);
	virtual void C_VALUE(int a);
};
class Bus :public Carstyle
{
	//�̳г��͵���Ϣ
	int D_num;//��ʻԱ����
	int Car_id;//�������
	int C_mile;//�˳������
	int Value;//�˳�����ֵ
public:
	Bus(string m, int d_num, int car_id, int c_mile, int c_value);
	Bus(Carstyle c, int d_num, int car_id, int c_mile, int c_value);
	virtual ~Bus() {};
	virtual void Set_vm(int n, int v, int m);//����value��mileage
	virtual void GET_information();
	virtual int Get_C_mile();
	virtual int Get_value();
	virtual bool Search_id(int C_id);
	virtual int GET_D_NUM();
	virtual int GET_C_ID();
	virtual int GET_C_MILE();
	virtual int GET_C_VALUE();

	virtual void C_BRAND(string s);
	virtual void C_D_NUM(int a);
	virtual void C_CAR_ID(int a);
	virtual void C_MILE(int a);
	virtual void C_VALUE(int a);
};
class Truck :public Carstyle
{
	//�̳г��͵���Ϣ
	int D_num;//��ʻԱ����
	int Car_id;//�������
	int C_mile;//�˳������
	int Value;//�˳�����ֵ
public:
	Truck(string m, int d_num, int car_id, int c_mile, int c_value);
	Truck(Carstyle c, int d_num, int car_id, int c_mile, int c_value);
	virtual ~Truck() {};
	virtual void Set_vm(int n, int v, int m);//����value��mileage
	virtual void GET_information();
	virtual int Get_C_mile();
	virtual int Get_value();
	virtual bool Search_id(int C_id);
	virtual int GET_D_NUM();
	virtual int GET_C_ID();
	virtual int GET_C_MILE();
	virtual int GET_C_VALUE();

	virtual void C_BRAND(string s);
	virtual void C_D_NUM(int a);
	virtual void C_CAR_ID(int a);
	virtual void C_MILE(int a);
	virtual void C_VALUE(int a);
};
