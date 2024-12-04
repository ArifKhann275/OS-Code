#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<cctype>
#include<math.h>
#include<cmath>
#include<vector>
using namespace std;
#define ll long long

int main() {
	
	/*
         █████    ███████    ██   █████████
        ██╔══██╗  ██    ██   ██   ██
        ███████║  ███████    ██   ███████
        ██╔══██║  ██ ██      ██   ██
        ██║  ██║  ██   ██    ██   ██
        ╚═╝  ╚═╝  
	  
	*/
    int at[4]={0,0,0,0};
    int bt[4]={2,5,3,4};
    int ct[4],tat[4],wt[4];
    int n=4;
    int t=2;
    float c=bt[0];
    
    for(int i=1; i<n; i++)
    {
        if(c<bt[i])
        {
            c= bt[i];
        }
    }
    int m= ceil(c/t);
    cout<<m<<endl;
    int sum=0;
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(bt[i]>t)
            {
                bt[i]-=t;
                sum+=t;
                ct[i]=sum;
            }
            else
            {
                sum+=bt[i];
                if(bt[i]!=0)
                {

                    ct[i]=sum;
                }
                bt[i]=0;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<ct[i]<<" ";
    }
    
    
    return 0;
}