#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{ 
	int bit;
	int x;
	int y; 

	do {
		printf("[1] 비트 AND(&)\n");
		printf("[2] 비트 OR(|)\n");
		printf("[3] 비트 XOR(^)\n");
		printf("[4] 비트 COMPLEMENT(~)\n");
		printf("[0] 종료(stop)\n");
		printf("위 연산 중 하나를 선택하세요. >>");
		scanf("%d", &bit);
		puts("");

		if (bit == 0) 
		{
			printf("종료합니다.\n");
			break;
		}

		if (bit == 1)
		{

			printf("비트 연산할두 정수 입력 >>");
			scanf("%d %d" , &x, &y);
			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x >> i) & 1) ? '1' : '0');
			}
			printf("   %d\n", x);
			puts("");
			puts("");
			puts("");
			printf("y = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((y >> j) & 1) ? '1' : '0');
			}
			printf("   %d\n", y);
			puts("");
			puts("");
			puts("");
			printf("x & y = ");
			int z = x & y;
			for (int k = 31; k >= 0; k--)
			{
				printf("%c", ((x & y >> k) & 1) ? '1' : '0');
			}
			printf("   %d\n", z);
			puts("");
			puts("");
			puts("");
		   
		}
		if (bit == 2)
		{
			printf("비트 연산할두 정수 입력 >>");
			scanf("%d %d", &x, &y);
			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x >> i) & 1) ? '1' : '0');
			}
			printf("   %d\n", x);
			puts("");
			puts("");
			puts("");
			printf("y = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((y >> j) & 1) ? '1' : '0');
			}
			printf("   %d\n", y);
			puts("");
			puts("");
			puts("");
			printf("x | y = ");
			int z = x | y;
			for (int k = 31; k >= 0; k--)
			{
				printf("%c", ((x | y >> k) & 1) ? '1' : '0');
			}
			printf("   %d\n", z);
			puts("");
			puts("");
			puts("");
			

		}if (bit == 3) 
		{
			printf("비트 연산할두 정수 입력 >>");
			scanf("%d %d", &x, &y);
			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x >> i) & 1) ? '1' : '0');
			}
			printf("   %d\n", x);
			puts("");
			puts("");
			puts("");
			printf("y = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((y >> j) & 1) ? '1' : '0');
			}
			printf("   %d\n", y);
			puts("");
			puts("");
			puts("");
			printf("x ^ y = ");
			int z = x ^ y;
			for (int k = 31; k >= 0; k--)
			{
				printf("%c", ((x ^ y >> k) & 1) ? '1' : '0');
			}
			printf("   %d\n", z);
			puts("");
			puts("");
			puts("");

		}if (bit == 4)
		{
			printf("비트 보수 연산할 하나의 정수 입력 >>");
			scanf("%d", &x);
			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x >> i) & 1) ? '1' : '0');
			}
			printf("   %d\n", x);
			puts("");
			puts("");
			puts("");
		
			printf("x = ");
			int z = ~x;
			for (int k = 31; k >= 0; k--)
			{
				printf("%c", ((z >> k) & 1) ? '1' : '0');
			}
			printf("   %d\n", z);
			puts("");
			puts("");
			puts("");


		}


	
		




	}






	while (1);

}