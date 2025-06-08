#include "PluginProcessor.h"
#include "JuceHeader.h"
#include "PluginEditor.h"
#include "ParameterInfo.h"


MyAudioProcessor::MyAudioProcessor() :
    AudioProcessor (BusesProperties()
        .withOutput("Output", juce::AudioChannelSet::stereo(), true)) // force stereo output
    
    
{

}

MyAudioProcessor::~MyAudioProcessor()
{
}

void MyAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{

}

void MyAudioProcessor::releaseResources()
{
}

void MyAudioProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{

    juce::ScopedNoDenormals noDenormals;

    const unsigned int numChannels{ static_cast<unsigned int>(buffer.getNumChannels()) };
    const unsigned int numSamples{ static_cast<unsigned int>(buffer.getNumSamples()) };

    buffer.clear(); 

}

void MyAudioProcessor::getStateInformation(juce::MemoryBlock& destData)
{

}

void MyAudioProcessor::setStateInformation(const void* data, int sizeInBytes)
{

}

bool MyAudioProcessor::acceptsMidi() const
{
    return true;
}




//==============================================================================
const juce::String MyAudioProcessor::getName() const { return JucePlugin_Name; }
bool MyAudioProcessor::producesMidi() const { return false; }
bool MyAudioProcessor::isMidiEffect() const { return false; }
double MyAudioProcessor::getTailLengthSeconds() const { return 0.0; }
int MyAudioProcessor::getNumPrograms() { return 1; }
int MyAudioProcessor::getCurrentProgram() { return 0; }
void MyAudioProcessor::setCurrentProgram(int) { }
const juce::String MyAudioProcessor::getProgramName(int) { return {}; }
void MyAudioProcessor::changeProgramName(int, const juce::String&) { }
bool MyAudioProcessor::hasEditor() const { return true; }
juce::AudioProcessorEditor* MyAudioProcessor::createEditor() { return new MyAudioProcessorEditor(*this); }
//==============================================================================

//==============================================================================
// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new MyAudioProcessor();
}