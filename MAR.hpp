/*
 * =====================================================================================
 *
 *       Filename:  MAR.hpp
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

#ifndef MAR_HPP
#define MAR_HPP

#include "Register.hpp"

class MAR: public Register 
{
	private:
		int address;

	public:
		MAR();
		MAR(std::string theName);
		void setAddress(int address);
		int getAddress();
};
#endif
