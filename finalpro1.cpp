
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#include<pthread.h>
int s[10];
int c[10];
int qq[10];
int c3[10];
int ss[5];
int store[5];
int i,j,c2[5];
int s1=0,s2=0,s3=0,s4=0,s5=0;
int s11=0,s12=0,s13=0,s14=0,s15=0;
void *fun1();
void *fun2();
void *fun3();
void *fun4();
int main(){
pthread_t t1,t2,t3,t4;
pthread_create(&t1,NULL,fun1,NULL);
pthread_create(&t2,NULL,fun2,NULL);
pthread_create(&t3,NULL,fun3,NULL);
pthread_create(&t4,NULL,fun4,NULL);
pthread_join(t1,NULL);
pthread_join(t2,NULL);
pthread_join(t3,NULL);
pthread_join(t4,NULL);
}
void *fun1(){
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
}
void *fun2(){
srand(time(0));
printf("The order in which the students arrive at the counter:\n");
for(int k=0;k<5;k++){
int qq[5];
qq[k]=rand();

int x=qq[k];
if(x%9==0||x%5==0||x%2==0||x%33==0){
s11=s11+1;
}
else if(x%2==0||x%4==0||x%5==0||x%17==0||x%9==0){
s12=s12+1;
}
else if(x%3||x%6==0||x%9==0||x%21==0||x%4==0){
s13=s13+1;
}
else if(x%7==0||x%8==0||x%19==0||x%61==0||x%3==0){
s14=s14+1;
}
else if(x%23==0||x%4==0||x%6==0||x%12==0||x%13==0||x%5==0){
s15=s15+1;
}
}
for(int k=0;k<5;k++){
if(s11>=s12&&s11>=s13&&s11>=s14&&s11>=s15){
printf("s1\n");
s11=-3;
}
else if(s12>=s11&&s12>=s13&&s12>=s14&&s12>=s15){
printf("s2\n");
s12=-3;
}
else if(s13>=s11&&s13>=s12&&s13>=s14&&s13>=s15){
printf("s3\n");
s13=-3;
}
else if(s14>=s11&&s14>=s12&&s14>=s13&&s14>=s15){
printf("s4\n");
s14=-3;
}
else{
printf("s5\n");
s15=-3;
}
}
}
void *fun3(){
printf("The no of gifts bought by s1 %d\n",s1);
printf("The no of gifts bought by s2 %d\n",s2);
printf("The no of gifts bought by s3 %d\n",s3);
printf("The no of gifts bought by s4 %d\n",s4);
printf("The no of gifts bought by s5 %d\n",s5);
}
void *fun4(){
sleep(3);
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
}
else{
printf("s5-%d\n",s5);
s5=-3;
}
}
}

