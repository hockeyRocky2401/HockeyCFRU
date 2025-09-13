#pragma once

#include "../global.h"
#include "../pokemon.h"

/**
 * \file anility_util.h
 * \brief Contains utility functions pertaining to Abilities.
 */

//Exported Functions
const u8* GetAbilityNameOverride(const u8 ability, const u16 species);
const u8* GetAbilityName(const u8 ability, const u16 species);
void CopyAbilityName(u8* dst, const u8 ability, const u16 species);
u16 GetProperAbilityPopUpSpecies(u8 bank);
void SetProperAbilityPopUpSpecies(u8 bank);
void SetTookAbilityFrom(u8 taker, u8 takenFrom);
void SwapTookAbilityFrom(u8 bank1, u8 bank2);
void ResetTookAbilityFrom(u8 bank);
bool8 IsTargetAbilityIgnored(u8 defAbility, u8 atkAbility, u16 move);
bool8 IsTargetAbilityIgnoredNoMove(u8 defAbility, u8 atkAbility);

bool8 SpeciesHasTurboblaze(u16 species);
bool8 SpeciesHasTeravolt(u16 species);
bool8 SpeciesHasDrillBeak(u16 species);
bool8 SpeciesHasGrassDash(u16 species);
bool8 SpeciesHasEvaporate(u16 species);
bool8 SpeciesHasSlipperyTail(u16 species);
bool8 IsClearBodyAbility(u8 ability);
bool8 IsMoldBreakerAbility(u8 ability);
bool8 IsMoxieAbility(u8 ability);
bool8 IsChoiceAbility(u8 ability);
bool8 IsHPAbsorptionAbility(u8 ability);
bool8 IsElectricAbsorptionAblity(u8 ability);
bool8 IsPlusMinusAbility(u8 ability);
bool8 IsMultiscaleAbility(u8 ability);
bool8 IsPriorityBlockingAbility(u8 ability);
bool8 IsUnnerveAbility(u8 ability);
bool8 UnnerveOnOpposingField(u8 bank);
bool8 AbilityIncreasesWildItemChance(u8 ability);
bool8 AbilityBlocksIntimidate(u8 ability);
bool8 AbilityPreventsLoweringAtk(u8 ability);
bool8 AbilityPreventsLoweringStat(u8 ability, u8 statId);
bool8 AbilityRaisesOneStatWhenSomeStatIsLowered(u8 ability);
bool8 IsAffectedBySturdy(u8 defAbility, u8 bankDef);
bool8 IsAffectedByDisguse(u8 defAbility, u16 defSpecies, u8 moveSplit);
bool8 IsAffectedByBadDreams(u8 bank);
bool8 IsTrappedByAbility(u8 bankDef, u8 trapAbility);
bool8 BankHasEvaporate(u8 bank);
bool8 BankOnFieldHasEvaporate(void);
bool8 IsWhiteSmokeAbility(u8 ability, u16 species);
bool8 IsVitalSpiritAbility(u8 ability, u16 species);
bool8 SpeciesHasAngerShell(u16 species);
bool8 SpeciesHasArmorTail(u16 species);
bool8 SpeciesHasBeadsofRuin(u16 species);
bool8 SpeciesHasSwordofRuin(u16 species);
bool8 SpeciesHasTabletsofRuin(u16 species);
bool8 SpeciesHasVesselofRuin(u16 species);
bool8 SpeciesHasCostar(u16 species);
bool8 SpeciesHasCudChew(u16 species);
bool8 SpeciesHasEarthEater(u16 species);
bool8 SpeciesHasElectromorphosis(u16 species);
bool8 SpeciesHasGoodAsGold(u16 species);
bool8 SpeciesHasGuardDog(u16 species);
bool8 GuardDogPreventsLoweringStat(u8 ability, u8 statId, u8 bank);
bool8 SpeciesHasHadronEngine(u16 species);
bool8 SpeciesHasHydroDisplacer(u16 species);
bool8 SpeciesHasMindsEye(u16 species);
bool8 MindsEyePreventsLoweringStat(u8 ability, u8 statId);
bool8 SpeciesHasMyceliumMight(u16 species);
bool8 SpeciesHasOportunist(u16 species);
bool8 SpeciesHasOrichalcumPulse(u16 species);
bool8 IsFullMetalBodyAbility(u8 ability, u16 species);
bool8 SpeciesHasProtosynthesis(u16 species);
bool8 SpeciesHasPurifyingSalt(u16 species);
bool8 CheckStatusAny(u8 bank);
bool8 SpeciesHasRockyPayload(u16 species);
bool8 SpeciesHasSeedSower(u16 species);
bool8 SpeciesHasSharpness(u16 species);
bool8 SpeciesHasSupremeOverlord(u16 species);
bool8 IsFaintedPokemonInParty(void);
bool8 SpeciesHasSuperSweetSyrup(u16 species);
bool8 SpeciesHasTeraShift(u16 species);
bool8 SpeciesHasTeraShell(u16 species);
bool8 SpeciesHasThermalExchange(u16 species);
bool8 SpeciesHasToxicChain(u16 species);
bool8 SpeciesHasPoisonPuppeteer(u16 species);
bool8 SpeciesHasToxicDebris(u16 species);
bool8 SpeciesHasWellBakedBody(u16 species);
bool8 SpeciesHasWindPower(u16 species);
bool8 AngerShellStatsCheck(u8 bank);
bool8 SpeciesHasWindRider(u16 species);
bool8 SpeciesHasZerotoHero(u16 species);
