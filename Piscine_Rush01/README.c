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
