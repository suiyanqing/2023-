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
	
	v.S_M_N();//����������·�̺��ܼ�ֵ

	D_add(D);//��ȡDriver.txt
	//cout << "ko" << endl;

	cout << "��ѯ��Search	�޸ģ�Correct		�˳���Exit" << endl;
	string k;
	cin >> k;

	while (k != "Exit")
	{
		if (k == "Search") k=S_S(k, D);//���Ҳ���ʾ��Ϣ
		if (k == "Correct")k=S_C(k, D);//���Ҳ��޸���Ϣ
		else break;
		/*cout << "��ѯ��Search	�޸ģ�Correct	�˳���Exit" << endl;
		cin >> k;*/
	}

	return 0;
}
