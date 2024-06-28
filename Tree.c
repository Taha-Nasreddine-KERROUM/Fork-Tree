#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( void ) { 
 int ppid = getpid(), pid, p, x = 0;
  
 for (int i = 0; i < 3; ++i ) {
  pid = fork();
  if ( (p == getppid()) ) {
   printf("child call: pid = %d its parent ppid = %d\n", getpid(),getppid());
   exit (x);
  }
  if ( pid ) {
   wait(&x);
  }
  else if ( pid == 0 ) {
   printf("child call: pid = %d its parent ppid = %d\n", getpid(),getppid());
   p = getpid();
  }
 }
 if ( ppid != getpid() )
  exit (x); 
 printf("parent call: pid = %d\n", getpid());
 return 0;
}
