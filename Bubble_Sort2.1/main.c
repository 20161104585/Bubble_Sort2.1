//
//  main.c
//  Bubble_Sort2.1
//
//  Created by 20161104585 on 17/6/16.
//  Copyright © 2017年 20161104585. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[20];
    int i,j,n,k,t;
    FILE *fp1,*fp2;
    fp2=fopen("//Users//a20161104585//Desktop//Bubble_Sort2.1//Bubble_Sort2.1//input.txt","w+");
    fp1=fopen("//Users//a20161104585//Desktop//Bubble_Sort2.1//Bubble_Sort2.1//output.txt","r+");
    if(fp2==NULL)
    {
        printf("打开文件错误，可能要打开文件不存在！");
    }
    else
    {
        
        while(fscanf(fp2,"%d",&n)!=EOF)
        {
            for( i=0;i<n;i++)
            {
                fscanf(fp2,"%d",&a[i]);
            }
            for(j=0;j<n-1;j++)
            {
                for(k=0;k<n-1-j;k++)
                {
                    if(a[k]>a[k+1])
                    {
                        t=a[k];
                        a[k]=a[k+1];
                        a[k+1]=t;
                    }
                }
            }
            for(k=0;k<i;k++)
            {
                printf("%d ",a[k]);
                fprintf(fp1,"%d ",a[k]);
            }
            fprintf(fp1,"\n");
            printf("\n");
        }
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}
