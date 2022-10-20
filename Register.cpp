/*
 * =====================================================================================
 *
 *       Filename:  Register.cpp
 *
 *    Description: Implememtation 
 *
 *        Version:  1.0
 *        Created:  05/24/2020 21:44:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Register.hpp"

Register::Register() {}

Register::Register(std::string theName) 
{
	name = theName;
}

std::string Register::getName()
{
	return name;
}


void Register::setName(std::string name) 
{
	this->name = name;
}





