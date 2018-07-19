// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FP_BattleGroundHUD.generated.h"

UCLASS()
class AFP_BattleGroundHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFP_BattleGroundHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

