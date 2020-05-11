/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Augists
#   Email         : awzyc2010@163.com
#   File Name     : show.cpp
#   Last Modified : 2020-05-10 14:07
#   Describe      :
#
# ====================================================*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include "show.hpp"
#include "find.hpp"
using namespace std;

void partialLine()
{
	cout << "--------------------------------------------------------------" << endl;
}

void showPart(ifstream &p)
{
	partialLine();
	cout << endl;
	int i = 0;
	char buffer[100];
	p.getline(buffer, 100);
	while (!p.eof() && strcmp(buffer, "<++++>"))
	{
		cout << i++ << "\t" << buffer << endl;
		p.getline(buffer, 100);
	}
}

void showAll(ifstream &start, long *pos)
{
	for (int i = 0; i < 7; i++)
	{
		findPlusPlus(start);
		pos[i] = start.tellg();
		showPart(start);
		cout << endl;
	}
	partialLine();
}

void showTitle()
{
	cout << " d888b  d888888b d8888b.										" << endl;
	cout << "88' Y8b `~~88~~' 88  `8D										" << endl;
	cout << "88         88    88   88       TTTTTTT OOOOOOO DDDDDD  OOOOOOO	" << endl;
	cout << "88  ooo    88    88   88  ---    TTT   OO   OO D    DD OO   OO	" << endl;
	cout << "88. ~8~    88    88  .8D  ---    TTT   OO   OO D    DD OO   OO	" << endl;
	cout << " Y888P     YP    Y8888D'         TTT   OOOOOOO DDDDDD  OOOOOOO	" << endl;
	cout << endl;
	cout << "01000111 01010100 01000100 01010100 01001111 01000100 01001111	" << endl;
	cout << endl;
}

