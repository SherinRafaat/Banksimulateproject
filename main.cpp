#include <iostream>
using namespace std;
#include "Bank.h"
#include <cctype>

bool containsOnlyDigits(const string& str)
{
    for (char c : str)
    {
        if (!isdigit(c))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int numOfCustomers;
    cout << endl;
    SetColor(3);
    cout << " \t\t\t\t\t************************************\t\t\t\t" << endl;
    cout << " \t\t\t \t\t Bank Queue Management System(BQMS)  ";
    cout << "                                \t\t\t\t\t\t************************************\t\t\t\t" << endl;
    SetColor(15);

    Bank b1;

    /*
        Customer c1 = Customer("Ahmed", 35, 62);
        Customer c2 = Customer("Biba", 39, 57);
        Customer c3 = Customer("Clow", 78, 124);
        Customer c4 = Customer("Diaa", 79, 32);
        Customer c5 = Customer("Ameria", 80, 15);
        Customer c6 = Customer("Fatma", 90, 10);
        Customer c7 = Customer("Ghad", 95, 20);
        Customer c8 = Customer("Hala", 107, 20);

        b1.addCustomerToPriorityQueue(c1);
        b1.addCustomerToPriorityQueue(c2);
        b1.addCustomerToPriorityQueue(c3);
        b1.addCustomerToPriorityQueue(c4);
        b1.addCustomerToPriorityQueue(c5);
        b1.addCustomerToPriorityQueue(c6);
        b1.addCustomerToPriorityQueue(c7);
        b1.addCustomerToPriorityQueue(c8);

       b1.run();

    */

    cout << "--> Enter Number of Customers that You Want to Simulate: ";
    cin >> numOfCustomers;

    for (int i = 0; i < numOfCustomers; i++)
    {
        string name;
        int arrivalTime, serviceTime;
        SetColor(3);
        cout << "       Enter Details of Customer " << i + 1 << ":" << endl;
        SetColor(15);
        cout << "--> Name : ";
        cin >> name;
        cout << "--> Arrival Time : ";
        cin >> arrivalTime;
        cout << "--> Service Time : ";
        cin >> serviceTime;

        Customer customer(name, arrivalTime, serviceTime);
        b1.addCustomerToPriorityQueue(customer);
    }


    b1.run();



    return 0;
}
