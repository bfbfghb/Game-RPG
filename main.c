/******************************************************************************

Game RPG

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
{
   int v,a,vo,ao,d,od;
   int resp;
   int level = 1;
   bool run = false;
do{   
   v  = rand() %100;
   a  = rand() %100;
   vo = rand() %100;
   ao = rand() %100;
   d  = rand() %50;
   od = rand() %50;
    printf("\n\tvoce tem\n\tvida: %i \n\tataque: %i \n\tLevel: %i \n\tdefesa: %i",v,a,level,d);
    printf("\n\t>>>>>>>voce deseja<<<<<<< \n\t1 atacar \n\t2 trocar personagem: ");
    scanf("%i", &resp);
  
     switch(resp){ 
      case 1:
        do{ 
         printf("\n\tvida do oponente e de %i e o ataque de %i ",vo,ao);
        vo = a - (od*2);
        v =  ao - (d*2);         
        
         if(vo >= 0)
        {
          printf("\n\tvoce atacou seu oponente e agora ele tem %i de vida",vo);
        }
        else
        {
          printf("\n\tvoce conseguiu derrotar seu inimigo");
          level++;
            v = 150;
            a = 150;
            d = 135;
            vo = rand() %270;
            ao = rand() %270;
            od = rand() %250;
            printf("\n\t>>>>>>>voce passou para o level %i<<<<<<<\n\tvida: %i\n\tdefesa: %i\n\tataque: %i",level, v,d,a);
            printf("\n\t>>>>>>>voce deseja<<<<<<< \n\t1 atacar \n\t2 desistir: ");
            scanf("%i", &resp);
            if(resp == 1)
            {
              run = true;
            }
        }
        if(v <= 0)
        {
            printf("\n\tseu openente te atacou e voce morreu");
            resp = 2;
        } 
        else{        
            printf("\n\tseu oponente te atacou e voce está com %i de vida",v);
        }     
      }while(run == true);
    }
  }while(resp == 2 || v  <= 0);
}