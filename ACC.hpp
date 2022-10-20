/*
 * =====================================================================================
 *
 *       Filename:  ACC.hpp
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

#ifndef ACC_HPP
#define ACC_HPP

#include "Register.hpp"

class ACC: public Register 
{
	private:
		int value;

	public:
		ACC();
		ACC(std::string theName);
		void setValue(int theValue);
		int getValue();
};
#endif
