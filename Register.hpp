/*
 * =====================================================================================
 *
 *       Filename:  Register.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  05/24/2020 21:42:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef REGISTER_HPP
#define REGISTER_HPP

#include<string>

class Register
{
	private:
		std::string name;
	public:
		Register();
		Register(std::string name);
		std::string getName();
		void setName(std::string name);
};
#endif


