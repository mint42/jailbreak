/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreedy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 08:13:20 by rreedy            #+#    #+#             */
/*   Updated: 2020/01/19 18:29:13 by rreedy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include "MeleeEnemy.class.hpp"
//	#include "RangeEnemy.class.hpp"
//	#include "GameObject.class.hpp"
//	#include "Enemy.class.hpp"
//	#include <iostream>
//	#include <string>
//	#include <iomanip>
//	#include <stdlib.h>
//	#include <fstream>
//	#include <istream>
//	#include <sstream>
//	#include <time.h>

#include <curses.h>

//	refresh;

// ncurses: must call this function to update the window with new characters

int		main(void)
{
	ScreenObject	screen;
	GameObject		scenery[15];
	int				n_scenery;
	CharObject		enemies[10];
	int				n_enemies;
	CharObject		P1;
	int				input_ch;

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

	setup();						// generate p1 and enemies and anything else needed
	screen.draw_game(scenery, n_scenery, enemies, enemies, n_enemies, P1);
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
