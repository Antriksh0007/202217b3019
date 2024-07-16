#include<stdio.h>

int main(){
    int n, a[10], b[10],w[10],g[10],t[10];
    float awt=0,att=0;

    for (int i = 0; i < 10; i++)
    {
        a[i] = 0;
        b[i] = 0;
        w[i] = 0;
        g[i] = 0;
    }

    printf("\nEnter the no. of processes: ");
    scanf("%d",&n);

    printf("\nEnter the b times: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("\nEnter the arrival times: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    g[0]=0;
    for (int i = 0; i < 10; i++)
    {
        g[i+1]=g[i]+b[i];
    }

    for (int i = 0; i < n; i++)
    {
        w[i]=g[i]-a[i];
        t[i]=g[i+1]-a[i];
        awt=awt+w[i];
        att=att+t[i];
    }

    awt=awt/n;
    att=att/n;

    printf("\nProcess\twing Time\ttround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("\tP%d\t\t%d\t\t%d\n",i,w[i],t[i]);
    }

    printf("Average wing time: %f\n",awt);
    printf("Average tround time: %f\n",att);
}
