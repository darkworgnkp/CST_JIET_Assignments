/*
Question 1:
Single Number
Given an array of integers, every element appears twice except for one. Find that single
one. Note: Your algorithm should have a linear runtime complexity. Could you implement it without
using extra memory?
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   vector<int> a;
    int n,p,e=0;
    cout<<"Enter the no. Of Element In array:"<<endl;
    cin>>n;
    cout<<"Enter an Array"<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<"Enter Element:";
        cin>>p;
        a.push_back(p);
    }

    for (int i = 0;i<n;i++)
    {
        e = e^a[i];
    }
    cout<<"The Single One:"<<e<<endl;
}

