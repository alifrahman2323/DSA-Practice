#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long money, left_over_after_dem, number_of_bills = 0LLU;
    cin>>money;
    //for 100
    left_over_after_dem = money % 100LLU;
    number_of_bills += money / 100LLU;
    money = left_over_after_dem;
    //for 50
    left_over_after_dem = money % 50LLU;
    number_of_bills += money / 50LLU;
    money = left_over_after_dem;

    //for 20
    left_over_after_dem = money % 20LLU;
    number_of_bills += money / 20LLU;
    money = left_over_after_dem;

    //for 10
    left_over_after_dem = money % 10LLU;
    number_of_bills += money / 10LLU;
    money = left_over_after_dem;

    //for 5
    left_over_after_dem = money % 5LLU;
    number_of_bills += money / 5LLU;
    money = left_over_after_dem;
    //for 1
    number_of_bills += money;

    cout<<number_of_bills<<endl;

    return 0;
}