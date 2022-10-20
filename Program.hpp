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

#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include "Instruction.hpp"

class Program
{
	private:
		Instruction* instructions[10];
		int instructionIndex;

	public:
		Program();
		void addInstruction(Instruction* theInstruction);
		Instruction* getInstruction(int theAddress);
		Instruction* getInstructions();
                void display();
		void displayInstructions();
};

#endif


