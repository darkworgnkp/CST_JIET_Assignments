/*

	Scooby has 3 three integers A, B and C.
 
Scooby calls a positive integer special if it is divisible by B and it is divisible by C. You need to tell number of special integers less than or equal to A.


*/

#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int q,r;
    q=a/b;
    r=a%b;
    if (r==0){
        return b;
    }
    else{
    gcd(b,r);
    }
}

int main(){

    int a,b,c;
    cout<<"Enter A:";
    cin>>a;
    cout<<"\nEnter B:";
    cin>>b;
    cout<<"\nEnter C:";
    cin>>c;
    int lcm=(b*c)/gcd(b,c);
    cout<<"Total nos between range 1 to "<<a<<" that are divisible by "<<b<<" and "<<c<<" are:"<<a/lcm;
}
