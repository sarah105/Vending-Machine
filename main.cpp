/**
this program for Vending Machine Simulator
it is created by : Sarah Said and Shrouk Nady
Description :
    this machine contains 10 items that user can buy
    it takes from buyer and contains  only (20 or 10 or 5 or 1 or 0.5)
    it takes money from buyer and then buyer buy what he want that it is price less than or equal the money he/she put in machine
    the machine will stop when it will be empty
**/

#include <iostream>
#include <bits/stdc++.h>
#include "Vending Machine.h"
using namespace std;

int main()
{
    Vending_Machine Order ;
    while (true)
    {
        if ( !Order.Empty() )
            return 0 ;
        cout << " Enter Money : " ;
        float Money ;
        cin >> Money ;
        Order.setMoney(Money);/// setter for Money
        while (true)
        {
            cout << " Choose What You Want : " ;
            int Choise ;
            cin >> Choise ;
            Order.setItem(Choise);/// setter for Items
            cout << " 1 - Return Your Money .\n" ;
            cout << " 2 - Ok .\n";
            int x ;
            cin >> x ;
            if (x == 1)
            {
                Order.ReturnMoney();///for return the rest of money
                return 0;
            }
            else if (x == 2)
                Order.setMeal();///if chick is true it will minus item and money
            if ( !Order.Empty() )
            {
                Order.ReturnMoney() ;///for return the rest of money
                return 0 ;
            }
            cout << " 1 - Do You Want To Any Thing Else ? \n" ;
            cout << " 2 - Exit . \n " ;
            int y;
            cin >> y ;
            if (y == 1)
                continue ;
            else if (y == 2)
            {
                Order.ReturnMoney() ;
                break;
            }
        }
    }

    return 0;
}
