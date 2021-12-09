#include "Magazine.h"

Magazine::Magazine() {}

Magazine::Magazine(Int32 id, String^ name, String^ type, Int32 printlength, Publisher^ publisher, String^ language,
	String^ description, float price, Int32 discount, String^ linkToImage)
	:Edition(id, name, type, printlength, publisher, language, description, price, discount, linkToImage) {}

Magazine::~Magazine() {}

