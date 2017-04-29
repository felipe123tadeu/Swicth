#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, num;
    int opcao;
    
    printf("\nDigite 1  impar ou par : \n");
    printf("\nDigite 2  multiplo por 3 : \n");
    printf("\nDigite 3  para sair: \n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: printf("\ndigite um numero: \n ");
                scanf("%d", &n1);
                n2=n1%2;
                
	            if(n2==0)
	      {
		    printf("%d e par\n", n1);
          }
	       else
	      {
		    printf("%d e impar\n", n1);
		  }
      
             break;
        
        case 2:
            printf("\nDigite um numero: \n");
	        scanf("%d", &n1);

	        if(n1%3==0)
            printf("\nEsse  multiplo de 3 \n");
	        else
	        printf("\nEsse não e  multiplo de 3 \n");
	          
           break;
	        
        case 3:
             printf("\nApert qualquer tecla para sair \n");
             break;
                     
        default:c
             printf("\nOpção invalida!!!! \n");
             break;
             }
   
       system("pause"); 
       return 0;  
       }
                  
             
             
             
             
    
    
