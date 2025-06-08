#pragma once

#include "PluginProcessor.h"
#include "mrta_utils/Source/GUI/GenericParameterEditor.h"

class MyAudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    MyAudioProcessorEditor(MyAudioProcessor&);
    ~MyAudioProcessorEditor() override;

    void paint(juce::Graphics&) override;
    void resized() override;

private:

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MyAudioProcessorEditor)
};