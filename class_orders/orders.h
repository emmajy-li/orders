//
//  orders.h
//  class_orders
//
//  Created by 李静怡 on 4/29/17.
//  Copyright © 2017 李静怡. All rights reserved.
//

#include <vector>
#include <string>

using namespace std;

class goods
{
private:
    long int GoodsID;
    string name;
    float  price;
public:
    goods(long int a, string x, float y);
    long int GetGoodsID();
    string GetGoodsname();
    float GetGoodsprice();
};

class items
{
private:
    int amount;
    float iprice;
public:
    goods g;
    items(int n, long int a, string x, float y);//:g(a, x, y);
    float countiprice(int n);
    float Getiprice();
    void Showitems();
};

class customer
{
private:
    long int CusID;
    string name, address;
public:
    customer(long int i, string x, string y);
    long int GetcID();
    string Getcname();
    string Getcaddress();
};

class order
{
private:
    long int ID;
    float totalprice;
public:
    customer cus;
    order (items x, items y, items z, long int a, string b, string c);//:cus(a, b, c);
    void ShowOrder();
};


