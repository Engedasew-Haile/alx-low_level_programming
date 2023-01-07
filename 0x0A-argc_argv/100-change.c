#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Coins for Change
 * @argc: num of argu
 * @argv: argu
 * Return: Minimal Number of Coins for Change
 */

int main(int argc, char *argv[])
{
	int v = 0;
	int i = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int nCoins = 0;
	int residuo = 0;
	int div = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	v = atoi(argv[1]);
	if (v < 0)
	{
		printf("0\n");
		return (1);
	}
	while (coins[i])
	{
		residuo = v % coins[i];
		div =  v / coins[i];
		nCoins = nCoins + div;
		if (residuo != 0)
			v = residuo;
		else
			break;
		i++;
	}
	printf("%d\n", nCoins);
	return (0);
}
