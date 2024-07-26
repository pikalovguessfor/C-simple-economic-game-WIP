//------------------------------------------------------------------------Events bar, this file include game logic of actor, their UPS AND DOWNS-----------------------------------------------------------------------------------------------\\

#pragma once

#include "includes.h"

using namespace std;

class gameEvents {																			//this file contains own class for every ivents ingame, or Main part of ivents	

private:

	bool EventsArr[10] = {
		false, false, false,
		false, false, false,
		false, false, false,
		true };

	void GetAllArrfalse() {

		for (int i = 0; i <= 10; i++) {

			EventsArr[i] = false;

		}

	}

public:

	int rollBolleanArr() {
		srand(time(0));
		
		int counterOffalse = 0;
		int randArr[10];

		for (int i = 0; i < 10; i++) {

			randArr[i] = rand() % 1000;
			
			if ((randArr[i] > 800) or (randArr[i] < 200)) {

				EventsArr[i] = true;

				counterOffalse++;

			}
		}

		GetAllArrfalse();

		return counterOffalse;
	}
	

};

//------------------------------------------------------------------------Subclass to work with EVENTS this contains main logic of behaviour--------------------------------------------------------------------------------------------------\\

class EventWorker : private gameEvents {

public:

	long double GetMinusMoney(long double money) {

		int counterTrue = rollBolleanArr();

		if (counterTrue == 0) {
			
			money = money + (money / 4);
		}
		else if (counterTrue < 2) {

			money = money + (money / 8);
		}
		else if (counterTrue > 7) {

			money = money - 100;
		}

		return money;
	}

	long double GetMinusIncome(long double income) {

		int counterTrue = rollBolleanArr();

		if (counterTrue == 0) {

			income = income + (income / 4);
		}
		else if (counterTrue < 2) {

			income = income + (income / 8);
		}
		else if (counterTrue > 7) {

			income = income - 50;
		}

		return income;
	}
};
