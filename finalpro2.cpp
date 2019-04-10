
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<termios.h>
#include<math.h>
//#include<conio.h>
//#include<curses.h>
//#include<ncurses.h>
void *fun1();
//void *fun2();
//void *fun3();
//void *fun4();
//void *fun5();
int i,j,x,n,process[10],priority[10],bursttime[10],wait[10],turntime[10],avgwt,avgtt,i,arrt[10],tq;
int main(){
pthread_t t1;
pthread_create(&t1,NULL,fun1,NULL);
//pthread_create(&t2,NULL,fun2,NULL);
//pthread_create(&t3,NULL,fun3,NULL);
//pthread_create(&t4,NULL,fun4,NULL);
//pthread_create(&t5,NULL,fun5,NULL);
pthread_join(t1,NULL);
//pthread_join(t2,NULL);
//pthread_join(t3,NULL);
//pthread_join(t4,NULL);
//pthread_join(t5,NULL);
}
void *fun1(){
printf("Enter the number of process : ");
scanf("%d",&n);
printf("Enter time quantum:");
scanf("%d",&tq);
  for(i=0;i<n;i++)
    {
         printf("\n Process %d ",i+1);
         printf("\nArrival time:\n");
         scanf("%d",&arrt[i]);
        printf("Priority:\n");
                scanf("%d",&priority[i]);
        printf("Burst time\n");
        scanf("%d",&bursttime[i]);
        process[i]=i+1;
 }
//void *fun3(){
 for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(priority[i]>priority[j])
       {
     x=priority[i];
     priority[i]=priority[j];
     priority[j]=x;
     x=bursttime[i];
     bursttime[i]=bursttime[j];
     bursttime[j]=x;
     x=process[i];
     process[i]=process[j];
       process[j]=x;
        x=arrt[i];
        arrt[i]=arrt[j];
        arrt[j]=x;
      }
   }
}
//void *fun2(){
avgwt=0;
wait[0]=0;
turntime[0]=bursttime[0];
avgtt=turntime[0];
for(i=1;i<n;i++)
 {
     if(tq<n || tq>n){
         wait[i]=turntime[i-1];
         avgwt+=wait[i];
         turntime[i]=wait[i]+bursttime[i];
         avgtt+=turntime[i];
         }
                  }
 }
//void *fun5(){
 printf("\n\nGantt chart\n\n");
 for(i=0;i<n;i++)
 {printf("P%d   ",process[i]);
 }
printf("\n\nProcess \t  Priority \t  Arrival time \t  Burst time \t  Turnaround time \t Wait time \n");
for(i=0;i<n;i++){
printf("\n%d\t\t",process[i]); printf(" \t%d\t   ",priority[i]); printf(" \t%d\t   ",arrt[i]); printf(" \t%d\t   ",bursttime[i]); printf(" \t%d\t   ",turntime[i]); pri$}
int q1=0;
int q2=0;
int q3;
for(int q=0;q<n;q++){
q1+=bursttime[q];
q2+=wait[q];
}
//printf("\nq1=%d and q2=%d\n",q1,q2);
float ramcap=8;
float k1=ramcap/n;
//printf("\nk=%f\n",k1);
q3=(q1-q2);
printf("\n%d\n",q3);
if(q3<0){
q3-=(2*q3);
}
//printf("\n%d",q3);
float q4;
//q4=1-(pow(q3,k1));
printf("\nThe cpu utilisation rate is:%f%",q3);
avgwt/=n;
avgtt/=n;
printf("\n\n Average Wait Time: %d ",avgwt);
printf("\n\n Average Turn Around Time: %d",avgtt);
getchar();
}

