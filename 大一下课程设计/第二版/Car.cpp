#include"Car.h"

//Car
Car::Car(string m, int d_num, int car_id, int c_mile, int c_value) :Carstyle(m), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Car������Ϣ�������" << endl;
}
Car::Car(Carstyle c, int d_num, int car_id, int c_mile, int c_value) :Carstyle(c), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Car������Ϣ�������" << endl;
}

void Car::GET_information()
{
	cout << "���ͣ�Car" << endl;
	cout << "Ʒ�ƣ�" << brand << endl;
	cout << "������ţ�" << Car_id << endl;
	cout << "������̣�" << C_mile << endl;
	cout << "������ֵ��" << Value << endl;

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
	cout << "Bus������Ϣ�������" << endl;
}
Bus::Bus(Carstyle c, int d_num, int car_id, int c_mile, int c_value) :Carstyle(c), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Bus������Ϣ�������" << endl;
}
void Bus::GET_information()
{
	cout << "���ͣ�Bus" << endl;
	cout << "Ʒ�ƣ�" << brand << endl;
	cout << "������ţ�" << Car_id << endl;
	cout << "������̣�" << C_mile << endl;
	cout << "������ֵ��" << Value << endl;

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
	numb = n;//��������
	All_value = v;
	All_mileage = m;
}


//Truck
Truck::Truck(string m, int d_num, int car_id, int c_mile, int c_value) :Carstyle(m), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Truck������Ϣ�������" << endl;
}

Truck::Truck(Carstyle c, int d_num, int car_id, int c_mile, int c_value) :Carstyle(c), D_num(d_num), Car_id(car_id), C_mile(c_mile), Value(c_value)
{
	cout << "Truck������Ϣ�������" << endl;
}



void Truck::GET_information()
{
	cout << "���ͣ�Truck" << endl;
	cout << "Ʒ�ƣ�" << brand << endl;
	cout << "������ţ�" << Car_id << endl;
	cout << "������̣�" << C_mile << endl;
	cout << "������ֵ��" << Value << endl;

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
