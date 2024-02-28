
/*
  obter notas do 
  calcular media
  verificar se o aluno foi reprovado ou não
  se a media >= 7 aprovado
  senão reprovado
*/

int main(void) {
  //declaração de variáveis
  float nota1, nota2, media;
 
  //obter as notas
  printf("Digite a primeira nota: ");
  scanf_s("%f", &nota1);
 
  printf("Digite a segunda nota: ");
  scanf_s("%f", &nota2);
 
  //calcular a media
  media = (nota1 + nota2)/2;
  
  //verifica se foi aprovado ou não
  if(media >= 7)
    printf("Aprovado");
  else
    printf("Reprovado");
  return 0;
}