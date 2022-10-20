/*
 * =====================================================================================
 *
 *       Filename:  Memory.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  05/25/2020 19:01:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Memory.hpp"

Memory::Memory(){}

void Memory::setProgram(Program theProgram)
{
	this->program = theProgram;

}	

Program Memory::getProgram()
{
	return this->program;
}

void Memory::setData(int address, int value)
{
	data[address] = value;
}

int Memory::getData(int address)
{
	return data[address];
}

Instruction* Memory::getInstruction(int theAddress)
{
	return this->program.getInstruction(theAddress);

}

void Memory::displayProgram()
{
	this->program.displayInstructions();
}



