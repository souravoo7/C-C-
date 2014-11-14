/*
 valarrays is a powerful tool for scientific computation
 unlike arrays and vectors
*/
#include<iostream>//program to demostrate the use of "valarray"
#include<valarray>

using namespace std;

void print(valarray<double>g)
{
    int i;
    cout<<"\n";
    for(i=0;i<10;i++)
        cout<<g[i]<<" ";
}
int main()
{
    double d=9.0;
    const double a[]={0,1,2,3,4,5,6,7,8,9};
    valarray<double>va(a,10);//definition from a simple array
    print(va);
    valarray<double>v1=va.shift(2);//bit wise logical shift
    print(v1);
    valarray<double>v2=va.cshift(-2);//circular shift
    print(v2);
    valarray<double>v3=v1*v2;//vector multiplication
    print(v3);
    valarray<double>v4=va*d;//scalar multiplication
    print(v4);
    /*the other common functions
    sum,min,max,size
    .resize(n) is used for resize
    val arrays can be made to dynamically resize before alloted
    they can also be made to dynammically grow using a temporary
    */
    int h=v4.sum();
    cout<<"\n"<<h<<"\n";
    h=v4.max();
    cout<<h<<"\n";
    h=v4.min();
    cout<<h<<"\n";
    h=v4.size();
    cout<<h<<"\n";
    return 0;
}
