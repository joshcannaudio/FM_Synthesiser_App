/*
  ==============================================================================

    Effects.h
    Created: 13 Jan 2022 1:11:33am
    Author:  Josh Cann

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "PowerButton.h"
#include "PowerButton.h"

struct Effect : public Component {
    /** Adds the components adn make them visible */
    Effect();
     
    /** Paints the Effects */
    void paint(Graphics& g) override;
    
    PowerButton powerButton;
    Label label;
    Label sliderLabels[3];
    std::string labelText = "Effect";
    Slider parameters[3];
    bool isDistortion;
};

class EffectsRack : public Component {
public:
    /** Adds components and makes them visible */
    EffectsRack();
    
    /** Paints the effects racks */
    void paint(Graphics& g) override;
    
    bool isEffectOn(int index);
    
    Effect effect[2];
    
private:
    std::string effectLabels[2] = { "Distortion", "Tremelo" };
};
