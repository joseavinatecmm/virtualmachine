/*
 * =====================================================================================
 *
 *       Filename:  AH.hpp
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
#ifndef BL_HPP
#define BL_HPP

#include "Register.hpp"

class BL: public Register 
{
	private:
		int value;

	public:
		BL();
		BL(std::string theName);
		void setValue(int theValue);
		int getValue();
};
#endif
