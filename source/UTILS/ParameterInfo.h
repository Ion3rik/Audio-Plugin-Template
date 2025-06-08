#pragma once
#include <JuceHeader.h>

namespace Param
{

    namespace ID
    {
        static const juce::String VoiceGain { "voice_gain" };
        static const juce::String SinesGain { "sine_gain" };
        static const juce::String TransGain { "transi_gain" };
        static const juce::String NoiseGain { "noise_gain" };
        static const juce::String VariationGain { "variation_gain" };
        static const juce::String Attack { "attack" };
        static const juce::String Decay { "decay" };
        static const juce::String Pan { "pan" };
        
    }

    namespace Name
    {
        static const juce::String VoiceGain { "Gain" };
        static const juce::String SinesGain { "Sine Gain" };
        static const juce::String TransGain { "Transient Gain" };
        static const juce::String NoiseGain { "Noise Gain" };
        static const juce::String VariationGain { "Variation Gain" };
        static const juce::String Attack { "Attack" };
        static const juce::String Decay { "Decay" };
        static const juce::String Pan { "Pan" };

    }
    namespace Unit
    {
        static const juce::String dB { "dB" };
        static const juce::String Seconds { "s" };
    }

    namespace Ranges
    {
        static constexpr float GainMin { -60.f };
        static constexpr float GainMax { 0.f };
        static constexpr float GainInc { .1f };
        static constexpr float GainSkew { 3.f };

        static constexpr float AttackMin { .001f };
        static constexpr float AttackMax { .1f };
        static constexpr float AttackInc { 0.001f };
        static constexpr float AttackSkew { 1.f };

        static constexpr float DecayMin { .01f };
        static constexpr float DecayMax { 2.f };
        static constexpr float DecayInc { 0.01f };
        static constexpr float DecaySkew { 1.f };

        static constexpr float PanMin { -1.f };
        static constexpr float PanMax { 1.f };
        static constexpr float PanInc { 0.01f };
        static constexpr float PanSkew { 1.f };
    }

    namespace Values
    {
        static constexpr int NumVoices {16};
    }

    const std::vector<mrta::ParameterInfo>& getParameterVector();

    // Indexing for layers
    enum class LayerType
    {
        Sines,
        Transient,
        Noise,
        NumLayers
    };
}