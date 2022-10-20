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
#include "ADD.hpp"
#include <iostream>

ADD::ADD(){}

ADD::ADD(Register* theReg1, Register* theReg2): Instruction("ADD", 54, 3)
{
	reg1 = theReg1;
	reg2 = theReg2;
}

int ADD::getOperand1()
{
	return operand1;
}

int ADD::getOperand2()
{
	return operand2;
}

Register* ADD::getReg1()
{
	return reg1;
}

Register* ADD::getReg2()
{
	return reg2;
}




