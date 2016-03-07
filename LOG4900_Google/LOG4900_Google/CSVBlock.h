#pragma once
#include <string>
#include <vector>

class CSVBlock
{
public:
	CSVBlock();

	bool Empty() { return lines.empty(); }
	int Size() { return lines.size(); }
	const std::vector<std::vector<std::string>>& GetLines() { return lines; }
	std::string GetTID() { return tid; }
	int GetTimestamp() { return this->timestamp; }

	void AddLine(std::vector<std::string> line) { lines.push_back(line); }
	void Reset(std::string tid, int timestamp);

private:
	std::vector<std::vector<std::string>> lines;
	std::string tid;
	int timestamp;
};