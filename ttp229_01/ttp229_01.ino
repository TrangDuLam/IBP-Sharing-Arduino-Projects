#include <Wire.h>
#include <TTP229.h>

TTP229 ttp229;

void setup()
{
    Wire.begin();
    Serial.begin(9600);
}

void loop()
{

    int key = ttp229.getKey();
    Serial.print(key);
    
    Serial.println();
    delay(500);
}
