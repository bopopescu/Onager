#pragma once
#include "AbstractState.h"

class FileIORenameState : public AbstractState{
public:
	FileIORenameState();
	~FileIORenameState();
	virtual std::string returnJson(std::vector<std::string> lines);
};