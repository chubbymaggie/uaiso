/******************************************************************************
 * Copyright (c) 2014-2015 Leandro T. C. Melo (ltcmelo@gmail.com)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
 * USA
 *****************************************************************************/

/*--------------------------*/
/*--- The UaiSo! Project ---*/
/*--------------------------*/

#include "Parsing/Thesaurus.h"
#include <cctype>

using namespace uaiso;

Thesaurus::~Thesaurus()
{}

std::string Thesaurus::packageSeparator() const
{
    return ".";
}

std::string Thesaurus::memberAccessOperator() const
{
    return ".";
}

std::string Thesaurus::funcCallDelim() const
{
    return "(";
}

bool Thesaurus::isIdentFirstChar(char ch) const
{
    return std::isalpha(ch) || ch == '_';
}

bool Thesaurus::isIdentChar(char ch) const
{
    return std::isalnum(ch) || ch == '_';
}
