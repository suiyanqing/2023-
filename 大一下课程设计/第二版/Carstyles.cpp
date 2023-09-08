#include"Carstyles.h"
Carstyle::Carstyle(string m) :brand(m)
{
	cout << "车辆类型信息创建完成 " << endl;
}
void Carstyle::display()
{
	cout << "车型：" << brand << endl;
	cout << "此车型总里程：" << All_mileage << endl;
	cout << "此类车辆的数量：" << numb << endl;
}
void Carstyle::Set_mileage(int mile)
{
	All_mileage = mile;
	cout << "车型总里程更新成功" << endl;
}
void Carstyle::Set_numb(int num)
{
	numb = num;
	cout << "此车型下车辆数量更新成功" << endl;
}
void Carstyle::Set_value(int valu)
{
	All_value = valu;
	cout << "此类车辆总价值更新成功" << endl;
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
	cout << "品牌：" << brand << endl;
	cout << "此品牌车辆总里程：" << All_mileage << endl;
	cout << "此品牌车辆的数量：" << numb << endl;
	cout << "此品牌车辆总价值：" << All_value << endl;
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