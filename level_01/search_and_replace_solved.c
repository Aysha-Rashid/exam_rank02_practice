#include<unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc < 4 || argc > 4 || (argv[2][1] && argv[3][1]))
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
		i++;
	int j = i;
	while (i >= 0)
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		i--;
	}
	write(1, argv[1], j);
	write(1, "\n", 1);
}
