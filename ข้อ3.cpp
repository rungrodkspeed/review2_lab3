#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i=3;
    double sum=0;
    while(i<=300){
        sum+=pow(i,2);
        i+=3;
    }
    cout << sum;
    return 0;
}