#include"Carstyles.h"
Carstyle::Carstyle(string m) :brand(m)
{
	cout << "����������Ϣ������� " << endl;
}
void Carstyle::display()
{
	cout << "���ͣ�" << brand << endl;
	cout << "�˳�������̣�" << All_mileage << endl;
	cout << "���೵����������" << numb << endl;
}
void Carstyle::Set_mileage(int mile)
{
	All_mileage = mile;
	cout << "��������̸��³ɹ�" << endl;
}
void Carstyle::Set_numb(int num)
{
	numb = num;
	cout << "�˳����³����������³ɹ�" << endl;
}
void Carstyle::Set_value(int valu)
{
	All_value = valu;
	cout << "���೵���ܼ�ֵ���³ɹ�" << endl;
}
string Carstyle::Get_brand()
{
	return brand;
}
int Carstyle::Get_All_mileage()
{
	return All_mileage;
}
int Carstyle::Get_numb()
{
	return numb;
}
int Carstyle::Get_All_value()
{
	return All_value;
}
void Carstyle::GET_information()
{
	cout << "Ʒ�ƣ�" << brand << endl;
	cout << "��Ʒ�Ƴ�������̣�" << All_mileage << endl;
	cout << "��Ʒ�Ƴ�����������" << numb << endl;
	cout << "��Ʒ�Ƴ����ܼ�ֵ��" << All_value << endl;
}
int Carstyle::Get_value()
{
	return 1;
}
void Carstyle::Set_vm(int n, int v, int m)
{

}
bool Carstyle::Search_id(int C_id)
{
	return 1;
}
int Carstyle::Get_C_mile()
{
	return 1;
}