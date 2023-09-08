#include"hanshu.h"
#include"Car.h"
#include"Drivers.h"
int S_S(string k,vector<Driver>& d)
{
	while (k == "Search")
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
		cout << "查询：Search		退出：Exit" << endl;
		cin >> k;
	}
	return 1;
}
int S_C(string k, vector<Driver>& d)
{
	while (k == "Correct")
	{
		string nam;
		cout << "输入驾驶员姓名：";
		cin >> nam;
		vector<int> v;
		int m=0;
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
		cout << "修改：Correct		退出：Exit" << endl;
		cin >> k;
	}
	return 1;
}
void D_add(vector<Driver> D)
{
	ifstream fin;
	fin.open("./Driver.txt", ios::in);
	if (!fin)
	{
		std::cerr << "Can't open the file.";
	}//验证
	//DQ(fin, D);
	while (fin)
	{
		string nam;
		int id;
		int c_id;
		fin >> nam >> id >> c_id;
		Driver c(nam, id, c_id);
		D.push_back(c);
	}
	fin.close();
}