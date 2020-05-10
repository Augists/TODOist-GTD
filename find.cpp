/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Augists
#   Email         : awzyc2010@163.com
#   File Name     : find.cpp
#   Last Modified : 2020-05-10 14:13
#   Describe      :
#
# ====================================================*/

#include <iostream>
#include <fstream>
#include <string>
#include "find.hpp"
using namespace std;

/* use <++++> as the signal */
void findPlusPlus(ifstream &p)
{
	char a[100];
	do
	{
		p.istream::getline(a, 100);
	} while (!p.eof() && strcmp(a, "<++++>"));
}

void SwitchChoice(const string &p) // TODO
{
}
