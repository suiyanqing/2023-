#include"Drivers.h"
#include"Company.h"
#include"hanshu.h"
int main()
{
	//����Ĵ���
	Company<Carstyle> v;
	vector<Driver> D;
	//��ȡ�ļ�����
	v.Add();//��ȡCar.txt
	v.S_M_N();//����������·�̺��ܼ�ֵ

	D_add(D);//��ȡDriver.txt

	cout << "��ѯ��Search	�޸ģ�Correct	�˳���Exit" << endl;
	string k;
	cin >> k;
	
	while (k != "Exit")
	{
		if (k == "Search") S_S(k,D);//���Ҳ���ʾ��Ϣ
		if (k == "Correct")S_C(k,D);//���Ҳ��޸���Ϣ
		else break;
	}
	
	return 0;
}
