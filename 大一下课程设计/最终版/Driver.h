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
	void display_D();//�����ʻԱ��Ϣ
	int Get_Car_id(string name);//ͨ���������Ҽ�ʻԱ��Ϣ
	int Get_Car_id(int ID);//ͨ��ID���Ҽ�ʻԱ��Ϣ
	int Get_Id();//����ID
	bool judge(string nam);//��λ��ʻԱ��Ϣ
	void D_Correct();//�޸ļ�ʻԱ��Ϣ
	string Get_name();//���ؼ�ʻԱ����
	int Get_Car_id();//���ض�Ӧ�ĳ������
};