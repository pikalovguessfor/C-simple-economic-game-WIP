//------------------------------------------------------------------------Events bar, this file include game logic of actor, their UPS AND DOWNS-----------------------------------------------------------------------------------------------\\

#pragma once

#include "includes.h"

namespace gameEvents {																				//this file have own namespace for make code more EXPANSIONAL

	short ArrSituation[9] =																			// In this array count 1 this is "Stability" number, 0 this is "unstability numbers"
	{
		1, 1, 1,
		1, 1, 1,
		1, 1, 1,
	};

	bool MinusCh() {																				// Event for chech array "ArrSituation[9]" have more three negative counts

		short countMinus;

		for (int i = 0; i <= 9; i++) {

			if (ArrSituation[i] == 0) {

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

	void ChageSituatStab() {																		// Event for change numbers in array "ArrSituation[9]"



	}

	void eventDivIncome(float income) {																// Event to Division "income" of actor

		srand(time(0));

		if (MinusCh) {



		}


		return;
	}

}
