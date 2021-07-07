class CfgPatches
{
	class Helipolice_example
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"HelicopterModSIB_police"
		};
	};
};
class CfgMods
{
	class Helipolice_example
	{
		dir="Helipolice_example";
		hideName=0;
		hidePicture=0;
		name="Helipolice_example";
		credits="";
		author="";
		authorID="";
		version="version 1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Helipolice_example/4_World"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Helipolice_example/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Helipolice_example/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class SIBPolice_Door_1_1;
	class SIBPolice_Door_1_2;
	class SIBPolice_Door_2_1;
	class SIBPolice_Door_2_2;
	class SIBPolice_Door_1_1_example: SIBPolice_Door_1_1
	{
		hiddenSelections[]=
		{
			"camo1_door"
		};
		hiddenSelectionsTextures[]=
		{
			"Helipolice_example\data\Helicopter_example.paa"
		};
	};
	class SIBPolice_Door_1_2_example: SIBPolice_Door_1_2
	{
		hiddenSelections[]=
		{
			"camo1_door"
		};
		hiddenSelectionsTextures[]=
		{
			"Helipolice_example\data\Helicopter_example.paa"
		};
	};
	class SIBPolice_Door_2_1_example: SIBPolice_Door_2_1
	{
		hiddenSelections[]=
		{
			"camo1_door"
		};
		hiddenSelectionsTextures[]=
		{
			"Helipolice_example\data\Helicopter_example.paa"
		};
	};
	class SIBPolice_Door_2_2_example: SIBPolice_Door_2_2
	{
		hiddenSelections[]=
		{
			"camo1_door"
		};
		hiddenSelectionsTextures[]=
		{
			"Helipolice_example\data\Helicopter_example.paa"
		};
	};
	class HeliSIB_police_base;
	class Helipolice_example: HeliSIB_police_base		//Helipolice_example IS THE CLASSNAME USED TO SPAWN THE VEHICLE IN GAME
	{
		scope=2;
		displayName="Police Example";			//CHANGE DISPLAY NAME TO YOUR LIKING
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Helipolice_example\data\Helicopter_example.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,100};		//ADJUST HELICOPTER CARGO SIZE HERE 10 SLOTS ACROSS BY 100 SLOTS DOWN MAKING TOTAL 1000 SLOTS
		};
	};
};
