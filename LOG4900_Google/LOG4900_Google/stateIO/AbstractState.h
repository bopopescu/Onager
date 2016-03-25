/*
Copyright 2015 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#pragma once
#include <vector>
#include <algorithm>
#include "../Utils.h"

class AbstractState
{
public:
	AbstractState();
	AbstractState(std::vector<std::string>& lines);
	~AbstractState();

	std::string extractPidFromString(std::string& word);
	std::string ifNotEmpty(std::string tag, std::string value);
	virtual std::string returnJson(std::vector<std::string>& FileIoEvent, std::vector<std::string>& OpEnd);
	std::string commonJson(std::vector<std::string>& FileIoEvent, std::vector<std::string>& OpEnd);
};

