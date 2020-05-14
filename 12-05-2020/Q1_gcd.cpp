 //The logic behind it is GCD of consecutive numbers is always 1 but if numbers are equal return number
 //   if(A==B)
  //      return A;
 //   else
 //       return "1";
//GCD OF A AND B
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
cout<<"Greatest divisor that divides both "<<x<<" and "<<y<< " is " <<(b==1?1:gcd(a,b));
return 0;
}



