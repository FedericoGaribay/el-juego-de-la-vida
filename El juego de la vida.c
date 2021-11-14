//10 de noviembre 2019
//juego de la vida de Conway
//programador Federico Garibay 
#include<stdio.h>
#include<stdbool.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int universo[400];
	int i,j,c,n;
	int simbolo=254;
	int estado[400];
	srand(time(NULL));
		for(i=0;i<=400;i++)// aqui se genera la secuencia de celulas vivas y muertas para la primer ronda del juego
	{
		universo[i]=0+rand()%(2);
	}
	do
	{
		for(i=0;i<=400;i++)//aqui se cuenta el numero de celulas vecinas vivas para cada celula
	{
		estado[i]=0;
		if(universo[i-21]==1)
		{
			estado[i]=estado[i]+1;
		}
			if(universo[i-20]==1)
		{
			estado[i]=estado[i]+1;
		}
			if(universo[i-19]==1)
		{
			estado[i]=estado[i]+1;
		}
			if(universo[i-1]==1)
		{
			estado[i]=estado[i]+1;
		}
			if(universo[i+1]==1)
		{
			estado[i]=estado[i]+1;
		}
			if(universo[i+19]==1)
		{
			estado[i]=estado[i]+1;
		}
			if(universo[i+20]==1)
		{
			estado[i]=estado[i]+1;
		}
			if(universo[i+21]==1)
		{
			estado[i]=estado[i]+1;
		}
			
	}
	for(i=0;i<=400;i++)// aqui se determina cuales celulas viven y cuales mueren para la siguiente ronda
	{
		if(universo[i]==0)
		{
			if(estado[i]!=3)
			{
				universo[i]=0;
			}
			else
			{
				universo[i]=1;
			}
		}
		else
		{
			if(estado[i]==2)
			{
				universo[i]=1;
			}
			else if(estado[i]==3)
			{
				universo[i]=1;
			}
			else
			{
				universo[i]=0;
			}
		}
	}
	for(i=0;i<=19;i++)//aqui se imprime la interfaz grafica del juego
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=20;i<=39;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=40;i<=59;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}             
	}
	printf("\n");
	for(i=60;i<=79;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}             
	}
	printf("\n");
	for(i=80;i<=99;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=100;i<=119;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=120;i<=139;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}             
	}
	printf("\n");
	for(i=140;i<=159;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}             
	}
	printf("\n");
	for(i=160;i<=179;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}             
	}
	printf("\n");
	for(i=180;i<=199;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=200;i<=219;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=220;i<=239;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=240;i<=259;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=260;i<=279;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=280;i<=299;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=300;i<=319;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}             
	}
	printf("\n");
	for(i=320;i<=339;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}             
	}
	printf("\n");
	for(i=340;i<=359;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}             
	}
	printf("\n");
	for(i=360;i<=379;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}              
	}
	printf("\n");
	for(i=380;i<=399;i++)
	{
        if(universo[i]==1)
		{
			printf("%c",simbolo);
		}
		else
		{
			printf(" ");
		}      
	}
	printf("\n");
	printf("ingrese 1 para volver a ejecutar el programa:");
	scanf("%d",&n);
	if(n==1)
	{
		system("cls");
	}
	}
    while(n==1);
	}
	
