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

#ifndef MOVE_HPP
#define MOVE_HPP

#include "Instruction.hpp"
#include "Register.hpp"
#include <string>

class Move: public Instruction 
{
	private:
		Register* reg;
		int address;

	public:
		Move();
		Move(Register* theRegister, int theAddress);
	        void setRegister(Register* theRegister);
		void setAddress(int theAddress);
	       	Register* getRegister();
		int getAddress();
};
#endif

