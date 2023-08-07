#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NetSalary, Basic_Salary, Allowances, Deductions;
    cin>>Basic_Salary>>Allowances>>Deductions;
    NetSalary=Basic_Salary+Basic_Salary*Allowances/100-Basic_Salary*Deductions/100;
    cout<<NetSalary;
}
