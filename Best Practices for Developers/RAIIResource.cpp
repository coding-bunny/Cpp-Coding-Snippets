#include "RAIIResource.h"
#include <iostream>

RAIIResource::RAIIResource(const int resource_id) {
	std::cout << "Creating Resource " << resource_id << std::endl;
	this->resource_id = resource_id;
}

RAIIResource::~RAIIResource() {
	std::cout << "Deleting Resource " << this->resource_id << std::endl;
}
