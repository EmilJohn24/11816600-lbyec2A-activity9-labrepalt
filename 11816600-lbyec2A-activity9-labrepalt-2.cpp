/************************************************
  This program demonstrates the use of an array
  in counting how many times a range of numbers
  have been generated randomly.

  Vertical bar graphs of are displayed using
  console graphics library to summarize the counts.
************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "console.h"

int main() {
  int x[10],n,i,j,y;

  setWindowSize(50,100);

  printf("How many random numbers to generate? ");
  scanf("%i", &n);

  srand(time(NULL));

  for(i=0;i<10;i++) x[i]=0;

  for (i=1;i<=n;i++) {
     y = rand() % 100;  // generate random number
                       // between 0 and 100
     x[(int) floor(y/10)]++;  // count occurrences of each random
              // value after generation
  }

  system("cls");
  // iterate through each range value
  for (i=0;i<10;i++) {
      
      // display the horizontal axis labels
      textcolor(TYELLOW);
      gotoxy(i*6+10,45);
      int label;
      if (i == 0) label = 0;
      else label = 10*i + 1;
      printf("%i-%i",label, 10*(i+1));
      textcolor(TGREEN);
      
      // display the vertical bars
      for (j=0;j<x[i];j++) {
        gotoxy(i*6+12,44-j);
        printf("%c",219);
      }
      
      // display the vertical axis labels
      textcolor(TYELLOW);
      for (j=0;j<40/5;j++) {
        gotoxy(7,44-5*j);
        printf("%i",j*5);
      }      
  }
  textcolor(TLBLUE);
  gotoxy(50,47);
  system("pause");
  return 0;
}
