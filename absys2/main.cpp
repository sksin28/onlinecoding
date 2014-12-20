#include<string>
#include<iostream>
#include<stdio.h>

using namespace std;
int check(string str)
{
    int ret=0;
    for(unsigned int i=0;i<str.length();i++)
    {
        if(str[i]=='m'){
            return -1;
        }
        else
            ret=(ret*10)+(str[i]-'0');
    }
    return ret;
}
int main()
{
    int t;int a=0,b=0,c=0;
    string s1,s2,s3,s4,s5;
    scanf("%d",&t);
    while(t>0){
        cin>>s1>>s2>>s3>>s4>>s5;
        a=check(s1);
        b=check(s3);
        c=check(s5);
        if(a<0){
            a=c-b;
        }
        else if(b<0){
            b=c-a;
        }
        else{
            c=a+b;
        }
        printf("%d + %d = %d\n",a,b,c);
        t--;
    }
}
