#include <stdio.h>
#include <stdlib.h>

//CRIANDO FUNCAO PARA ACHAR O MDC, E COM ELE DIVIDIR A FUNCAO



int mdc(int a, int b){
 int resto;
	while(b != 0){
		resto = a % b;
		a = b;
		b= resto;
	}
	return a;
}


//CRIANDO UMA STRUCT PARA ARMAZENAR AS VARIAVEIS

		struct racional{
			int num_a, den_a, num_b, den_b;
			
			int som_num, som_den;
			int sub_num, sub_den;
			int mult_num, mult_den;
			int div_num, div_den;
		
		};
		
		
//STRUCT PARA ENVIAR OS VALORES PARA MDC E COM O RESULTADO FAZER SIMPLIFICACAO
		
		struct racional simplificacao (const struct racional variavel){
			struct racional resultado;
			int razao1 = mdc(variavel.num_a, variavel.den_a);	
				resultado.num_a = variavel.num_a/razao1;
				resultado.den_a = variavel.den_a/razao1;
				
			int razao2 = mdc(variavel.num_b, variavel.den_b);
				resultado.num_b = variavel.num_b/razao2;
				resultado.den_b = variavel.den_b/razao2;
				
			int razao3 = mdc(variavel.som_num, variavel.som_den);
				resultado.som_num = variavel.som_num/razao3;
				resultado.som_den = variavel.som_den/razao3;
				
			int razao4 = mdc(variavel.sub_num, variavel.sub_den);
				resultado.sub_num = variavel.sub_num/razao4;
				resultado.sub_den = variavel.sub_den/razao4;
								
			int razao5 = mdc(variavel.mult_num, variavel.mult_den);
				resultado.mult_num = variavel.mult_num/razao5;
				resultado.mult_den = variavel.mult_den/razao5;
				
			int razao6 = mdc(variavel.div_num, variavel.div_den);
				resultado.div_num = variavel.div_num/razao6;
				resultado.div_den = variavel.div_den/razao6;
				
				
			return resultado;
		}
		


int main() {


//PARA GUARDAR OS VALORES ORIGINAI
int gnum_a, gden_a, gnum_b, gden_b;
float div1, div2, div3, div4, div5, div6;
char resp;

do{

inicio:
	
	printf("\n\t\t*****OPERACOES ARITIMETICAS EM 2 NUMEROS RACIONAIS*****\n\n");
	fflush(stdin);
	system("cls");
	
struct racional variavel;
	

	printf("**NUMERO RACIONAL A**\nDigite o numerador de A: ");
	scanf("%i",&variavel.num_a);
		gnum_a = variavel.num_a;
	
	printf("Digite o denominador de A: ");
	scanf("%i",&variavel.den_a);
  		gden_a = variavel.den_a;
	
	printf("\n\n**NUMERO RACIONAL B**\nDigite o numerador de B: ");
	scanf("%i",&variavel.num_b);
		gnum_b = variavel.num_b;
	
	printf("Digite o denominador de B: ");
	scanf("%i",&variavel.den_b);
		gden_b = variavel.den_b;
		
if(variavel.den_a==0||variavel.den_b==0){
	printf("\n\n*****A FUNCAO NAO PODE SER DIVISIVEL POR ZERO, TENTE OUTRO NUMERO!*****\n");
	system("pause");
	goto inicio;
}
		
		//soma
				variavel.som_num = variavel.num_a * variavel.den_b + variavel.num_b * variavel.den_a;
				variavel.som_den = variavel.den_a * variavel.den_b;
				
		//subtracao
				variavel.sub_num = variavel.num_a * variavel.den_b - variavel.num_b * variavel.den_a;
				variavel.sub_den = variavel.den_a * variavel.den_b;
				
		//multiplicacao
				variavel.mult_num = gnum_a * gnum_b;
				variavel.mult_den = gden_a * gden_b;
				
		//divisao
				variavel.div_num = gnum_a * gden_b;
				variavel.div_den = gden_a * gnum_b;
				
				
variavel = simplificacao(variavel);

	
					//DIVF A
					float vn_a, dn_a;
						vn_a = variavel.num_a;
						dn_a = variavel.den_a;
						div1 = vn_a / dn_a;
					
					//DIVF B
					float vn_b, dn_b;
						vn_b = variavel.num_b;
						dn_b = variavel.den_b;
						div2 = vn_b / dn_b;
					
					//SOMA
					float soma_n, soma_d, somas_n, somas_d;
					float vn_sm, dn_sm;
						soma_n = gnum_a * gden_b + gnum_b * gden_a;
						soma_d = gden_a * gden_b;
						vn_sm = variavel.som_num;
						dn_sm = variavel.som_den;
						div3 = vn_sm / dn_sm;
					
					//SUBTRACAO
					float sub_n, sub_d, subs_n, subs_d;
					float vn_s, dn_s;
						sub_n = gnum_a * gden_b - gnum_b * gden_a;
						sub_d = gden_a * gden_b;
						vn_s = variavel.sub_num;
						dn_s = variavel.sub_den;
						div4 = vn_s / dn_s;	
					
					//MULTIPLICACAO
					float mult_n, mult_d, mults_n, mults_d;
					float vn_m, dn_m;
						mult_n = gnum_a * gnum_b;
						mult_d = gden_a * gden_b;
						vn_m = variavel.mult_num;
						dn_m = variavel.mult_den;
						div5 = vn_m / dn_m;
					
					//DIVISAO
					float div_n, div_d, divs_n, divs_d;
					float vn_d, dn_d;
						div_n = gnum_a * gden_b;
						div_d = gden_a * gnum_b;
						vn_d = variavel.div_num;
						dn_d = variavel.div_den;
						div6 = vn_d / dn_d;

printf("\n\nA = %d/%d = %d/%d = %.3f",gnum_a, gden_a, variavel.num_a, variavel.den_a, div1);
printf("\nB = %d/%d = %d/%d = %.3f",gnum_b, gden_b, variavel.num_b, variavel.den_b, div2);
printf("\nA+B = %.0f/%.0f = %.0f/%.0f = %.3f",soma_n, soma_d, vn_sm, dn_sm, div3);
printf("\nA-B = %.0f/%.0f = %.0f/%.0f = %.3f",sub_n, sub_d, vn_s, dn_s, div4);
printf("\nA*B = %.0f/%.0f = %.0f/%.0f = %.3f",mult_n, mult_d, vn_m, dn_m, div5);
printf("\nA/B = %.0f/%.0f = %.0f/%.0f = %.3f",div_n, div_d, vn_d, dn_d, div6);

printf("\n\nDeseja calcuar outro numero(S ou N)?");
scanf("%s", &resp);

}while(resp=='s' || resp=='S');
	
	      if(resp=='n' || resp=='N'){
		  printf("\n\nATE MAIS, OBRIGADO POR USAR O PROGRAMA!\n\n");
		  return 0;

}
			
	return 0;
} 
