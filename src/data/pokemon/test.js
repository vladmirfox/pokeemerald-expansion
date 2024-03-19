const fs = require('fs');

// Read the input file
const inputFile = 'species_info.h'; // Change this to the actual file name
const outputFile = inputFile; // Change this to the desired output file name

fs.readFile(inputFile, 'utf8', (err, data) => {
    if (err) {
        console.error(`Error reading file: ${err}`);
        return;
    }

    // Define the regex pattern to match the specified lines
    const pattern = /(\.baseHP\s*=\s*)(\d+),\s*(\.baseAttack\s*=\s*)(\d+),\s*(\.baseDefense\s*=\s*)(\d+),\s*(\.baseSpeed\s*=\s*)(\d+),\s*(\.baseSpAttack\s*=\s*)(\d+),\s*(\.baseSpDefense\s*=\s*)(\d+)/g;

    // Replace the numbers with random ones between 1 and 999
    // const replacedData = data.replace(pattern, (match, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12) => {
    // return `${p1}${1},${p3}${1},${p5}${1},${p7}${1},${p9}${1},${p11}${1}`;
    // return `${p1}${getRandomNumber()},${p3}${getRandomNumber()},${p5}${getRandomNumber()},${p7}${getRandomNumber()},${p9}${getRandomNumber()},${p11}${getRandomNumber()}`;
    // });

    // Split the file content into lines
    // const inputLines = replacedData.split('\n');
    const inputLines = data.split('\n');

    // Replace abilities
    const outputLines = replaceAbilities(inputLines);

    // Write the result to the output file
    fs.writeFile(outputFile, outputLines.join('\n'), 'utf8', (err) => {
        if (err) {
            console.error(`Error writing to file: ${err}`);
        } else {
            console.log(`Replacement successful. Output written to ${outputFile}`);
        }
    });

});

// Function to generate a random number between 1 and 255
function getRandomNumber() {
    return Math.floor(Math.random() * 999) + 1;
}



const abilitiesList = [
    'ABILITY_STENCH',
    'ABILITY_DRIZZLE',
    'ABILITY_SPEED_BOOST',
    'ABILITY_BATTLE_ARMOR',
    'ABILITY_STURDY',
    'ABILITY_DAMP',
    'ABILITY_LIMBER',
    'ABILITY_SAND_VEIL',
    'ABILITY_STATIC',
    'ABILITY_VOLT_ABSORB',
    'ABILITY_WATER_ABSORB',
    'ABILITY_OBLIVIOUS',
    'ABILITY_CLOUD_NINE',
    'ABILITY_COMPOUND_EYES',
    'ABILITY_INSOMNIA',
    'ABILITY_COLOR_CHANGE',
    'ABILITY_IMMUNITY',
    'ABILITY_FLASH_FIRE',
    'ABILITY_SHIELD_DUST',
    'ABILITY_OWN_TEMPO',
    'ABILITY_SUCTION_CUPS',
    'ABILITY_INTIMIDATE',
    'ABILITY_SHADOW_TAG',
    'ABILITY_ROUGH_SKIN',
    'ABILITY_WONDER_GUARD',
    'ABILITY_LEVITATE',
    'ABILITY_EFFECT_SPORE',
    'ABILITY_SYNCHRONIZE',
    'ABILITY_CLEAR_BODY',
    'ABILITY_NATURAL_CURE',
    'ABILITY_LIGHTNING_ROD',
    'ABILITY_SERENE_GRACE',
    'ABILITY_SWIFT_SWIM',
    'ABILITY_CHLOROPHYLL',
    'ABILITY_ILLUMINATE',
    'ABILITY_TRACE',
    'ABILITY_HUGE_POWER',
    'ABILITY_POISON_POINT',
    'ABILITY_INNER_FOCUS',
    'ABILITY_MAGMA_ARMOR',
    'ABILITY_WATER_VEIL',
    'ABILITY_MAGNET_PULL',
    'ABILITY_SOUNDPROOF',
    'ABILITY_RAIN_DISH',
    'ABILITY_SAND_STREAM',
    'ABILITY_PRESSURE',
    'ABILITY_THICK_FAT',
    'ABILITY_EARLY_BIRD',
    'ABILITY_FLAME_BODY',
    'ABILITY_RUN_AWAY',
    'ABILITY_KEEN_EYE',
    'ABILITY_HYPER_CUTTER',
    'ABILITY_PICKUP',
    'ABILITY_TRUANT',
    'ABILITY_HUSTLE',
    'ABILITY_CUTE_CHARM',
    'ABILITY_PLUS',
    'ABILITY_MINUS',
    'ABILITY_FORECAST',
    'ABILITY_STICKY_HOLD',
    'ABILITY_SHED_SKIN',
    'ABILITY_GUTS',
    'ABILITY_MARVEL_SCALE',
    'ABILITY_LIQUID_OOZE',
    'ABILITY_OVERGROW',
    'ABILITY_BLAZE',
    'ABILITY_TORRENT',
    'ABILITY_SWARM',
    'ABILITY_ROCK_HEAD',
    'ABILITY_DROUGHT',
    'ABILITY_ARENA_TRAP',
    'ABILITY_VITAL_SPIRIT',
    'ABILITY_WHITE_SMOKE',
    'ABILITY_PURE_POWER',
    'ABILITY_SHELL_ARMOR',
    'ABILITY_CACOPHONY',
    'ABILITY_AIR_LOCK'
];

const speciesList = [
    'SPECIES_BULBASAUR',
    'SPECIES_IVYSAUR',
    'SPECIES_VENUSAUR',
    'SPECIES_CHARMANDER',
    'SPECIES_CHARMELEON',
    'SPECIES_CHARIZARD',
    'SPECIES_SQUIRTLE',
    'SPECIES_WARTORTLE',
    'SPECIES_BLASTOISE',
    'SPECIES_CATERPIE',
    'SPECIES_METAPOD',
    'SPECIES_BUTTERFREE',
    'SPECIES_WEEDLE',
    'SPECIES_KAKUNA',
    'SPECIES_BEEDRILL',
    'SPECIES_PIDGEY',
    'SPECIES_PIDGEOTTO',
    'SPECIES_PIDGEOT',
    'SPECIES_RATTATA',
    'SPECIES_RATICATE',
    'SPECIES_SPEAROW',
    'SPECIES_FEAROW',
    'SPECIES_EKANS',
    'SPECIES_ARBOK',
    'SPECIES_PIKACHU',
    'SPECIES_RAICHU',
    'SPECIES_SANDSHREW',
    'SPECIES_SANDSLASH',
    'SPECIES_NIDORAN_F',
    'SPECIES_NIDORINA',
    'SPECIES_NIDOQUEEN',
    'SPECIES_NIDORAN_M',
    'SPECIES_NIDORINO',
    'SPECIES_NIDOKING',
    'SPECIES_CLEFAIRY',
    'SPECIES_CLEFABLE',
    'SPECIES_VULPIX',
    'SPECIES_NINETALES',
    'SPECIES_JIGGLYPUFF',
    'SPECIES_WIGGLYTUFF',
    'SPECIES_ZUBAT',
    'SPECIES_GOLBAT',
    'SPECIES_ODDISH',
    'SPECIES_GLOOM',
    'SPECIES_VILEPLUME',
    'SPECIES_PARAS',
    'SPECIES_PARASECT',
    'SPECIES_VENONAT',
    'SPECIES_VENOMOTH',
    'SPECIES_DIGLETT',
    'SPECIES_DUGTRIO',
    'SPECIES_MEOWTH',
    'SPECIES_PERSIAN',
    'SPECIES_PSYDUCK',
    'SPECIES_GOLDUCK',
    'SPECIES_MANKEY',
    'SPECIES_PRIMEAPE',
    'SPECIES_GROWLITHE',
    'SPECIES_ARCANINE',
    'SPECIES_POLIWAG',
    'SPECIES_POLIWHIRL',
    'SPECIES_POLIWRATH',
    'SPECIES_ABRA',
    'SPECIES_KADABRA',
    'SPECIES_ALAKAZAM',
    'SPECIES_MACHOP',
    'SPECIES_MACHOKE',
    'SPECIES_MACHAMP',
    'SPECIES_BELLSPROUT',
    'SPECIES_WEEPINBELL',
    'SPECIES_VICTREEBEL',
    'SPECIES_TENTACOOL',
    'SPECIES_TENTACRUEL',
    'SPECIES_GEODUDE',
    'SPECIES_GRAVELER',
    'SPECIES_GOLEM',
    'SPECIES_PONYTA',
    'SPECIES_RAPIDASH',
    'SPECIES_SLOWPOKE',
    'SPECIES_SLOWBRO',
    'SPECIES_MAGNEMITE',
    'SPECIES_MAGNETON',
    'SPECIES_FARFETCHD',
    'SPECIES_DODUO',
    'SPECIES_DODRIO',
    'SPECIES_SEEL',
    'SPECIES_DEWGONG',
    'SPECIES_GRIMER',
    'SPECIES_MUK',
    'SPECIES_SHELLDER',
    'SPECIES_CLOYSTER',
    'SPECIES_GASTLY',
    'SPECIES_HAUNTER',
    'SPECIES_GENGAR',
    'SPECIES_ONIX',
    'SPECIES_DROWZEE',
    'SPECIES_HYPNO',
    'SPECIES_KRABBY',
    'SPECIES_KINGLER',
    'SPECIES_VOLTORB',
    'SPECIES_ELECTRODE',
    'SPECIES_EXEGGCUTE',
    'SPECIES_EXEGGUTOR',
    'SPECIES_CUBONE',
    'SPECIES_MAROWAK',
    'SPECIES_HITMONLEE',
    'SPECIES_HITMONCHAN',
    'SPECIES_LICKITUNG',
    'SPECIES_KOFFING',
    'SPECIES_WEEZING',
    'SPECIES_RHYHORN',
    'SPECIES_RHYDON',
    'SPECIES_CHANSEY',
    'SPECIES_TANGELA',
    'SPECIES_KANGASKHAN',
    'SPECIES_HORSEA',
    'SPECIES_SEADRA',
    'SPECIES_GOLDEEN',
    'SPECIES_SEAKING',
    'SPECIES_STARYU',
    'SPECIES_STARMIE',
    'SPECIES_MR_MIME',
    'SPECIES_SCYTHER',
    'SPECIES_JYNX',
    'SPECIES_ELECTABUZZ',
    'SPECIES_MAGMAR',
    'SPECIES_PINSIR',
    'SPECIES_TAUROS',
    'SPECIES_MAGIKARP',
    'SPECIES_GYARADOS',
    'SPECIES_LAPRAS',
    'SPECIES_DITTO',
    'SPECIES_EEVEE',
    'SPECIES_VAPOREON',
    'SPECIES_JOLTEON',
    'SPECIES_FLAREON',
    'SPECIES_PORYGON',
    'SPECIES_OMANYTE',
    'SPECIES_OMASTAR',
    'SPECIES_KABUTO',
    'SPECIES_KABUTOPS',
    'SPECIES_AERODACTYL',
    'SPECIES_SNORLAX',
    'SPECIES_ARTICUNO',
    'SPECIES_ZAPDOS',
    'SPECIES_MOLTRES',
    'SPECIES_DRATINI',
    'SPECIES_DRAGONAIR',
    'SPECIES_DRAGONITE',
    'SPECIES_MEWTWO',
    'SPECIES_MEW',
    'SPECIES_CHIKORITA',
    'SPECIES_BAYLEEF',
    'SPECIES_MEGANIUM',
    'SPECIES_CYNDAQUIL',
    'SPECIES_QUILAVA',
    'SPECIES_TYPHLOSION',
    'SPECIES_TOTODILE',
    'SPECIES_CROCONAW',
    'SPECIES_FERALIGATR',
    'SPECIES_SENTRET',
    'SPECIES_FURRET',
    'SPECIES_HOOTHOOT',
    'SPECIES_NOCTOWL',
    'SPECIES_LEDYBA',
    'SPECIES_LEDIAN',
    'SPECIES_SPINARAK',
    'SPECIES_ARIADOS',
    'SPECIES_CROBAT',
    'SPECIES_CHINCHOU',
    'SPECIES_LANTURN',
    'SPECIES_PICHU',
    'SPECIES_CLEFFA',
    'SPECIES_IGGLYBUFF',
    'SPECIES_TOGEPI',
    'SPECIES_TOGETIC',
    'SPECIES_NATU',
    'SPECIES_XATU',
    'SPECIES_MAREEP',
    'SPECIES_FLAAFFY',
    'SPECIES_AMPHAROS',
    'SPECIES_BELLOSSOM',
    'SPECIES_MARILL',
    'SPECIES_AZUMARILL',
    'SPECIES_SUDOWOODO',
    'SPECIES_POLITOED',
    'SPECIES_HOPPIP',
    'SPECIES_SKIPLOOM',
    'SPECIES_JUMPLUFF',
    'SPECIES_AIPOM',
    'SPECIES_SUNKERN',
    'SPECIES_SUNFLORA',
    'SPECIES_YANMA',
    'SPECIES_WOOPER',
    'SPECIES_QUAGSIRE',
    'SPECIES_ESPEON',
    'SPECIES_UMBREON',
    'SPECIES_MURKROW',
    'SPECIES_SLOWKING',
    'SPECIES_MISDREAVUS',
    'SPECIES_UNOWN',
    'SPECIES_WOBBUFFET',
    'SPECIES_GIRAFARIG',
    'SPECIES_PINECO',
    'SPECIES_FORRETRESS',
    'SPECIES_DUNSPARCE',
    'SPECIES_GLIGAR',
    'SPECIES_STEELIX',
    'SPECIES_SNUBBULL',
    'SPECIES_GRANBULL',
    'SPECIES_QWILFISH',
    'SPECIES_SCIZOR',
    'SPECIES_SHUCKLE',
    'SPECIES_HERACROSS',
    'SPECIES_SNEASEL',
    'SPECIES_TEDDIURSA',
    'SPECIES_URSARING',
    'SPECIES_SLUGMA',
    'SPECIES_MAGCARGO',
    'SPECIES_SWINUB',
    'SPECIES_PILOSWINE',
    'SPECIES_CORSOLA',
    'SPECIES_REMORAID',
    'SPECIES_OCTILLERY',
    'SPECIES_DELIBIRD',
    'SPECIES_MANTINE',
    'SPECIES_SKARMORY',
    'SPECIES_HOUNDOUR',
    'SPECIES_HOUNDOOM',
    'SPECIES_KINGDRA',
    'SPECIES_PHANPY',
    'SPECIES_DONPHAN',
    'SPECIES_PORYGON2',
    'SPECIES_STANTLER',
    'SPECIES_SMEARGLE',
    'SPECIES_TYROGUE',
    'SPECIES_HITMONTOP',
    'SPECIES_SMOOCHUM',
    'SPECIES_ELEKID',
    'SPECIES_MAGBY',
    'SPECIES_MILTANK',
    'SPECIES_BLISSEY',
    'SPECIES_RAIKOU',
    'SPECIES_ENTEI',
    'SPECIES_SUICUNE',
    'SPECIES_LARVITAR',
    'SPECIES_PUPITAR',
    'SPECIES_TYRANITAR',
    'SPECIES_LUGIA',
    'SPECIES_HO_OH',
    'SPECIES_CELEBI',
    'SPECIES_OLD_UNOWN_B',
    'SPECIES_OLD_UNOWN_C',
    'SPECIES_OLD_UNOWN_D',
    'SPECIES_OLD_UNOWN_E',
    'SPECIES_OLD_UNOWN_F',
    'SPECIES_OLD_UNOWN_G',
    'SPECIES_OLD_UNOWN_H',
    'SPECIES_OLD_UNOWN_I',
    'SPECIES_OLD_UNOWN_J',
    'SPECIES_OLD_UNOWN_K',
    'SPECIES_OLD_UNOWN_L',
    'SPECIES_OLD_UNOWN_M',
    'SPECIES_OLD_UNOWN_N',
    'SPECIES_OLD_UNOWN_O',
    'SPECIES_OLD_UNOWN_P',
    'SPECIES_OLD_UNOWN_Q',
    'SPECIES_OLD_UNOWN_R',
    'SPECIES_OLD_UNOWN_S',
    'SPECIES_OLD_UNOWN_T',
    'SPECIES_OLD_UNOWN_U',
    'SPECIES_OLD_UNOWN_V',
    'SPECIES_OLD_UNOWN_W',
    'SPECIES_OLD_UNOWN_X',
    'SPECIES_OLD_UNOWN_Y',
    'SPECIES_OLD_UNOWN_Z',
    'SPECIES_TREECKO',
    'SPECIES_GROVYLE',
    'SPECIES_SCEPTILE',
    'SPECIES_TORCHIC',
    'SPECIES_COMBUSKEN',
    'SPECIES_BLAZIKEN',
    'SPECIES_MUDKIP',
    'SPECIES_MARSHTOMP',
    'SPECIES_SWAMPERT',
    'SPECIES_POOCHYENA',
    'SPECIES_MIGHTYENA',
    'SPECIES_ZIGZAGOON',
    'SPECIES_LINOONE',
    'SPECIES_WURMPLE',
    'SPECIES_SILCOON',
    'SPECIES_BEAUTIFLY',
    'SPECIES_CASCOON',
    'SPECIES_DUSTOX',
    'SPECIES_LOTAD',
    'SPECIES_LOMBRE',
    'SPECIES_LUDICOLO',
    'SPECIES_SEEDOT',
    'SPECIES_NUZLEAF',
    'SPECIES_SHIFTRY',
    'SPECIES_NINCADA',
    'SPECIES_NINJASK',
    'SPECIES_SHEDINJA',
    'SPECIES_TAILLOW',
    'SPECIES_SWELLOW',
    'SPECIES_SHROOMISH',
    'SPECIES_BRELOOM',
    'SPECIES_SPINDA',
    'SPECIES_WINGULL',
    'SPECIES_PELIPPER',
    'SPECIES_SURSKIT',
    'SPECIES_MASQUERAIN',
    'SPECIES_WAILMER',
    'SPECIES_WAILORD',
    'SPECIES_SKITTY',
    'SPECIES_DELCATTY',
    'SPECIES_KECLEON',
    'SPECIES_BALTOY',
    'SPECIES_CLAYDOL',
    'SPECIES_NOSEPASS',
    'SPECIES_TORKOAL',
    'SPECIES_SABLEYE',
    'SPECIES_BARBOACH',
    'SPECIES_WHISCASH',
    'SPECIES_LUVDISC',
    'SPECIES_CORPHISH',
    'SPECIES_CRAWDAUNT',
    'SPECIES_FEEBAS',
    'SPECIES_MILOTIC',
    'SPECIES_CARVANHA',
    'SPECIES_SHARPEDO',
    'SPECIES_TRAPINCH',
    'SPECIES_VIBRAVA',
    'SPECIES_FLYGON',
    'SPECIES_MAKUHITA',
    'SPECIES_HARIYAMA',
    'SPECIES_ELECTRIKE',
    'SPECIES_MANECTRIC',
    'SPECIES_NUMEL',
    'SPECIES_CAMERUPT',
    'SPECIES_SPHEAL',
    'SPECIES_SEALEO',
    'SPECIES_WALREIN',
    'SPECIES_CACNEA',
    'SPECIES_CACTURNE',
    'SPECIES_SNORUNT',
    'SPECIES_GLALIE',
    'SPECIES_LUNATONE',
    'SPECIES_SOLROCK',
    'SPECIES_AZURILL',
    'SPECIES_SPOINK',
    'SPECIES_GRUMPIG',
    'SPECIES_PLUSLE',
    'SPECIES_MINUN',
    'SPECIES_MAWILE',
    'SPECIES_MEDITITE',
    'SPECIES_MEDICHAM',
    'SPECIES_SWABLU',
    'SPECIES_ALTARIA',
    'SPECIES_WYNAUT',
    'SPECIES_DUSKULL',
    'SPECIES_DUSCLOPS',
    'SPECIES_ROSELIA',
    'SPECIES_SLAKOTH',
    'SPECIES_VIGOROTH',
    'SPECIES_SLAKING',
    'SPECIES_GULPIN',
    'SPECIES_SWALOT',
    'SPECIES_TROPIUS',
    'SPECIES_WHISMUR',
    'SPECIES_LOUDRED',
    'SPECIES_EXPLOUD',
    'SPECIES_CLAMPERL',
    'SPECIES_HUNTAIL',
    'SPECIES_GOREBYSS',
    'SPECIES_ABSOL',
    'SPECIES_SHUPPET',
    'SPECIES_BANETTE',
    'SPECIES_SEVIPER',
    'SPECIES_ZANGOOSE',
    'SPECIES_RELICANTH',
    'SPECIES_ARON',
    'SPECIES_LAIRON',
    'SPECIES_AGGRON',
    'SPECIES_CASTFORM',
    'SPECIES_VOLBEAT',
    'SPECIES_ILLUMISE',
    'SPECIES_LILEEP',
    'SPECIES_CRADILY',
    'SPECIES_ANORITH',
    'SPECIES_ARMALDO',
    'SPECIES_RALTS',
    'SPECIES_KIRLIA',
    'SPECIES_GARDEVOIR',
    'SPECIES_BAGON',
    'SPECIES_SHELGON',
    'SPECIES_SALAMENCE',
    'SPECIES_BELDUM',
    'SPECIES_METANG',
    'SPECIES_METAGROSS',
    'SPECIES_REGIROCK',
    'SPECIES_REGICE',
    'SPECIES_REGISTEEL',
    'SPECIES_KYOGRE',
    'SPECIES_GROUDON',
    'SPECIES_RAYQUAZA',
    'SPECIES_LATIAS',
    'SPECIES_LATIOS',
    'SPECIES_JIRACHI',
    'SPECIES_DEOXYS',
    'SPECIES_CHIMECHO',
]

// Function to get a random ability from the list
function getRandomAbility() {
    const randomIndex = Math.floor(Math.random() * abilitiesList.length);
    return abilitiesList[randomIndex];
}

// Function to replace lines with random abilities
function replaceAbilities(lines) {
    const outputLines = lines.map(line => {
        if (line.includes('.abilities')) {
            const randomAbility1 = getRandomAbility();
            return `.abilities = {${randomAbility1}, ABILITY_NONE},${line.includes("\\") ? "\\" : ""}`;
        } else {
            return line;
        }
    });
    return outputLines;
}

function getRandomPokemon() {
    const randomIndex = Math.floor(Math.random() * speciesList.length);
    return speciesList[randomIndex];
}

function shufflePokemon(lines) {
    const outputLines = lines.map(line => {
        if (line.includes('\"species\"')) {
            const randomPokemon = getRandomPokemon();
            let selectedPokemon = getRandomPokemon();
        while (selectedPokemon.includes("OLD")) {
            selectedPokemon = getRandomPokemon();
        }
            return `\"species\": \"${selectedPokemon}\"`;
        } else {
            return line;
        }
    });
    return outputLines;
}

// Read the input file
const randomisePokemonEncounters = '../wild_encounters.json'; // Change this to the actual file name


fs.readFile(randomisePokemonEncounters, 'utf8', (err, data) => {
    if (err) {
        console.error(`Error reading file: ${err}`);
        return;
    }


    // Split the file content into lines
    const inputLines = data.split('\n');

    // Replace abilities
    const outputLines = shufflePokemon(inputLines);

    // Write the result to the output file
    fs.writeFile(randomisePokemonEncounters, outputLines.join('\n'), 'utf8', (err) => {
        if (err) {
            console.error(`Error writing to file: ${err}`);
        } else {
            console.log(`Replacement successful. Output written to ${randomisePokemonEncounters}`);
        }
    });

});


const evolutionFile = 'evolution.h'; // Change this to the actual file name

fs.readFile(evolutionFile, 'utf8', (err, data) => {
    if (err) {
        console.error(`Error reading file: ${err}`);
        return;
    }

    const pattern = /\[SPECIES_[A-Z_]+\]\s*=\s*{{[^]+}},/g;


    let evolList = "";

    speciesList.forEach(species => {
        evolList += `[${species}] = {${generateRandomEvolutionList()}},\n`;
    });

    // Replace the numbers with random ones between 1 and 999
    const replacedData = data.replace(pattern, evolList);

    // Write the result to the output file
    fs.writeFile(evolutionFile, replacedData, 'utf8', (err) => {
        if (err) {
            console.error(`Error writing to file: ${err}`);
        } else {
            console.log(`Replacement successful. Output written to ${evolutionFile}`);
        }
    });

});

function generateRandomEvolutionList() {
    let levelList = "";
    for (let i = 1; i <= 100; i++) {
        let selectedPokemon = getRandomPokemon();
        while (selectedPokemon.includes("OLD")) {
            selectedPokemon = getRandomPokemon();
        }
        levelList += `{ EVO_LEVEL, ${i}, ${selectedPokemon}},`;
    }
    let selectedPokemon = getRandomPokemon();
    while (selectedPokemon.includes("OLD")) {
        selectedPokemon = getRandomPokemon();
    }
    levelList += `{EVO_ITEM, ITEM_RARE_CANDY, ${selectedPokemon}}`;
    return levelList;
}