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
	bool ZU;//�Ƿ����
	string location;//����λ��
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
	virtual void Set_vm(int n, int v, int m);//����value��mileage
	virtual void GET_information();//��ʾ��Ϣ
	virtual bool Search_id(int C_id);//ͨ��������Ų���
	virtual int Get_C_mile();
	virtual int Get_value();
	virtual int GET_D_NUM();//���ؼ�ʻԱ����
	virtual int GET_C_ID();//���س������
	virtual int GET_C_MILE();//���س������
	virtual int GET_C_VALUE();//���س�����ֵ
	virtual int GET_ZU();//���س���״̬
	virtual string GET_LOCATION();//���س�����λ��


	//�޸�
	virtual void C_BRAND(string s) {};
	virtual void C_D_NUM(int a) {};
	virtual void C_CAR_ID(int a) {};
	virtual void C_MILE(int a) {};
	virtual void C_VALUE(int a) {};
	virtual int C_ZU(bool ZU) { return 1; };
	virtual void C_Location(string L) {};

	string& R_BRAND();//f���س���������
};