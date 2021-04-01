/******************************************************************************

Game RPG

*******************************************************************************/
/*
  Guide variables
  l = life
  a = attack
  d = defense
  le = life enemy
  ae = attack enemy
  de = defense enemy
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
{
   int l,a,le,ae,d,de;
   int resp;
   int level = 1;
   bool run = false;
do{   
   l  = rand() %100 + 40;
   a  = rand() %30 + 40;
   le = rand() %100 + 40;
   ae = rand() %30 + 40;
   d  = rand() %60 + 40;
   de = rand() %60 + 40;
    printf("\n\tYou Have\n\tlife: %i \n\tattack: %i \n\tLevel: %i \n\tdefense: %i",l,a,level,d);
    printf("\n\t>>>>>>>you wish<<<<<<< \n\t1 attack \n\t2 choose other character: ");
    scanf("%i", &resp);
     switch(resp){ 
      case 1:
        do{ 
        run = false;
         printf("\n\tEnemy Skills \n\tlife: %i \n\tattack %i \n\tdefense: %i ",le,ae,de);
        le = a - (de*2);
        l =  ae - (d*2);         
         if(le >= 0)
        {
          printf("\n\tyou attacked your enemy and he has %i of life",le);
        }
        else
        {
          printf("\n\tyou win the battle!");
          level++;
            l += 350;
            a += 150;
            d += 135;
            le = rand() %270;
            ae = rand() %270;
            de = rand() %250;
            printf("\n\t>>>>>>>you're on level %i<<<<<<<\n\tLife: %i\n\tdefense: %i\n\tattack: %i",level, l,d,a);
            printf("\n\t>>>>>>>you wish<<<<<<< \n\t1 attack \n\t2 try other character: ");
            scanf("%i", &resp);
            if(resp ==1)run = true;
        }
        if(l <= 0)
        {
            printf("\n\tyour enemy attacked you and you have died"); 
            level = 1;
            resp = 2;
            break;
        } 
        else{        
            printf("\n\tyour enemy attacks you and you have %i of life",l);
        } 
      }while(run == true);
    }
  }while(resp == 2 || l <= 0);
  return 0;
}
