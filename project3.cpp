
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
int s[10];
int c[10];
int store[5];
int i,j;
int s1=0;
int s2=0;
int s3=0;
int s4=0;
int s5=0;
int main(){
srand(time(0));
for(i=0;i<5;i++){
for(j=0;j<5;j++){
int x;
c[j]=rand();
x=c[j];
if(i==0&&x%8==0&&x%5==0||x%9==0){
s1=s1+1;
}
else if(i==1&&x%3==0||x%6==0||x%7==0){
s2=s2+1;
}
else if(i==2&&x%4||x%7==0||x%3==0){
s3=s3+1;
}
else if(i==3&&x%5==0||x%8==0||x%11==0){
s4=s4+1;
}
else if(i==4&&x%2==0||x%5==0||x%9==0||x%11==0||x%6==0){
s5=s5+1;
}
}
}
printf("The no of gifts bought by s1 %d\n",s1);
printf("The no of gifts bought by s2 %d\n",s2);
printf("The no of gifts bought by s3 %d\n",s3);
printf("The no of gifts bought by s4 %d\n",s4);
printf("The no of gifts bought by s5 %d\n",s5);
printf("The billing order of students is\n");
for(int k=0;k<5;k++){
if(s1>=s2&&s1>=s3&&s1>=s4&&s1>=s5){
printf("s1-%d\n",s1);
s1=-3;
}
else if(s2>=s1&&s2>=s3&&s2>=s4&&s2>=s5){
printf("s2-%d\n",s2);
s2=-3;
}
else if(s3>=s1&&s3>=s2&&s3>=s4&&s3>=s5){
printf("s3-%d\n",s3);
s3=-3;
}
else if(s4>=s1&&s4>=s2&&s4>=s3&&s4>=s5){
printf("s4-%d\n",s4);
s4=-3;
else{
printf("s5-%d\n",s5);
s5=-3;
}
}
}



