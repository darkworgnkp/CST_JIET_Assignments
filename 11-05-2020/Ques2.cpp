/*
         Square Root of Integer
Given an integar A. Compute and return the square root of A.
If A is not a perfect square, return floor(sqrt(A)).

*/
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int n;
cout<<"Enter the number:";
cin>>n;
float h = n;
float l = 1;
float mid;

for(int i = 1;i<n;i++)
{
  mid = (l+h)/2;
    if(mid*mid > n)
    {
       h = mid-1;
    }
    else
    {if(mid*mid < n)
      {
        l = mid+1;
      }
    }
}
cout<<"Using B search:"<<mid<<endl;

cout<<"Using sqrt fun:"<<sqrt(n);
}

