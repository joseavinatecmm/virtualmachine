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

#include "BL.hpp"

BL::BL(): Register("BL") {}

BL::BL(std::string theName): Register(theName)
{
	value = 0;	
}

void BL::setValue(int theValue)
{
	value = theValue;
}

int BL::getValue()
{
	return value;
}


