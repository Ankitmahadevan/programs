
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
#include<stdio.h>
 
int main()
{
    int i,j,n,temp,a[30];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
 
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];    //moves element forward
            j=j-1;
        }
 
        a[j+1]=temp;    //insert element in proper place
    }
 
    printf("\nSorted list is as follows\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
 
    return 0;
}
