// Context.h
#ifndef CONTEXT_H
#define CONTEXT_H

#pragma once

#include <list>
#include <memory>
#include <exception>
#include <sstream>
#include <iostream>
#include <map>
#include <fstream>

class Context
{
public:
	long GetValue(std::string variable);
	long SetValue(std::string variable, long value);
private:
	typedef std::map<std::string, long> VarMap;
	VarMap m_symbols;
};

#endif 
