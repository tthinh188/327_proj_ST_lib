/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 17, 2019
 *      Author: Thinh Phan
 */

#include "./includes/Smalltalk.h"
#include "./includes/constants.h"

Smalltalk::Smalltalk(std::string myNationality, int iPerson) :
		nationality(myNationality), iPerson(iPerson), current_phrase(-1) {
	pWatch = NULL;
}

Smalltalk::~Smalltalk(void) {
	if (pWatch != NULL) {
		pWatch.release();
		pWatch = NULL;
	}
}

std::string Smalltalk::saySomething() {
	std::string str;
	str = nationality + " " + std::to_string(iPerson) + ":";
	if (mySmallTalk.size() > 0) {
		current_phrase = (current_phrase + 1) % mySmallTalk.size();
		str = str + mySmallTalk[current_phrase];
	}
	return str;
}

std::string Smalltalk::getTime() {
	if (pWatch != NULL) {
		return nationality + " " + std::to_string(iPerson) + ":"
				+ pWatch->getTime();
	} else {
		return I_DO_NOT_HAVE_A_WATCH;
	}
}

std::unique_ptr<Watch> Smalltalk::takeWatch() {
	std::unique_ptr<Watch> mw = std::move(pWatch);
	if (mw != NULL) {
		pWatch.release();
		pWatch = NULL;
	}
	return mw;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (Smalltalk::pWatch != NULL) {
		return false;
	} else {
		Smalltalk::pWatch = std::move(pWatch);
		return true;
	}
}
