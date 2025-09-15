#include "defines.h"
#include "defines_battle.h"
#include "../include/string_util.h"
#include "../include/constants/abilities.h"
#include "../include/constants/pokedex.h"
#include "../include/constants/species.h"

#include "../include/new/ability_tables.h"
#include "../include/new/ability_util.h"
#include "../include/new/battle_util.h"
#include "../include/new/move_tables.h"
#include "../include/new/util.h"

extern const u8 gAbilityNames[][ABILITY_NAME_LENGTH + 1];
extern const u8* gAbilityDescriptions[];
extern const u8 gText_AbilityName_AirLock[];
extern const u8 gText_AbilityName_VitalSpirit[];
extern const u8 gText_AbilityName_WhiteSmoke[];
extern const u8 gText_AbilityName_PurePower[];
extern const u8 gText_AbilityName_IronBarbs[];
extern const u8 gText_AbilityName_SolidRock[];
extern const u8 gText_AbilityName_Turboblaze[];
extern const u8 gText_AbilityName_Teravolt[];
extern const u8 gText_AbilityName_ChillingNeigh[];
extern const u8 gText_AbilityName_Libero[];
extern const u8 gText_AbilityName_TanglingHair[];
extern const u8 gText_AbilityName_WimpOut[];
extern const u8 gText_AbilityName_QueenlyMajesty[];
extern const u8 gText_AbilityName_PowerOfAlchemy[];
extern const u8 gText_AbilityName_PropellerTail[];

//Unbound Custom Abilities
extern const u8 gText_AbilityName_NineLives[];
extern const u8 gText_AbilityName_FocusBelt[];
extern const u8 gText_AbilityName_Evaporate[];
extern const u8 gText_AbilityName_FieryNeigh[];
extern const u8 gText_AbilityName_ShockingNeigh[];
extern const u8 gText_AbilityName_Pride[];
extern const u8 gText_AbilityName_Multieye[];
extern const u8 gText_AbilityName_Subterfuge[];
extern const u8 gText_AbilityName_TanglingWool[];
extern const u8 gText_AbilityName_BrainBond[];
extern const u8 gText_AbilityName_GrassDash[];
extern const u8 gText_AbilityName_SlipperyTail[];
extern const u8 gText_AbilityName_DrillBeak[];
extern const u8 gText_AbilityName_CottonCloud[];
extern const u8 gText_AbilityName_Bellow[];
extern const u8 gText_AbilityName_SoundWaves[];
extern const u8 gText_AbilityName_IcySkin[];
extern const u8 gText_AbilityName_DustyScales[];
extern const u8 gText_AbilityName_CrabbyTactics[];
extern const u8 gText_AbilityName_HoneyArmor[];
extern const u8 gText_AbilityName_FaceShield[];
extern const u8 gText_AbilityName_RoyalRoar[];

extern const u8 gText_AbilityDescription_Evaporate[];
extern const u8 gText_AbilityDescription_GrassDash[];
extern const u8 gText_AbilityDescription_SlipperyTail[];
extern const u8 gText_AbilityDescription_DrillBeak[];

//Gen 9 Abilities
extern const u8 gText_AbilityName_AngerShell[];
extern const u8 gText_AbilityDescription_AngerShell[];
extern const u8 gText_AbilityName_ArmorTail[];
extern const u8 gText_AbilityDescription_BeadsofRuin[];
extern const u8 gText_AbilityDescription_SwordofRuin[];
extern const u8 gText_AbilityDescription_TabletsofRuin[];
extern const u8 gText_AbilityDescription_VesselofRuin[];
extern const u8 gText_AbilityName_BeadsofRuin[];
extern const u8 gText_AbilityName_SwordofRuin[];
extern const u8 gText_AbilityName_TabletsofRuin[];
extern const u8 gText_AbilityName_VesselofRuin[];
extern const u8 gText_AbilityName_Costar[];
extern const u8 gText_AbilityDescription_Costar[];
extern const u8 gText_AbilityName_CudChew[];
extern const u8 gText_AbilityDescription_CudChew[];
extern const u8 gText_AbilityName_EarthEater[];
extern const u8 gText_AbilityDescription_EarthEater[];
extern const u8 gText_AbilityName_Electromorphosis[];
extern const u8 gText_AbilityDescription_Electromorphosis[];
extern const u8 gText_AbilityName_GoodAsGold[];
extern const u8 gText_AbilityDescription_GoodAsGold[];
extern const u8 gText_AbilityName_GuardDog[];
extern const u8 gText_AbilityDescription_GuardDog[];
extern const u8 gText_AbilityName_HadronEngine[];
extern const u8 gText_AbilityDescription_HadronEngine[];
extern const u8 gText_AbilityName_HydroDisplacer[];
extern const u8 gText_AbilityDescription_HydroDisplacer[];
extern const u8 gText_AbilityName_MindsEye[];
extern const u8 gText_AbilityDescription_MindsEye[];
extern const u8 gText_AbilityName_MyceliumMight[];
extern const u8 gText_AbilityDescription_MyceliumMight[];
extern const u8 gText_AbilityName_Opportunist[];
extern const u8 gText_AbilityDescription_Opportunist[];
extern const u8 NAME_FULL_METAL_BODY[];
extern const u8 gText_AbilityName_OrichalcumPulse[];
extern const u8 gText_AbilityDescription_OrichalcumPulse[];
extern const u8 gText_AbilityName_Protosynthesis[];
extern const u8 gText_AbilityDescription_Protosynthesis[];
extern const u8 gText_AbilityName_PureSalt[];
extern const u8 gText_AbilityDescription_PurifyingSalt[];
extern const u8 gText_AbilityName_RockyPayload[];
extern const u8 gText_AbilityDescription_RockyPayload[];
extern const u8 gText_AbilityName_SeedSower[];
extern const u8 gText_AbilityDescription_SeedSower[];
extern const u8 gText_AbilityName_Sharpness[];
extern const u8 gText_AbilityDescription_Sharpness[];
extern const u8 gText_AbilityName_SupremeOverlord[];
extern const u8 gText_AbilityDescription_SupremeOverlord[];
extern const u8 gText_AbilityName_SuperSweetSyrup[];
extern const u8 gText_AbilityDescription_SuperSweetSyrup[];
extern const u8 gText_AbilityName_TeraShift[];
extern const u8 gText_AbilityDescription_TeraShift[];
extern const u8 gText_AbilityName_TeraShell[];
extern const u8 gText_AbilityDescription_TeraShell[];
extern const u8 gText_AbilityName_ThermalExchange[];
extern const u8 gText_AbilityDescription_ThermalExchange[];
extern const u8 gText_AbilityName_ToxicChain[];
extern const u8 gText_AbilityDescription_ToxicChain[];
extern const u8 gText_AbilityDescription_PoisonPuppeteer[];
extern const u8 gText_AbilityName_PoisonPuppeteer[];
extern const u8 gText_AbilityName_ToxicDebris[];
extern const u8 gText_AbilityDescription_ToxicDebris[];
extern const u8 gText_AbilityName_WellBakedBody[];
extern const u8 gText_AbilityDescription_WellBakedBody[];
extern const u8 gText_AbilityName_WindPower[];
extern const u8 gText_AbilityDescription_WindPower[];
extern const u8 gText_AbilityName_WindRider[];
extern const u8 gText_AbilityDescription_WindRider[];
extern const u8 gText_AbilityName_ZerotoHero[];
extern const u8 gText_AbilityDescription_ZerotoHero[];
extern const u8 gText_AbilityName_BrutalRepetition[];
extern const u8 gText_AbilityDescription_BrutalRepetition[];

const u8* GetAbilityNameOverride(const u8 ability, const u16 species) //Bypasses the 255 Ability limitation and implements clone Abilities
{
	u16 dexNum = SpeciesToNationalPokedexNum(species);

	switch (ability)
	{
		case ABILITY_CLOUDNINE:
			switch (dexNum)
			{
				#ifdef NATIONAL_DEX_RAYQUAZA
				case NATIONAL_DEX_RAYQUAZA:
					return gText_AbilityName_AirLock;
				#endif
			}
			break;
		case ABILITY_INSOMNIA:
			if (IsVitalSpiritAbility(ability, species))
				return gText_AbilityName_VitalSpirit;
			break;
		case ABILITY_CLEARBODY:
			if (IsWhiteSmokeAbility(ability, species))
				return gText_AbilityName_WhiteSmoke;
			else if (SpeciesHasGoodAsGold(species))
				return gText_AbilityName_GoodAsGold;
			else if (IsFullMetalBodyAbility(ability, species))
				return NAME_FULL_METAL_BODY;
			break;
		case ABILITY_HUGEPOWER:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_MEDITITE && defined NATIONAL_DEX_MEDICHAM)
				case NATIONAL_DEX_MEDITITE:
				case NATIONAL_DEX_MEDICHAM:
					return gText_AbilityName_PurePower;
				#endif
			}
			if (SpeciesHasSupremeOverlord(species))
				return gText_AbilityName_SupremeOverlord;
			break;
		case ABILITY_ROUGHSKIN:
			if (IsSpeciesOfType(species, TYPE_STEEL)) //Species original type is Steel - Assumes Ferroseed, Ferrothorn, and Togedemaru types haven't changed
				return gText_AbilityName_IronBarbs; //Gives all Steel-types with Rough Skin in randomizers Iron Barbs instead
			break;
		case ABILITY_STURDY:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_MEOWTH && defined NATIONAL_DEX_PERSIAN)
				case NATIONAL_DEX_MEOWTH:
				case NATIONAL_DEX_PERSIAN:
					return gText_AbilityName_NineLives;
				#endif
				#if (defined NATIONAL_DEX_MACHOKE && defined NATIONAL_DEX_MACHAMP)
				case NATIONAL_DEX_MACHOKE:
				case NATIONAL_DEX_MACHAMP:
					return gText_AbilityName_FocusBelt;
				#endif
			}
			break;
		case ABILITY_FILTER:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_CAMERUPT && defined NATIONAL_DEX_RHYPERIOR && defined NATIONAL_DEX_TIRTOUGA && defined NATIONAL_DEX_CARRACOSTA)
				case NATIONAL_DEX_CAMERUPT:
				case NATIONAL_DEX_RHYPERIOR:
				case NATIONAL_DEX_TIRTOUGA:
				case NATIONAL_DEX_CARRACOSTA:
				#ifdef NATIONAL_DEX_STONJOURNER
				case NATIONAL_DEX_STONJOURNER:
				#endif
					return gText_AbilityName_SolidRock;
				#endif
			}
			break;
		case ABILITY_MOLDBREAKER:
			if (SpeciesHasTurboblaze(species))
				return gText_AbilityName_Turboblaze;
			else if (SpeciesHasTeravolt(species))
				return gText_AbilityName_Teravolt;
			else if(SpeciesHasMyceliumMight(species))
				return gText_AbilityName_MyceliumMight;
			break;
		case ABILITY_STORMDRAIN:
			if (SpeciesHasEvaporate(species))
				return gText_AbilityName_Evaporate;
			break;
		case ABILITY_MOXIE:
			switch (dexNum)
			{
				#ifdef NATIONAL_DEX_GLASTRIER
				case NATIONAL_DEX_GLASTRIER:
					return gText_AbilityName_ChillingNeigh;
				#endif
				#if (defined NATIONAL_DEX_PONYTA && defined NATIONAL_DEX_RAPIDASH)
				case NATIONAL_DEX_PONYTA:
				case NATIONAL_DEX_RAPIDASH:
					return gText_AbilityName_FieryNeigh;
				#endif
				#if (defined NATIONAL_DEX_BLITZLE && defined NATIONAL_DEX_ZEBSTRIKA)
				case NATIONAL_DEX_BLITZLE:
				case NATIONAL_DEX_ZEBSTRIKA:
					return gText_AbilityName_ShockingNeigh;
				#endif
				#if (defined NATIONAL_DEX_PIDOVE && defined NATIONAL_DEX_TRANQUILL && defined NATIONAL_DEX_UNFEZANT)
				case NATIONAL_DEX_PIDOVE:
				case NATIONAL_DEX_TRANQUILL:
				case NATIONAL_DEX_UNFEZANT:
					return gText_AbilityName_Pride;
				#endif
			}
			break;
		case ABILITY_MULTISCALE:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_BALTOY && defined NATIONAL_DEX_CLAYDOL)
				case NATIONAL_DEX_BALTOY:
				case NATIONAL_DEX_CLAYDOL:
					return gText_AbilityName_Multieye;
				#endif
			}
			break;
		case ABILITY_PROTEAN:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_SCORBUNNY && defined NATIONAL_DEX_RABOOT && defined NATIONAL_DEX_CINDERACE)
				case NATIONAL_DEX_SCORBUNNY:
				case NATIONAL_DEX_RABOOT:
				case NATIONAL_DEX_CINDERACE:
					return gText_AbilityName_Libero;
				#endif
				#ifdef NATIONAL_DEX_MOTHIM
				case NATIONAL_DEX_MOTHIM:
					return gText_AbilityName_Subterfuge;
				#endif
			}
			break;
		case ABILITY_GOOEY:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_DIGLETT && defined NATIONAL_DEX_DUGTRIO)
				case NATIONAL_DEX_DIGLETT:
				case NATIONAL_DEX_DUGTRIO:
					return gText_AbilityName_TanglingHair;
				#endif
				#if (defined NATIONAL_DEX_MAREEP && defined NATIONAL_DEX_FLAAFFY && defined NATIONAL_DEX_AMPHAROS)
				case NATIONAL_DEX_MAREEP:
				case NATIONAL_DEX_FLAAFFY:
				case NATIONAL_DEX_AMPHAROS:
					return gText_AbilityName_TanglingWool;
				#endif
			}
			break;
		case ABILITY_PARENTALBOND:
			switch (dexNum)
			{
				default:
					break;
				#ifdef NATIONAL_DEX_GIRAFARIG
				case NATIONAL_DEX_GIRAFARIG:
				#endif
					return gText_AbilityName_BrainBond;
			}
			break;
		case ABILITY_GALEWINGS:
			if (SpeciesHasGrassDash(species))
				return gText_AbilityName_GrassDash;
			else if (SpeciesHasSlipperyTail(species))
				return gText_AbilityName_SlipperyTail;
			break;
		case ABILITY_EMERGENCYEXIT:
			switch (dexNum)
			{
				#ifdef NATIONAL_DEX_WIMPOD
				case NATIONAL_DEX_WIMPOD:
					return gText_AbilityName_WimpOut;
				#endif
			}
			break;
		case ABILITY_DAZZLING:
			switch (dexNum)
			{
				default:
					break;
				#ifdef NATIONAL_DEX_TSAREENA
				case NATIONAL_DEX_TSAREENA:
				#endif
				#ifdef NATIONAL_DEX_NIDOQUEEN
				case NATIONAL_DEX_NIDOQUEEN:
				#endif
				#ifdef NATIONAL_DEX_VESPIQUEN
				case NATIONAL_DEX_VESPIQUEN:
				#endif
					return gText_AbilityName_QueenlyMajesty;
				if (SpeciesHasArmorTail(species))
				return gText_AbilityName_ArmorTail;
			}
			break;
		case ABILITY_RECEIVER:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_GRIMER && defined NATIONAL_DEX_MUK)
				case NATIONAL_DEX_GRIMER:
				case NATIONAL_DEX_MUK:
					return gText_AbilityName_PowerOfAlchemy;
				#endif
			}
			break;
		case ABILITY_MERCILESS:
			if (SpeciesHasDrillBeak(species))
				return gText_AbilityName_DrillBeak;
			break;
		case ABILITY_STALWART:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_ARROKUDA && defined NATIONAL_DEX_BARRASKEWDA)
				case NATIONAL_DEX_ARROKUDA:
				case NATIONAL_DEX_BARRASKEWDA:
					return gText_AbilityName_PropellerTail;
				#endif
			}
			break;
		case ABILITY_COTTONDOWN:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_SWABLU && defined NATIONAL_DEX_ALTARIA)
				case NATIONAL_DEX_SWABLU:
				case NATIONAL_DEX_ALTARIA:
					return gText_AbilityName_CottonCloud;
				#endif
			}
			break;
		case ABILITY_PUNKROCK:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_WHISMUR && defined NATIONAL_DEX_LOUDRED && defined NATIONAL_DEX_EXPLOUD)
				case NATIONAL_DEX_WHISMUR:
				case NATIONAL_DEX_LOUDRED:
				case NATIONAL_DEX_EXPLOUD:
					return gText_AbilityName_Bellow;
				#endif
				#if (defined NATIONAL_DEX_VIBRAVA && defined NATIONAL_DEX_FLYGON)
				case NATIONAL_DEX_VIBRAVA:
				case NATIONAL_DEX_FLYGON:
					return gText_AbilityName_SoundWaves;
				#endif
				#if (defined NATIONAL_DEX_NOIBAT && defined NATIONAL_DEX_NOIVERN)
				case NATIONAL_DEX_NOIBAT:
				case NATIONAL_DEX_NOIVERN:
					return gText_AbilityName_SoundWaves;
				#endif
			}
			break;
		case ABILITY_ICESCALES:
			switch (dexNum)
			{
				default:
					break;
				#ifdef NATIONAL_DEX_GLACEON
				case NATIONAL_DEX_GLACEON:
				#endif
				#if (defined NATIONAL_DEX_SMOOCHUM && defined NATIONAL_DEX_JYNX)
				case NATIONAL_DEX_SMOOCHUM:
				case NATIONAL_DEX_JYNX:
					return gText_AbilityName_IcySkin;
				#endif
				#ifdef NATIONAL_DEX_DUSTOX
				case NATIONAL_DEX_DUSTOX:
					return gText_AbilityName_DustyScales;
				#endif
			}
			break;
		case ABILITY_GORILLATACTICS:
			switch (dexNum)
			{
				case NATIONAL_DEX_KRABBY:
				case NATIONAL_DEX_KINGLER:
			        return gText_AbilityName_BrutalRepetition;
				#ifdef NATIONAL_DEX_CRABOMINABLE
				case NATIONAL_DEX_CRABOMINABLE:
					return gText_AbilityName_CrabbyTactics;
				#endif
			}
			break;
		case ABILITY_DAUNTLESSSHIELD:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_SHIELDON && defined NATIONAL_DEX_BASTIODON)
				case NATIONAL_DEX_SHIELDON:
				case NATIONAL_DEX_BASTIODON:
					return gText_AbilityName_FaceShield;
				#endif
				#ifdef NATIONAL_DEX_VESPIQUEN
				case NATIONAL_DEX_VESPIQUEN:
					return gText_AbilityName_HoneyArmor;
				#endif
			}
			break;
		case ABILITY_GRIMNEIGH:
			switch (dexNum)
			{
				#if (defined NATIONAL_DEX_LITLEO && defined NATIONAL_DEX_PYROAR)
				case NATIONAL_DEX_LITLEO:
				case NATIONAL_DEX_PYROAR:
					return gText_AbilityName_RoyalRoar;
				#endif
			}
			break;
		case ABILITY_WEAKARMOR:
			if(SpeciesHasAngerShell(species))
				return gText_AbilityName_AngerShell;
			break;
		case ABILITY_STALL:
			if(SpeciesHasBeadsofRuin(species))
				return gText_AbilityName_BeadsofRuin;
			if(SpeciesHasSwordofRuin(species))
				return gText_AbilityName_SwordofRuin;
			if(SpeciesHasTabletsofRuin(species))
				return gText_AbilityName_TabletsofRuin;
			if(SpeciesHasVesselofRuin(species))
				return gText_AbilityName_VesselofRuin;
			break;
		case ABILITY_CURIOUSMEDICINE:
			if (SpeciesHasCostar(species))
				return gText_AbilityName_Costar;
			break;
		case ABILITY_HARVEST:
			if(SpeciesHasCudChew(species))
				return gText_AbilityName_CudChew;
			break;
		case ABILITY_VOLTABSORB:
			if(SpeciesHasEarthEater(species))
				return gText_AbilityName_EarthEater;
			break;
		case ABILITY_COLORCHANGE:
			if(SpeciesHasElectromorphosis(species))
				return gText_AbilityName_Electromorphosis;
			break;
		case ABILITY_INNERFOCUS:
			if(SpeciesHasGuardDog(species))
				return gText_AbilityName_GuardDog;
			break;
		case ABILITY_ELECTRICSURGE:
			if(SpeciesHasHadronEngine(species))
				return gText_AbilityName_HadronEngine;
			break;
		case ABILITY_SCRAPPY:
			if(SpeciesHasMindsEye(species))
				return gText_AbilityName_MindsEye;
			break;
		case ABILITY_DANCER:
			if(SpeciesHasOportunist(species))
				return gText_AbilityName_Opportunist;
			break;
		case ABILITY_DROUGHT:
			if(SpeciesHasOrichalcumPulse(species))
				return gText_AbilityName_OrichalcumPulse;
			break;
		case ABILITY_QUARKDRIVE:
			if (SpeciesHasProtosynthesis(species))
				return gText_AbilityName_Protosynthesis;
			break;
		case ABILITY_IMMUNITY:
			if (SpeciesHasPurifyingSalt(species))
				return gText_AbilityName_PureSalt;
			break;
		case ABILITY_STEELWORKER:
			if (SpeciesHasRockyPayload(species))
				return gText_AbilityName_RockyPayload;
			break;
		case ABILITY_GRASSYSURGE:
			if (SpeciesHasSeedSower(species))
				return gText_AbilityName_SeedSower;
			break;
		case ABILITY_STRONGJAW:
			if (SpeciesHasSharpness(species))
				return gText_AbilityName_Sharpness;
			break;
		case ABILITY_INTIMIDATE:
			if (SpeciesHasSuperSweetSyrup(species))
				return gText_AbilityName_SuperSweetSyrup;
			break;
		case ABILITY_ICEFACE:
				if (SpeciesHasTeraShift(species))
					return gText_AbilityName_TeraShift;
			break;
		case ABILITY_BLAZE:
			if (SpeciesHasTeraShell(species))
				return gText_AbilityName_TeraShell;
			break;
		case ABILITY_STEAMENGINE:
			if(SpeciesHasThermalExchange(species))
				return gText_AbilityName_ThermalExchange;
			else if(SpeciesHasWellBakedBody(species))
				return gText_AbilityName_WellBakedBody;
			break;
		case ABILITY_POISONTOUCH:
			if(SpeciesHasToxicChain(species))
				return gText_AbilityName_ToxicChain;
			break;
		case ABILITY_PLUS:
			if (SpeciesHasPoisonPuppeteer(species))
				return gText_AbilityName_PoisonPuppeteer;
			break;
		case ABILITY_POISONPOINT:
			if(SpeciesHasToxicDebris(species))
				return gText_AbilityName_ToxicDebris;
			break;
		case ABILITY_BERSERK:
			if(SpeciesHasWindPower(species))
				return gText_AbilityName_WindPower;
			break;
		case ABILITY_ANGERPOINT:
			if(SpeciesHasWindRider(species))
				return gText_AbilityName_WindRider;
			break;
		case ABILITY_TORRENT:
			if (SpeciesHasZerotoHero(species))
				return gText_AbilityName_ZerotoHero;
			break;
		case ABILITY_NOGUARD:
            if (SpeciesHasHydroDisplacer(species))
               return gText_AbilityName_HydroDisplacer;
		    break;
	}

	return NULL;
}

const u8* GetAbilityName(const u8 ability, const u16 species)
{
	const u8* override = GetAbilityNameOverride(ability, species);
	if (override != NULL)
		return override;

	const u8* ptr = gAbilityNames[ability];

	if (ptr[3] == 0x8 || ptr[3] == 0x9) //Expanded Ability Names
		ptr = T1_READ_PTR(ptr);

	return ptr;
}

const u8* GetAbilityDescriptionOverride(const u8 ability, const u16 species) //Bypasses the 255 Ability limitation and implements new Abilities
{
	switch (ability)
	{
		case ABILITY_STORMDRAIN:
			if (SpeciesHasEvaporate(species))
				return gText_AbilityDescription_Evaporate;
			break;
		case ABILITY_GALEWINGS:
			if (SpeciesHasGrassDash(species))
				return gText_AbilityDescription_GrassDash;
			else if (SpeciesHasSlipperyTail(species))
				return gText_AbilityDescription_SlipperyTail;
			break;
		case ABILITY_MERCILESS:
			if (SpeciesHasDrillBeak(species))
				return gText_AbilityDescription_DrillBeak;
			break;
		case ABILITY_WEAKARMOR:
			if(SpeciesHasAngerShell(species))
				return gText_AbilityDescription_AngerShell;
			break;
		case ABILITY_STALL:
			if(SpeciesHasBeadsofRuin(species))
				return gText_AbilityDescription_BeadsofRuin;
			if(SpeciesHasSwordofRuin(species))
				return gText_AbilityDescription_SwordofRuin;
			if(SpeciesHasTabletsofRuin(species))
				return gText_AbilityDescription_TabletsofRuin;
			if(SpeciesHasVesselofRuin(species))
				return gText_AbilityDescription_VesselofRuin;
			break;
		case ABILITY_CURIOUSMEDICINE:
			if (SpeciesHasCostar(species))
				return gText_AbilityDescription_Costar;
			break;
		case ABILITY_HARVEST:
			if(SpeciesHasCudChew(species))
				return gText_AbilityDescription_CudChew;
			break;
		case ABILITY_VOLTABSORB:
			if(SpeciesHasEarthEater(species))
				return gText_AbilityDescription_EarthEater;
			break;
		case ABILITY_COLORCHANGE:
			if(SpeciesHasElectromorphosis(species))
				return gText_AbilityDescription_Electromorphosis;
			break;
		case ABILITY_CLEARBODY:
			if(SpeciesHasGoodAsGold(species))
				return gText_AbilityDescription_GoodAsGold;
			
			break;
		case ABILITY_INNERFOCUS:
			if(SpeciesHasGuardDog(species))
				return gText_AbilityDescription_GuardDog;
			break;
		case ABILITY_ELECTRICSURGE:
			if(SpeciesHasHadronEngine(species))
				return gText_AbilityDescription_HadronEngine;
			break;
		case ABILITY_SCRAPPY:
			if(SpeciesHasMindsEye(species))
				return gText_AbilityDescription_MindsEye;
			break;
		case ABILITY_MOLDBREAKER:
			if(SpeciesHasMyceliumMight(species))
				return gText_AbilityDescription_MyceliumMight;
			break;
		case ABILITY_DANCER:
			if(SpeciesHasOportunist(species))
				return gText_AbilityDescription_Opportunist;
			break;
		case ABILITY_DROUGHT:
			if(SpeciesHasOrichalcumPulse(species))
				return gText_AbilityDescription_OrichalcumPulse;
			break;
		case ABILITY_QUARKDRIVE:
			if (SpeciesHasProtosynthesis(species))
				return gText_AbilityDescription_Protosynthesis;
			break;
		case ABILITY_IMMUNITY:
		if (SpeciesHasPurifyingSalt(species))
				return gText_AbilityDescription_PurifyingSalt;
			break;
		case ABILITY_STEELWORKER:
			if (SpeciesHasRockyPayload(species))
				return gText_AbilityDescription_RockyPayload;
			break;
		case ABILITY_GRASSYSURGE:
			if (SpeciesHasSeedSower(species))
				return gText_AbilityDescription_SeedSower;
			break;
		case ABILITY_STRONGJAW:
			if (SpeciesHasSharpness(species))
				return gText_AbilityDescription_Sharpness;
			break;
		case ABILITY_HUGEPOWER:
			if (SpeciesHasSupremeOverlord(species))
				return gText_AbilityDescription_SupremeOverlord;
			break;
		case ABILITY_INTIMIDATE:
			if (SpeciesHasSuperSweetSyrup(species))
				return gText_AbilityDescription_SuperSweetSyrup;
			break;
		case ABILITY_ICEFACE:
			if(SpeciesHasTeraShift(species))
				return gText_AbilityDescription_TeraShift;
			break;
		case ABILITY_BLAZE:
			if (SpeciesHasTeraShell(species))
				return gText_AbilityDescription_TeraShell;
			break;
		case ABILITY_STEAMENGINE:
			if(SpeciesHasThermalExchange(species))
				return gText_AbilityDescription_ThermalExchange;
			else if(SpeciesHasWellBakedBody(species))
				return gText_AbilityDescription_WellBakedBody;
			break;
		case ABILITY_POISONTOUCH:
			if(SpeciesHasToxicChain(species))
				return gText_AbilityDescription_ToxicChain;
			break;
		case ABILITY_PLUS:
			if (SpeciesHasPoisonPuppeteer(species))
				return gText_AbilityDescription_PoisonPuppeteer;
			break;
		case ABILITY_POISONPOINT:
			if(SpeciesHasToxicDebris(species))
				return gText_AbilityDescription_ToxicDebris;
			break;
		case ABILITY_BERSERK:
			if(SpeciesHasWindPower(species))
				return gText_AbilityDescription_WindPower;
			break;
		case ABILITY_ANGERPOINT:
			if(SpeciesHasWindRider(species))
				return gText_AbilityDescription_WindRider;
			break;
		case ABILITY_TORRENT:
			if (SpeciesHasZerotoHero(species))
				return gText_AbilityDescription_ZerotoHero;
			break;
		case ABILITY_NOGUARD:
			if (SpeciesHasHydroDisplacer(species))
				return gText_AbilityDescription_HydroDisplacer;
			break;
	}

	return NULL;
}

const u8* GetAbilityDescription(const u8 ability, unusedArg const u16 species)
{	
	const u8* override = GetAbilityDescriptionOverride(ability, species);
	if (override != NULL)
		return override;

	const u8* desc = gAbilityDescriptions[ability];
	return desc;
}

void CopyAbilityName(u8* dst, const u8 ability, const u16 species)
{
	StringCopy(dst, GetAbilityName(ability, species));
}

void CopyAbilityDescription(u8* dst, const u8 ability, const u16 species)
{
	StringCopy(dst, GetAbilityDescription(ability, species));
}

u16 GetProperAbilityPopUpSpecies(u8 bank)
{
	if (gNewBS->tookAbilityFrom[bank] != SPECIES_NONE)
		return gNewBS->tookAbilityFrom[bank];
	else
		return SPECIES(bank);
}

void SetProperAbilityPopUpSpecies(u8 bank)
{
	gAbilityPopUpSpecies = GetProperAbilityPopUpSpecies(bank);
}

void SetTookAbilityFrom(u8 taker, u8 takenFrom)
{
	if (gNewBS->tookAbilityFrom[takenFrom] != SPECIES_NONE)
		gNewBS->tookAbilityFrom[taker] = gNewBS->tookAbilityFrom[takenFrom]; //Pass along species
	else
		gNewBS->tookAbilityFrom[taker] = SPECIES(takenFrom);
}

void SwapTookAbilityFrom(u8 bank1, u8 bank2)
{
	u16 species1 = GetProperAbilityPopUpSpecies(bank1);
	u16 species2 = GetProperAbilityPopUpSpecies(bank2);

	gNewBS->tookAbilityFrom[bank1] = species2;
	gNewBS->tookAbilityFrom[bank2] = species1;
}

void ResetTookAbilityFrom(u8 bank)
{
	gNewBS->tookAbilityFrom[bank] = SPECIES_NONE;
}

bool8 IsTargetAbilityIgnored(u8 defAbility, u8 atkAbility, u16 move)
{
	if (SpeciesHasMyceliumMight(SPECIES(gBankAttacker)))
		return IS_MOLD_BREAKER(atkAbility, move) && gSpecialAbilityFlags[defAbility].gMyceliumMighIgnoredAbilities;
	else
		return IS_MOLD_BREAKER(atkAbility, move) && gSpecialAbilityFlags[defAbility].gMoldBreakerIgnoredAbilities;
}

bool8 IsTargetAbilityIgnoredNoMove(u8 defAbility, u8 atkAbility)
{
	return IsMoldBreakerAbility(atkAbility) && gSpecialAbilityFlags[defAbility].gMoldBreakerIgnoredAbilities;
}

bool8 SpeciesHasTurboblaze(unusedArg u16 species)
{
	#if (defined SPECIES_RESHIRAM && defined SPECIES_KYUREM_WHITE)
	return species == SPECIES_RESHIRAM
		|| species == SPECIES_KYUREM_WHITE;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasTeravolt(unusedArg u16 species)
{
	#if (defined SPECIES_ZEKROM && defined SPECIES_KYUREM_BLACK)
	return species == SPECIES_ZEKROM
		|| species == SPECIES_KYUREM_BLACK;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasDrillBeak(unusedArg u16 species) //Custom Unbound Ability
{
	#if (defined SPECIES_SPEAROW && defined SPECIES_FEAROW)
	return species == SPECIES_SPEAROW || species == SPECIES_FEAROW;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasGrassDash(unusedArg u16 species) //Custom Unbound Ability
{
	#ifdef SPECIES_SUNFLORA
	return species == SPECIES_SUNFLORA;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasEvaporate(unusedArg u16 species) //Custom Unbound Ability
{
	#ifdef SPECIES_MAGCARGO
	return species == SPECIES_MAGCARGO;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasSlipperyTail(unusedArg u16 species) //Custom Unbound Ability
{
	#ifdef SPECIES_SEVIPER
	return species == SPECIES_SEVIPER;
	#else
	return FALSE;
	#endif
}

bool8 IsClearBodyAbility(u8 ability)
{
	return ability == ABILITY_CLEARBODY
		#ifdef ABILITY_FULLMETALBODY
		|| ability == ABILITY_FULLMETALBODY
		#endif
		#ifdef ABILITY_WHITESMOKE
		|| ability == ABILITY_WHITESMOKE
		#endif
		;
}

bool8 IsMoldBreakerAbility(u8 ability)
{
	return ability == ABILITY_MOLDBREAKER
		#ifdef ABILITY_TURBOBLAZE
		|| ability == ABILITY_TURBOBLAZE
		#endif
		#ifdef ABILITY_TERAVOLT
		|| ability == ABILITY_TERAVOLT
		#endif
		;
}

bool8 IsMoxieAbility(u8 ability)
{
	switch (ability)
	{
		case ABILITY_MOXIE:
		#ifdef ABILITY_GRIMNEIGH
		case ABILITY_GRIMNEIGH:
		#endif
		#ifdef ABILITY_CHILLINGNEIGH
		case ABILITY_CHILLINGNEIGH:
		#endif
		#ifdef ABILITY_ASONE_GRIM
		case ABILITY_ASONE_GRIM:
		#endif
		#ifdef ABILITY_ASONE_CHILLING
		case ABILITY_ASONE_CHILLING:
		#endif
		case ABILITY_BEASTBOOST:
		case ABILITY_SOULHEART:
		case ABILITY_BATTLEBOND:
			return TRUE;
		default:
			return FALSE;
	}
}

bool8 IsChoiceAbility(u8 ability)
{
	return ability == ABILITY_GORILLATACTICS;
}

bool8 IsHPAbsorptionAbility(u8 ability)
{
	switch (ability)
	{
		case ABILITY_WATERABSORB:
		case ABILITY_VOLTABSORB:
			return TRUE;
		default:
			return FALSE;
	}
}

bool8 IsElectricAbsorptionAblity(u8 ability)
{
	switch (ability)
	{
		case ABILITY_VOLTABSORB:
		case ABILITY_MOTORDRIVE:
		case ABILITY_LIGHTNINGROD:
			return TRUE;
		default:
			return FALSE;
	}
}

bool8 IsPlusMinusAbility(u8 ability)
{
	if (SpeciesHasPoisonPuppeteer(SPECIES(gActiveBattler)))
		return FALSE;

	switch (ability)
	{
		case ABILITY_PLUS:
		case ABILITY_MINUS:
			return TRUE;
		default:
			return FALSE;
	}
}

bool8 IsMultiscaleAbility(u8 ability)
{
	switch (ability)
	{
		case ABILITY_MULTISCALE:
		case ABILITY_SHADOWSHIELD:
			return TRUE;
		default:
			return FALSE;
	}
}

bool8 IsPriorityBlockingAbility(u8 ability)
{
	switch (ability)
	{
		case ABILITY_DAZZLING:
		#ifdef ABILITY_QUEENLYMAJESTY
		case ABILITY_QUEENLYMAJESTY:
		#endif
			return TRUE;
		default:
			return FALSE;
	}
}

bool8 IsUnnerveAbility(u8 ability)
{
	return ability == ABILITY_UNNERVE
		#ifdef ABILITY_ASONE_GRIM
		|| ability == ABILITY_ASONE_GRIM
		#endif
		#ifdef ABILITY_ASONE_CHILLING
		|| ability == ABILITY_ASONE_CHILLING
		#endif
		;
}

bool8 UnnerveOnOpposingField(u8 bank)
{
	return ABILITY_ON_OPPOSING_FIELD(bank, ABILITY_UNNERVE)
		#ifdef ABILITY_ASONE_GRIM
		|| ABILITY_ON_OPPOSING_FIELD(bank, ABILITY_ASONE_GRIM)
		#endif
		#ifdef ABILITY_ASONE_CHILLING
		|| ABILITY_ON_OPPOSING_FIELD(bank, ABILITY_ASONE_CHILLING)
		#endif
		;
}

bool8 AbilityIncreasesWildItemChance(u8 ability)
{
	return ability == ABILITY_COMPOUNDEYES || ability == ABILITY_SUPERLUCK;
}

bool8 AbilityBlocksIntimidate(u8 ability)
{
	return ability == ABILITY_INNERFOCUS
		|| ability == ABILITY_OWNTEMPO
		|| ability == ABILITY_OBLIVIOUS
		|| ability == ABILITY_SCRAPPY;
}

bool8 AbilityPreventsLoweringAtk(u8 ability)
{
	return ability == ABILITY_HYPERCUTTER
		|| ability == ABILITY_MIRRORARMOR
		|| IsClearBodyAbility(ability);
}

bool8 AbilityPreventsLoweringStat(u8 ability, u8 statId)
{
	switch (ability)
	{
		case ABILITY_HYPERCUTTER:
			return statId == STAT_STAGE_ATK;
		case ABILITY_BIGPECKS:
			return statId == STAT_STAGE_DEF;
		case ABILITY_KEENEYE:
			return statId == STAT_STAGE_ACC;
		default:
			return FALSE;
	}
}

bool8 AbilityRaisesOneStatWhenSomeStatIsLowered(u8 ability)
{
	return ability == ABILITY_DEFIANT
		|| ability == ABILITY_COMPETITIVE;
}

bool8 IsAffectedBySturdy(u8 defAbility, u8 bankDef)
{
	return defAbility == ABILITY_STURDY
		&& BATTLER_MAX_HP(bankDef);
}

bool8 IsAffectedByDisguse(unusedArg u8 defAbility, unusedArg u16 defSpecies, unusedArg u8 moveSplit)
{
	#ifdef SPECIES_MIMIKYU
	if (defAbility == ABILITY_DISGUISE && defSpecies == SPECIES_MIMIKYU)
		return TRUE;
	#endif
	#ifdef SPECIES_EISCUE
	if (defAbility == ABILITY_ICEFACE && defSpecies == SPECIES_EISCUE && moveSplit == SPLIT_PHYSICAL)
		return TRUE;
	#endif

	return FALSE;
}

bool8 IsAffectedByBadDreams(u8 bank)
{
	return BATTLER_ALIVE(bank)
		&& (gBattleMons[bank].status1 & STATUS_SLEEP
		 || ABILITY(FOE(bank)) == ABILITY_COMATOSE)
		&& ABILITY(bank) != ABILITY_MAGICGUARD;
}

bool8 IsTrappedByAbility(u8 bankDef, u8 trapAbility)
{
	if (!CanBeTrapped(bankDef))
		return FALSE;

	switch (trapAbility)
	{
		case ABILITY_SHADOWTAG:
			return ABILITY(bankDef) != ABILITY_SHADOWTAG; //Shadow Tag's not affected by Shadow Tag
		case ABILITY_ARENATRAP:
			return CheckGrounding(bankDef) == GROUNDED;
		case ABILITY_MAGNETPULL:
			return IsOfType(bankDef, TYPE_STEEL);
		default:
			return FALSE;
	}
}

bool8 BankHasEvaporate(u8 bank)
{
	return ABILITY(bank) == ABILITY_EVAPORATE
		&& SpeciesHasEvaporate(GetProperAbilityPopUpSpecies(bank));
}

bool8 BankOnFieldHasEvaporate(void)
{
	for (u32 i = 0; i < gBattlersCount; ++i)
	{
		u8 bank = gBanksByTurnOrder[i];

		if (BATTLER_ALIVE(bank)
		&& BankHasEvaporate(bank)
		&& AffectedByRain(bank))
			return bank + 1;
	}

	return FALSE;
}

bool8 IsWhiteSmokeAbility(u8 ability, u16 species)
{
	if (!IsClearBodyAbility(ability))
		return FALSE;

	switch (SpeciesToNationalPokedexNum(species))
	{
		#if (defined NATIONAL_DEX_TORKOAL && defined NATIONAL_DEX_HEATMOR && defined NATIONAL_DEX_SIZZLIPEDE && defined NATIONAL_DEX_CENTISKORCH)
		case NATIONAL_DEX_TORKOAL:
		case NATIONAL_DEX_HEATMOR:
		case NATIONAL_DEX_SIZZLIPEDE:
		case NATIONAL_DEX_CENTISKORCH:
			return TRUE;
		#endif
	}

	return FALSE;
}

bool8 IsVitalSpiritAbility(u8 ability, u16 species)
{
	if (ability != ABILITY_INSOMNIA)
		return FALSE;

	switch (SpeciesToNationalPokedexNum(species))
	{
		#ifdef NATIONAL_DEX_MANKEY
		case NATIONAL_DEX_MANKEY:
		#endif
		#ifdef NATIONAL_DEX_PRIMEAPE
		case NATIONAL_DEX_PRIMEAPE:
		#endif
		#ifdef NATIONAL_DEX_MR_MIME
		case NATIONAL_DEX_MR_MIME:
		#endif
		#ifdef NATIONAL_DEX_ELECTABUZZ
		case NATIONAL_DEX_ELECTABUZZ:
		#endif
		#ifdef NATIONAL_DEX_ELECTABUZZ
		case NATIONAL_DEX_MAGMAR:
		#endif
		#ifdef NATIONAL_DEX_DELIBIRD
		case NATIONAL_DEX_DELIBIRD:
		#endif
		#ifdef NATIONAL_DEX_TYROGUE
		case NATIONAL_DEX_TYROGUE:
		#endif
		#ifdef NATIONAL_DEX_ELEKID
		case NATIONAL_DEX_ELEKID:
		#endif
		#ifdef NATIONAL_DEX_MAGBY
		case NATIONAL_DEX_MAGBY:
		#endif
		#ifdef NATIONAL_DEX_VIGOROTH
		case NATIONAL_DEX_VIGOROTH:
		#endif
		#ifdef NATIONAL_DEX_ELECTIVIRE
		case NATIONAL_DEX_ELECTIVIRE:
		#endif
		#ifdef NATIONAL_DEX_MAGMORTAR
		case NATIONAL_DEX_MAGMORTAR:
		#endif
		#ifdef NATIONAL_DEX_LILLIPUP
		case NATIONAL_DEX_LILLIPUP:
		#endif
		#ifdef NATIONAL_DEX_ROCKRUFF
		case NATIONAL_DEX_ROCKRUFF:
		#endif
		#ifdef NATIONAL_DEX_LYCANROC
		case NATIONAL_DEX_LYCANROC:
		#endif
			return TRUE;
	}

	return FALSE;
}

bool8 SpeciesHasAngerShell(unusedArg u16 species)
{
	#ifdef SPECIES_KLAWF
	return species == SPECIES_KLAWF;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasArmorTail(unusedArg u16 species)
{
	#ifdef SPECIES_FARIGIRAF
	return species == SPECIES_FARIGIRAF;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasBeadsofRuin(unusedArg u16 species)
{
	#ifdef SPECIES_CHI_YU
	return species == SPECIES_CHI_YU;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasSwordofRuin(unusedArg u16 species)
{
	#ifdef SPECIES_CHIEN_PAO
	return species == SPECIES_CHIEN_PAO;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasTabletsofRuin(unusedArg u16 species)
{
	#ifdef SPECIES_WO_CHIEN
	return species == SPECIES_WO_CHIEN;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasVesselofRuin(unusedArg u16 species)
{
	#ifdef SPECIES_TING_LU
	return species == SPECIES_TING_LU;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasCostar(unusedArg u16 species)
{
	#ifdef SPECIES_FLAMIGO
	return species == SPECIES_FLAMIGO;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasEarthEater(unusedArg u16 species)
{
	#ifdef SPECIES_ORTHWORM
	return species == SPECIES_ORTHWORM;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasElectromorphosis(unusedArg u16 species)
{
	#ifdef SPECIES_BELLIBOLT
	return species == SPECIES_BELLIBOLT;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasCudChew(unusedArg u16 species)
{
	#if (defined SPECIES_TAUROS_P && SPECIES_TAUROS_AQUA_P && SPECIES_TAUROS_BLAZE_P && SPECIES_FARIGIRAF)
	return species == SPECIES_TAUROS_P || species == SPECIES_TAUROS_AQUA_P || species == SPECIES_TAUROS_BLAZE_P || species == SPECIES_FARIGIRAF;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasGoodAsGold(unusedArg u16 species)
{
	#ifdef SPECIES_GHOLDENGO
	return species == SPECIES_GHOLDENGO;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasGuardDog(unusedArg u16 species)
{
	#if(defined SPECIES_MABOSSTIFF && SPECIES_OKIDOGI)
	return species == SPECIES_MABOSSTIFF || species == SPECIES_OKIDOGI;
	#else
	return FALSE;
	#endif
}

bool8 GuardDogPreventsLoweringStat(u8 ability, u8 statId, u8 bank)
{
	switch (ability)
	{
		case ABILITY_INNERFOCUS:
			if(SpeciesHasGuardDog(SPECIES(bank))){
				return statId == STAT_STAGE_ATK;
			}
			else
				return FALSE;
		default:
			return FALSE;
	}
}

bool8 SpeciesHasHadronEngine(unusedArg u16 species)
{
	#ifdef SPECIES_MIRAIDON
	return species == SPECIES_MIRAIDON;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasMindsEye(unusedArg u16 species)
{
	#ifdef SPECIES_URSALUNA_BLOODMOON
	return species == SPECIES_URSALUNA_BLOODMOON;
	#else
	return FALSE;
	#endif
}

bool8 MindsEyePreventsLoweringStat(u8 ability, u8 statId)
{
	switch (ability)
	{
		case ABILITY_SCRAPPY:
			return statId == STAT_STAGE_ACC;
		default:
			return FALSE;
	}
}	

bool8 SpeciesHasMyceliumMight(unusedArg u16 species)
{
	#if (defined SPECIES_TOEDSCOOL && SPECIES_TOEDSCRUEL)
	return species == SPECIES_TOEDSCOOL || species == SPECIES_TOEDSCRUEL;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasOportunist(unusedArg u16 species)
{
	#ifdef SPECIES_ESPATHRA
	return species == SPECIES_ESPATHRA;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasOrichalcumPulse(unusedArg u16 species)
{
	#ifdef SPECIES_KORAIDON
	return species == SPECIES_KORAIDON;
	#else
	return FALSE;
	#endif
}

bool8 IsFullMetalBodyAbility(u8 ability, u16 species)
{
	if (!IsClearBodyAbility(ability))
		return FALSE;

	switch (SpeciesToNationalPokedexNum(species))
	{
		#ifdef NATIONAL_DEX_SOLGALEO
		case NATIONAL_DEX_SOLGALEO:
			return TRUE;
		#endif
	}

	return FALSE;
}

bool8 SpeciesHasProtosynthesis(unusedArg u16 species) //Custom Unbound Ability
{
	#if (defined SPECIES_GOUGING_FIRE && SPECIES_RAGING_BOLT && SPECIES_GREAT_TUSK && SPECIES_SCREAM_TAIL && SPECIES_BRUTE_BONNET && SPECIES_FLUTTER_MANE && SPECIES_SLITHER_WING && SPECIES_SANDY_SHOCKS && SPECIES_ROARING_MOON && SPECIES_WALKING_WAKE)
	return species == SPECIES_GOUGING_FIRE || species == SPECIES_RAGING_BOLT || species == SPECIES_GREAT_TUSK || species == SPECIES_SCREAM_TAIL || species == SPECIES_BRUTE_BONNET || species == SPECIES_FLUTTER_MANE || species == SPECIES_SLITHER_WING || species == SPECIES_SANDY_SHOCKS || species == SPECIES_ROARING_MOON || species == SPECIES_WALKING_WAKE;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasPurifyingSalt(unusedArg u16 species)
{
	#if (defined SPECIES_NACLI && SPECIES_NACLSTACK && SPECIES_GARGANACL)
	return species == SPECIES_NACLI || species == SPECIES_NACLSTACK || species == SPECIES_GARGANACL;
	#else
	return FALSE;
	#endif
}

bool8 CheckStatusAny(u8 bank)
{
    return (gBattleMons[bank].status1 & STATUS1_ANY);
}

bool8 SpeciesHasRockyPayload(unusedArg u16 species)
{
	#ifdef SPECIES_BOMBIRDIER
	return species == SPECIES_BOMBIRDIER;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasSeedSower(unusedArg u16 species)
{
	#ifdef SPECIES_ARBOLIVA
	return species == SPECIES_ARBOLIVA;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasSharpness(unusedArg u16 species)
{
	#if (defined SPECIES_GALLADE && SPECIES_SAMUROTT_H && SPECIES_KLEAVOR && SPECIES_VELUZA)
	return species == SPECIES_ARBOLIVA || species == SPECIES_SAMUROTT_H || species == SPECIES_KLEAVOR || species == SPECIES_VELUZA || species == SPECIES_GALLADE;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasSupremeOverlord(unusedArg u16 species)
{
	#ifdef SPECIES_KINGAMBIT
	return species == SPECIES_KINGAMBIT;
	#else
	return FALSE;
	#endif
}

bool8 IsFaintedPokemonInParty(void)
{
    u8 i;
    struct Pokemon* party = gPlayerParty;
    u8 partyCount = gPlayerPartyCount;

    for (i = 0; i < partyCount; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP, NULL) == 0)
            return TRUE;
    }

    return FALSE;
}

bool8 SpeciesHasSuperSweetSyrup(unusedArg u16 species)
{
	#if (defined SPECIES_DIPPLIN && SPECIES_HYDRAPPLE)
	return species == SPECIES_DIPPLIN || species == SPECIES_HYDRAPPLE;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasTeraShift(unusedArg u16 species)
{
	#if (defined SPECIES_TERAPAGOS && SPECIES_TERAPAGOS_TERA)
	return species == SPECIES_TERAPAGOS || species == SPECIES_TERAPAGOS_TERA;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasTeraShell(unusedArg u16 species)
{
	#if (defined SPECIES_TERAPAGOS && SPECIES_TERAPAGOS_TERA)
	return species == SPECIES_TERAPAGOS || species == SPECIES_TERAPAGOS_TERA;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasThermalExchange(unusedArg u16 species)
{
	#if (defined SPECIES_FRIGIBAX && SPECIES_ARCTIBAX && SPECIES_BAXCALIBUR)
	return species == SPECIES_FRIGIBAX || species == SPECIES_ARCTIBAX || species == SPECIES_BAXCALIBUR;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasToxicChain(unusedArg u16 species)
{
	#if (defined SPECIES_OKIDOGI && SPECIES_FEZANDIPITI && SPECIES_MUNKIDORI)
	return species == SPECIES_OKIDOGI || species == SPECIES_FEZANDIPITI || species == SPECIES_MUNKIDORI;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasPoisonPuppeteer(unusedArg u16 species)
{
	#ifdef SPECIES_PECHARUNT
	return species == SPECIES_PECHARUNT;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasToxicDebris(unusedArg u16 species)
{
	#ifdef SPECIES_GLIMMORA
	return species == SPECIES_GLIMMORA;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasWellBakedBody(unusedArg u16 species)
{
	#ifdef SPECIES_DACHSBUN
	return species == SPECIES_DACHSBUN;
	#else
	return FALSE;
	#endif
}

bool8 AngerShellStatsCheck(u8 bank)
{
    return (STAT_STAGE(bank, STAT_ATK) != STAT_STAGE_MAX
         || STAT_STAGE(bank, STAT_SPATK) != STAT_STAGE_MAX
         || STAT_STAGE(bank, STAT_SPEED) != STAT_STAGE_MAX
         || STAT_STAGE(bank, STAT_DEF) > STAT_STAGE_MIN
         || STAT_STAGE(bank, STAT_SPDEF) > STAT_STAGE_MIN);
}

bool8 SpeciesHasWindPower(unusedArg u16 species)
{
	#if (defined SPECIES_WATTREL && SPECIES_KILOWATTREL)
	return species == SPECIES_WATTREL || species == SPECIES_KILOWATTREL;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasWindRider(unusedArg u16 species)
{
	//Added Pidgey line.
	 #if (defined SPECIES_BRAMBLIN && defined SPECIES_BRAMBLEGHAST && defined SPECIES_SHIFTRY \
      && defined SPECIES_PIDGEY && defined SPECIES_PIDGEOTTO && defined SPECIES_PIDGEOT)
    return species == SPECIES_BRAMBLIN
        || species == SPECIES_BRAMBLEGHAST
        || species == SPECIES_SHIFTRY
        || species == SPECIES_PIDGEY
        || species == SPECIES_PIDGEOTTO
        || species == SPECIES_PIDGEOT;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasZerotoHero(unusedArg u16 species) //Custom Unbound Ability
{
	#if (defined SPECIES_PALAFIN && defined SPECIES_PALAFIN_HERO)
	return species == SPECIES_PALAFIN || species == SPECIES_PALAFIN_HERO;
	#else
	return FALSE;
	#endif
}

bool8 SpeciesHasHydroDisplacer(u16 species)
{
	return gBaseStats[species].ability1 == ABILITY_HYDRODISPLACER
        || gBaseStats[species].ability2 == ABILITY_HYDRODISPLACER;
}
