/*
 * =====================================================================================
 *
 *       Filename:  ControlUnit.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  05/25/2020 18:22:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef CONTROLUNIT_HPP
#define CONTROLUNIT_HPP


#include "Instruction.hpp" 
#include "Memory.hpp"
#include "Program.hpp"
#include "IR.hpp"

class ControlUnit
{
	private:
		std::string status;
	public:
		ControlUnit();
		Instruction* fetch(Program theProgram, int theAddress);
		void decode(Instruction* instruction, Memory* memory);
		void execute(std::string decodedInstruction);
                void execute(int theAddress, Memory* memory);
                void execute(std::string theRegister, int theAddress);
                void execute(std::string decodedInstruction, int theOperand1, int theOperand2);
};
#endif
