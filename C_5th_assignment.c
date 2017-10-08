#include <stdio.h>

int main() 
{
   int k;
   printf("줄 갯수 입력: ");

   while (scanf("%d", &k))
{
      int a[51][51] = { 0 };
      int i, n;
         a[0][0] = 0;          
		for (i = 1; i <= k; i++){
         a[i][0] = 1;
         a[i][i] = 1;
}

	for (i = 2; i <= k; i++){
		for (n = 1; n <= k; n++){
            		a[i][n] = a[i - 1][n - 1] + a[i - 1][n];
}
}

	for (int i = 0; i <= k; i++){
		for (int n = 0; n <= i; n++){
			if (k > 1 && k < 50)
	printf("%4d", a[i][n]);
            else
               printf("%5d", a[i][n]);
}
	printf("\n");
}
	break;
}
}