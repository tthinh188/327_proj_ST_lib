/*
 * ST_American_DonotEnthusiest.cpp
 *
 *  Created on: Nov 18, 2019
 *      Author: Thinh Phan
 */

#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) :
		Smalltalk_American(AMERICAN_DE, i) {
	populatePhrases();
}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest() {

}
void ST_American_DonutEnthusiest::populatePhrases() {
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}

