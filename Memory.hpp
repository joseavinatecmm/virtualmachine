/*
 * =====================================================================================
 *
 *       Filename:  Memory.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  05/25/2020 18:29:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef MEMORY_HPP
#define MEMORY_HPP

#include "Program.hpp"
#include "Instruction.hpp"


class Memory
{
	private:
		Program program;
		int data[10];
	public:
		Memory();
		void setProgram(Program theProgram);
		Program getProgram();
		void setData(int address, int value);
		int getData(int address);
                Instruction* getInstruction(int theAddress);
		void displayProgram();
};
#endif
