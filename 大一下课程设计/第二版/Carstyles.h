#pragma once
#include<iostream>
using namespace std;
class Carstyle
{
protected:
	string brand;//Ʒ��
	int All_mileage;//��Ʒ�Ƴ����������
	int numb;//��Ʒ�Ƴ���������
	int All_value;//��Ʒ�Ƴ������ܼ�ֵ
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
	virtual void Set_vm(int n, int v, int m);//����value��mileage
	virtual void GET_information();//��ʾ��Ϣ
	virtual bool Search_id(int C_id);//ͨ��������Ų���
	virtual int Get_C_mile();
	virtual int Get_value();
};