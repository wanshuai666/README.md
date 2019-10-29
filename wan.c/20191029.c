 #include<stdio.h>
    int main(void)
{
    int a=10,b=20,c=30,d=40,sum;
    float aver;

    sum=a+b+c+d;
    aver=sum/4.0f;
    printf("sum=%d,average is %.lf\n",sum,aver);
    return 0;
}