/*
 * =====================================================================================
 *
 *       Filename:  Store.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  05/24/2020 22:35:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef STORE_HPP
#define STORE_HPP

#include <string>
#include "Instruction.hpp"

class Store: public Instruction
{
	private:
		int address;
	public:
		Store();
		Store(int theAddress);
		void setAddress(int theAddress);
		virtual int getAddress();
};
#endif
