/*
 * =====================================================================================
 *
 *       Filename:  IR.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  05/25/2020 00:39:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef IR_HPP
#define IR_HPP

#include "Register.hpp"
#include "Instruction.hpp"

class IR: public Register 
{
	private:
		Instruction* instruction;

	public:
		IR();
		IR(std::string theName);
		void setInstruction(Instruction* instruction);
		Instruction* getInstruction();
};
#endif
