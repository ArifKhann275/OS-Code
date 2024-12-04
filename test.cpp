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
    int bt[4]={3,4,2,4};
	int btt[4]={3,4,2,4};
	int ct[4];
	sort(bt, bt+4);
	int sum=0;
	
	for(int i=0; i<3; i++)
	{
		
		for(int j=0; j<4; j++)   
		{
			
			if(bt[i]==btt[j])
			{
				sum+=btt[j];
				cout<<sum<<" "<<j+1<<" " <<i+1<<endl;
				

				ct[j]=sum;
				

			}
		}
	}
	for(int i=0 ; i<4; i++)
	{
		cout<<ct[i]<<" ";
	}

    return 0;
}