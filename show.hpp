/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Augists
#   Email         : awzyc2010@163.com
#   File Name     : show.hpp
#   Last Modified : 2020-05-10 14:04
#   Describe      :
#
# ====================================================*/

#ifndef  _SHOW_H
#define  _SHOW_H

#include <fstream>
#include "find.hpp"
using namespace std;

void showPart(ifstream &);
void partialLine();
void showAll(ifstream &, long *pos);
void showTitle();

#endif // _SHOW_H
