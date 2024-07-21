//------------------------------------------------------------------------this file contains characteristics of actor and some sub - functions---------------------------------------------------------------------------------------------------\\

#pragma once

#include "includes.h"

const string NameStagesArr[6] = { "manufacture", "fabric", "corporation", "megacorp", "conglomeracy", "syndicate" };

class actorChar {
public:
	char symbol = ' ';

	string name = "";
	string stage = NameStagesArr[0];

	float income = 1;
	float price = 1;
	float age = 1;
	float money = 1;
	float production = 1;

	bool ChecksUpgrade = false;
	

	void DisableEx() {

		if (_ObjectIsDisabled()) {

			age = 0;
			income = 0;
			price = 0;
			money = 0;
		}

		return;
	}

public:
	
	bool _ObjectIsDisabled() {

		if (this -> price == 0) {
			return true;
		}

		else {
			return false;
		}
	}

};

class actInfo : private actorChar {

public:


	void showInfo(actorChar actor) {

		cout << "   " << "Income ->" << actor.income << "   " << "price ->" << actor.price << "   "<< "production ->" << actor.production << "   " << "age ->" << actor.age << "   " << "money ->" << actor.money << endl;

	}


};