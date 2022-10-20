/*
 * =====================================================================================
 *
 *       Filename:  Move.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  05/24/2020 21:00:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Move.hpp"

Move::Move(){}

Move::Move(Register* theRegister, int theAddress): Instruction("MOV", 52, 3)
{
	reg = theRegister;
	address = theAddress;
}

void Move::setRegister(Register* theRegister)
{
	reg = theRegister;
}

void Move::setAddress(int theAddress) 
{
	address = theAddress;
}

Register* Move::getRegister()
{
	return reg;
}

int Move::getAddress()
{
	return address;
}




