/************************************************
  This program demonstrates the use of an array
  in counting how many times a range of numbers
  have been generated randomly.

  Horizontal bar graphs of asterisks are
  displayed to summarize the counts.
************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main() {
  int x[2],n,i,j,y;

  printf("How many random numbers to generate? ");
  scanf("%i", &n);

  srand(time(NULL));

  for(i=0;i<2;i++) x[i]=0;
	int EVEN = 0;
	int ODD = 1;
  for (i=1;i<=n;i++) {
     y = rand() % 10;  // generate random number
     if (y % 2 == 0) x[EVEN]++;
     else x[ODD]++;  
  }

  printf("\n");

  // display the asterisk horizontal bar graphs
  // outer loop iterates through range values
  // inner loop iterates from 0 to the count of
  // occurrences of each number in the range
  printf("Even: ");
  for (int i = 0; i < x[EVEN]; i++) {
  	printf("%c", 176);
  	Sleep(20);
  }
  printf("\nOdd:  ");
  for (int j = 0; j < x[ODD]; j++) {
  	printf("%c", 177);
  	Sleep(20);
  }
  return 0;
}
