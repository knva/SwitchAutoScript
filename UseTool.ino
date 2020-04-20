#include <SwitchControlLibrary.h>

void setup()
{
  SwitchControlLibrary();
}

void newTools()
{
  for (int x = 0; x < 10; x++)
  {
    SwitchControlLibrary().PressButtonA();
    delay(200);
    SwitchControlLibrary().ReleaseButtonA();
    delay(200);
  }
  delay(10000);
  SwitchControlLibrary().MoveHat(0x02);
  delay(200);
  SwitchControlLibrary().MoveHat(0x08);
  delay(200);
}
void loop()
{
  delay(5000);
  newTools();
  delay(5000);
  for (int i = 0; i < 40; i++)
  {
    SwitchControlLibrary().PressButtonA();
    delay(200);
    SwitchControlLibrary().ReleaseButtonA();
    delay(1000);
  }
}
