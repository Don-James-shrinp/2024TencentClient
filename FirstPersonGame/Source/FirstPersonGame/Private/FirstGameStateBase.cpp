// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstGameStateBase.h"

int32 AFirstGameStateBase::GetTotalScore()
{
	return m_TotalScore;
}

void AFirstGameStateBase::SetTotalScore(int32 NewValue)
{
	m_TotalScore = NewValue;
}

float AFirstGameStateBase::GetTimePassed()
{
	return m_TimePassed;
}

void AFirstGameStateBase::SetTimePassed(float NewValue)
{
	m_TimePassed = NewValue;
}

