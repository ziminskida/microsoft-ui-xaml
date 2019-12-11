// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "AnimatedVisualPlayer.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(AnimatedVisualPlayer)
}

#include "AnimatedVisualPlayer.g.cpp"

GlobalDependencyProperty AnimatedVisualPlayerProperties::s_AutoPlayProperty{ nullptr };
GlobalDependencyProperty AnimatedVisualPlayerProperties::s_DiagnosticsProperty{ nullptr };
GlobalDependencyProperty AnimatedVisualPlayerProperties::s_DurationProperty{ nullptr };
GlobalDependencyProperty AnimatedVisualPlayerProperties::s_FallbackContentProperty{ nullptr };
GlobalDependencyProperty AnimatedVisualPlayerProperties::s_IsAnimatedVisualLoadedProperty{ nullptr };
GlobalDependencyProperty AnimatedVisualPlayerProperties::s_IsPlayingProperty{ nullptr };
GlobalDependencyProperty AnimatedVisualPlayerProperties::s_PlaybackRateProperty{ nullptr };
GlobalDependencyProperty AnimatedVisualPlayerProperties::s_SourceProperty{ nullptr };
GlobalDependencyProperty AnimatedVisualPlayerProperties::s_StretchProperty{ nullptr };

AnimatedVisualPlayerProperties::AnimatedVisualPlayerProperties()
{
    EnsureProperties();
}

void AnimatedVisualPlayerProperties::EnsureProperties()
{
    if (!s_AutoPlayProperty)
    {
        s_AutoPlayProperty =
            InitializeDependencyProperty(
                L"AutoPlay",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::AnimatedVisualPlayer>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnAutoPlayPropertyChanged));
    }
    if (!s_DiagnosticsProperty)
    {
        s_DiagnosticsProperty =
            InitializeDependencyProperty(
                L"Diagnostics",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::AnimatedVisualPlayer>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_DurationProperty)
    {
        s_DurationProperty =
            InitializeDependencyProperty(
                L"Duration",
                winrt::name_of<winrt::TimeSpan>(),
                winrt::name_of<winrt::AnimatedVisualPlayer>(),
                false /* isAttached */,
                ValueHelper<winrt::TimeSpan>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_FallbackContentProperty)
    {
        s_FallbackContentProperty =
            InitializeDependencyProperty(
                L"FallbackContent",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::AnimatedVisualPlayer>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnFallbackContentPropertyChanged));
    }
    if (!s_IsAnimatedVisualLoadedProperty)
    {
        s_IsAnimatedVisualLoadedProperty =
            InitializeDependencyProperty(
                L"IsAnimatedVisualLoaded",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::AnimatedVisualPlayer>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_IsPlayingProperty)
    {
        s_IsPlayingProperty =
            InitializeDependencyProperty(
                L"IsPlaying",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::AnimatedVisualPlayer>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_PlaybackRateProperty)
    {
        s_PlaybackRateProperty =
            InitializeDependencyProperty(
                L"PlaybackRate",
                winrt::name_of<double>(),
                winrt::name_of<winrt::AnimatedVisualPlayer>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(1),
                winrt::PropertyChangedCallback(&OnPlaybackRatePropertyChanged));
    }
    if (!s_SourceProperty)
    {
        s_SourceProperty =
            InitializeDependencyProperty(
                L"Source",
                winrt::name_of<winrt::IAnimatedVisualSource>(),
                winrt::name_of<winrt::AnimatedVisualPlayer>(),
                false /* isAttached */,
                ValueHelper<winrt::IAnimatedVisualSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSourcePropertyChanged));
    }
    if (!s_StretchProperty)
    {
        s_StretchProperty =
            InitializeDependencyProperty(
                L"Stretch",
                winrt::name_of<winrt::Stretch>(),
                winrt::name_of<winrt::AnimatedVisualPlayer>(),
                false /* isAttached */,
                ValueHelper<winrt::Stretch>::BoxValueIfNecessary(winrt::Stretch::Uniform),
                winrt::PropertyChangedCallback(&OnStretchPropertyChanged));
    }
}

void AnimatedVisualPlayerProperties::ClearProperties()
{
    s_AutoPlayProperty = nullptr;
    s_DiagnosticsProperty = nullptr;
    s_DurationProperty = nullptr;
    s_FallbackContentProperty = nullptr;
    s_IsAnimatedVisualLoadedProperty = nullptr;
    s_IsPlayingProperty = nullptr;
    s_PlaybackRateProperty = nullptr;
    s_SourceProperty = nullptr;
    s_StretchProperty = nullptr;
}

void AnimatedVisualPlayerProperties::OnAutoPlayPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedVisualPlayer>();
    winrt::get_self<AnimatedVisualPlayer>(owner)->OnAutoPlayPropertyChanged(args);
}

void AnimatedVisualPlayerProperties::OnFallbackContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedVisualPlayer>();
    winrt::get_self<AnimatedVisualPlayer>(owner)->OnFallbackContentPropertyChanged(args);
}

void AnimatedVisualPlayerProperties::OnPlaybackRatePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedVisualPlayer>();
    winrt::get_self<AnimatedVisualPlayer>(owner)->OnPlaybackRatePropertyChanged(args);
}

void AnimatedVisualPlayerProperties::OnSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedVisualPlayer>();
    winrt::get_self<AnimatedVisualPlayer>(owner)->OnSourcePropertyChanged(args);
}

void AnimatedVisualPlayerProperties::OnStretchPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::AnimatedVisualPlayer>();
    winrt::get_self<AnimatedVisualPlayer>(owner)->OnStretchPropertyChanged(args);
}

void AnimatedVisualPlayerProperties::AutoPlay(bool value)
{
    static_cast<AnimatedVisualPlayer*>(this)->SetValue(s_AutoPlayProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool AnimatedVisualPlayerProperties::AutoPlay()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<AnimatedVisualPlayer*>(this)->GetValue(s_AutoPlayProperty));
}

void AnimatedVisualPlayerProperties::Diagnostics(winrt::IInspectable const& value)
{
    static_cast<AnimatedVisualPlayer*>(this)->SetValue(s_DiagnosticsProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable AnimatedVisualPlayerProperties::Diagnostics()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<AnimatedVisualPlayer*>(this)->GetValue(s_DiagnosticsProperty));
}

void AnimatedVisualPlayerProperties::Duration(winrt::TimeSpan const& value)
{
    static_cast<AnimatedVisualPlayer*>(this)->SetValue(s_DurationProperty, ValueHelper<winrt::TimeSpan>::BoxValueIfNecessary(value));
}

winrt::TimeSpan AnimatedVisualPlayerProperties::Duration()
{
    return ValueHelper<winrt::TimeSpan>::CastOrUnbox(static_cast<AnimatedVisualPlayer*>(this)->GetValue(s_DurationProperty));
}

void AnimatedVisualPlayerProperties::FallbackContent(winrt::DataTemplate const& value)
{
    static_cast<AnimatedVisualPlayer*>(this)->SetValue(s_FallbackContentProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
}

winrt::DataTemplate AnimatedVisualPlayerProperties::FallbackContent()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<AnimatedVisualPlayer*>(this)->GetValue(s_FallbackContentProperty));
}

void AnimatedVisualPlayerProperties::IsAnimatedVisualLoaded(bool value)
{
    static_cast<AnimatedVisualPlayer*>(this)->SetValue(s_IsAnimatedVisualLoadedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool AnimatedVisualPlayerProperties::IsAnimatedVisualLoaded()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<AnimatedVisualPlayer*>(this)->GetValue(s_IsAnimatedVisualLoadedProperty));
}

void AnimatedVisualPlayerProperties::IsPlaying(bool value)
{
    static_cast<AnimatedVisualPlayer*>(this)->SetValue(s_IsPlayingProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool AnimatedVisualPlayerProperties::IsPlaying()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<AnimatedVisualPlayer*>(this)->GetValue(s_IsPlayingProperty));
}

void AnimatedVisualPlayerProperties::PlaybackRate(double value)
{
    static_cast<AnimatedVisualPlayer*>(this)->SetValue(s_PlaybackRateProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double AnimatedVisualPlayerProperties::PlaybackRate()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<AnimatedVisualPlayer*>(this)->GetValue(s_PlaybackRateProperty));
}

void AnimatedVisualPlayerProperties::Source(winrt::IAnimatedVisualSource const& value)
{
    static_cast<AnimatedVisualPlayer*>(this)->SetValue(s_SourceProperty, ValueHelper<winrt::IAnimatedVisualSource>::BoxValueIfNecessary(value));
}

winrt::IAnimatedVisualSource AnimatedVisualPlayerProperties::Source()
{
    return ValueHelper<winrt::IAnimatedVisualSource>::CastOrUnbox(static_cast<AnimatedVisualPlayer*>(this)->GetValue(s_SourceProperty));
}

void AnimatedVisualPlayerProperties::Stretch(winrt::Stretch const& value)
{
    static_cast<AnimatedVisualPlayer*>(this)->SetValue(s_StretchProperty, ValueHelper<winrt::Stretch>::BoxValueIfNecessary(value));
}

winrt::Stretch AnimatedVisualPlayerProperties::Stretch()
{
    return ValueHelper<winrt::Stretch>::CastOrUnbox(static_cast<AnimatedVisualPlayer*>(this)->GetValue(s_StretchProperty));
}
