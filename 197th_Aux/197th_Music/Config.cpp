/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Music {
        name = "197th Music";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
    };
};

class CfgMusicClasses
{
	class 197th_SW_Epic
	{
		displayName = "[197th] Star Wars (Epic/Combat)";
	};
	
	class 197th_SW_Calme
	{
		displayName = "[197th] Star Wars (Calm)";
	};

	class 197th_SW_Sad
	{
		displayName = "[197th] Star Wars (Sad)";
	};
	
	class 197th_SW_Hope
	{
		displayName = "[197th] Star Wars (Hope)";
	};
	
	class 197th_SW_Dark
	{
		displayName = "[197th] Star Wars (Darkness)";
	};

	class 197th_SW_Victory
	{
		displayName = "[197th] Star Wars (Victory)";
	};
	
	class 197th_SW_Special
	{
		displayName = "[197th] Star Wars (Special)";
	};
	
	class 197th_SW_Wait
	{
		displayName = "[197th] Star Wars (Please Wait)";
	};
	
	class 197th_Halo_Epic
	{
		displayName = "[197th] Halo (Epic/Combat)";
	};
	
	class 197th_Halo_Calm
	{
		displayName = "[197th] Halo (Calm)";
	};
	
	class 197th_40K_Epic
	{
		displayName = "[197th] 40K (Epic/Combat)";
	};
	
	class 197th_40K_Calm
	{
		displayName = "[197th] 40K (Calm)";
	};
};

class CfgMusic
{
	tracks[] = {Targon};
	class burying
	{
		name	= "Burying The Dead (It's Over Now) | EPIC CINEMATIC VERSION";
		// filename, volume, pitch
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Burying_The_Dead_Its_Over_Now__EPIC_CINEMATIC_VERSION.ogg", db + 0, 1.0 };
		duration = "174";
		musicClass = "197th_SW_Sad";
	};
	
	class clonestheme
	{
		name	= "The Clones Theme | Order 66 Sad Version";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_The_Clones_Theme__Order_66_Sad_Version.ogg", db + 0, 1.0 };
		duration = "247";
		musicClass = "197th_SW_Sad";
	};
	
	class order66sad
	{
		name	= "Order 66 Sad | Anakin's Betrayal & I'm So Sorry";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Order_66_Sad_Music_Mix__Anakins_Betrayal__Im_So_Sorry.ogg", db + 0, 1.0 };
		duration = "307";
		musicClass = "197th_SW_Sad";
	};
	
	class theclonesepic
	{
		name	= "The Clones Epic Original Theme - Brothers In Arms";
		sound[]	= { "197th_Music\Data\music_sw\The_Clones_Epic_Original_Theme_-_Brothers_In_Arms.ogg", db + 0, 1.0 };
		duration = "207";
		musicClass = "197th_SW_Epic";
	};
	
	class theforcetheme
	{
		name	= "The Force Theme | EPIC CINEMATIC";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_The_Force_Theme__EPIC_CINEMATIC_Hans_Zimmer_Style.ogg", db + 0, 1.0 };
		duration = "224";
		musicClass = "197th_SW_Epic";
	};
	
	class starwarsmaintheme
	{
		name	= "Star Wars Main Theme | EPIC CINEMATIC EMOTIONAL";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Main_Theme__EPIC_CINEMATIC_EMOTIONAL_VERSION.ogg", db + 0, 1.0 };
		duration = "225";
		musicClass = "197th_SW_Hope";
	};
	
	class themandaloriansuite
	{
		name	= "The Mandalorian Suite | EPIC ORCHESTRAL";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_The_Mandalorian_Suite__EPIC_ORCHESTRAL_MIX.ogg", db + 0, 1.0 };
		duration = "285";
		musicClass = "197th_SW_Calme";
	};
	
	class thethroneroom
	{
		name	= "The Throne Room and Main Theme | EPIC VERSION (May 4th Special)";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_The_Throne_Room_and_Main_Theme__EPIC_VERSION_May_4th_Special.ogg", db + 0, 1.0 };
		duration = "185";
		musicClass = "197th_SW_Victory";
	};
	
	class admiralthrawntheme
	{
		name	= "Admiral Thrawn Theme | EPIC VERSION";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Admiral_Thrawn_Theme__EPIC_VERSION.ogg", db + 0, 1.0 };
		duration = "336";
		musicClass = "197th_SW_Epic";
	};
	
	class theclonewars
	{
		name	= "The Clone Wars | Final Trailer";
		sound[]	= { "197th_Music\Data\music_sw\The_Clone_Wars__Final_Trailer_Music_EXTENDED_THEMES.ogg", db + 0, 1.0 };
		duration = "196";
		musicClass = "197th_SW_Epic";
	};
	
	class commandoepictheme
	{
		name	= "Commando Epic Theme | Vode An";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Republic_Commando_Epic_Theme__Two_Steps_From_Hell_Style.ogg", db + 0, 1.0 };
		duration = "239";
		musicClass = "197th_SW_Epic";
	};
	
	class darthrevan
	{
		name	= "Darth Revan Epic Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Darth_Revan_Epic_Theme__Two_Steps_From_Hell_Style.ogg", db + 0, 1.0 };
		duration = "222";
		musicClass = "197th_SW_Dark";
	};
	
	class separatistdroid
	{
		name	= "Separatist Droid Army March";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Separatist_Droid_Army_March__EPIC_VERSION.ogg", db + 0, 1.0 };
		duration = "263";
		musicClass = "197th_SW_Epic";
	};
	
	class victory1
	{
		name	= "Victory Celebration";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Victory_Celebration__EPIC_VERSION.ogg", db + 0, 1.0 };
		duration = "139";
		musicClass = "197th_SW_Victory";
	};
	
	class siegeofmandalore
	{
		name	= "Siege of Mandalore Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Siege_of_Mandalore_Theme__EPIC_VERSION.ogg", db + 0, 1.0 };
		duration = "218";
		musicClass = "197th_SW_Epic";
	};
	
	class victoryanddeathfuneral
	{
		name	= "Victory and Death (Funeral Theme)";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-victory-and-death-funeral-theme-cinematic-mix.ogg", db + 0, 1.0 };
		duration = "181";
		musicClass = "197th_SW_Sad";
	};
	
	class resistancetheme1
	{
		name	= "Star Wars: Resistance Theme | EPIC RESISTANCE";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-resistance-theme-epic-resistance-anthem.ogg", db + 0, 1.0 };
		duration = "246";
		musicClass = "197th_SW_Epic";
	};
	
	class orsonkrennicsuite
	{
		name	= "Director Orson Krennic Suite Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-director-orson-krennic-suite-theme.ogg", db + 0, 1.0 };
		duration = "470";
		musicClass = "197th_SW_Dark";
	};
	
	class chopperC110p
	{
		name	= "Chopper (C1-10P) Complete Music Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-chopper-c1-10p-complete-music-theme.ogg", db + 0, 1.0 };
		duration = "331";
		musicClass = "197th_SW_Calme";
	};
	
	class ketsuonyo
	{
		name	= "Ketsu Onyo Complete Music Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-ketsu-onyo-complete-music-theme.ogg", db + 0, 1.0 };
		duration = "144";
		musicClass = "197th_SW_Calme";
	};
	
	class GrandInquisitor1
	{
		name	= "Grand Inquisitor Complete Music Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_-_Grand_Inquisitor_Complete_Music_Theme.ogg", db + 0, 1.0 };
		duration = "500";
		musicClass = "197th_SW_Dark";
	};
	
	class JediOrder1
	{
		name	= "Jedi Order Complete Music Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_-_Jedi_Order_Complete_Music_Theme.ogg", db + 0, 1.0 };
		duration = "250";
		musicClass = "197th_SW_Hope";
	};
	
	class CaptainRex1
	{
		name	= "Captain Rex Suite Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_-_Captain_Rex_Suite_Theme.ogg", db + 0, 1.0 };
		duration = "167";
		musicClass = "197th_SW_Victory";
	};
	
	class Chirrutimwe1
	{
		name	= "Chirrut Îmwe (Guardian of the Whills) Complete Music Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_-_Chirrut_mwe_Guardian_of_the_Whills_Complete_Music_Theme.ogg", db + 0, 1.0 };
		duration = "544";
		musicClass = "197th_SW_Hope";
	};
	
	class TheBadBatch1
	{
		name	= "The Bad Batch Epic Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_The_Bad_Batch_Epic_Theme__TWO_STEPS_FROM_HELL_STYLE.ogg", db + 0, 1.0 };
		duration = "274";
		musicClass = "197th_SW_Epic";
	};
	
	class FandGsacrifice
	{
		name	= "Fives and Gregor's Sacrifice Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Fives_and_Gregors_Sacrifice_Theme__TWO_STEPS_FROM_HELL_STYLE.ogg", db + 0, 1.0 };
		duration = "193";
		musicClass = "197th_SW_Hope";
	};
	
	class royfwbp1
	{
		name	= "Rogue One | Your Father Would Be Proud";
		sound[]	= { "197th_Music\Data\music_sw\Rogue_One_Your_Father_Would_Be_Proud__CINEMATIC_EMOTIONAL_MIX.ogg", db + 0, 1.0 };
		duration = "181";
		musicClass = "197th_SW_Sad";
	};
	
	class C99
	{
		name	= "Clone 99 Sacrifice Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Clone_99_Sacrifice_Theme__EPIC_VERSION.ogg", db + 0, 1.0 };
		duration = "123";
		musicClass = "197th_SW_Sad";
	};
	
	class JFO1
	{
		name	= "Jedi Fallen Order | Epic Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Jedi_Fallen_Order_Epic_Theme__Two_Steps_From_Hell_Style.ogg", db + 0, 1.0 };
		duration = "253";
		musicClass = "197th_SW_Epic";
	};
	
	class WS1
	{
		name	= "Wolfpack Suite Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_-_Wolfpack_Suite_Theme.ogg", db + 0, 1.0 };
		duration = "242";
		musicClass = "197th_SW_Calme";
	};
	
	class LUS
	{
		name	= "Luminara Unduli Suite Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_-_Luminara_Unduli_Suite_Theme.ogg", db + 0, 1.0 };
		duration = "264";
		musicClass = "197th_SW_Hope";
	};
	
	class AWYS
	{
		name	= "Admiral Wullf Yularen Suite Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_-_Admiral_Wullf_Yularen_Suite_Theme.ogg", db + 0, 1.0 };
		duration = "254";
		musicClass = "197th_SW_Epic";
	};
	
	class ASS
	{
		name	= "Aayla Secura Suite Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_-_Aayla_Secura_Suite_Theme.ogg", db + 0, 1.0 };
		duration = "196";
		musicClass = "197th_SW_Epic";
	};
	
	class DRSET
	{
		name	= "Darth Revan's Sith Empire Theme";
		sound[]	= { "197th_Music\Data\music_sw\StarWarsDarthRevansSithEmpireThemeEPICVERSION.ogg", db + 0, 1.0 };
		duration = "236";
		musicClass = "197th_SW_Epic";
	};
	
	class TORT
	{
		name	= "The Old Republic Theme (Clash of Destiny)";
		sound[]	= { "197th_Music\Data\music_sw\StarWarsTheOldRepublicThemeClashofDestinyEPICVERSION.ogg", db + 0, 1.0 };
		duration = "188";
		musicClass = "197th_SW_Epic";
	};
	
	class CKT
	{
		name	= "Cal Kestis Theme";
		sound[]	= { "197th_Music\Data\music_sw\StarWarsCalKestisThemeEPICVERSION.ogg", db + 0, 1.0 };
		duration = "239";
		musicClass = "197th_SW_Epic";
	};
	
	class BSARL
	{
		name	= "Bastila Shan and Revan Love Theme";
		sound[]	= { "197th_Music\Data\music_sw\StarWarsBastilaShanandRevanLoveTheme.ogg", db + 0, 1.0 };
		duration = "285";
		musicClass = "197th_SW_Calme";
	};
	
	class ATS
	{
		name	= "Across The Stars";
		sound[]	= { "197th_Music\Data\music_sw\StarWarsAcrossTheStars.ogg", db + 0, 1.0 };
		duration = "198";
		musicClass = "197th_SW_Sad";
	};
	
	class PF
	{
		name	= "Padmé's Funeral Theme";
		sound[]	= { "197th_Music\Data\music_sw\StarWarsPadmesFuneralTheme.ogg", db + 0, 1.0 };
		duration = "259";
		musicClass = "197th_SW_Sad";
	};
	
	class YTOA
	{
		name	= "Yoda's Theme & Oogway Ascends (SW x Kung Fu Panda Mashup)";
		sound[]	= { "197th_Music\Data\music_sw\YodasTheme OogwayAscends.ogg", db + 0, 1.0 };
		duration = "163";
		musicClass = "197th_SW_Hope";
	};
	
	class LL
	{
		name	= "Luke and Leia Theme";
		sound[]	= { "197th_Music\Data\music_sw\StarWarsLukeandLeiaTheme.ogg", db + 0, 1.0 };
		duration = "151";
		musicClass = "197th_SW_Victory";
	};
	
	class TCM
	{
		name	= "[Medieval] The Clones Theme";
		sound[]	= { "197th_Music\Data\music_sw\StarWarsTheClonesThemeEPICMEDIEVALSTYLE.ogg", db + 0, 1.0 };
		duration = "237";
		musicClass = "197th_SW_Special";
	};
	
	class DOTFM
	{
		name	= "[Medieval] Duel of The Fates";
		sound[]	= { "197th_Music\Data\music_sw\Star-Wars-Duel-of-The-Fates-Medieval-Style.ogg", db + 0, 1.0 };
		duration = "122";
		musicClass = "197th_SW_Special";
	};
	
	class ATSM
	{
		name	= "[Medieval] Across The Stars";
		sound[]	= { "197th_Music\Data\music_sw\Star-Wars-Across-The-Stars-Medieval-Style.ogg", db + 0, 1.0 };
		duration = "194";
		musicClass = "197th_SW_Special";
	};
	
	class JTMM
	{
		name	= "[Medieval] Jedi Temple March";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-jedi-temple-march-epic-medieval-style.ogg", db + 0, 1.0 };
		duration = "169";
		musicClass = "197th_SW_Special";
	};
	
	class TFTM
	{
		name	= "[Medieval] The Force Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-force-theme-binary-sunset-epic-medieval-style.ogg", db + 0, 1.0 };
		duration = "204";
		musicClass = "197th_SW_Special";
	};
	
	class HTAVA
	{
		name	= "Halo Theme x Vode An (SW x Halo Mashup)";
		sound[]	= { "197th_Music\Data\music_sw\halo-theme-x-vode-an-republic-commando-epic-version-star-wars-x-halo-mashup.ogg", db + 0, 1.0 };
		duration = "198";
		musicClass = "197th_SW_Epic";
	};
	
	class HTAVA1
	{
		name	= "Halo Theme x Vode An (SW x Halo Mashup)";
		sound[]	= { "197th_Music\Data\music_sw\halo-theme-x-vode-an-republic-commando-epic-version-star-wars-x-halo-mashup.ogg", db + 0, 1.0 };
		duration = "198";
		musicClass = "197th_Halo_Epic";
	};
	
	class HT
	{
		name	= "Halo Theme (epic)";
		sound[]	= { "197th_Music\Data\music_halo\halo-theme-epic-version-halo-infinite-tribute.ogg", db + 0, 1.0 };
		duration = "210";
		musicClass = "197th_Halo_Epic";
	};
	
	class SAFIYHR
	{
		name	= "Set a Fire In Your Heart & Reverie";
		sound[]	= { "197th_Music\Data\music_halo\halo-infinite-set-a-fire-in-your-heart-reverie-epic-version.ogg", db + 0, 1.0 };
		duration = "220";
		musicClass = "197th_Halo_Epic";
	};
	
	class IC
	{
		name	= "Imperial Creed";
		sound[]	= { "197th_Music\Data\music_40k\imperial-creed-imperial-guard-combat-music.ogg", db + 0, 1.0 };
		duration = "256";
		musicClass = "197th_40K_Epic";
	};
	
	class CSMT
	{
		name	= "Chaos Space Marines Theme";
		sound[]	= { "197th_Music\Data\music_40k\chaos-space-marines-theme-chaos-combat-music.ogg", db + 0, 1.0 };
		duration = "208";
		musicClass = "197th_40K_Epic";
	};
	
	class TT
	{
		name	= "The Transference";
		sound[]	= { "197th_Music\Data\music_40k\the-transference-necrons-combat-music.ogg", db + 0, 1.0 };
		duration = "202";
		musicClass = "197th_40K_Epic";
	};
	
	class HTN
	{
		name	= "Hail the Nightmare";
		sound[]	= { "197th_Music\Data\music_40k\hail-the-nightmare-chaos-ambient-music.ogg", db + 0, 1.0 };
		duration = "175";
		musicClass = "197th_40K_Calm";
	};
	
	class VACT
	{
		name	= "Vode An x Clones Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-vode-an-x-clones-theme-republic-commando-anthem.ogg", db + 0, 1.0 };
		duration = "192";
		musicClass = "197th_SW_Epic";
	};
	
	class TAF
	{
		name	= "The Asteroid Field";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-asteroid-field-epic-version.ogg", db + 0, 1.0 };
		duration = "211";
		musicClass = "197th_SW_Epic";
	};
	
	class BFT
	{
		name	= "Boba Fett Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-boba-fett-theme-epic-mandalorian-version.ogg", db + 0, 1.0 };
		duration = "280";
		musicClass = "197th_SW_Epic";
	};
	
	class BOCT
	{
		name	= "Battle Over Coruscant Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-battle-over-coruscant-theme-epic-version.ogg", db + 0, 1.0 };
		duration = "268";
		musicClass = "197th_SW_Epic";
	};
	
	class GGET
	{
		name	= "General Grievous Epic Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-general-grievous-epic-theme-two-steps-from-hell-style.ogg", db + 0, 1.0 };
		duration = "276";
		musicClass = "197th_SW_Epic";
	};
	
	class SET
	{
		name	= "Starkiller Epic Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-starkiller-epic-theme-two-steps-from-hell-style.ogg", db + 0, 1.0 };
		duration = "259";
		musicClass = "197th_SW_Epic";
	};
	
	class TKDOTF
	{
		name	= "The Kraken & Duel of The Fates";
		sound[]	= { "197th_Music\Data\music_sw\the-kraken-duel-of-the-fates-epic-version-pirates-of-the-caribbean-x-star-wars-mashup.ogg", db + 0, 1.0 };
		duration = "256";
		musicClass = "197th_SW_Epic";
	};
	
	class TBOE
	{
		name	= "The Battlefield of Eternity";
		sound[]	= { "197th_Music\Data\music_40k\the-battlefield-of-eternity-sisters-of-silence-ambient-music.ogg", db + 0, 1.0 };
		duration = "258";
		musicClass = "197th_40K_Calm";
	};
	
	class TCW
	{
		name	= "The Chaos Wastes";
		sound[]	= { "197th_Music\Data\music_40k\the-chaos-wastes-chaos-ambient-music.ogg", db + 0, 1.0 };
		duration = "127";
		musicClass = "197th_40K_Calm";
	};
	
	class AUW
	{
		name	= "An Uncertain World";
		sound[]	= { "197th_Music\Data\music_40k\an-uncertain-world-ambient-music-for-warhammer-40000.ogg", db + 0, 1.0 };
		duration = "417";
		musicClass = "197th_40K_Calm";
	};
	
	class SAS
	{
		name	= "Shivering Soldier";
		sound[]	= { "197th_Music\Data\music_40k\shivering-soldier-death-korps-of-krieg-ambient-music.ogg", db + 0, 1.0 };
		duration = "172";
		musicClass = "197th_40K_Calm";
	};
	
	class DSA
	{
		name	= "Darker Skies Ahead";
		sound[]	= { "197th_Music\Data\music_40k\darker-skies-ahead-black-templars-combat-music.ogg", db + 0, 1.0 };
		duration = "335";
		musicClass = "197th_40K_Epic";
	};
	
	class AWM
	{
		name	= "Attack Without Mercy";
		sound[]	= { "197th_Music\Data\music_40k\attack-without-mercy-combat-music-for-warhammer-40000.ogg", db + 0, 1.0 };
		duration = "189";
		musicClass = "197th_40K_Epic";
	};
	
	class JFT
	{
		name	= "Jango Fett Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-jango-fett-theme-epic-mandalorian-version-bounty-hunter-theme.ogg", db + 0, 1.0 };
		duration = "333";
		musicClass = "197th_SW_Epic";
	};
	
	class MWC
	{
		name	= "Mandalorian War Chant (Gra'tua Cuun x Ka'rta Tor)";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-mandalorian-war-chant-gratua-cuun-x-karta-tor-epic-version.ogg", db + 0, 1.0 };
		duration = "202";
		musicClass = "197th_SW_Epic";
	};
	
	class DNT
	{
		name	= "Darth Nihilus Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-darth-nihilus-theme-epic-horror-version-kotor-soundtrack.ogg", db + 0, 1.0 };
		duration = "262";
		musicClass = "197th_SW_Dark";
	};
	
	class MWSAVA
	{
		name	= "Mandalorian War Song x Vode An";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-mandalorian-war-song-x-vode-an-epic-version-rage-of-shadow-warriors.ogg", db + 0, 1.0 };
		duration = "192";
		musicClass = "197th_SW_Epic";
	};
	
	class TROSPC
	{
		name	= "[Piano Cover] The Rise of Skywalker";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-rise-of-skywalker-final-trailer-piano-cover-sheets.ogg", db + 0, 1.0 };
		duration = "142";
		musicClass = "197th_SW_Special";
	};
	
	class ATPC
	{
		name	= "[Piano Cover] Ahsoka' Theme";
		sound[]	= { "197th_Music\Data\music_sw\clone-wars-ahsoka-theme-star-wars-piano-cover.ogg", db + 0, 1.0 };
		duration = "213";
		musicClass = "197th_SW_Special";
	};
	
	class GGSPC
	{
		name	= "[Piano Cover] General Grievous Suite";
		sound[]	= { "197th_Music\Data\music_sw\general-grievous-suite-star-wars-piano-cover.ogg", db + 0, 1.0 };
		duration = "180";
		musicClass = "197th_SW_Special";
	};
	
	class JTMDAMMV
	{
		name	= "Jedi Temple March x Droid Army March MANDALORIAN VERSION";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-jedi-temple-march-x-droid-army-march-epic-mandalorian-version.ogg", db + 0, 1.0 };
		duration = "191";
		musicClass = "197th_SW_Epic";
	};
	
	class IMDPTS
	{
		name	= "Imperial March (David Prowse Tribute Soundtrack)";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-imperial-march-sad-emotional-version-david-prowse-tribute-soundtrack.ogg", db + 0, 1.0 };
		duration = "215";
		musicClass = "197th_SW_Sad";
	};
	
	class ATTMV
	{
		name	= "Ahsoka Tano Theme MANDALORIAN VERSION";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-ahsoka-tano-theme-epic-mandalorian-version.ogg", db + 0, 1.0 };
		duration = "299";
		musicClass = "197th_SW_Hope";
	};
	
	class O66TPC
	{
		name	= "[Piano Cover] Order 66 theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-clones-theme-order-66-piano-cover.ogg", db + 0, 1.0 };
		duration = "257";
		musicClass = "197th_SW_Special";
	};
	
	class IMACOTBC
	{
		name	= "[CHRISTMAS] Imperial March x Carol of the Bells";
		sound[]	= { "197th_Music\Data\music_sw\imperial-march-carol-of-the-bells-epic-star-wars-christmas-mix.ogg", db + 0, 1.0 };
		duration = "179";
		musicClass = "197th_SW_Special";
	};
	
	class TMTACOTBC
	{
		name	= "[CHRISTMAS] The Mandalorian Theme x Carol of The Bells";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-mandalorian-theme-x-carol-of-the-bells-epic-christmas-mix.ogg", db + 0, 1.0 };
		duration = "321";
		musicClass = "197th_SW_Special";
	};
	
	class TBBTMABBT
	{
		name	= "The Bad Batch Trailer Music x Bad Batch Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-bad-batch-trailer-music-x-bad-batch-theme-epic-version.ogg", db + 0, 1.0 };
		duration = "212";
		musicClass = "197th_SW_Epic";
	};
	
	class BFTTBOBF
	{
		name	= "Boba Fett Theme | The Book of Boba Fett";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-boba-fett-theme-the-book-of-boba-fett-extended-soundtrack.ogg", db + 0, 1.0 };
		duration = "271";
		musicClass = "197th_SW_Epic";
	};
	
	class LSTAFAFT
	{
		name	= "Luke Skywalker Theme (A Friend x Force Theme)";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-luke-skywalker-theme-a-friend-x-force-theme-epic-version.ogg", db + 0, 1.0 };
		duration = "313";
		musicClass = "197th_SW_Epic";
	};
	
	class DTTAIM
	{
		name	= "Dark Trooper Theme x Imperial March";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-dark-trooper-theme-x-imperial-march-epic-version-moff-gideon-theme.ogg", db + 0, 1.0 };
		duration = "267";
		musicClass = "197th_SW_Dark";
	};
	
	class VABBT
	{
		name	= "Vode An x Bad Batch Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-vode-an-x-bad-batch-theme-epic-version-epic-republic-commando-mix.ogg", db + 0, 1.0 };
		duration = "140";
		musicClass = "197th_SW_Epic";
	};
	
	class TMALSPC
	{
		name	= "[Piano Cover] The Mandalorian x Luke Skywalker";
		sound[]	= { "197th_Music\Data\music_sw\the-mandalorian-x-luke-skywalker-piano-cover.ogg", db + 0, 1.0 };
		duration = "227";
		musicClass = "197th_SW_Special";
	};
		
	class SWAAMPC
	{
		name	= "[Piano Cover] Star Wars x Avengers Mashup";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-v-avengers-mashup-piano-cover.ogg", db + 0, 1.0 };
		duration = "170";
		musicClass = "197th_SW_Special";
	};
	
	class KST
	{
		name	= "Kamino Suite Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-kamino-suite-theme.ogg", db + 0, 1.0 };
		duration = "313";
		musicClass = "197th_SW_Calme";
	};
	
	class NST
	{
		name	= "Naboo Suite Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-naboo-suite-theme.ogg", db + 0, 1.0 };
		duration = "204";
		musicClass = "197th_SW_Calme";
	};
	
	class DRS
	{
		name	= "Darth Revan Suite";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-darth-revan-suite-epic-version-knights-of-the-old-republic.ogg", db + 0, 1.0 };
		duration = "350";
		musicClass = "197th_SW_Epic";
	};
	
	class VTDVT
	{
		name	= "Valkorion Theme (Darth Vitiate/Tenebrae)";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-valkorion-theme-darth-vitiatetenebrae-epic-version-knights-of-the-fallen-empire.ogg", db + 0, 1.0 };
		duration = "352";
		musicClass = "197th_SW_Dark";
	};
	
	class GATTPC
	{
		name	= "[Piano Cover] Grand Admiral Thrawn Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-grand-admiral-thrawn-theme-piano-cover.ogg", db + 0, 1.0 };
		duration = "195";
		musicClass = "197th_SW_Special";
	};
	
	class SDRT
	{
		name	= "[SAMURAI] Darth Revan Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-darth-revan-theme-epic-samurai-version.ogg", db + 0, 1.0 };
		duration = "318";
		musicClass = "197th_SW_Special";
	};
	
	class TBBTACTAVA
	{
		name	= "The Bad Batch Theme x Clones theme x Vode An";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-bad-batch-theme-epic-suite-version-clones-theme-x-vode-an.ogg", db + 0, 1.0 };
		duration = "248";
		musicClass = "197th_SW_Epic";
	};
	
	class LTCTVARVAM
	{
		name	= "[Lofi] The Clones Theme, Vode An, Republic Clone Army March";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-lofi-hiphop-mix-the-clones-theme-vode-an-republic-clone-army-march.ogg", db + 0, 1.0 };
		duration = "1800";
		musicClass = "197th_SW_Wait";
	};
	
	class LATABTD
	{
		name	= "[Lofi] Ahsoka's Theme x Burying The Dead";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-lofi-chill-mix-ahsokas-theme-x-burying-the-dead.ogg", db + 0, 1.0 };
		duration = "1801";
		musicClass = "197th_SW_Wait";
	};
	
	class LRTFTMT
	{
		name	= "[Lofi] Rey's Theme, Force Theme, & Main Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-lofi-chill-mix-reys-theme-force-theme-main-theme.ogg", db + 0, 1.0 };
		duration = "1800";
		musicClass = "197th_SW_Wait";
	};
	
	class LIMADOTF
	{
		name	= "[Lofi] Imperial March x Duel of The Fates";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-lofi-chill-mix-imperial-march-x-duel-of-the-fates.ogg", db + 0, 1.0 };
		duration = "1801";
		musicClass = "197th_SW_Wait";
	};
	
	class LDAM
	{
		name	= "[Lofi] Droid Army March";
		sound[]	= { "197th_Music\Data\music_sw\droid-army-march-star-wars-lofi.ogg", db + 0, 1.0 };
		duration = "131";
		musicClass = "197th_SW_Wait";
	};
	
	class LTMT
	{
		name	= "[Lofi] The Mandalorian Theme";
		sound[]	= { "197th_Music\Data\music_sw\the-mandalorian-theme-lofi-hiphop-mix-star-wars-lofi.ogg", db + 0, 1.0 };
		duration = "1800";
		musicClass = "197th_SW_Wait";
	};
	
	class STCT
	{
		name	= "[SAMURAI] The Clones Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-clones-theme-epic-samurai-version.ogg", db + 0, 1.0 };
		duration = "240";
		musicClass = "197th_SW_Special";
	};
	
	class LTADOTFAIM
	{
		name	= "LOKI Theme x Duel of The Fates x Imperial March (Star Wars X Loki Mix)";
		sound[]	= { "197th_Music\Data\music_sw\loki-theme-x-duel-of-the-fates-x-imperial-march-epic-glorious-version-star-wars-x-loki-mix.ogg", db + 0, 1.0 };
		duration = "355";
		musicClass = "197th_SW_Epic";
	};
	
	class CBVHT
	{
		name	= "Cad Bane vs Hunter Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-clones-theme-epic-samurai-version.ogg", db + 0, 1.0 };
		duration = "147";
		musicClass = "197th_SW_Epic";
	};
	
	class CTATBBT
	{
		name	= "Crosshair Theme x The Bad Batch Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-crosshair-theme-x-the-bad-batch-theme-epic-dark-version.ogg", db + 0, 1.0 };
		duration = "321";
		musicClass = "197th_SW_Epic";
	};
	
	class VTM
	{
		name	= "Visions Trailer Music";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-visions-trailer-music-epic-version-feat-duel-of-the-fates-x-imperial-march.ogg", db + 0, 1.0 };
		duration = "255";
		musicClass = "197th_SW_Epic";
	};
	
	class SWVTNJT
	{
		name	= "SW Visions : The Ninth Jedi Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-visions-the-ninth-jedi-theme-epic-suite-feat-reys-theme.ogg", db + 0, 1.0 };
		duration = "171";
		musicClass = "197th_SW_Calme";
	};
	
	class SWVTVBS
	{
		name	= "SW Visions : The Village Bride Soundtrack";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-visions-the-village-bride-soundtrack-epic-cinematic-version.ogg", db + 0, 1.0 };
		duration = "178";
		musicClass = "197th_SW_Hope";
	};
	
	class ETM
	{
		name	= "Eclipse Trailer Music";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-eclipse-trailer-music-epic-version-feat-duel-of-the-fates-x-sardaukar-chant.ogg", db + 0, 1.0 };
		duration = "224";
		musicClass = "197th_SW_Epic";
	};
	
	class BFTASE
	{
		name	= "Boba Fett Theme x Sugaan Essena";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-boba-fett-theme-x-sugaan-essena-epic-version-the-book-of-boba-fett.ogg", db + 0, 1.0 };
		duration = "378";
		musicClass = "197th_SW_Epic";
	};
	
	class TBOBFT
	{
		name	= "The Book of Boba Fett Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-book-of-boba-fett-theme-epic-orchestral-version.ogg", db + 0, 1.0 };
		duration = "159";
		musicClass = "197th_SW_Epic";
	};
	
	class TBOBFAMT
	{
		name	= "The Book of Boba Fett x Mandalorian Theme";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-the-book-of-boba-fett-x-mandalorian-theme-epic-version-episode-5-soundtrack.ogg", db + 0, 1.0 };
		duration = "332";
		musicClass = "197th_SW_Epic";
	};
	
	class HUFUD
	{
		name	= "U.N.S.C Forward Unto Dawn";
		sound[]	= { "197th_Music\Data\music_halo\halo-3-soundtrack-the-ark-unsc-forward-unto-dawn.ogg", db + 0, 1.0 };
		duration = "106";
		musicClass = "197th_Halo_Epic";
	};
	
	class HO
	{
		name	= "Overcome";
		sound[]	= { "197th_Music\Data\music_halo\halo-3-soundtrack-the-ark-overcome.ogg", db + 0, 1.0 };
		duration = "136";
		musicClass = "197th_Halo_Calm";
	};
	
	class HTER
	{
		name	= "Terminals";
		sound[]	= { "197th_Music\Data\music_halo\halo-3-soundtrack-the-ark-terminals.ogg", db + 0, 1.0 };
		duration = "124";
		musicClass = "197th_Halo_Calm";
	};
	
	class HEC
	{
		name	= "Edge Closer";
		sound[]	= { "197th_Music\Data\music_halo\halo-3-soundtrack-the-ark-edge-closer.ogg", db + 0, 1.0 };
		duration = "80";
		musicClass = "197th_Halo_Calm";
	};
	
	class HFO
	{
		name	= "Farthest Outpost";
		sound[]	= { "197th_Music\Data\music_halo\halo-3-soundtrack-the-ark-farthest-outpost.ogg", db + 0, 1.0 };
		duration = "139";
		musicClass = "197th_Halo_Calm";
	};
	
	class HFWR
	{
		name	= "Halo Finale (Warthog Run)";
		sound[]	= { "197th_Music\Data\music_halo\halo-3-soundtrack-halo-halo-finale.ogg", db + 0, 1.0 };
		duration = "388";
		musicClass = "197th_Halo_Epic";
	};
	
	class HPP
	{
		name	= "Price Paid";
		sound[]	= { "197th_Music\Data\music_halo\halo-3-soundtrack-ending-price-paid.ogg", db + 0, 1.0 };
		duration = "354";
		musicClass = "197th_Halo_Calm";
	};
	
	class OWKTWIM
	{
		name	= "Obi-Wan Kenobi Trailer with Imperial March";
		sound[]	= { "197th_Music\Data\music_sw\star-wars-obi-wan-kenobi-trailer-music-epic-version-with-imperial-march.ogg", db + 0, 1.0 };
		duration = "244";
		musicClass = "197th_SW_Epic";
	};
	
	class OWKT
	{
		name	= "Obi-Wan Kenobi Theme";
		sound[]	= { "197th_Music\Data\music_sw\Star_Wars_Obi-Wan_Kenobi_Theme_EPIC_VERSION.ogg", db + 0, 1.0 };
		duration = "164";
		musicClass = "197th_SW_Epic";
	};
	
	class TBBS2T
	{
		name	= "The Bad Batch Season 2 Trailer";
		sound[]	= { "197th_Music\Data\music_sw\Star Wars The Bad Batch  Season 2 Trailer Music (EPIC EXTENDED VERSION).ogg", db + 0, 1.0 };
		duration = "210";
		musicClass = "197th_SW_Epic";
	};
	
	class DOTFRV2
	{
		name	= "Duel of The Fates (Remastered V2)";
		sound[]	= { "197th_Music\Data\music_sw\Star Wars Duel of The Fates  EPIC VERSION (Remastered V2).ogg", db + 0, 1.0 };
		duration = "365";
		musicClass = "197th_SW_Epic";
	};
	
	class SWAAOTEM2
	{
		name	= "Star Wars x Attack on Titan EPIC MASHUP 2";
		sound[]	= { "197th_Music\Data\music_sw\Star Wars x Attack on Titan EPIC MASHUP 2  Imperial March x Ashes on The Fire (Kenobi).ogg", db + 0, 1.0 };
		duration = "200";
		musicClass = "197th_SW_Epic";
	};
	
	class SWAAOTEM
	{
		name	= "Star Wars x Attack on Titan EPIC MASHUP";
		sound[]	= { "197th_Music\Data\music_sw\Star Wars x Attack on Titan EPIC MASHUP.ogg", db + 0, 1.0 };
		duration = "219";
		musicClass = "197th_SW_Epic";
	};
	
	class OWVDVT
	{
		name	= "Obi-Wan vs Darth Vader Theme";
		sound[]	= { "197th_Music\Data\music_sw\Obi-Wan vs Darth Vader Theme  EPIC VERSION (feat. Battle of The Heroes).ogg", db + 0, 1.0 };
		duration = "250";
		musicClass = "197th_SW_Epic";
	};
	
};