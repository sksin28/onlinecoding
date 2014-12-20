#include<iostream>
#include<stdio.h>
using namespace std;
int searchh(float inp,float a[],int lb,int ub)
{   int ret=0;
    if(lb==ub) ret=lb;
    else{
      int mid=(lb+ub)/2;
        if(a[mid]==inp){
            ret=mid;
        }
        else if(a[mid]<inp){
            ret=searchh(inp,a,mid+1,ub);
        }
        else if(a[mid]>=inp){
            ret=searchh(inp,a,lb,mid);
        }
    }
    return ret;
}
int main()
{   float arr[10000];arr[0]=0.00;int k=0;
    while(arr[k]<=5.20){
        arr[k+1]=arr[k]+(1.0/(k+2));
        k+=1;
    }
    float in;int ans;
    scanf("%f",&in);
    while(in!=0.00)
    {
        ans=searchh(in,arr,0,k);
        printf("%dcard(s)",ans);
        scanf("%f",&in);
    }
    return 0;
}
