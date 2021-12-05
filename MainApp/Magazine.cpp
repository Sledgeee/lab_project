#include "Magazine.h"

Magazine::Magazine() {}

Magazine::Magazine(Int32 id, String^ name, String^ type, Int32 paperback, Publisher^ publisher, String^ language,
	String^ description, float price, Int32 discount, String^ linkToImage)
	:Edition(id, name, type, paperback, publisher, language, description, price, discount, linkToImage) {}

Magazine::Magazine(Int32 id, String^ name, float price, Int32 discount, String^ linkToImage)
	: Edition(id, name, "Magazine", 0, nullptr, "", "", price, discount, linkToImage) {}

Magazine::~Magazine() {}

