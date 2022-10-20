/*
 * =====================================================================================
 *
 *       Filename:  ACC.cpp
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

#include "ACC.hpp"

ACC::ACC(): Register("Accumulator") {}

ACC::ACC(std::string theName): Register(theName)
{
	value = 0;	
}

void ACC::setValue(int theValue)
{
	value = theValue;
}

int ACC::getValue()
{
	return value;
}


