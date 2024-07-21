//------------------------------------------------------------------------Events bar, this file include game logic of actor, their UPS AND DOWNS-----------------------------------------------------------------------------------------------\\

#pragma once

#include "includes.h"

namespace gameEvents {																				//this file have own namespace for make code more EXPANSIONAL
		
	// this is main arrays to work with events
	const short arrSitAllOk[9] =																	// Const array to comparison dynamic array "ArrSituation" on best way
	{
	1, 1, 1,
	1, 1, 1,
	1, 1, 1,
	};

	const short arrSitAllBad[9] =																	// Const array to comparison dynamic array "ArrSituation" on bad way
	{
		0, 0, 0,
		0, 0, 0,
		0, 0, 0
	};

	short ArrSituationDyn[9] =																		// In this array count 1 this is "Stability" number, 0 this is "unstability numbers"
	{
		1, 1, 1,
		1, 1, 1,
		1, 1, 1
	};
	//

	bool MinusCh() {																				// Event for chech array "ArrSituation[9]" have more three negative counts

		short countMinus = 0;

		for (int i = 0; i <= 9; i++) {

			if (ArrSituationDyn[i] == 0) {

				countMinus++;

			}

		}

		if (countMinus > 3) {
			return true;
		}
		
		else {
			return false;
		}

	}

	void ChangeSituatStab() {																		// Event for change numbers in array "ArrSituation[9]"
		srand(time(0));

		short arrInsideSit[] =
		{
		1, 1, 1,
		1, 1, 1,
		1, 1, 1
		};

		bool allRolled = false;
		
		short RollArr[9];

		while (!allRolled) {
			
			for (int i = 0; i <= 9; i++) {

				RollArr[i] = (rand() % 200);

				if (RollArr[i] >= 100) {
					arrInsideSit[i] = 0;
				}
				else {
					
					arrInsideSit[i] = 1;

				}

			}
			
			allRolled = true;

		}

	}


	void eventDivIncome(float income) {																// Event to Division "income" of actor

		


		return;
	}

}
