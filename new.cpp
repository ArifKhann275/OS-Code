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
    int at[4]={0,1,5,6};
    int bt[4]={2,2,3,4};
    int ct[4],tat[4],wt[4];
    int c=0;

    for(int i=0; i<4; i++)
    {
        if(at[i]<=c)
        {
            c+=bt[i];
            ct[i]= c;
        }
        else
        {
            c++;
            i--;
        }
        
    }
    for(int i=0; i<4;i++)
    {
        cout<<ct[i]<<" ";

    }  
    cout<<endl;
    for(int i=0 ;i< 4; i++)
    {

        tat[i]=ct[i]-at[i];
        cout<<tat[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<tat[i]-bt[i]<<" ";
    }
    return 0;
}