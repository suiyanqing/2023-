#include"Drivers.h"
#include"Company.h"
#include"hanshu.h"
int main()
{
	//����Ĵ���
	Company v;
	vector<Driver<int>> D;
	//��ȡ�ļ�����
	v.Add();//��ȡCar.txt
	D_add(D);//��ȡDriver.txt
	cout << "��ѯ��Search	�޸ģ�Correct	��ӣ�Add	ɾ����Delete	�˳���Exit" << endl;
	string k;
	cin >> k;

	while (k != "Exit")
	{
		if (k == "Search") k = S_S(k, D,v);//���Ҳ���ʾ��Ϣ
		if (k == "Correct")k = S_C(k, D,v);//���Ҳ��޸���Ϣ
		if (k == "Add")k = P_A(k, D,v);//��λ�������Ϣ
		if (k == "Delete")k = P_D(k, D, v);//��λ��ɾ����Ϣ
		else break;
	}

	return 0;
}
