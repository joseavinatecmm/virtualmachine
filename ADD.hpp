/*
 * =====================================================================================
 *
 *       Filename:  Start.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  05/24/2020 20:53:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef ADD_HPP
#define ADD_HPP

#include "Instruction.hpp"
#include "AL.hpp"
#include "BL.hpp"

class ADD: public Instruction 
{
	private:
		int operand1;
		int operand2;
		Register* reg1;
		Register* reg2;

	public:
		ADD();
		ADD(Register* theReg1, Register* theReg2);
	       	int getOperand1();
	       	int getOperand2();
	       	Register* getReg1();
	       	Register* getReg2();
};
#endif

