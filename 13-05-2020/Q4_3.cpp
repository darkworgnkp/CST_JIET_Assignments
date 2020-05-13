/*
Print all the magic numbers from 1 to 1000
( a magic number is a number whose sum of digits is always 1 provided sum is less than 10 otherwise we again have to compute sum of digits of the sum itself)
For example :
N=10     (1+0=1) Magic Number

N=897  sum=(8+9+7=24
          Again 2+4=6 which is not equal to 1) so output is not magic number

*/
/*bool isMagic(int n)
{
    int sum = 0;


    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }

    return (sum == 1);
}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 1000;
    int i = 1;
    cout<<"All Magic Numbers Between 1 to 1000:"<<endl;
    for(i;i<= n;i++)
    {
        if (i % 9 == 1){
            cout<<i<<"\t";
        }
       /* cout<<"\t";
       if(isMagic(i))
            cout<<i;      // Bruteforce
        cout<<"\n";*/
    }

return 0;
}

