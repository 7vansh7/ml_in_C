#include <stdlib.h>
#include <stdio.h>
#include <time.h>

float arr[][2]={
  {0,0},
  {1,2},
  {2,4},
  {3,6},
  {4,8},
  {5,10}
};

float rand_float(){

return (float) rand() / RAND_MAX;

}

int main(){

 srand(69);

 float w = rand_float()*10.0f ; 
 printf("%f\n",w);

}
