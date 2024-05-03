using namespace std;

string tutorialline[] = {
	// 0
	"Aku akan menjelaskanmu beberapa hal\n",
	// 1
	"Ini adalah indikator tingkat kesulitan\n",
	// 2
	"Ada 3 tingkat kesulitan di dalam game ini\n> Imperfect\n> Ignorance\n> Life\n",
	// 3
	"Ini adalah indikator Archive\n",
	// 4
	"Selalu ingat nama Archive ini,\nKarena hanya inilah penyelamatmu.\n",
	// 5
	"Ini adalah indikator Nama,\nDan akan berubah sesuai dengan siapa yang berbicara.\n",
	// 6
	"Game ini menggunakan Decision System.\n",
	// 7
	"Aku menyediakan 2 pilihan untukmu.\n",
	// 8
	"Pilihlah salah satu, lalu ketikan pilihanmu disini.\n",
	// 9
	"Sekarang, pilihlah Sapphire\n",
	// 10
	"Bukankah aku menuruhmu untuk memilih Sapphire ?\n",
	// 11
	"Selamat Datang di TiME\n"
};

string tutorialdecision[][2] = {
	{
		"Diamond"
	}, {
		"Sapphire"
	}
};

string storydecision[][10] = {
	{
		// Pride Superbia Forgiveness
		// 0 0
		"Ya",

		// Greed Avaritia Regret
		// 0 1
		"Abaikan",

		// Lust Luxuria Blood
		// 0 2
		"Hadap kebelakang",

		// Envy Invidia Death
		// 0 3
		"[ Shockwave ]",

		// Gluttony Gula Time
		// 0 4
		"Ya",

		// Wrath Ira Love
		// 0 5
		"Kembalikan elemenku",

		// Sloth Acedia Lies
		// 0 6
		"Keindahan"
	}, {
		// Pride Superbia Forgiveness
		// 1 0
		"Tidak",

		// Greed Avaritia Regret
		// 1 1
		"Tantang dia",

		// Lust Luxuria Blood
		// 1 2
		"[ Divine Punishment ]",

		// Envy Invidia Death
		// 1 3
		"[ Ensnare ]",

		// Gluttony Gula Time
		// 1 4
		"Tidak",

		// Wrath Ira Love
		// 1 5
		"Berikan Sera kepadaku",

		// Sloth Acedia Lies
		// 1 6
		"Kebohongan"
	}
};

string storyline[] = {
		// Pride Superbia Forgiveness
		// 0
		"Apakah kau menginginkan kekuatan?\n",

		// Greed Avaritia Regret
		// 1
		"Seperti itu saja kau tidak tahu?\n",
		// 2
		"Apa masalahmu, Mike?\n",
		// 3
		"Tidak, aku hanya heran mengapa kau sangat bodoh.\n",

		// Lust Luxuria Blood
		// 4
		"*Menginjak kepala Mike\n",
		// 5
		"Aku tak peduli seberapa pintar dirimu...\n",
		// 6
		"Atau setebal apa [ Barrier ] mu...\n",
		// 7
		"Tunggu aku di rumah sakit...\n",
		// 8
		"[ Shockwa- ]\n",
		// 9
		"Tunggu!!!\n",

		// Envy Invidia Death
		// 10
		"*Mendekat ke Sera\nSera,\nApakah kau tidak apa-apa?\n",
		// 11
		"Akhirnya kamu bisa tenang.\n",
		// 12
		"Maaf, aku tidak tahu jika itu adalah dirimu.\n",
		// 13
		"Sepertinya kaulah yang harus ke rumah sakit.\n",
		// 14
		"Bisakah kau diam Mike?\n",
		// 15
		"Cobalah.\n",

		// Gluttony Gula Time
		// 16
		"Akan kupanggilkan petugas kesehatan.\n",
		// 17
		"Jangan ada yang mendekat!\n",
		// 18
		"*Menggendong Sera\n*Menatap ke jendela\n",
		// 19
		", ini lantai 3.\n",
		// 20
		"Lalu?\n",
		// 21
		"*Berlari lalu melompat keluar jendela\n",
		// 22
		"Nature Shield : [ Wind ]\n",
		// 23
		"Bertahanlah, Sera.\n",
		// 24
		"Apa kau memerlukan bantuanku?\n",

		// Wrath Ira Love
		// 25
		"Tolong aku.\n",
		// 26
		"Bawa dia ke ruangan.\n",
		// 27
		"Sekarang tunggulah diluar.\n",
		// 28
		"Apa maksudmu?\n",
		// 29
		"Ini bukan waktunya untuk berdebat...\nKeluarlah!\n",
		// 30
		"Apakah kau sudah memutuskan apa yang kau inginkan?\n",

		// Sloth Acedia Lies
		// 31
		"Pada akhirnya, dunia ini penuh dengan?\n"
};

string branchstory[][15] = {
	{
		// Pride Superbia Forgiveness
		// 0 0
		"Pilihan yang bijak.\n",

		// Greed Avaritia Regret
		// 0 1
		"Aku tak peduli.\n",
		// 0 2
		"Apakah kau akan terus begini?\n",

		// Lust Luxuria Blood
		// 0 3
		"Sera, bagaimana kau bisa masuk ke [ Barrier ]?\n",
		// 0 4
		"Dari dulu inilah kelemahanmu...\n",
		// 0 5
		"Kau meremehkan orang lain.\n",
		// 0 6
		"[ Judgement ]\n",

		// Envy Invidia Death
		// 0 7
		"Tunggu, apa kau gila?\n",
		// 0 8
		"Selamat tinggal, Mike.\n",

		// Gluttony Gula Time
		// 0 9
		"Berikan kembali elemenku!\n",
		// 0 10
		"Baiklah.\n",
		// 0 11
		"[ Darkness ]\n",

		// Wrath Ira Love
		// 0 12
		"Kembalikan [ Darkness ] ku.\n",
		// 0 13
		"Kau yakin itu yang kau inginkan?\n",

		// Sloth Acedia Lies
		// 0 14
		"...\n"
	}, {
		// Pride Superbia Forgiveness
		// 1 0
		"Pilihan yang bijak.\n",

		// Greed Avaritia Regret
		// 1 1
		"*Berdiri, berlari menuju Mike\n",
		// 1 2
		"[ BARRIER ]!!!\n",
		// 1 3
		"[ Fearful Massacre ]\n",

		// Lust Luxuria Blood
		// 1 4
		"Menyingkirlah.\n",
		// 1 5
		"Arghhh??!!\n",

		// Envy Invidia Death
		// 1 6
		"Akan kuurus kau nanti.\n",

		// Gluttony Gula Time
		// 1 7
		"Kumohon, sampailah...\n[ Free Spirit ]",
		// 1 8
		"*3 Menit kemudian\n",
		// 1 9
		"DOKTER!!!\n",
		// 1 10
		"Aku tidak tuli, ",
		// 1 11
		".\n",

		// Wrath Ira Love
		// 1 12
		"Kau yakin?\nJika Sera menjadi milikmu,\nMaka kau juga menjadi miliknya.\n",
		// 1 13
		"Aku terima itu.\n",\

		// Sloth Acedia Lies
		// 1 14
		"...\n"
	}
};

string trueending[] = {
	// 0
	"*Membuka mata\n",
	// 1
	"Hai, Sera.\n",
	// 2
	"Apa aku membuatmu menunggu?\n",
	// 3
	"Tentu saja.\n",
	// 4
	"kalau begitu, aku minta maaf...\n",
	// 5
	"Mengapa kau meminta maaf?\n",
	// 6
	"Dasar aneh."
};