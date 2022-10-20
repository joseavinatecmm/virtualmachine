/*
 * =====================================================================================
 *
 *       Filename:  Alu.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  05/24/2020 23:57:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "Register.hpp"

#ifndef ALU_HPP
#define ALU_HPP

class Alu 
{
	private:
		int operand1;
		int operand2;

	public:
		Alu();
		Alu(int theOperand1, int theOperand2);
		void setOperand1(int theOperand);
		void setOperand2(int theOperand);
		int getOperand1();
		int getOperand2();
		int add();
                template <typename T> 
		int add(T register1, T register2);
		
};
#endif
