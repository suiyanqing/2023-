#include"hanshu.h"
#include"Car.h"
#include"Drivers.h"
#include<fstream>
string S_S(string k, vector<Driver<int>>& d)
{
	while (k == "Search")
	{
		string nam;
		cout << "�����ʻԱ������";
		cin >> nam;
		//cout << "nam=" << nam << endl;--ok
		int m = 0;
		cout << d.size() << endl;
		for (int i = 0; i < d.size(); i++)
		{
			if (d[i].judge(nam))
			{
				d[i].display_D();
				m++;
			}
		}
		if (m > 1) cout << "����ͬ�����ļ�ʻԱ,�����б��!" << endl;
		if(m==0) cout << "δ�ҵ���Ӧ�ļ�ʻԱ" << endl;
		cout << "��ѯ��Search		�޸ģ�Correct		�˳���Exit" << endl;
		cin >> k;
	}
	return k;
}
string S_C(string k, vector<Driver<int>>& d)
{
	while (k == "Correct")
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
		fstream fout;
		fout.open("./Driver.txt", ios::out);
		for (int i = 0; i < d.size(); i++)
		{
			fout << d[i].Get_name() << endl;
			fout << d[i].Get_Id() << endl;
			fout << d[i].Get_Car_id() << endl;
		}
		fout.close();
		cout << "��ѯ��Search			�޸ģ�Correct		�˳���Exit" << endl;
		cin >> k;
	}
	//if()
	return k;
}
void D_add(vector<Driver<int>>& D)//���� &�˴�Ӧ��������
{
	ifstream fin;
	fin.open("./Driver.txt", ios::in);
	if (!fin)
	{
		std::cerr << "Can't open the file.";
	}//��֤
	//DQ(fin, D);
	int i = 0;
	while (fin)
	{
		i++;
		cout << "i=" << i << endl;
		string nam;
		int id;
		int c_id;
		fin >> nam >> id >> c_id;
		Driver<int> c(nam, c_id, id);
		//c.display_D();//��ഴ��һ������--������
		D.push_back(c);
	}
	fin.close();
}