/*
 * =====================================================================================
 *
 *       Filename:  Instruction.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  05/19/2020 23:27:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Instruction.hpp"
#include <string>


using namespace std;


Instruction::Instruction() {}

Instruction::Instruction(string theName, int theCode, int theLength)
{
	name = theName;
	code = theCode;
	length = theLength;

}

string Instruction::getName()
{
	return name;
}

int Instruction::getCode()
{
	return code;
}

int Instruction::getLength()
{
	return length;
}

void Instruction::setName(string theName)
{
	name = theName;
}


void Instruction::setCode(int theCode)
{
	code = theCode;
}


void Instruction::setLength(int theLength)
{
	length = theLength;
}

