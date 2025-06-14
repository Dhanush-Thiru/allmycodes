#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int num;
    int result;
    cout<<"Enter the number ot be reveresd";
    cin>>num;
    
    for(int i=0;i<(num == 0 ? 1 : (int)log10(abs(num)) + 1);i++)
    int digit = num%10;
    num/=10;
    result+=digit;
    
    cout<<"The reversed integer is: "<<result;
    
    return 0;
}