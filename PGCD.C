#include<math.h>
#include<stdio.h>
#define N 1000
#include<locale.h>
int main()
{   setlocale(LC_ALL,"fr_FR.UTF-8");       
    printf("\n\t\t*************************************************\n");
    printf("\n\t\t*\tCALCUL DU PGCD DE DEUX ENTIERS a et b\t*\n");
    printf("\n\t\t*************************************************\n");
    double a,b;
    int r,c,compteur;
    int R[N];
    do{
      printf("\tEntrer la valeur de l'entier a\t");
      scanf("%lf",&a); 
      printf("\n\t Entrer la valeur de l'entier b\t ");
      scanf("%lf",&b);
      if(a<=0 || b<=0 || (a-(int)a)!=0.0)
      {printf("\n\tValeurs incorrects,merci de réessayer de nouveau\n");}
    }
    while (a<=0 || b<=0 || (a-(int)a)!=0.0);
    a=(int)a,b=(int)b;
    if (a<b){c=b,b=a,a=c;}
    r=a-(a/b)*b;
    R[0]=a,R[1]=b,R[2]=r;
     compteur=2;
   while (r!=0)
   {
      a=b;
      b=r;
      r=a-(a/b)*b;
      compteur=compteur+1;
      R[compteur]=r;
    }
   //*affichage des restes possible
   printf("\n\t les differentes reste donné par la methode d'Euclide sont\n ");
    for(int j=2; j<compteur+1;j++)
    {
      printf("\t%d\t",R[j]);
    }
   printf("\n Résultats");
   printf("\n\tPGCD(%d;%d)=%d",R[0],R[1],R[compteur-1]);
return 0 ;

}