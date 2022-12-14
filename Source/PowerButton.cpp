/*
  ==============================================================================

    OscillatorComponentElements.cpp
    Created: 13 Jan 2022 1:03:34am
    Author:  Josh Cann

  ==============================================================================
*/

#include "PowerButton.h"

void PowerButton::paint(Graphics& g)
{
    buttonIsOn = isButtonOn();
    buttonIsOn == true ? g.setColour(Colours::mediumpurple) : g.setColour(Colours::darkgrey);
    
    if(isOnComponent()) {
        if(buttonIsOn) {
            g.setColour(Colours::rebeccapurple);
        }
        if(!buttonIsOn) {
            g.setColour(Colours::darkslategrey);
        }
    }
    
    if(buttonIsDown()) {
        if(buttonIsOn) {
            g.setColour(Colours::grey);
        }
        if(!buttonIsOn) {
            g.setColour(Colours::purple);
        }
    }
    
    g.fillRoundedRectangle(0, 0, getWidth(), getHeight(), 10000);
    

}

void PowerButton::mouseUpdate()
{
    repaint();
}

bool PowerButton::isOn()
{
    return buttonIsOn;
}
