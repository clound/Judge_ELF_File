#include "student_info.h"
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void ex(struct student stu[])
{   int i,n,j;
	int bn[40];
	srand(time (NULL));
   for(i=0;i<40;i++)
   {   
	  
       bn[i]=(40*(rand()/(RAND_MAX+1.0)));
	for(j=0;j<i;j++)
	{   if(bn[i]==bn[j])
			i--;
	}
   }
   for(j=0;j<40;j++)
   { if(j%4==0)
	    printf("\n");
  printf("%d ,%s", stu[bn[j]].id,stu[bn[j]].name);
   }
}

int main()
{    int i;
	for (i = 0; i<sizeof(info)/sizeof(struct student);i++) {
		printf("%d - %s\n", info[i].id, info[i].name);
	}
	ex(info);
	return 0;
}
