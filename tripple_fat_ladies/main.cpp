#include <iostream>
#include<stdio.h>


using namespace std;

int main()
{
    int arr[4]={942,192,442,692};
    int t;
    unsigned long long first,k,fnum,qu,i;
    scanf("%d",&t);
    while(t>0){
        k=0;
        scanf("%llu",&k);
        qu=k/4;
        int rem=k%4;
        if((rem%4)==0)first=qu-1;
        else first=qu;
        fnum=(first*1000)+arr[rem];
        printf("%llu\n",fnum);
        t--;
    }
    return 0;
}
