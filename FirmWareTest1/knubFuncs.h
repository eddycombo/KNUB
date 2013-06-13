#define vacMin 1490
#define vacMax 2050
//DAC communication MCP4728
byte write_cmds[] = {B01011000, B01011010, B01011100, B01011110}; //for single writes not used here.

byte dacIDZ[] = {B1100000, B1100001, B1100010, B1100011};// 4x4 dacs = 16 dacs so 8 knubs.

byte knob1_ch1  = B01000000;//chanA
byte knob1_ch2 =  B01000010;//chanB

byte knob2_ch1 = B01000100;//chanC
byte knob2_ch2 = B01000110;//chanD


byte getValueFromLUT(byte indx){


  return redLUT[indx];

}


int  lowVal, highVal;

//function for multiWrite : 

void multiWriteDac(byte addr, byte wrid, byte wrid2, int val, int val2){
  
  Wire.beginTransmission(addr);
  Wire.write(wrid);
  Wire.write(highByte(val));
  Wire.write(lowByte(val)); 
  Wire.write(wrid2);
  Wire.write(highByte(val2));
  Wire.write(lowByte(val2)); 
  Wire.endTransmission();
};

//actual turn knub func

void turnKnub(byte knubNum, byte knubType, byte knubVal){
  
 
  
  if(knubType == 1){;
    lowVal = map(redLUT[knubVal], 0, 255, vacMin, vacMax);
    highVal = map(redLUT[255 - knubVal], 0, 255, vacMin, vacMax);
  }
  
  
 
  switch(knubNum){
  
    case 0:
      multiWriteDac(dacIDZ[0], knob1_ch1, knob1_ch2, lowVal, highVal);
    break;
    case 1:
     multiWriteDac(dacIDZ[0], knob2_ch1, knob2_ch2, lowVal, highVal);
    break;
    case 2:
      multiWriteDac(dacIDZ[1], knob1_ch1, knob1_ch2, lowVal, highVal);
    break;
    case 3:
      multiWriteDac(dacIDZ[1], knob2_ch1, knob2_ch2, lowVal, highVal);
    break;
    
    case 4:
      multiWriteDac(dacIDZ[2], knob1_ch1, knob1_ch2, lowVal, highVal);
    break;
    case 5:
      multiWriteDac(dacIDZ[2], knob2_ch1, knob2_ch2, lowVal, highVal);
    break;
    case 6:
      multiWriteDac(dacIDZ[3], knob1_ch1, knob1_ch2, lowVal, highVal);
    break;
    case 7:
      multiWriteDac(dacIDZ[3], knob2_ch1, knob2_ch2, lowVal, highVal);
    break;
  }
   
}; 
  


