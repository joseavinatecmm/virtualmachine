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

#ifndef MBR_HPP
#define MBR_HPP

#include "Register.hpp"
#include "Instruction.hpp"

class MBR: public Register 
{
	private:
		Instruction* instruction;

	public:
		MBR();
		MBR(std::string theName);
		void setInstruction(Instruction* instruction);
		Instruction* getInstruction();
};
#endif
