#include <stdio.h>
#include "uglyoutput.h"
#include <math.h>

int main() 
{

	//eingabenerkennung
	int breakpoints = 1;
	int n;
	printf("mit oder ohne breakpoints am Flußdiagram? (1 = Ja, 0 = Nein, aber mit print, 2 = Nein, ohne print)?\n");
	scanf_s("%d",&breakpoints);
	if(!(breakpoints == 2 || breakpoints == 1 || breakpoints == 0))breakpoints=1,printf("Also Ja\n");
	printf("ganze positive Zahl eingeben:\n");
	scanf_s("%d",&n);
	getchar(); //damit der den Enter-press nicht für das nächste getchar() hällt

	//banter für dumme eingaben
	if (n < 1) 
	{
		printf("Du ignorierst also Anweisungen? Sehr cool. deine Zahl sei 42\n");
		n = 42;
	}
	if (n == 1) 
	{
		printf("Als ob du das nicht im Kopf hinbekommen würdest. Natürlich ist die Primzahlzerlegung von 1 = 1\n");
	}
	else 
	{

		//actual code
		int outputn = n;
		int* PT = malloc( ((int)floor(sqrt(n))) * sizeof(int) );
		int length = 0;
		int p = 2;
		print1
		while (p<=n) 
		{
			print2
			if (n%p == 0) 
			{
				print3
				PT[length] = p;
				length += 1;
				n /= p;
			}
			else 
			{
				print4
				p += 1;
			}
		}

		//output
		print5
		for (int i = 0; i < length; ++i) {
			printf("%d * ",PT[i]);
		}
		printf("\b\b= %d\n", outputn);
		free(PT);
		system("pause");
	}
	return 0;

}



/*
Diagramm das in uglyoutput.h geschrieben wird
 +-------+
 | p = 2 |
 +-------+
	  |
	  +--------+
	  |        |
	  V        |
 +-----------+ |
 | n%p=0?1:2 | |
 | 1: p P-T  | |
 |    n /= p |-+
 | 2: p+=1   | |
 | p<n?3:4   | |
 | 3:        |-+
 | 4:        |
 +-----------+
	   |
	   V
 +------------+
 | output P-T |
 +------------+
*/