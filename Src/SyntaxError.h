#ifndef SYNTAX_ERROR_H
#define SYNTAX_ERROR_H

#pragma once

#include <list>
#include <memory>
#include <exception>
#include <sstream>
#include <iostream>
#include <map>
#include <fstream>
#include <exception>

class SyntaxError : public std::exception
{
public:
	SyntaxError(const std::string &err) throw()
		: m_Err(err)
	{}
    
    virtual ~SyntaxError() throw()
    {}

	virtual const char *what() const throw()
	{
		return m_Err.c_str();
	}
private:
	std::string m_Err;

};

#endif
