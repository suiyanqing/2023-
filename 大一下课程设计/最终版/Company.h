#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include"Carstyle.h"
#include"Car.h"
using namespace std;


class Company
{
	int n;//�ܳ�����
	int value;//�ܼ�ֵ
	int mileage;//�����
	vector<Carstyle*> v;
public:
	Company& Add();
	void DQ(ifstream& fin);//��ȡ�ļ�����
	void S_M_N();//�����ܼ�ֵ������̣������
	void display(int c_n, int c_v, int c_m, int b_n, int b_v, int b_m, int t_n, int t_v, int t_m);//������Ĳ������
	~Company();
	friend string C_A(Company& V);
	friend void C_FIN(Company& V);//���޸ĺ��Company�������뵽Car.txt�ļ���
	friend string DELETE_C(Company& V);//ɾ��Company�еĳ�����Ϣ
	friend string S_Car(string k, Company& V);//Search_Car
	friend string C_C(string k, Company& V);//�޸ĳ�����Ϣ

};