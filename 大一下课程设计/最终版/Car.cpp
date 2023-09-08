#include"Car.h"

//Car
Car::Car(string m, bool zu,string L, int d_num, int car_id, int c_mile, int c_value) :Carstyle(m,zu,L), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Car车辆信息创建完成" << endl;
}
Car::Car(Carstyle c, int d_num, int car_id, int c_mile, int c_value) :Carstyle(c), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Car车辆信息创建完成" << endl;
}

void Car::GET_information()
{
	cout << "车型：Car" << endl;
	cout << "品牌：" << brand << endl;
	cout << "车辆编号：" << Car_id << endl;
	cout << "车辆里程：" << C_mile << "km" << endl;
	cout << "车辆价值：" << Value << "万" << endl;
	cout << "车辆是否在租（是-1/否-0）：" << ZU << endl;
	cout << "车辆位置：" << location << endl;
}
int Car::Get_C_mile()
{
	return C_mile;
}
int Car::Get_value()
{
	return Value;
}

bool Car::Search_id(int C_id)
{
	if (C_id == Car_id) return true;
	else return false;
}
void Car::Set_vm(int n, int v, int m)
{
	numb = n;
	All_value = v;
	All_mileage = m;
}
int Car::GET_D_NUM()
{
	return D_num;
}
int Car::GET_C_ID()
{
	return Car_id;
}
int Car::GET_C_MILE()
{
	return C_mile;
}
int Car::GET_C_VALUE()
{
	return Value;
}
void Car::C_BRAND(string s)
{
	this->R_BRAND() = s;
}
void Car::C_D_NUM(int a)
{
	D_num = a;
}
void Car::C_CAR_ID(int a)
{
	Car_id = a;
}
void Car::C_MILE(int a)
{
	C_mile = a;
}
void Car::C_VALUE(int a)
{
	Value = a;
}
int Car::C_ZU(bool ZU)
{
	if (ZU == true)return 1;
	else return 0;
}
void Car::C_Location(string L)
{
	location = L;
}
int Car::GET_ZU()
{
	return ZU;
}
string Car::GET_LOCATION()
{
	return location;
}

//Bus
Bus::Bus(string m,bool zu,string L, int d_num, int car_id, int c_mile, int c_value) :Carstyle(m,zu,L), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Bus车辆信息创建完成" << endl;
}
Bus::Bus(Carstyle c, int d_num, int car_id, int c_mile, int c_value) :Carstyle(c), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Bus车辆信息创建完成" << endl;
}
void Bus::GET_information()
{
	cout << "车型：Bus" << endl;
	cout << "品牌：" << brand << endl;
	cout << "车辆编号：" << Car_id << endl;
	cout << "车辆里程：" << C_mile << "km" << endl;
	cout << "车辆价值：" << Value << "万" << endl;
	cout << "车辆是否在租（是-1/否-0）：" << ZU << endl;
	cout << "车辆位置：" << location << endl;

}
int Bus::Get_C_mile()
{
	return C_mile;
}
int Bus::Get_value()
{
	return Value;
}
bool Bus::Search_id(int C_id)
{
	if (C_id == Car_id) return true;
	else return false;
}
void Bus::Set_vm(int n, int v, int m)
{
	numb = n;//车辆数量
	All_value = v;
	All_mileage = m;
}
int Bus::GET_D_NUM()
{
	return D_num;
}
int Bus::GET_C_ID()
{
	return Car_id;
}
int Bus::GET_C_MILE()
{
	return C_mile;
}
int Bus::GET_C_VALUE()
{
	return Value;
}
int Bus::GET_ZU()
{
	return ZU;
}
void Bus::C_BRAND(string s)
{
	this->R_BRAND() = s;
}
void Bus::C_D_NUM(int a)
{
	D_num = a;
}
void Bus::C_CAR_ID(int a)
{
	Car_id = a;
}
void Bus::C_MILE(int a)
{
	C_mile = a;
}
void Bus::C_VALUE(int a)
{
	Value = a;
}
int Bus::C_ZU(bool ZU)
{
	if (ZU == true)return 1;
	else return 0;
}
void Bus::C_Location(string L)
{
	location = L;
}
string Bus::GET_LOCATION()
{
	return location;
}



//Truck
Truck::Truck(string m,bool zu,string L, int d_num, int car_id, int c_mile, int c_value) :Carstyle(m,zu,L), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Truck车辆信息创建完成" << endl;
}
Truck::Truck(Carstyle c, int d_num, int car_id, int c_mile, int c_value) :Carstyle(c), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Truck车辆信息创建完成" << endl;
}
void Truck::GET_information()
{
	cout << "车型：Truck" << endl;
	cout << "品牌：" << brand << endl;
	cout << "车辆编号：" << Car_id << endl;
	cout << "车辆里程：" << C_mile << "km" << endl;
	cout << "车辆价值：" << Value << "万" << endl;
	cout << "车辆是否在租（是-1/否-0）：" << ZU << endl;
	cout << "车辆位置：" << location << endl;

}
int Truck::Get_C_mile()
{
	return C_mile;
}
int Truck::Get_value()
{
	return Value;
}
bool Truck::Search_id(int C_id)
{
	if (C_id == Car_id) return true;
	else return false;
}
void Truck::Set_vm(int n, int v, int m)
{
	numb = n;
	All_value = v;
	All_mileage = m;
}
int Truck::GET_D_NUM()
{
	return D_num;
}
int Truck::GET_C_ID()
{
	return Car_id;
}
int Truck::GET_C_MILE()
{
	return C_mile;
}
int Truck::GET_C_VALUE()
{
	return Value;
}
int Truck::GET_ZU()
{
	return ZU;
}
void Truck::C_BRAND(string s)
{
	this->R_BRAND() = s;
}
void Truck::C_D_NUM(int a)
{
	D_num = a;
}
void Truck::C_CAR_ID(int a)
{
	Car_id = a;
}
void Truck::C_MILE(int a)
{
	C_mile = a;
}
void Truck::C_VALUE(int a)
{
	Value = a;
}
int Truck::C_ZU(bool ZU)
{
	if (ZU == true)return 1;
	else return 0;
}
void Truck::C_Location(string L)
{
	location = L;
}
string Truck::GET_LOCATION()
{
	return location;
}

