#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int num;
    int result=0;
    cout<<"Enter the number to find armstrong number";
    cin>>num;
    
    for(int i=0; i<=3; i++){
        int digit = num%10;
        result = num*num*num;
        num/=10;
    }
    
    if (result == num){
        cout<<"The entered number is an armstrong number";
    }
    else{
        cout<<"The entered number is not an armstrong number";
    }
    
    cout<<"The output result is: "<<result;
    
    return 0;
}