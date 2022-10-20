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

#include "IR.hpp"

IR::IR(): Register("IR Resgister ") {}

IR::IR(std::string theName): Register(theName){}

void IR::setInstruction(Instruction* theInstruction)
{
	instruction = theInstruction;
}

Instruction* IR::getInstruction()
{
	return this->instruction;
}


