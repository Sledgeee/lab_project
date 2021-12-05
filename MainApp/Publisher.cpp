#include "Publisher.h"

Publisher::Publisher()
{
	editions = gcnew List<Edition^>();
}

Publisher::Publisher(String^ name)
{
	this->name = name;
	editions = gcnew List<Edition^>();
}

Publisher::~Publisher() {}

