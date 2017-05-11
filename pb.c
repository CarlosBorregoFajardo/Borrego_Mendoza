#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LUCKY_NUMBER 7
#define MAX_WHITE_BALL 59
#define MAX_POWER_BALL 39

static int my_sort_func(const void* p1, const void* p2){
	int v1 = *((int *) p1);
	int v2 = *((int *) p2);
	if (v1 < v2){
		return -1;
	}else if (v1 > v2){
		return 1;
	}else{
		return 0;
	}
}

int calculate_result(int white_balls[5], int power_ball)
{
  for (int i=0; i<5; i++)
    {
      if ((white_balls[i] < 1) || (white_balls[i] > MAX_WHITE_BALL))
		{
		  return -1;
		}
    }
  // lottery ball numbers are always shown sorted
  qsort(white_balls, 5, sizeof(int), my_sort_func);
  // Here should be typed a function to calculate the probability
  return 0;
}

int whiteballs_computer_generated() { 
	return rand()%59+1; 
} 

int powerball_computer_generated() { 
	return rand()%39+1; 
} 

int main(int argc, char** argv) 
{ 
    [...]
   	if (6 != count_balls) {
		for (int i = 0; i < 5; i++){ 
   			balls[i] = whiteballs_computer_generated(); 
    		}
		balls[5] = powerball_computer_generated(); // Power ball 
      printf("Your numbers are: "); 
for (int i = 0; i < 5; i++){ 
   printf("%d ", balls[i]); 
      }
      printf("\
nAnd the power ball:"); 
printf(" %d\
n", balls[5]); 
    }
    [...] 
}
