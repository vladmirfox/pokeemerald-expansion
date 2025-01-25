CherrygroveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherrygroveCity_OnTransition
	.byte 0

CherrygroveCity_OnTransition:
	setflag FLAG_VISITED_CHERRYGROVE
	end

Cherrygrove_Butterfree::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUTTERFREE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Butterfree_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Butterfree_Text:
	.string "BUTTERFREE: Frfrfr!$"

Cherrygrove_Wooper::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
	msgbox Cherrygrove_Wooper_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Wooper_Text:
	.string "WOOPER: woop woop!$"

Cherrygrove_Squirtle::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Squirtle_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Squirtle_Text:
	.string "SQUIRTLE: Quirr!$"

Cherrygrove_Furret::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FURRET, CRY_MODE_NORMAL
	msgbox Cherrygrove_Furret_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Furret_Text:
	.string "FURRET: Furrrr!$"

Cherrygrove_Porygon2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PORYGON2, CRY_MODE_NORMAL
	msgbox Cherrygrove_Porygon2_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Porygon2_Text:
	.string "PORYGON 2: Poryyy!$"

Cherrygrove_Meowth::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
	msgbox Cherrygrove_Meowth_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Meowth_Text:
	.string "MEOWTH: Meeowth!$"

Cherrygrove_Misdreavus::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MISDREAVUS, CRY_MODE_NORMAL
	msgbox Cherrygrove_Misdreavus_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Misdreavus_Text:
	.string "MISDREAVUS: ..!$"

Cherrygrove_Gastly::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
	msgbox Cherrygrove_Gastly_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Gastly_Text:
	.string "GASTLY: ..!$"

Cherrygrove_Gengar::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GENGAR, CRY_MODE_NORMAL
	msgbox Cherrygrove_Gengar_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Gengar_Text:
	.string "GENGAR: Kekeke!$"

Cherrygrove_Golbat::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GOLBAT, CRY_MODE_NORMAL
	msgbox Cherrygrove_Golbat_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Golbat_Text:
	.string "GOLBAT: Batbat!$"

Cherrygrove_Slaking::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
	msgbox Cherrygrove_Slaking_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Slaking_Text:
	.string "SLAKING: AAAAGHH!!$"

Cherrygrove_Arcanine::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ARCANINE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Arcanine_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Arcanine_Text:
	.string "ARCANINE: AAARRGHH!!$"

Cherrygrove_Onix::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	msgbox Cherrygrove_Onix_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Onix_Text:
	.string "ONIX: Groagh!$"

Cherrygrove_Pidgeotto::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEOTTO, CRY_MODE_NORMAL
	msgbox Cherrygrove_Pidgeotto_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Pidgeotto_Text:
	.string "PIDGEOTTO: Poppopo!$"

Cherrygrove_Raichu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RAICHU, CRY_MODE_NORMAL
	msgbox Cherrygrove_Raichu_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Raichu_Text:
	.string "RAICHU: Chuuuu!$"

Cherrygrove_Dunsparce::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DUNSPARCE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Dunsparce_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Dunsparce_Text:
	.string "DUNSPARCE: Dun Dun!$"

Cherrygrove_Exeggutor::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_EXEGGUTOR, CRY_MODE_NORMAL
	msgbox Cherrygrove_Exeggutor_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Exeggutor_Text:
	.string "EXEGGUTOR: Hehehehe!$"

Cherrygrove_Manectric::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
	msgbox Cherrygrove_Manectric_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Manectric_Text:
	.string "MANECTRIC: Baaark!$"

Cherrygrove_Nosepass::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NOSEPASS, CRY_MODE_NORMAL
	msgbox Cherrygrove_Nosepass_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Nosepass_Text:
	.string "NOSEPASS: ...Paas?$"

Cherrygrove_Espeon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ESPEON, CRY_MODE_NORMAL
	msgbox Cherrygrove_Espeon_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Espeon_Text:
	.string "ESPEON: ..?$"

Cherrygrove_Torkoal::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TORKOAL, CRY_MODE_NORMAL
	msgbox Cherrygrove_Torkoal_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Torkoal_Text:
	.string "TORKOAL: ..?$"

Cherrygrove_Swinub::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
	msgbox Cherrygrove_Swinub_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Swinub_Text:
	.string "SWINUB: Oink!$"

Cherrygrove_Piloswine::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PILOSWINE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Piloswine_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Piloswine_Text:
	.string "PILOSWINE: Gnoork!$"

Cherrygrove_Caterpie::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CATERPIE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Caterpie_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Caterpie_Text:
	.string "CATERPIE: Frfrfr!$"

Cherrygrove_Weedle::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WEEDLE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Weedle_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Weedle_Text:
	.string "WEEDLE: Sksksk!$"

Cherrygrove_Sentret::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SENTRET, CRY_MODE_NORMAL
	msgbox Cherrygrove_Sentret_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Sentret_Text:
	.string "SENTRET: Furfur!$"

Cherrygrove_Murkrow::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MURKROW, CRY_MODE_NORMAL
	msgbox Cherrygrove_Murkrow_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Murkrow_Text:
	.string "MURKROW: Krowkrow!$"

Cherrygrove_Farfetchd::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
	msgbox Cherrygrove_Farfetchd_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Farfetchd_Text:
	.string "FARFETCH'D: Fiufiu!$"

Cherrygrove_Ledyba::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LEDYBA, CRY_MODE_NORMAL
	msgbox Cherrygrove_Ledyba_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Ledyba_Text:
	.string "LEDYBA: Frfrfr!$"

Cherrygrove_Spinarak::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPINARAK, CRY_MODE_NORMAL
	msgbox Cherrygrove_Spinarak_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Spinarak_Text:
	.string "SPINARAK: Krkrkr!$"

Cherrygrove_Heracross::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HERACROSS, CRY_MODE_NORMAL
	msgbox Cherrygrove_Heracross_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Heracross_Text:
	.string "HERACROSS: Krkrkr!$"

Cherrygrove_Natu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NATU, CRY_MODE_NORMAL
	msgbox Cherrygrove_Natu_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Natu_Text:
	.string "NATU: Tututu!$"

Cherrygrove_Vileplume::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VILEPLUME, CRY_MODE_NORMAL
	msgbox Cherrygrove_Vileplume_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Vileplume_Text:
	.string "VILEPLUME: Tututu!$"

Cherrygrove_Stantler::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
	msgbox Cherrygrove_Stantler_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Stantler_Text:
	.string "STANTLER: Hurrrgh!$"

Cherrygrove_Tropius::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
	msgbox Cherrygrove_Tropius_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Tropius_Text:
	.string "TROPIUS: Hurrrgh!$"

Cherrygrove_Walrein::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WALREIN, CRY_MODE_NORMAL
	msgbox Cherrygrove_Walrein_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Walrein_Text:
	.string "WALREIN: Hurrrgh!$"

Cherrygrove_Hariyama::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HARIYAMA, CRY_MODE_NORMAL
	msgbox Cherrygrove_Hariyama_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Hariyama_Text:
	.string "HARIYAMA: Hurrrgh!$"

Cherrygrove_Bellossom::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_NORMAL
	msgbox Cherrygrove_Bellossom_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Bellossom_Text:
	.string "BELLOSSOM: Hihihi!$"

Cherrygrove_Scyther::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
	msgbox Cherrygrove_Scyther_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Scyther_Text:
	.string "SCYTHER: Gruagh!$"

Cherrygrove_Kadabra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KADABRA, CRY_MODE_NORMAL
	msgbox Cherrygrove_Kadabra_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Kadabra_Text:
	.string "KADABRA: ..!$"

Cherrygrove_Lunatone::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LUNATONE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Lunatone_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Lunatone_Text:
	.string "LUNATONE: ..!$"

Cherrygrove_Solrock::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SOLROCK, CRY_MODE_NORMAL
	msgbox Cherrygrove_Solrock_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Solrock_Text:
	.string "SOLROCK: ..!$"

Cherrygrove_Ampharos::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	msgbox Cherrygrove_Ampharos_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Ampharos_Text:
	.string "AMPHAROS: Meeeh!$"

Cherrygrove_Eevee::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Eevee_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Eevee_Text:
	.string "EEVEE: Wouuf!$"

Cherrygrove_Flareon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FLAREON, CRY_MODE_NORMAL
	msgbox Cherrygrove_Flareon_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Flareon_Text:
	.string "FLAREON: Grrr uaof!$"

Cherrygrove_Jolteon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JOLTEON, CRY_MODE_NORMAL
	msgbox Cherrygrove_Jolteon_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Jolteon_Text:
	.string "JOLTEON: Grrr uaof!$"

Cherrygrove_Vaporeon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VAPOREON, CRY_MODE_NORMAL
	msgbox Cherrygrove_Vaporeon_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Vaporeon_Text:
	.string "VAPOREON: Uaoff!$"

Cherrygrove_Umbreon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_UMBREON, CRY_MODE_NORMAL
	msgbox Cherrygrove_Umbreon_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Umbreon_Text:
	.string "UMBREON: Uaoff!$"

Cherrygrove_Mareep::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	msgbox Cherrygrove_Mareep_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Mareep_Text:
	.string "MAREEP: Meeeh!$"

Cherrygrove_Bulbasaur::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
	msgbox Cherrygrove_Bulbasaur_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Bulbasaur_Text:
	.string "BULBASAUR: Groar!$"

Cherrygrove_Venusaur::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VENUSAUR, CRY_MODE_NORMAL
	msgbox Cherrygrove_Venusaur_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Venusaur_Text:
	.string "VENUSAUR: GRAOORR!$"

Cherrygrove_Cyndaquil::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
	msgbox Cherrygrove_Cyndaquil_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Cyndaquil_Text:
	.string "CYNDAQUIL: Cric Cric?$"

Cherrygrove_Chikorita::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
	msgbox Cherrygrove_Chikorita_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Chikorita_Text:
	.string "CHIKORITA: Haah!$"

Cherrygrove_Charmander::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHARMANDER, CRY_MODE_NORMAL
	msgbox Cherrygrove_Charmander_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Charmander_Text:
	.string "CHARMANDER: Chaar!$"

Cherrygrove_Charmeleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHARMELEON, CRY_MODE_NORMAL
	msgbox Cherrygrove_Charmeleon_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Charmeleon_Text:
	.string "CHARMELEON: Chaar!!$"

Cherrygrove_Flaaffy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FLAAFFY, CRY_MODE_NORMAL
	msgbox Cherrygrove_Flaaffy_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Flaaffy_Text:
	.string "FLAAFFY: Meeeh!$"

Cherrygrove_Phanpy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PHANPY, CRY_MODE_NORMAL
	msgbox Cherrygrove_Phanpy_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Phanpy_Text:
	.string "PHANPY: Proot!$"

Cherrygrove_Donphan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DONPHAN, CRY_MODE_NORMAL
	msgbox Cherrygrove_Donphan_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Donphan_Text:
	.string "DONPHAN: PROOOT!$"

Cherrygrove_Slowking::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	msgbox Cherrygrove_Slowking_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Slowking_Text:
	.string "SLOWKING: ..!$"

Cherrygrove_Krabby::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KRABBY, CRY_MODE_NORMAL
	msgbox Cherrygrove_Krabby_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Krabby_Text:
	.string "KRABBY: Krab!$"

Cherrygrove_Elekid::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ELEKID, CRY_MODE_NORMAL
	msgbox Cherrygrove_Elekid_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Elekid_Text:
	.string "ELEKID: Elele!$"

Cherrygrove_Doduo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
	msgbox Cherrygrove_Doduo_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Doduo_Text:
	.string "DODUO: Dododo!$"

Cherrygrove_Dodrio::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DODRIO, CRY_MODE_NORMAL
	msgbox Cherrygrove_Dodrio_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Dodrio_Text:
	.string "DODRIO: Dododo!$"

Cherrygrove_Shuckle::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SHUCKLE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Shuckle_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Shuckle_Text:
	.string "SCHUCKLE: Uoo?$"

Cherrygrove_Bellsprout::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BELLSPROUT, CRY_MODE_NORMAL
	msgbox Cherrygrove_Bellsprout_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Bellsprout_Text:
	.string "BELLSPROUT: Uoo?$"

Cherrygrove_Koffing::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KOFFING, CRY_MODE_NORMAL
	msgbox Cherrygrove_Koffing_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Koffing_Text:
	.string "KOFFING: Hehehehe!$"

Cherrygrove_Skarmory::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
	msgbox Cherrygrove_Skarmory_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Skarmory_Text:
	.string "SKARMORY: Kraaak!$"

Cherrygrove_Totodile::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Totodile_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Totodile_Text:
	.string "TOTODILE: Tototo!$"

Cherrygrove_Charizard::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
	msgbox Cherrygrove_Charizard_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Charizard_Text:
	.string "CHARIZARD: GRAORGH!$"

Cherrygrove_Salamence::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SALAMENCE, CRY_MODE_NORMAL
	msgbox Cherrygrove_Salamence_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cherrygrove_Salamence_Text:
	.string "SALAMENCE: ROARGH!$"