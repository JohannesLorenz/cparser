/*************************************************************************/
/* cparser - a C++03, template based parser                              */
/* Copyright (C) 2015-2015                                               */
/* Johannes Lorenz (jlsf2013 @ sourceforge)                              */
/*                                                                       */
/* This program is free software; you can redistribute it and/or modify  */
/* it under the terms of the GNU General Public License as published by  */
/* the Free Software Foundation; either version 3 of the License, or (at */
/* your option) any later version.                                       */
/* This program is distributed in the hope that it will be useful, but   */
/* WITHOUT ANY WARRANTY; without even the implied warranty of            */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU      */
/* General Public License for more details.                              */
/*                                                                       */
/* You should have received a copy of the GNU General Public License     */
/* along with this program; if not, write to the Free Software           */
/* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110, USA  */
/*************************************************************************/

#include <algorithm>
#include <iostream>
#include "token.h"
#include "c_grammar.h"

// static members
std::vector<char> token_vector::v;

/*token_t::token_t()
{
}*/
/*
std::ostream& token_t::dump(std::ostream& stream, const std::string& file) {
	std::string substr;
	std::copy(_begin, _end, std::back_inserter(substr));
	return stream << substr << *this;
	//return stream << file.substr(begin, end) << *this;
}*/

