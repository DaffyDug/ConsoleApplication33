#pragma once
#include <iostream>	
using namespace std;
class SmartPhone
{
	int _balance;
	int _batery;
public:
	SmartPhone()
	{
		_balance = 500;
		_batery = 100;
	}
	//call
	int GetBalance()
	{
		return _balance;
	}
	int GetBatary()
	{
		return _batery;
	}

	void Call()
	{
		if (_batery <= 100 && _batery >= 0 && _balance <= 0)
		{
			_batery -= 10;
			_balance -= 50;
		}
	}

	void Charge(int m)
	{
		if (_batery <= 100 && _batery >= 0)
			_batery += m;
		else
		{
			cout << "технические неполадки" << endl;
		}
	}
	void Replenish(int m)
	{
		_balance = m % 10;
	}
};

