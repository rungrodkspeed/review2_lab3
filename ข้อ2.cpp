#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double i=10;
    double sum=0;
    while(i<=50){
        sum+=pow(i,2);
        i++;
    }
    cout << sum;
    return 0;
}