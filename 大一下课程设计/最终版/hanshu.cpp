#pragma once
#include"hanshu.h"
#include"Car.h"
#include"Driver.h"
#include<fstream>
#include<stdio.h>
#include<time.h>
using namespace std;

string S_S(string k, vector<Driver<int>>& d, Company& V)
{
	string s;
	string g;
	cout << "是否查看总价值和总里程（Y/N）：";
	cin >> g;
	if (g == "Y") { V.S_M_N(); }
	cout << "请输入查找信息的类型（Car/Driver）：";
	cin >> s;

	while (k == "Search" || s == "Y" || s == "y")
	{
		if (s == "Car" || s == "y")s = S_Car(k, V);
		if (s == "Driver" || s == "Y")s = S_D(k, d);
		k = s;
	}
	cout << "查询：Search	修改：Correct	添加：Add	删除：Delete	退出：Exit" << endl;
	cin >> k;
	return k;
}
string S_Car(string k, Company& V)
{
	int n;
	cout << "输入车辆编号：";
	cin >> n;
	V.v[n - 1]->GET_information();
	cout << "是否继续查找车辆信息（y/n）：";
	cin >> k;
	return k;
}
string S_D(string k, vector<Driver<int>>& d)
{
	string nam;
	cout << "输入驾驶员姓名：";
	cin >> nam;
	int m = 0;
	for (int i = 0; i < d.size(); i++)
	{
		if (d[i].judge(nam))
		{
			d[i].display_D();
			m++;
		}
	}
	if (m > 1) cout << "存在同姓名的驾驶员,请自行辨别!" << endl;
	if (m == 0) cout << "未找到对应的驾驶员" << endl;
	cout << "是否继续查找驾驶员信息（Y/N）：" << endl;
	cin >> k;

	return k;
}
string S_C(string k, vector<Driver<int>>& d, Company& V)
{
	string s;
	cout << "请输入需要修改信息的类型（Car/Driver）：";
	cin >> s;

	while (k == "Correct" || s == "Y" || s == "y")
	{
		if (s == "Car" || s == "y")s = C_C(k, V);
		if (s == "Driver" || s == "Y")s = C_D(k, d);
		k = s;
	}
	cout << "查询：Search	修改：Correct	添加：Add	删除：Delete	退出：Exit" << endl;
	cin >> k;
	return k;
}
string C_C(string k, Company& V)
{
	int n;
	cout << "输入车辆编号：";
	cin >> n;
	string bra;
	int D_num;
	int C_mile;
	int Value;
	bool ZU;
	string L;
	cout << "依次输入车辆信息--车型、驾驶员数量、车辆里程、车辆价值";
	cout << "车型：";
	cin >> bra;
	cout << "驾驶员数量：";
	cin >> D_num;
	cout << "车辆里程：";
	cin >> C_mile;
	cout << "车辆价值：";
	cin >> Value;
	cout << "车辆是否租出：";
	cin >> ZU;
	cout << "输入车辆位置：";
	cin >> L;
	V.v[n - 1]->C_BRAND(bra);
	V.v[n - 1]->C_D_NUM(D_num);
	V.v[n - 1]->C_MILE(C_mile);
	V.v[n - 1]->C_VALUE(Value);
	V.v[n - 1]->C_ZU(ZU);
	V.v[n - 1]->C_Location(L);

	C_FIN(V);
	cout << "是否继续修改车辆信息（y/n）：";
	cin >> k;

	return k;

}
string C_D(string k, vector<Driver<int>>& d)
{
	string nam;
	cout << "输入驾驶员姓名：";
	cin >> nam;
	vector<int> v;
	int m = 0;
	for (int i = 0; i < d.size(); i++)
	{
		if (d[i].judge(nam))
		{
			d[i].display_D();
			v.push_back(i);
		}
	}
	if (v.size() > 1)
	{
		cout << "存在同姓名的驾驶员,请输入驾驶员ID：" << endl;
		int D_id;
		cin >> D_id;
		for (int j = 0; j < v.size(); j++)
		{
			if (D_id == d[v[j]].Get_Id()) m = D_id;
		}
		if (m == 0)cerr << "驾驶员ID输入错误!" << endl;
	}
	d[m].D_Correct();
	D_FIN(d);//写入Driver.txt
	cout << "是否继续修改驾驶员信息（Y/N）：";
	cin >> k;
	return k;
}
void D_add(vector<Driver<int>>& D)//参数 &此处应该用引用
{
	ifstream fin;
	fin.open("./Driver.txt", ios::in);
	if (!fin)
	{
		std::cerr << "Can't open the file.";
		exit(1);
	}//验证
	while (!fin.eof())//若直接写fin会导致读取到文件尾，到fin未出错，会多创建一个Driver类的对象fin.eof()会检测是否读到文件尾
	{
		string nam;
		int id;
		int c_id;
		fin >> nam >> id >> c_id;
		Driver<int> c(nam, c_id, id);
		D.push_back(c);
	}
	fin.close();
}
string P_A(string k, vector<Driver<int>>& d, Company& V)
{
	cout << "输入添加的类型（Car/Driver）；";
	string s;
	cin >> s;
	while (k == "Add" || s == "Y" || s == "y")
	{
		if (s == "Car" || s == "Y")s = C_A(V);
		if (s == "Driver" || s == "y")s = D_A(d);
		if (s != "N" && s != "Y" && s != "y" && s != "n")
		{
			cout << "k=" << k << " , " << "s=" << s << endl;
			cout << "输入有误" << endl;
		};
		k = s;
	}
	cout << "查询：Search	修改：Correct	添加：Add	删除：Delete	退出：Exit" << endl;
	cin >> k;
	return k;
}
string C_A(Company& V)
{
	string bra;
	int D_num;
	int Car_id;
	int C_mile;
	int Value;
	bool zu;
	string L;
	cout << "依次输入车辆信息--车型、驾驶员数量、车辆编号、车辆里程、车辆价值";
	cout << "车型：";
	cin >> bra;
	cout << "驾驶员数量：";
	cin >> D_num;
	cout << "车辆标号：";
	cin >> Car_id;
	cout << "车辆里程：";
	cin >> C_mile;
	cout << "车辆价值：";
	cin >> Value;
	cout << "车辆是否在租(是-1/否-0)：";
	cin >> zu;
	cout << "车辆位置：";
	cin >> L;
	Carstyle* p = new Car(bra, zu, L, D_num, Car_id, C_mile, Value);
	V.v.push_back(p);
	C_FIN(V);//Car.txt 信息写入
	cout << "是否继续添加车辆信息（Y/N）：";
	string a;
	cin >> a;
	return a;
}
string D_A(vector<Driver<int>>& d)
{
	string nam;
	int ID;
	int Car_id;
	cout << "请依次输入驾驶员信息--姓名、ID、车辆编号" << endl;
	cout << "姓名：";
	cin >> nam;
	cout << "ID：";
	cin >> ID;
	cout << "车辆编号：";
	cin >> Car_id;
	Driver<int> b(nam, Car_id, ID);
	d.push_back(b);
	D_FIN(d);
	cout << "是否继续添加驾驶员信息（y/n）：";
	string a;
	cin >> a;
	return a;
}
void D_FIN(vector<Driver<int>>& d)
{
	fstream fout;
	fout.open("./Driver.txt", ios::out);
	for (int i = 0; i < d.size(); i++)
	{
		fout << d[i].Get_name() << endl;
		fout << d[i].Get_Id() << endl;
		fout << d[i].Get_Car_id() << endl;
	}
	fout.close();
}
void C_FIN(Company& V)
{
	fstream fout;
	fout.open("./Car.txt", ios::out);
	for (int i = 0; i < V.v.size(); i++)
	{
		fout << V.v[i]->Get_brand() << endl;
		fout << V.v[i]->GET_D_NUM() << endl;
		fout << V.v[i]->GET_C_ID() << endl;
		fout << V.v[i]->GET_C_MILE() << endl;
		fout << V.v[i]->GET_C_VALUE() << endl;
		fout << V.v[i]->GET_ZU() << endl;
		fout << V.v[i]->GET_LOCATION()<< endl;
	}
	fout.close();
}
string P_D(string k, vector<Driver<int>>& d, Company& V)
{
	cout << "输入删除的类型（Car/Driver）：";
	string s;
	cin >> s;
	while (k == "Delete" || s == "Y" || s == "y")
	{
		if (s == "Car" || s == "Y")s = DELETE_C(V);
		if (s == "Driver" || s == "y")s = DELETE_D(d);
		k = s;
	}
	cout << "查询：Search	修改：Correct	添加：Add	删除：Delete	退出：Exit" << endl;
	cin >> k;
	return k;
}
string DELETE_C(Company& V)
{
	cout << "输入车辆编号：";
	int a;
	string s;
	cin >> a;
	if (a > V.v.size()) cout << "车辆编号输入错误" << endl;
	else
	{
		vector<Carstyle*>::iterator it = V.v.begin();//it==0
		for (int i = 0; i < a - 1; i++)
		{
			it++;
		}
		V.v.erase(it);
		C_FIN(V);
	}
	cout << "是否继续删除车辆信息（Y/N）：";
	cin >> s;
	return s;
}
string DELETE_D(vector<Driver<int>>& d)
{
	cout << "输入驾驶员姓名：";
	string n;
	string s;
	cin >> n;
	int m = 0;
	vector<int> h;
	for (int i = 0; i < d.size(); i++)
	{
		if (d[i].judge(n))
		{
			m++;
			h.push_back(i);
		}
	}
	if (m == 0)cout << "未找到此驾驶员" << endl;
	if (m == 1)
	{
		vector<Driver<int>>::iterator it = d.begin();
		for (int j = 0; j < h[m - 1]; j++)//vector中第一个元素的下标是0
		{
			it++;
		}
	}
	else
	{
		vector<Driver<int>>::iterator it = d.begin();
		int l = 0;
		cout << "存在同姓名的驾驶员，请输入驾驶员ID：";
		int id;
		cin >> id;
		for (int j = 0; j < d.size(); j++)
		{
			if (id == d[j].Get_Id())
			{
				l = id;
				it++;
			}
		}
		if (l == 0) cout << "驾驶员ID输入错误" << endl;
		d.erase(it);
	}
	D_FIN(d);
	cout << "是否继续删除驾驶员信息（y/n）：";
	cin >> s;
	return s;
}