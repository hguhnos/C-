#pragma once

class Counter2
{
	int value;

public:

	Counter2(int count) : value{ count }
	{

	}

	Counter2(const Counter2& c) : value{ c.value }
	{
	
	}

	void reset()
	{
		value = 0;
	}

	void counting()
	{
		value++;
	}	

	int getValue() const
	{
		return value;
	}

};


