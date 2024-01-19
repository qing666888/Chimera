#pragma once

namespace Enums{
	enum class ItemId : uint32_t
	{
		Unknown = 0,
		Boots = 1001,
		Faerie_Charm = 1004,
		Rejuvenation_Bead = 1006,
		Giants_Belt = 1011,
		Cloak_of_Agility = 1018,
		Blasting_Wand = 1026,
		Sapphire_Crystal = 1027,
		Ruby_Crystal = 1028,
		Cloth_Armor = 1029,
		Chain_Vest = 1031,
		Null_Magic_Mantle = 1033,
		Emberknife = 1035,
		Long_Sword = 1036,
		Pickaxe = 1037,
		B_F_Sword = 1038,
		Hailblade = 1039,
		Dagger = 1042,
		Recurve_Bow = 1043,
		Amplifying_Tome = 1052,
		Vampiric_Scepter = 1053,
		Dorans_Shield = 1054,
		Dorans_Blade = 1055,
		Dorans_Ring = 1056,
		Negatron_Cloak = 1057,
		Needlessly_Large_Rod = 1058,
		Dark_Seal = 1082,
		Cull = 1083,
		Health_Potion = 2003,
		Total_Biscuit_of_Everlasting_Will = 2010,
		Kircheis_Shard = 2015,
		Refillable_Potion = 2031,
		Corrupting_Potion = 2033,
		Guardians_Horn = 2051,
		Poro_Snax = 2052,
		Control_Ward = 2055,
		Shurelyas_Battlesong = 2065,
		Elixir_of_Iron = 2138,
		Elixir_of_Sorcery = 2139,
		Elixir_of_Wrath = 2140,
		Minion_Dematerializer = 2403,
		Commencing_Stopwatch = 2419,
		Stopwatch = 2420,
		Broken_Stopwatch = 2421,
		Slightly_Magical_Footware = 2422,
		Perfectly_Timed_Stopwatch = 2423,
		Abyssal_Mask = 3001,
		Archangels_Staff = 3003,
		Manamune = 3004,
		Berserkers_Greaves = 3006,
		Boots_of_Swiftness = 3009,
		Chemtech_Putrifier = 3011,
		Sorcerers_Shoes = 3020,
		Glacial_Buckler = 3024,
		Guardian_Angel = 3026,
		Infinity_Edge = 3031,
		Mortal_Reminder = 3033,
		Last_Whisper = 3035,
		Lord_Dominiks_Regards = 3036,
		Mejais_Soulstealer = 3041,
		Muramana = 3042,
		Phage = 3044,
		Phantom_Dancer = 3046,
		Plated_Steelcaps = 3047,
		Seraphs_Embrace = 3048,
		Zekes_Convergence = 3050,
		Hearthbound_Axe = 3051,
		Steraks_Gage = 3053,
		Sheen = 3057,
		Spirit_Visage = 3065,
		Winged_Moonplate = 3066,
		Kindlegem = 3067,
		Sunfire_Aegis = 3068,
		Tear_of_the_Goddess = 3070,
		Black_Cleaver = 3071,
		Bloodthirster = 3072,
		Ravenous_Hydra = 3074,
		Thornmail = 3075,
		Bramble_Vest = 3076,
		Tiamat = 3077,
		Trinity_Force = 3078,
		Wardens_Mail = 3082,
		Warmogs_Armor = 3083,
		Runaans_Hurricane = 3085,
		Zeal = 3086,
		Rabadons_Deathcap = 3089,
		Wits_End = 3091,
		Rapid_Firecannon = 3094,
		Stormrazor = 3095,
		Lich_Bane = 3100,
		Banshees_Veil = 3102,
		Aegis_of_the_Legion = 3105,
		Redemption = 3107,
		Fiendish_Codex = 3108,
		Knights_Vow = 3109,
		Frozen_Heart = 3110,
		Mercurys_Treads = 3111,
		Guardians_Orb = 3112,
		Aether_Wisp = 3113,
		Forbidden_Idol = 3114,
		Nashors_Tooth = 3115,
		Rylais_Crystal_Scepter = 3116,
		Mobility_Boots = 3117,
		Executioners_Calling = 3123,
		Guinsoos_Rageblade = 3124,
		Caulfields_Warhammer = 3133,
		Serrated_Dirk = 3134,
		Void_Staff = 3135,
		Mercurial_Scimitar = 3139,
		Quicksilver_Sash = 3140,
		Youmuus_Ghostblade = 3142,
		Randuins_Omen = 3143,
		Hextech_Alternator = 3145,
		Hextech_Rocketbelt = 3152,
		Blade_of_the_Ruined_King = 3153,
		Hexdrinker = 3155,
		Maw_of_Malmortius = 3156,
		Zhonyas_Hourglass = 3157,
		Ionian_Boots_of_Lucidity = 3158,
		Morellonomicon = 3165,
		Guardians_Blade = 3177,
		Umbral_Glaive = 3179,
		Sanguine_Blade = 3181,
		Guardians_Hammer = 3184,
		Locket_of_the_Iron_Solari = 3190,
		Seekers_Armguard = 3191,
		Gargoyle_Stoneplate = 3193,
		Spectres_Cowl = 3211,
		Mikaels_Blessing = 3222,
		Scarecrow_Effigy = 3330,
		Stealth_Ward = 3340,
		Farsight_Alteration = 3363,
		Oracle_Lens = 3364,
		Your_Cut = 3400,
		Ardent_Censer = 3504,
		Essence_Reaver = 3508,
		Eye_of_the_Herald = 3513,
		Kalistas_Black_Spear = 3599,
		Dead_Mans_Plate = 3742,
		Titanic_Hydra = 3748,
		Crystalline_Bracer = 3801,
		Lost_Chapter = 3802,
		Edge_of_Night = 3814,
		Spellthiefs_Edge = 3850,
		Frostfang = 3851,
		Shard_of_True_Ice = 3853,
		Steel_Shoulderguards = 3854,
		Runesteel_Spaulders = 3855,
		Pauldrons_of_Whiterock = 3857,
		Relic_Shield = 3858,
		Targons_Buckler = 3859,
		Bulwark_of_the_Mountain = 3860,
		Spectral_Sickle = 3862,
		Harrowing_Crescent = 3863,
		Black_Mist_Scythe = 3864,
		Oblivion_Orb = 3916,
		Imperial_Mandate = 4005,
		Force_of_Nature = 4401,
		The_Golden_Spatula = 4403,
		Horizon_Focus = 4628,
		Cosmic_Drive = 4629,
		Blighting_Jewel = 4630,
		Verdant_Barrier = 4632,
		Riftmaker = 4633,
		Leeching_Leer = 4635,
		Night_Harvester = 4636,
		Demonic_Embrace = 4637,
		Watchful_Wardstone = 4638,
		Stirring_Wardstone = 4641,
		Bandleglass_Mirror = 4642,
		Vigilant_Wardstone = 4643,
		Ironspike_Whip = 6029,
		Silvermere_Dawn = 6035,
		Deaths_Dance = 6333,
		Chempunk_Chainsword = 6609,
		Staff_of_Flowing_Water = 6616,
		Moonstone_Renewer = 6617,
		Goredrinker = 6630,
		Stridebreaker = 6631,
		Divine_Sunderer = 6632,
		Liandrys_Anguish = 6653,
		Ludens_Tempest = 6655,
		Everfrost = 6656,
		Bamis_Cinder = 6660,
		Frostfire_Gauntlet = 6662,
		Turbo_Chemtank = 6664,
		Noonquiver = 6670,
		Galeforce = 6671,
		Kraken_Slayer = 6672,
		Immortal_Shieldbow = 6673,
		Navori_Quickblades = 6675,
		The_Collector = 6676,
		Rageknife = 6677,
		Duskblade_of_Draktharr = 6691,
		Eclipse = 6692,
		Prowlers_Claw = 6693,
		Seryldas_Grudge = 6694,
		Serpents_Fang = 6695
	};
}