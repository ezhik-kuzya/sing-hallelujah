// ЧМ_СЛАУ.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#define MAXN 50

int n; //размерность матрицы
float a[MAXN][MAXN];
float b[MAXN];


void inp()
{
	int i,j;
	scanf("%d",&n);
	printf("%d\n",n);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%f",&a[i][j]);
	for (i=0; i<n; i++)
		scanf("%f",&b[i]);
}

void outp()
{
	int i,j;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
			printf("%f ",a[i][j]);
		printf("\n");
	}
	for (i=0; i<n; i++)
		printf ("%f ", b[i]);
}

int _tmain(int argc, _TCHAR* argv[])
{	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	inp();
	outp();
	return 0;
}

