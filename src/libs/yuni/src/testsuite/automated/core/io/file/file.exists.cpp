
#include <vector>
#include <yuni/core/io/file.h>
#include <iostream>

struct FileWithResult
{
	FileWithResult(const char* name, bool result):
		Name(name), Result(result)
	{}

	const char* Name;
	bool Result;
};

int main(void)
{
	std::vector<FileWithResult> values;
	values.push_back(FileWithResult("test.txt", true));
	values.push_back(FileWithResult("./test.txt", true));
	values.push_back(FileWithResult(".\\test.txt", true));
	values.push_back(FileWithResult("./", false));
	values.push_back(FileWithResult("../../", false));
	values.push_back(FileWithResult("..\\..\\", false));
	values.push_back(FileWithResult("completelyImprobableName.none", false));

	int nbErrors = 0;
	for (int i = 0; i < values.size(); ++i)
	{
		bool found = Yuni::Core::IO::File::Exists(values[i].Name);
		bool expected = values[i].Result;
		if (found != expected)
		{
			std::cout << "Error: Core::IO::File::Exists should"
					  << (expected ? " find \"" : " not find \"")
					  << values[i].Name << "\" as a file!"
					  << std::endl;
			nbErrors++;
		}
	}
	return nbErrors;
}
