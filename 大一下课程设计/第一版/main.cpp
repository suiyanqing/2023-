#include"Drivers.h"
#include"Company.h"
#include"hanshu.h"
int main()
{
	//对象的创建
	Company<Carstyle> v;
	vector<Driver> D;
	//读取文件数据
	v.Add();//读取Car.txt
	v.S_M_N();//分类别计算总路程和总价值

	D_add(D);//读取Driver.txt

	cout << "查询：Search	修改：Correct	退出：Exit" << endl;
	string k;
	cin >> k;
	
	while (k != "Exit")
	{
		if (k == "Search") S_S(k,D);//查找并显示信息
		if (k == "Correct")S_C(k,D);//查找并修改信息
		else break;
	}
	
	return 0;
}
