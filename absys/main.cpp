#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        char inp[100001];int arr[3]={0,0,0};
        int i=0,chk;
        fflush(stdin);
        scanf("%s",inp);
        /*while(chk!='\n')
        {
            scanf("%c",&inp[i]);
            chk=inp[i];
            i++;
        }
        printf("%s AND %c",inp,inp[++i]);
        if(inp[i]=='\0')printf("hello \n");*/
        int x=0;
        while(inp[x]!='\0'){printf("%c",inp[x]); x++;}
        int j=0,eqn=0;
        while(inp[j]!='\0'){

            if(inp[j]=='m'){
                while(inp[j]!=' '){
                    j+=1;
                }
                eqn+=1;
                arr[eqn]=-1;
            }
            else if(inp[j]=='+'||inp[j]=='='){
                eqn+=1;
            }
            else if(inp[j]>='0'&&inp[j]<='9') {
                arr[eqn]=(arr[eqn]*10)+(inp[j]-'0');
            }
            printf("%d\n",arr[eqn]);
            j++;

        }
        printf("%d + %d = %d\n",arr[0],arr[1],arr[2]);

        if(arr[0]==-1)
            arr[0]=arr[2]=arr[1];
        else if(arr[1]==-1)
            arr[1]=arr[2]-arr[0];
        else
            arr[2]=arr[0]+arr[1];

        printf("%d + %d = %d\n",arr[0],arr[1],arr[2]);
        t--;
    }

}
