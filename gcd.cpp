/*Source: https://www.hackerrank.com/challenges/john-and-gcd-list 
C++ Solution:*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void input(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
int lcm(int a,int b)
{
    int c=a*b;
    while(a!=b)
    {
        if(a>=b)
            a=a-b;
        else
            b=b-a;
    }
    return (c/a);
}
void fillb(int *a,int *b,int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        b[i]=lcm(a[i-1],a[i]);
    }
    b[n]=a[n-1];
}
void print(int *b,int n)
{
    int i;
    for(i=0;i<n+1;i++)
    {
        cout<<b[i]<<" ";    
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    cin>>t;int *a;int *b;
    while(--t>-1)
    {
        cin>>n;
        a=new int [n];
        b=new int [n+1];
        input(a,n);
        b[0]=a[0];
        fillb(a,b,n);
        print(b,n); 
        cout<<"\n";
    }
    return 0;
}
