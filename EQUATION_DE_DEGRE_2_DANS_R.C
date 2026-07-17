#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{   setlocale(LC_ALL,"fr_FR.UTF-8");
    printf("\t\t====[RESOLUTION DANS R DE L'EQUATION  DE LA FORME: ax^2+bx+c=0 ]====\n");
    int i=1;
    do{
    double a,b,c; 
    double D,w;
    printf("\tEtape A: Entrer respectivement les réels a,b et c\n");
    printf("a = "),scanf("%lf",&a);
    printf("b = "),scanf("%lf",&b);
    printf("c = "),scanf("%lf",&c);
    if(a==b && b==c && b==0){printf("\tEtape B: Il y a une infinite de solution \n");}
    else if(a==b && b==0 && c!=0){printf("\tEtape B: Il y a pas de solution\n");}
    else if(a==0 && b!=0){ printf("\tEtape B: Il y a exactement une solution x=%lf\n",(-c)/b);}
    else
    {
        D=b*b-4*a*c;
        printf("\tEtape B: Le discriminant est D=%lf\n",D);
        if(D<0){printf("\tEtape C: Il y pas de solution\n");}
        else if(D==0) {printf("Etape C: Il y a exactement une solution x=%lf\n",(-b)/(2*a));}
        else
        {
            D=b*b-4*a*c;
            float p,q;
            w=sqrt(D);
           printf("\tEtape C: La racine du discrimimant est: %fl\n",w);
            p=(-b-w)/(2*a);
            q=(-b+w)/(2*a);
            printf("\tEtape D: Il y a deux solution réels x=%lf ou x=%lf\n",p,q);
        }
    }
    printf("\n******Voulez-vous resoudrer une autre equation ?******\n");
    printf(" 0 = Oui\n");
    printf(" 1 = Non\n");
    scanf("%d",&i);}
    while(i==0);

    return 0;
}
