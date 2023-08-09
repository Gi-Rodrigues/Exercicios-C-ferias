//FaÃ§a um programa que, apÃ³s um nÃºmero inserido pelo usuÃ¡rio, retorne o
//prÃ³ximo nÃºmero primo.
 
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
         char mensagem[100];
            sprintf(mensagem, "O próximo número primo depois de: %d, é %d", n1, n2);
            printf("%s\n", mensagem);
            break;
      } else if(n2%2!= 0) {
         char mensagem[100];
            sprintf(mensagem, "O próximo número primo depois de: %d, é %d", n1, n2);
            printf("%s\n", mensagem);
            break;
      }
    }
    
    return 0;


 }