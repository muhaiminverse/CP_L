#include<bits/stdc++.h>
using namespace std;

int check1(string a)
{
    int val=0;
        if(a[1]=='+')
        {
            return val++;


        }
        else
        {
            return val--;

            }
    }


int check2(string a,int val)
{

        if(a[1]=='+')
        {
        val++;


        }
        else
        {
            val--;

            }
        return val;
    }



int main()
{
    int x,i=0,val=0,val2=0;
    cin>>x;
    string a;
    while(i<x)
        {
        cin>>a;

            if(val!=0)
            val+=check2(a,val);
            else
            val=check1(a);

            i++;

        }

   cout<<val;
    return 0;
}
