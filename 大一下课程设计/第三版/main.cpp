#include"Drivers.h"
#include"Company.h"
#include"hanshu.h"
int main()
{
	//对象的创建
	Company v;
	vector<Driver<int>> D;
	//读取文件数据
	v.Add();//读取Car.txt
	D_add(D);//读取Driver.txt
	cout << "查询：Search	修改：Correct	添加：Add	删除：Delete	退出：Exit" << endl;
	string k;
	cin >> k;

	while (k != "Exit")
	{
		if (k == "Search") k = S_S(k, D,v);//查找并显示信息
		if (k == "Correct")k = S_C(k, D,v);//查找并修改信息
		if (k == "Add")k = P_A(k, D,v);//定位并添加信息
		if (k == "Delete")k = P_D(k, D, v);//定位并删除信息
		else break;
	}

	return 0;
}
