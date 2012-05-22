#pragma once
class Manager
{
public:

	Manager(void)
	{
	}

	~Manager(void)
	{
	}

	virtual bool startUp()
	{
		//TODO: have some baseline handle generation stuff in here
		return true;
	}

	virtual bool shutDown()
	{
		//TODO:destroy the same baseline handle generation
		return true;
	}
};

