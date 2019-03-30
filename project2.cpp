
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int s[10];
int c[10];
int i,j;
int s1=0;
int s2=0;
int s3=0;
int s4=0;
int s5=0;
int main(){
for(i=0;i<5;i++){
for(j=0;j<5;j++){
int x;
c[j]=rand();
x=c[j];
if(i==0&&x%2==0||x%5==0){
s1=s1+1;
printf("%d\n",x);
}
else if(i==1&&x%3==0||x%6==0){
s2=s2+1;
}
else if(i==2&&x%4||x%7==0){
s3=s3+1;
}
else if(i==3&&x%5==0||x%8==0){
s4=s4+1;
}
else if(i==4&&x%6==0||x%9==0){
s5=s5+1;
}
}
}
