#include <XBee.h>

XBee xbee = XBee();
uint8_t payload[] = {4};
Tx16Request tx1,tx2,tx3;

void setup()
{
	xbee.begin(9600);
  /* add setup code here */
	tx1 = Tx16Request(0x03, payload, sizeof(payload));
	tx2 = Tx16Request(0x04, payload, sizeof(payload));
	tx3 = Tx16Request(0x05, payload, sizeof(payload));
}

void loop()
{
	
  /* add main program code here */

	xbee.send(tx1);
	xbee.send(tx2);
	xbee.send(tx3);
	delay(1);
}
