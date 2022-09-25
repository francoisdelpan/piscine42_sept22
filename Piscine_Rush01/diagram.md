# Diagram Rush01

./a.out "1 2 3 4 2 3 4 1 3 4 1 2 4 1 2 3" -> argv

core(argc, argv)
	
	int	clues[16];
	int	board[4][4];

	if( parsing(argc, argv) -> 0 || 1 )
	
		if( clues != NULL && solver(board, 0, clues) -> 0 || 1 )
			output(board);
		else
			write(1, "Error\n", 6);
	else
		write(1, "Error\n", 6);

