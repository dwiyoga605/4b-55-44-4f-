<?php
	#mendefinisikan kelas abstrak
	# enkaspsulasi
	abstract class Geometri{
		# mendefinisikan metode abstrak 
		abstract public function luas();
		abstract public function keliling();
	}

	# turunan (inheritance) kelas Geometri
	# enkapsulasi
	class segiEmpat extends Geometri{
		private $panjang;
		private $lebar;
		public function __construct($height, $width){
			$this->panjang = $height;
			$this->lebar = $width;
		}

		# implementasi metode luas milik kelas induk (kelas Geometri)
		public function luas(){
			return $this->panjang*$this->lebar;
		}

		# implementasi metode keliling milik kelas induk (kelas Geometri)
		public function keliling(){
			return ($this->panjang + $this->lebar)*2;
		}
	}

	# turunan (inheritance) kelas Geometri
	# enkapsulasi
	class Lingkaran extends Geometri{
		const PI = 3.14;
		private $radius;
		public function __construct($jariJari){
			$this->radius = $jariJari;
		}

		# implementasi metode luas milik kelas induk (kelas Geometri)
		public function luas(){
			return self::PI*pow($this->radius, 2);
		}

		# implementasi metode keliling milik kelas induk (kelas Geometri)
		public function keliling(){
			return 2*self::PI*$this->radius;
		}
	}

	# variabel $objek akan bisa bertransformasi menjadi banyak bentuk (polymorphism), bisa menjadi segiEmpat atau lingkaran
	function printLuasKeliling(Geometri $objek, $namaObjek){
		echo "Luas ".$namaObjek.": ".$objek->luas()."<br>";
		echo "Keliling ".$namaObjek.": ".$objek->keliling()."<br>";
		echo "<br>";
	}

	# membuat objek segiEmpat
	$segiEmpat = new segiEmpat(10,5);
	# polymorphism (Geometri -> segiEmpat)
	printLuasKeliling($segiEmpat, "Segi Empat");

	# membuat objek lingkaran
	$lingkaran = new Lingkaran(5);
	# polymorphism (Geometri -> lingkaran)
	printLuasKeliling($lingkaran, "Lingkaran");
?>