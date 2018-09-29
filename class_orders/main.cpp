//
//  main.cpp
//  class_orders
//
//  Created by 李静怡 on 4/29/17.
//  Copyright © 2017 李静怡. All rights reserved.
//

#include <iostream>
#include "orders.h"
using namespace std;

float Getprice(int);

int main()
{
    int num1 (3), num2, num3, count;
    long int ID_c;
    string name_c, address, name_p;
    vector <int> ID_p, amount;
    vector <string> s1;
    cout << "Please enter your ID, name and address:\n";
    cin >> ID_c >> name_c;
    getline(cin, address);
    cout << "How many orders would you like to place?\n";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << "\nOrder" << i+1 << ":\n";
        cout << "Please enter the fruit's id, name and amount to order:\n(1001 apple, 1002 banana, 1003 orange, 1004 pineapple, 1005 mango)\n";
        for (int i = 0; i < num1; i++)
        {
            cin >> num2 >> name_p >> num3;
            if (num2 != 1001 && num2 != 1002 && num2 != 1003 && num2 != 1004 && num2 != 1005)
            {
                cout << "The id do not exist. Please enter again.\n";
                i--;
            }
            else
            {
                ID_p.push_back(num2);
                s1.push_back(name_p);
                amount.push_back(num3);
            }
        }
    }
    items i1 (amount[0], ID_p [0], s1 [0], Getprice(ID_p [0]));
    items i2 (amount[1], ID_p [1], s1 [1], Getprice(ID_p [1]));
    items i3 (amount[2], ID_p [2], s1 [2], Getprice(ID_p [2]));
    items i4 (amount[3], ID_p [3], s1 [3], Getprice(ID_p [3]));
    items i5 (amount[4], ID_p [4], s1 [4], Getprice(ID_p [4]));
    items i6 (amount[5], ID_p [5], s1 [5], Getprice(ID_p [5]));
    i1.countiprice(amount[0]);
    i2.countiprice(amount[1]);
    i3.countiprice(amount[2]);
    i4.countiprice(amount[3]);
    i5.countiprice(amount[4]);
    i6.countiprice(amount[5]);
    order o1 (i1, i2, i3, ID_c, name_c, address);
    order o2 (i4, i5, i6, ID_c, name_c, address);
    o1.ShowOrder();
    i1.Showitems();
    i2.Showitems();
    i3.Showitems();
    o2.ShowOrder();
    i4.Showitems();
    i5.Showitems();
    i6.Showitems();
    return 0;
}

float Getprice(int id)
{
    float price;
    switch (id)
    {
        case 1001:
            price = 2.5;
            break;
        case 1002:
            price = 1.0;
            break;
        case 1003:
            price = 2.0;
            break;
        case 1004:
            price = 10.0;
            break;
        case 1005:
            price = 6.0;
            break;
        default:
            price = 0;
            break;
    }
    return price;
}
