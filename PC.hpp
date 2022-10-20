/*
 * =====================================================================================
 *
 *       Filename:  PC.hpp
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

#ifndef PC_HPP
#define PC_HPP

#include "Register.hpp"

class PC: public Register 
{
	private:
		int address;

	public:
		PC();
		PC(std::string theName);
		void setAddress(int address);
		int getAddress();
};
#endif
