#include <iostream>

int main()
{
    double amp{1};          //amplitude
    double freq{1};         //frequency
    double ampInv{1};       //interval at which amplitude increases or decreases
    double freqInv{1};      //interval at which frequency increases or decreases

    double lJoystickY{0};   //left joystick y-axis value (need to connect this to the input from controller)
    double rJoystickY{0};   //right joystick y-axis value (need to connect this to the input from controller)
    double buttonB{0};      //B button value (need to connect this to input from controller) (possibly could be int)
    double deadZ{0.1};      //joystick deadzone

    while(buttonB /= 1)
    {
        if(rJoystickY > deadZ)          //if user pushes up on right joystick, increase frequency
        {
            freq += freqInv;
        }
        else if(rJoystickY < -deadZ)    //if user pushes down on right joystick, decrease frequency
        {
            freq-= freqInv;
        }

        if(lJoystickY > deadZ)          //if user pushes up on left joystick, increase amplitude
        {
            amp += ampInv;
        }
        else if(rJoystickY < -deadZ)    //if user pushes down on left joystick, decrease amplitude 
        {
            amp -= ampInv;
        }
    }

    return 0;
}