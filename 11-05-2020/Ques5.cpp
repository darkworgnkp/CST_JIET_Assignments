/*
Given an integer array A of N integers, find the pair of integers in the array which have
minimum XOR value. Report the minimum XOR value. You have an array A[] with N elements. We have 2 types of operation available on this
array :
. We can split a element B into 2 elements C and D such that B = C + D.
. We can merge 2 elements P and Q as one element R such that R = P^Q i.e XOR of P
and Q. You have to determine whether it is possible to make array A[] containing only 1
element 0 after several splits and/or merge?
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   vector<int> a;
    int n,p;
    cout<<"Enter the no. Of Element In array:"<<endl;
    cin>>n;
    cout<<"Enter an Array"<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<"Enter Element:";
        cin>>p;
        a.push_back(p);
    }


    int i,s,m=INT_MAX;
    sort(a.begin(),a.end());
    for(int i =0;i<a.size();i++)
    {
        s=a[i]^a[i-1];
        if(m>s)
        m=s;
    }
    cout<<"Min X-or Value:"<<m<<endl;

}

