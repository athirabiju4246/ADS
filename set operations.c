

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int m,n,i,ch,c=0;
    printf("enter size of first array\n");
    scanf("%d",&m);
    printf("enter the size of second array\n");
    scanf("%d",&n);
    int a1[m],a2[n];
    printf("enter the present and absence of elements using 0s and 1s of first set\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the presence and absence of elements using 0s and 1s of second set\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    do
    {
    printf("1.union\n2.intersection\n3.difference\n4.equality\n");
    printf("enter the choice");
    scanf("%d",&ch);
switch(ch)
{
case 1:
    if(m!=n)
    {
        printf("set operations cannot be done");
    exit(0);
    }
        else
        {
            int a3[m];
            for(i=0;i<m;i++)
            {
                a3[i]=a1[i] || a2[i];
            }
            printf("resultant set after union");
            for(i=0;i<m;i++)
            {
            printf("%d",a3[i]);
        }
        printf("\n");
        }
        break;
case 2:
    if(m!=n)
    {
    printf("set operations cannot be done");
    exit(0);
    }
    else
    {
        int a3[m];
        for(i=0;i<m;i++)
        {
            a3[i]=a1[i] && a2[i];
        }
        printf("resultant set after intersection");
        for(i=0;i<m;i++)
        {
            printf("%d",a3[i]);
        }
        printf("\n");
    }
    break;
    case 3:
    if(m!=n)
    {
        printf("set operations cannot be done");
    exit(0);
    }
    else
    {
        int a3[m];
        for(i=0;i<m;i++)
        {
            a3[i]=a1[i] && ! (a2[i]);
        }
        printf("resultant set after difference operation");
        for(i=0;i<m;i++)
        {
            printf("%d",a3[i]);
        }
        printf("\n");
    }
    break;
    case 4:
    if(m!=n)
    {
    printf("set operations cannot be done");
    exit(0);
    }
    else
    {
        for(i=0;i<m;i++)
        {
            if(a1[i] != a2[i])
        {
        printf("sets are not equal");
        c=1;
        break;
    }}
    if(c==0)
       {
          printf("sets are equal");
       }
        printf("\n");
    }
    break;
default:
        printf("enter valid choice!!");
}}
while(ch!=4);
}

