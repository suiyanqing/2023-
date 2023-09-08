#pragma once
#include<iostream>
#include"Drivers.h"
#include<vector>
#include"Company.h"
using namespace std;
string S_S(string k, vector<Driver<int>>& d,Company& V);//Search_show
string S_D(string k,vector<Driver<int>>& d);//Search_Driver

string S_C(string k, vector<Driver<int>>& d,Company& V);//Search_Correct
//string C_C(string k, Company& V);
string C_D(string k, vector<Driver<int>>& d);
void D_add(vector<Driver<int>>& D);
string P_A(string k, vector<Driver<int>>& d,Company& V);//Positioning_Add
string P_D(string k, vector<Driver<int>>& d);//Positioning_Delete
//string C_A();//
string D_A(vector<Driver<int>>& d);
void D_FIN(vector<Driver<int>>& d);
//void C_FIN(Company& V);
string P_D(string k, vector<Driver<int>>& d, Company& V);
string DELETE_D(vector<Driver<int>>& d);