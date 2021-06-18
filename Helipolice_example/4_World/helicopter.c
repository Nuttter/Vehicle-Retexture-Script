//THIS FILE ALLOWS THE HELICOPTER TO SPAWN IN WITH ALL ATTATCHMENTS 

modded class HeliSIB_police_base
{

	override void creat_InInventory_heli()
	{
		
		if(IsKindOf("Helipolice_example"))
		{
			GetInventory().CreateInInventory( "SIBPolice_Door_1_1_example" );
			GetInventory().CreateInInventory( "SIBPolice_Door_1_2_example" );
			GetInventory().CreateInInventory( "SIBPolice_Door_2_1_example" );
			GetInventory().CreateInInventory( "SIBPolice_Door_2_2_example" );
			
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		};
		super.creat_InInventory_heli();
	};
};