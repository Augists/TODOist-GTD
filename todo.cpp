/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Augists
#   Email         : awzyc2010@163.com
#   File Name     : todo.cpp
#   Last Modified : 2020-05-09 16:32
#   Describe      :
#
# ====================================================*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

#include "show.hpp"
#include "find.hpp"

using namespace std;

long posIn[7];

int main(int argc, const char *argv[])
{
	/* ifstream readTodo("~/Downloads/.todo", ios::in); */
	ifstream readTodo("./.todo", ios::in);
	if (!readTodo.is_open())
	{
		cerr << "wrong with the file" << endl;
		exit(1); // error 1: errors regarding the file
	}
	showAll(readTodo, posIn);
	string UserInput;
	getline(cin, UserInput);
	while (UserInput != string("q"))
	{
		SwitchChoice(UserInput);
		getline(cin, UserInput);
	}

	readTodo.close();
	if (readTodo.fail())
	{
		cerr << "wrong when close" << endl;
		exit(1);
	}

	return 0;
}
