/*
You have an array lets say a vector or a static array
  that arrays contains some numbers.You have to remove minimum number of
   elements from array such that sum of adjacent elements is always even

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"How May Array elements:"<<endl;
    cin>>n;
    vector<int> A(n);
    cout<<"Enter an Array"<<endl;
    for(int i =0;i<A.size();i++)
    {
        cout<<"Enter Element:";
        cin>>A[i];
        cout<<endl;
    }
    int i,o=0,e=0;
    for(i=0;i<A.size();++i){
        if(A[i]%2==0)
            ++e;
        else
            ++o;
    }
    cout<<"Minimum number of elements to be removed is "<<min(o,e)<<endl;
}
