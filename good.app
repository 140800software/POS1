#include"good.h"
#include<iostream>
using namespace std;

using namespace std;

string good::getBarcode() {
	return barcode;
}
string good::getName() {
	return name;
}
string good::getUnit() {
	return unit;
}
float good::getPrice() {
	return price;
}
float good::getDiscount() {
	return discount;
}
int good::getCount() {
	return count;
}
float good::gettotal() {
	return price*count*discount;
}
float good::getOriginal_Price() {
	return price*count;
}
void good::output() {
	cout << "名称：" << name << "，数量：" << count << unit << "，单价：" << price << "，小计:" << gettotal() << "元";
}
