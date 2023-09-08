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
	cout << "�Ƿ�鿴�ܼ�ֵ������̣�Y/N����";
	cin >> g;
	if (g == "Y") { V.S_M_N(); }
	cout << "�����������Ϣ�����ͣ�Car/Driver����";
	cin >> s;

	while (k == "Search" || s == "Y" || s == "y")
	{
		if (s == "Car" || s == "y")s = S_Car(k, V);
		if (s == "Driver" || s == "Y")s = S_D(k, d);
		k = s;
	}
	cout << "��ѯ��Search	�޸ģ�Correct	��ӣ�Add	ɾ����Delete	�˳���Exit" << endl;
	cin >> k;
	return k;
}
string S_Car(string k, Company& V)
{
	int n;
	cout << "���복����ţ�";
	cin >> n;
	V.v[n - 1]->GET_information();
	cout << "�Ƿ�������ҳ�����Ϣ��y/n����";
	cin >> k;
	return k;
}
string S_D(string k, vector<Driver<int>>& d)
{
	string nam;
	cout << "�����ʻԱ������";
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
	if (m > 1) cout << "����ͬ�����ļ�ʻԱ,�����б��!" << endl;
	if (m == 0) cout << "δ�ҵ���Ӧ�ļ�ʻԱ" << endl;
	cout << "�Ƿ�������Ҽ�ʻԱ��Ϣ��Y/N����" << endl;
	cin >> k;

	return k;
}
string S_C(string k, vector<Driver<int>>& d, Company& V)
{
	string s;
	cout << "��������Ҫ�޸���Ϣ�����ͣ�Car/Driver����";
	cin >> s;

	while (k == "Correct" || s == "Y" || s == "y")
	{
		if (s == "Car" || s == "y")s = C_C(k, V);
		if (s == "Driver" || s == "Y")s = C_D(k, d);
		k = s;
	}
	cout << "��ѯ��Search	�޸ģ�Correct	��ӣ�Add	ɾ����Delete	�˳���Exit" << endl;
	cin >> k;
	return k;
}
string C_C(string k, Company& V)
{
	int n;
	cout << "���복����ţ�";
	cin >> n;
	string bra;
	int D_num;
	int C_mile;
	int Value;
	bool ZU;
	string L;
	cout << "�������복����Ϣ--���͡���ʻԱ������������̡�������ֵ";
	cout << "���ͣ�";
	cin >> bra;
	cout << "��ʻԱ������";
	cin >> D_num;
	cout << "������̣�";
	cin >> C_mile;
	cout << "������ֵ��";
	cin >> Value;
	cout << "�����Ƿ������";
	cin >> ZU;
	cout << "���복��λ�ã�";
	cin >> L;
	V.v[n - 1]->C_BRAND(bra);
	V.v[n - 1]->C_D_NUM(D_num);
	V.v[n - 1]->C_MILE(C_mile);
	V.v[n - 1]->C_VALUE(Value);
	V.v[n - 1]->C_ZU(ZU);
	V.v[n - 1]->C_Location(L);

	C_FIN(V);
	cout << "�Ƿ�����޸ĳ�����Ϣ��y/n����";
	cin >> k;

	return k;

}
string C_D(string k, vector<Driver<int>>& d)
{
	string nam;
	cout << "�����ʻԱ������";
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
		cout << "����ͬ�����ļ�ʻԱ,�������ʻԱID��" << endl;
		int D_id;
		cin >> D_id;
		for (int j = 0; j < v.size(); j++)
		{
			if (D_id == d[v[j]].Get_Id()) m = D_id;
		}
		if (m == 0)cerr << "��ʻԱID�������!" << endl;
	}
	d[m].D_Correct();
	D_FIN(d);//д��Driver.txt
	cout << "�Ƿ�����޸ļ�ʻԱ��Ϣ��Y/N����";
	cin >> k;
	return k;
}
void D_add(vector<Driver<int>>& D)//���� &�˴�Ӧ��������
{
	ifstream fin;
	fin.open("./Driver.txt", ios::in);
	if (!fin)
	{
		std::cerr << "Can't open the file.";
		exit(1);
	}//��֤
	while (!fin.eof())//��ֱ��дfin�ᵼ�¶�ȡ���ļ�β����finδ������ഴ��һ��Driver��Ķ���fin.eof()�����Ƿ�����ļ�β
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
	cout << "������ӵ����ͣ�Car/Driver����";
	string s;
	cin >> s;
	while (k == "Add" || s == "Y" || s == "y")
	{
		if (s == "Car" || s == "Y")s = C_A(V);
		if (s == "Driver" || s == "y")s = D_A(d);
		if (s != "N" && s != "Y" && s != "y" && s != "n")
		{
			cout << "k=" << k << " , " << "s=" << s << endl;
			cout << "��������" << endl;
		};
		k = s;
	}
	cout << "��ѯ��Search	�޸ģ�Correct	��ӣ�Add	ɾ����Delete	�˳���Exit" << endl;
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
	cout << "�������복����Ϣ--���͡���ʻԱ������������š�������̡�������ֵ";
	cout << "���ͣ�";
	cin >> bra;
	cout << "��ʻԱ������";
	cin >> D_num;
	cout << "������ţ�";
	cin >> Car_id;
	cout << "������̣�";
	cin >> C_mile;
	cout << "������ֵ��";
	cin >> Value;
	cout << "�����Ƿ�����(��-1/��-0)��";
	cin >> zu;
	cout << "����λ�ã�";
	cin >> L;
	Carstyle* p = new Car(bra, zu, L, D_num, Car_id, C_mile, Value);
	V.v.push_back(p);
	C_FIN(V);//Car.txt ��Ϣд��
	cout << "�Ƿ������ӳ�����Ϣ��Y/N����";
	string a;
	cin >> a;
	return a;
}
string D_A(vector<Driver<int>>& d)
{
	string nam;
	int ID;
	int Car_id;
	cout << "�����������ʻԱ��Ϣ--������ID���������" << endl;
	cout << "������";
	cin >> nam;
	cout << "ID��";
	cin >> ID;
	cout << "������ţ�";
	cin >> Car_id;
	Driver<int> b(nam, Car_id, ID);
	d.push_back(b);
	D_FIN(d);
	cout << "�Ƿ������Ӽ�ʻԱ��Ϣ��y/n����";
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
	cout << "����ɾ�������ͣ�Car/Driver����";
	string s;
	cin >> s;
	while (k == "Delete" || s == "Y" || s == "y")
	{
		if (s == "Car" || s == "Y")s = DELETE_C(V);
		if (s == "Driver" || s == "y")s = DELETE_D(d);
		k = s;
	}
	cout << "��ѯ��Search	�޸ģ�Correct	��ӣ�Add	ɾ����Delete	�˳���Exit" << endl;
	cin >> k;
	return k;
}
string DELETE_C(Company& V)
{
	cout << "���복����ţ�";
	int a;
	string s;
	cin >> a;
	if (a > V.v.size()) cout << "��������������" << endl;
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
	cout << "�Ƿ����ɾ��������Ϣ��Y/N����";
	cin >> s;
	return s;
}
string DELETE_D(vector<Driver<int>>& d)
{
	cout << "�����ʻԱ������";
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
	if (m == 0)cout << "δ�ҵ��˼�ʻԱ" << endl;
	if (m == 1)
	{
		vector<Driver<int>>::iterator it = d.begin();
		for (int j = 0; j < h[m - 1]; j++)//vector�е�һ��Ԫ�ص��±���0
		{
			it++;
		}
	}
	else
	{
		vector<Driver<int>>::iterator it = d.begin();
		int l = 0;
		cout << "����ͬ�����ļ�ʻԱ���������ʻԱID��";
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
		if (l == 0) cout << "��ʻԱID�������" << endl;
		d.erase(it);
	}
	D_FIN(d);
	cout << "�Ƿ����ɾ����ʻԱ��Ϣ��y/n����";
	cin >> s;
	return s;
}