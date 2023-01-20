#include <stdio.h>

int main()
{
	int Coffee;

	printf("How much coffee did you had this morning? : ");
	scanf("%d", &Coffee);
		
		if (Coffee <= 0)
		{
			printf("Oh. So you're a tea guy eh? Shame on you.");
		}
			else if (Coffee <= 2)
			{
				printf("A bit disappointed but that's fine. Still better than tea to be honest.");
			}
				else if (Coffee <= 3)
				{
					printf("Oh now we're talking! My maaaaaan!");
				}
					else if (Coffee >= 4)
					{
						printf("You're a mad man. That's not even funny dude. Go get help or something.");
					}
				return (0);
}

