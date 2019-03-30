#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<stdio.h>
int s1,s2,s3;
int c=0;
int c1=0;
int c2=0;
void *fun1(void *arg1);
void *fun2(void *arg2);
void *fun3(void *arg3);
int y;
int q;
int w;
int main(){
pthread_t t1,t2,t3;
pthread_create(&t1,NULL,fun1,&c);
pthread_create(&t2,NULL,fun2,&c1);
pthread_create(&t3,NULL,fun3,&c2);
pthread_join(t1,(void *)&w);
pthread_join(t2,(void *)&q);
pthread_join(t3,(void *)&y);
printf("the number of d1 is %d\n",w);
printf("the number of d2 is %d\n",q);
printf("the number of d3 is %d\n",y);
}
void *fun1(void *c){
int d=*((int *)c);
int x=0;
x=x+2;
d=x;
printf("the value of d1 is %d and %d\n",d,&d);
pthread_exit((void *)&d);
}

void *fun2(void *c1){
int d=*((int *)c1);
int x=0;
x++;
d=x;
printf("the value of d2 is %d and %d\n",d,&d);
pthread_exit((void *)&d);
}

void *fun3(void *c2){
int n=*((int *)c2);
int x=0;
x=x+3;
n=x;
printf("the value of d3 is %d and %d\n",n,&n);
pthread_exit((void *)&n);
}

