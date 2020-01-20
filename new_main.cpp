/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_main.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 18:29:20 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:44:59 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		print_details(Screen &screen)
{
	if (move(TOTAL_PAD_WIDTH, OUTER_PAD_HEIGHT + 1) == ERROR)
		return (ERROR);
	write(STDIN_FILENO, "ft_select", 9);
	if (move(screen.width - (TOTAL_PAD_WIDTH + 3),
			OUTER_PAD_HEIGHT + 1) == ERROR)
	{
		return (ERROR);
	}
	if (mode == HELP_MODE)
		write(STDIN_FILENO, "[?]", 3);
	else
		write(STDIN_FILENO, "[ ]", 3);
	if (move(screen.width - (TOTAL_PAD_WIDTH + 11),
			screen.height - (OUTER_PAD_HEIGHT + 2)) == ERROR)
	{
		return (ERROR);
	}
	return (SUCCESS);
}

static void		draw_line(Screen &screen, wchar_t start_char, wchar_t middle_char, wchar_t end_char)
{
	uint32_t	i;

	i = 0;
	printw("%lc", start_char);
	while (i < screen._width - ((OUTER_PAD_WIDTH + BUILTIN_WIDTH) * 2))
	{
		printw("%lc", middle_char);
		++i;
	}
	printw("%lc", end_char);
}

static int		draw_bottom(Screen &screen)
{
	if (move(OUTER_PAD_WIDTH, info->term_height - (OUTER_PAD_HEIGHT + 3)) == ERROR)
	{
		return (ERROR);
	}
	draw_line(info, L'├', L'─', L'┤');
	if (move(OUTER_PAD_WIDTH, info->term_height - (OUTER_PAD_HEIGHT + 2)) == ERROR)
	{
		return (ERROR);
	}
	draw_line(info, L'│', ' ', L'│');
	if (move(OUTER_PAD_WIDTH, info->term_height - (OUTER_PAD_HEIGHT + 1)) == ERROR)
	{
		return (ERROR);
	}
	draw_line(info, L'└', L'─', L'┘');
	return (SUCCESS);
}

static int		draw_top(struct s_info *info)
{
	if (move(OUTER_PAD_WIDTH, OUTER_PAD_HEIGHT) == ERROR)
		return (ERROR);
	draw_line(info, L'┌', L'─', L'┐');
	if (move(OUTER_PAD_WIDTH, OUTER_PAD_HEIGHT + 1) == ERROR)
		return (ERROR);
	draw_line(info, L'│', ' ', L'│');
	if (move(OUTER_PAD_WIDTH, OUTER_PAD_HEIGHT + 2) == ERROR)
		return (ERROR);
	draw_line(info, L'├', L'─', L'┤');
	return (SUCCESS);
}

int				draw_box(Screen &screen)
{
	uint32_t	i;

	if (draw_top(screen) == ERROR)
		return (ERROR);
	i = OUTER_PAD_HEIGHT + BUILTIN_HEIGHT;
	while (i < screen.height - (OUTER_PAD_HEIGHT + BUILTIN_HEIGHT))
	{
		if (tc_move_cur(OUTER_PAD_WIDTH, i) == ERROR)
			return (ERROR);
		draw_line(info, L'│', ' ', L'│');
		++i;
	}
	if (draw_bottom(screen) == ERROR)
		return (ERROR);
	print_details(screen, mode);
	return (SUCCESS);
}

int		main(void)
{

	ScreenObject	screen;

/*
**	setup_signal_catching();
**
**	this might be mandatory for making sure the game does not break when
**	resizing. not implemented yet
*/

/*
**	ncurses
*/
	initscr();							// setup alt screen
	cbreak();							// set noncanonical mode
	noecho();							// disable echoing
	keypad(stdscr, TRUE);				// enable ability to capture multibyte characters
	nodelay();							// make the getch() function not wait for a character before returning
	//	WINDOW *stdscr is the default window, spanning the entire size of the terminal. it comes with the library

	draw_box(screen);
	while (42)
	{
		input_ch = getch();
		if (input_ch != ERR)
			P1.load_action(input_ch);
		update_game();
		sleep(1);
	}

	endwin();				// ncurses: reset to default
}

/*
//	Testings
//		MeleeEnemy enemy1;
//		RangeEnemy enemy2;
//		//	int how_many_shots = 0;
//		cout << enemy1.get_xPos() << endl;
//		enemy1.move(1, 0);
//		cout << enemy1.get_xPos() << endl;
//		enemy1.printStatus();
//		enemy2.printStatus();
//		enemy1.meeleAtack();
//		enemy1.meeleAtack();
*/

