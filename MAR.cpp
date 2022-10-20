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

#include "MAR.hpp"

MAR::MAR(): Register("Memory Address Resgister ") {}

MAR::MAR(std::string theName): Register(theName){}

void MAR::setAddress(int address)
{
	this->address = address;
}

int MAR::getAddress()
{
	return this->address;
}


