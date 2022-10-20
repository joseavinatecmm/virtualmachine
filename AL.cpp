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

#include "AL.hpp"

AL::AL(): Register("AL"){}

AL::AL(std::string theName): Register(theName)
{
	value = 0;	
}

void AL::setValue(int theValue)
{
	value = theValue;
}

int AL::getValue()
{
	return value;
}


