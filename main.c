#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc , char *argv[]) {
int i,*a,n,*prime;
  n=argc-1;
  a=(int*)malloc(sizeof(int)*n);
  prime=(int*)malloc(sizeof(int)*n);
  int j=0;
  for(i=0;i<n;i++){
    a[i]=atoi(argv[i+1]);
    if(Isprime(a[i])){
      prime[j]=a[i];
      j++;
    }
  }
  display(a,n);
  insertionsort(a,n);
  //selectionSort(a, n);
  /*if(j==0) printf("No prime\n");
  else{
  n=j;
  display(prime,n);
  bubbleSort(prime,n); 
   

  selectionSort(a,n);
   display(prime,n);
  }*/
 return 0;
}



