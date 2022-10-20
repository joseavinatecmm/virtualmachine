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

#include "MBR.hpp"

MBR::MBR(): Register("MBR Register ") { }

MBR::MBR(std::string theName): Register(theName){}

void MBR::setInstruction(Instruction* theInstruction)
{
	instruction = theInstruction;
}

Instruction* MBR::getInstruction()
{
	return this->instruction;
}


