//GCD OF A AND B + LCM

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
int x,y,a,b;
cout<<"Enter the Numbers For GCD:";
cin>>x>>y;
cout<<endl;
a=(x>y?x:y);
b=((x+y)-a);
int gd = (b==1?1:gcd(a,b));
cout<<"Greatest divisor that divides both "<<x<<" and "<<y<< " is " <<gd;
cout<<"\nLCM IS:"<<(a*b)/gd;
return 0;
}


