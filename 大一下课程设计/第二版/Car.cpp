#include"Car.h"

//Car
Car::Car(string m, int d_num, int car_id, int c_mile, int c_value) :Carstyle(m), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
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
	cout << "车辆里程：" << C_mile << endl;
	cout << "车辆价值：" << Value << endl;

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


//Bus
Bus::Bus(string m, int d_num, int car_id, int c_mile, int c_value) :Carstyle(m), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
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
	cout << "车辆里程：" << C_mile << endl;
	cout << "车辆价值：" << Value << endl;

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


//Truck
Truck::Truck(string m, int d_num, int car_id, int c_mile, int c_value) :Carstyle(m), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
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
	cout << "车辆里程：" << C_mile << endl;
	cout << "车辆价值：" << Value << endl;

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
