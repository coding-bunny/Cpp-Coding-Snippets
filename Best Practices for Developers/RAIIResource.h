#pragma once

#ifndef RAII_RESOURCE_H
#define RAII_RESOURCE_H

class RAIIResource
{
public:
	RAIIResource(int resourceId);
	~RAIIResource();
private:
	int resource_id;
};

#endif
