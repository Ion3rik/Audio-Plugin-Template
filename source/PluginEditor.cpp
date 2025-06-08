#include "PluginEditor.h"
#include "mrta_utils/Source/GUI/GenericParameterEditor.h"
#include "ParameterInfo.h"


MyAudioProcessorEditor::MyAudioProcessorEditor(MyAudioProcessor& p)
    : AudioProcessorEditor(p)
    
{

}



MyAudioProcessorEditor::~MyAudioProcessorEditor()
{
    setLookAndFeel(nullptr); // Reset the look and feel to default
}

//==============================================================================
void MyAudioProcessorEditor::paint(juce::Graphics& g)
{
    g.fillAll(getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
}

void MyAudioProcessorEditor::resized()
{
   
}
