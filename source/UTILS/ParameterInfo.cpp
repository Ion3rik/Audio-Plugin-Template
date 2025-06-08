#include "ParameterInfo.h"

namespace Param
{

const std::vector<mrta::ParameterInfo>& getParameterVector()
{
    static const std::vector<mrta::ParameterInfo> paramVector
    {
        { Param::ID::SinesGain, Param::Name::SinesGain, Param::Unit::dB, 0.f, Param::Ranges::GainMin, Param::Ranges::GainMax, Param::Ranges::GainInc, Param::Ranges::GainSkew },
        { Param::ID::TransGain, Param::Name::TransGain, Param::Unit::dB, 0.f, Param::Ranges::GainMin, Param::Ranges::GainMax, Param::Ranges::GainInc, Param::Ranges::GainSkew },
        { Param::ID::NoiseGain, Param::Name::NoiseGain, Param::Unit::dB, 0.f, Param::Ranges::GainMin, Param::Ranges::GainMax, Param::Ranges::GainInc, Param::Ranges::GainSkew },
        { Param::ID::VariationGain, Param::Name::VariationGain, Param::Unit::dB, -60.f, Param::Ranges::GainMin, Param::Ranges::GainMax, Param::Ranges::GainInc, Param::Ranges::GainSkew },
        { Param::ID::Pan, Param::Name::Pan, "", 0.f, Param::Ranges::PanMin, Param::Ranges::PanMax, Param::Ranges::PanInc, Param::Ranges::PanSkew },
        { Param::ID::Attack, Param::Name::Attack, Param::Unit::Seconds, .001f, Param::Ranges::AttackMin, Param::Ranges::AttackMax, Param::Ranges::AttackInc, Param::Ranges::AttackSkew },
        { Param::ID::Decay, Param::Name::Decay, Param::Unit::Seconds, 2.0f, Param::Ranges::DecayMin, Param::Ranges::DecayMax, Param::Ranges::DecayInc, Param::Ranges::DecaySkew },
        { Param::ID::VoiceGain, Param::Name::VoiceGain, Param::Unit::dB, 0.f, Param::Ranges::GainMin, Param::Ranges::GainMax, Param::Ranges::GainInc, Param::Ranges::GainSkew }

    };

    return paramVector;
}

}// namespace Param