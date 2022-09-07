// written 5/26/2020
// Working battery interface signal from the "Omega" port
// of a Greenworks Pro 60V batter


//20.05.2021 BornToRepair/plmicia mod:
//reply frame removed
//pin6 input mode enabled beetween query frames
//query cycling each 2000ms

#define PIN 6

void setup()
{
  pinMode(PIN, OUTPUT);
}

void loop()
{

  for (uint8_t a = 0; a < 10; a++)

  {
    digitalWrite(PIN, HIGH);
    //Delay 188,000us
    for (uint8_t i = 0; i < 188; i++)
    {
      delayMicroseconds(1000);
    }


    pinMode(PIN, OUTPUT);

    digitalWrite(PIN, LOW);
    delayMicroseconds(400);

    for (uint8_t i = 0; i < 4; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(200);
    }

    for (uint8_t i = 0; i < 10; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(100);
    }

    delayMicroseconds(100);

    for (uint8_t i = 0; i < 1; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(100);
    }

    // 5
    for (uint8_t i = 0; i < 3; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(100);
    }
    delayMicroseconds(100);

    for (uint8_t i = 0; i < 2; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(200);
    }

    for (uint8_t i = 0; i < 1; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(100);
    }

    for (uint8_t i = 0; i < 1; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(200);
    }

    for (uint8_t i = 0; i < 3; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(100);
    }

    pinMode(PIN, INPUT);
  }



  for (uint8_t a = 0; a < 10; a++)
  {
    digitalWrite(PIN, HIGH);
    //Delay 188,000us
    for (uint8_t i = 0; i < 188; i++)
    {
      delayMicroseconds(1000);
    }
    pinMode(PIN, OUTPUT);

    digitalWrite(PIN, LOW);
    delayMicroseconds(400);

    for (uint8_t i = 0; i < 3; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(200);
    }

    for (uint8_t i = 0; i < 9; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(100);
    }

    delayMicroseconds(100);

    for (uint8_t i = 0; i < 1; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(200);
    }

    // 5
    for (uint8_t i = 0; i < 4; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(100);
    }
    delayMicroseconds(100);

    for (uint8_t i = 0; i < 4; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(200);
    }

    for (uint8_t i = 0; i < 3; i++)
    {
      digitalWrite(PIN, HIGH);
      delayMicroseconds(100);
      digitalWrite(PIN, LOW);
      delayMicroseconds(100);
    }
    pinMode(PIN, INPUT);
  }
}
