#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include"Car.h"
using namespace std;

class Driver
{
	string name;
	int ID;
	int Car_id;
public:
	Driver(string nam, int Car_id, int id);
	void display_D();
	int Get_Car_id(string name);
	int Get_Car_id(int ID);
	int Get_Id();
	/*void Add(vector<Driver>& D);
	void DQ(ifstream& fin, vector<Driver> D);*/
	bool judge(string nam);
	void D_Correct();
};