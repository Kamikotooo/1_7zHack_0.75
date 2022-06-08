#include <stdio.h>
#include <stdlib.h>

int main()
{
	char password[] = "C:\\programs\\7-Zip\\7z.exe e -p00001991 secret.7z";
	int w = 0;
	for (w; password[w] != '0'; w++);
	for (char j = '0'; j <= '2'; j++)
	{
		for (char i = '0'; i <= '9'; i++)
		{
			for (char n = '0'; n <= '3'; n++)
			{
				for (char k = '0'; k <= '9'; k++)
				{
					password[w] = n;
					password[w + 1] = k;
					password[w + 1] = i;
					password[w + 3] = j;
					printf_s("%s\n", password);
					if (system(password) == 0)
					{
						printf_s("\n Sucsess \n");
						printf_s("%s", password);
						break;
					}
				}
			}

		}
	}
	for (char i = '0'; i <= '9'; i++)
	{
		for (char j = '0'; j <= '1'; j++)
		{

			for (char k = '0'; k <= '9'; k++)
			{
				for (char c = '0'; c <= '3'; c++)
				{
					if (k > '9')
					{
						j++;
						i = '0';
					}
					if (c == '3' && i > '1')
					{
						c = '0';
						i = '1';
						k++;
					}
					if (k == '9')
					{
						c = '0';
						i = '1';
						j = '1';
						k = '0';
					}
					if (c == '3' && i > '1' && j == '1' && k == '2')
						break;
					password[w] = i;
					password[w+1] = j;
					password[w+2] =k;
					password[w+3] = c;
					//printf_s("%c%c%c%c1991\n", i, j, n, c);
					printf_s("%s\n", password);
				system(password);
				}
			}
		}
	}
	return 0;
}

