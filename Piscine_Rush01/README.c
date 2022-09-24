# Rush01

## Variables
board = [
	[0, 0, 0, 0],
	[0, 0, 0, 0],
	[0, 0, 0, 0],
	[0, 0, 0, 0],
];

/!\ Argv
- Up
- Down
- Left
- Rigth

player = [
	[up],
	[down],
	[left],
	[rigth],
];

int	**get_player(char *str)
{
	char	result[4][4];
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			result[i % 4][i] = str[i]
		}
		i++;
	}
	return (result);
}

void	display_board(char **board_to_print)
{
	int	i;
	char	c;

	i = 0;
	while (i < 16)
	{
		c = board_to_print[i % 4][i];
		write(1, &c, 1);
		if ((i + 1) % 4 == 0)
		{
			write(1, "\n", 1);
		}
		else
		{
			write(1, " ", 1);
		}
	}
}

Building 4 sure :
Si i == 1 || si up + down == board_length + 1 || left + rigth == board_length + 1.

Si player == 4: 1, 2, 3, 4

2> _ _ 4 _ <2
2> 3 2 4 1 <2
2> 3 1 4 2 <2
i2> 2 1 4 3 <2


## Fichier :

main.c
solver.c
core.c
first.c
input.c
output.c
