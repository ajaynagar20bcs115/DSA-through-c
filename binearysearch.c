#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sci(n) scanf("%d",&n)
#define true printf("True")
#define ln printf("\n")
#define pri(n) printf("%d",n)
#define prs(s) printf("%s",s)
#define spc printf(" ")
#define false printf("False")
int find(int arr[],int n,int key)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]>key)
        {
            e=mid-1;
        }
        if(arr[mid]<key)
        {
            s=mid+1;
        }

    }
    return -1;

}
int main(){

    int n,key;
    sci(n);
    int a[n];
    for(int i=0;i<n;++i)
    {

        sci(a[i]);
    }
    sci(key);


    int v=find(a,n,key);
    pri(v);

}


