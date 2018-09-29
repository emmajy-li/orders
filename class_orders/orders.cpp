//
//  orders.cpp
//  class_orders
//
//  Created by 李静怡 on 4/29/17.
//  Copyright © 2017 李静怡. All rights reserved.
//

#include "orders.h"
#include <fstream>
#include <iostream>

fstream outfile("/Users/Emma/Documents/Xcode/class_orders/class_orders/file_order.txt", ios::out | ios::app | ios::ate);
fstream infile("/Users/Emma/Documents/Xcode/class_orders/class_orders/file_ID.txt", ios::in);

goods::goods(long int a, string x, float y)
{
    GoodsID = a;
    name = x;
    price = y;
}

string goods::GetGoodsname()
{
        return name;
}

float goods::GetGoodsprice()
{
    return price;
}

long int goods::GetGoodsID()
{
    return GoodsID;
}

items::items(int n, long int a, string x, float y):g(a, x, y)
{
    amount = n;
}

float items::countiprice(int n)
{
    return iprice = g.GetGoodsprice() * n;
}

float items::Getiprice()
{
    return iprice;
}

void items::Showitems()
{
    outfile << "\nGoods' ID: " << g.GetGoodsID() << "\nGoods' name: " << g.GetGoodsname() << "\nGoods' unit price: " << g.GetGoodsprice() << '\n' << "Goods' amount: " << amount << "\nTotal price of the goods: " << iprice << '\n';
    cout << "\nGoods' ID: " << g.GetGoodsID() << "\nGoods' name: " << g.GetGoodsname() << "\nGoods' unit price: " << g.GetGoodsprice() << '\n' << "Goods' amount: " << amount << "\nTotal price of the goods: " << iprice << '\n';
}

long int customer::GetcID()
{
    return CusID;
}

string customer::Getcname()
{
    return name;
}

string customer::Getcaddress()
{
    return address;
}

customer::customer(long int i, string x, string y)
{
    CusID = i;
    name = x;
    address = y;
}

order::order (items x, items y, items z, long int a, string b, string c):cus(a, b, c)
{
    infile >> ID;
    totalprice = x.Getiprice() + y.Getiprice() + z.Getiprice();
}
void order::ShowOrder()
{
    outfile << "\nInfo of the customer\n---------------------\nCustomer's ID: " << cus.GetcID() << "\nCustomer's name: " << cus.Getcname() << "\nCustomer's address:" << cus.Getcaddress() << '\n' << "\nOrder of the customer" << "\n---------------------\nID of the order: " << ID <<"\nTotal price of the order: " << totalprice << '\n';
    cout << "\nInfo of the customer\n---------------------\nCustomer's ID: " << cus.GetcID() << "\nCustomer's name: " << cus.Getcname() << "\nCustomer's address:" << cus.Getcaddress() << '\n' << "\nOrder of the customer" << "\n---------------------\nID of the order: " << ID <<"\nTotal price of the order: " << totalprice << '\n';
}
