


#include <SoftwareSerial.h>
//#include "utility/twi.h"
//#include "Wire.h"
//#include "memory.h"
//#include "presets.h"


//#define eepromAddr1 0x50 
#define myTX 2
#define myRX 3

SoftwareSerial midi1Serial();



byte presetIndx  = 5;
byte inMessage[3];
byte inRead  = 0;




 void setup() {}

 void loop(){}
/*	Serial.begin(9600);
	//midiSerial.begin(31250);

	//Wire.begin();
	
/*	
for(int  i =0; i<3;i++){


	Serial.print("writing at address : ");
	Serial.println(presetIndx*presetSize);
	if(i == 0){
		writeKnubPreset(eepromAddr1, presetIndx*presetSize, &preset1);
	}else if(i == 1){

		writeKnubPreset(eepromAddr1, presetIndx*presetSize, &preset2);

	}else{

		writeKnubPreset(eepromAddr1, presetIndx*presetSize, &preset3);

	}
	delay(500);
	readKnubPreset(eepromAddr1, presetIndx*presetSize, &currentPreset);
	delay(1000);
	printCurrentPreset();
	delay(2000);
	presetIndx ++;
}	

}	


 void loop(){

	if(midiSerial.available()>0){


		if(inRead < 3){

			inMessage[inRead] = midiSerial.read();
			inRead ++;

		}

		if(inRead >=3){

			inRead = 0;
			Serial.println(inMessage[0]);


		}
	}

}

/*
void printCurrentPreset(){


	Serial.println(currentPreset.name);
 	
 	Serial.println("----------------------");
   	
   	Serial.println("KNUBBIES: ");

   	for(int i = 0; i<numKnubbies; i++){
   			Serial.println(currentPreset.knubbies[i].name);

   		}   	
 	
 	Serial.println("----------------------");
   	
   	Serial.println("KNUBBIE 1 PARAMS : ");

   	for(int i = 0; i<paramLength; i++){

   		Serial.println(currentPreset.knubbies[0].params[i]);
	}
 

	Serial.println("KNUBBIE 1 MODSOURCE: ");
	Serial.println(currentPreset.knubbies[0].modSource);
	Serial.println("KNUBBIE 1 STATE: ");
	Serial.println(currentPreset.knubbies[0].state);
	Serial.println("KNUBBIE 1 NUMLOOP: ");
	Serial.println(currentPreset.knubbies[0].numLoop);

	Serial.println("----------------------");
   	Serial.println("KNUBBIE 2 PARAMS : ");

   	for(int i = 0; i<paramLength; i++){

   		Serial.println(currentPreset.knubbies[1].params[i]);
	}
 

	Serial.println("KNUBBIE 2 MODSOURCE: ");
	Serial.println(currentPreset.knubbies[1].modSource);
	Serial.println("KNUBBIE 2 STATE: ");
	Serial.println(currentPreset.knubbies[1].state);
	Serial.println("KNUBBIE 2 NUMLOOP: ");
	Serial.println(currentPreset.knubbies[1].numLoop);

	Serial.println("----------------------");
   	Serial.println("KNUBBIE 3 PARAMS : ");

   	for(int i = 0; i<paramLength; i++){

   		Serial.println(currentPreset.knubbies[2].params[i]);
	}
 

	Serial.println("KNUBBIE 3 MODSOURCE: ");
	Serial.println(currentPreset.knubbies[2].modSource);
	Serial.println("KNUBBIE 3 STATE: ");
	Serial.println(currentPreset.knubbies[2].state);
	Serial.println("KNUBBIE 3 NUMLOOP: ");
	Serial.println(currentPreset.knubbies[2].numLoop);
}
*/