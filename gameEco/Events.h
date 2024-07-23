//------------------------------------------------------------------------Events bar, this file include game logic of actor, their UPS AND DOWNS-----------------------------------------------------------------------------------------------\\

#pragma once

#include "includes.h"

class gameEvents {																			//this file have own namespace for make code more EXPANSIONAL

private:

	// this is main arrays to work with events
	const char arrSitAllOk[9] =																	// Const array to comparison dynamic array "ArrSituation" on best way
	{
		'1', '1', '1',
		'1', '1', '1',
		'1', '1', '1',
	};

	const char arrSitAllBad[9] =																	// Const array to comparison dynamic array "ArrSituation" on bad way
	{
		'0', '0', '0',
		'0', '0', '0',
		'0', '0', '0'
	};

public:

	char ArrSituationDyn[9] =																		// In this array count 1 this is "Stability" number, 0 this is "unstability numbers"
	{
		'1', '1', '1',
		'1', '1', '1',
		'1', '1', '1'
	};
	//

	void ChangeSituatStab() {																		// Event for change numbers in array "ArrSituation[9]"
		srand(time(0));

		char arrInsideSit[] =
		{
			'1', '1', '1',
			'1', '1', '1',
			'1', '1', '1'
		};

		bool allRolled = false;

		short RollArr[9];

		while (!allRolled) {

			for (int i = 0; i <= 8; i++) {

				RollArr[i] = (rand() % 200);

				if (RollArr[i] >= 100) {
					arrInsideSit[i] = '0';
				}
				else {

					arrInsideSit[i] = '1';

				}

			}

			allRolled = true;

		}

		for (int i = 0; i <= 8; i++) {

			ArrSituationDyn[i] = arrInsideSit[i];

		}

	}

	//------------------------------------------------------------------------This part of class work with result of previous var , And work with Array of symbols--------------------------------------------------------------------------------\\

private:

	int SubWorkEventsCounterOfZero() {

		int Counter = 0;

		for (int i = 0; i < 9; i++) {

			if (this->ArrSituationDyn[i] == '0') {
				Counter++;
			}

		}
		
		if (Counter > 5) {
			Counter = Counter / 2;
		}

		return Counter;
	}

public:

	long double divIncomeEvent(long double income) {																// Event to Division "income" of actor

		int counterMain = SubWorkEventsCounterOfZero();


		if (this ->ArrSituationDyn[0] != '1' && this ->ArrSituationDyn[1] != '1') {
			income = (income / 1.25);
		
		}

		return income;
	}

};
