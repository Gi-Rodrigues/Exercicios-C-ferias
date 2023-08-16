#include <stdio.h>
 #include <math.h>
 #include <locale.h>

 int main ()
 {
    int n1, n2;
    setlocale (LC_ALL, "portuguese");
    
    printf("digite um numero: ");
    scanf("%d", &n1);
	
	n2 = n1;
    
	while (1){
     
     n2++;

      if (n2 == 2){
      	
            printf("O próximo número primo depois de: %d, é %d", n1, n2);
            break;
            
      } else if(n2%2!= 0) {
         
            printf("O próximo número primo depois de: %d, é %d", n1, n2);
            break;
      }
    }
    
    return 0;


 }
