/*
 * =====================================================================================
 *
 *       Filename:  AH.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  05/25/2020 00:42:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "PC.hpp"

PC::PC(): Register("PC Resgister ") {}

PC::PC(std::string theName): Register(theName){}

void PC::setAddress(int address)
{
	this->address = address;
}

int PC::getAddress()
{
	return this->address;
}


