/*
 * =====================================================================================
 *
 *       Filename:  Store.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  05/24/2020 22:39:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Store.hpp"

Store::Store(){}

Store::Store(int theAddress): Instruction("STO", 53, 1)
{
	address = theAddress;
}

void Store::setAddress(int theAddress)
{
	address = theAddress;
}

int Store::getAddress()
{
	return address;
}


