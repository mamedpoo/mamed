#include <iostream>
#include <string>
using namespace std;

class ban{
	public:
		void bahan(string karet);
		string merk;
		double harga;
};
int main () {
	ban tubless;
	
	tubless.merk ="yokohama";
	tubless.harga = 13900000;
	
	cout<<"merk yang dipakai "<< (tubless.merk)<<endl;
	cout<<"Harga modal nya "<< (tubless.harga)<<endl;
	
	tubless.bahan("karet nya terbuat dari gatah");
}
void ban::bahan(string karet){
	cout<<"karet yang digunakan sangat karet asli "<<karet<<" kan kerenn gan dijamin awet dan karet asli gatah!!!"<<endl;
}
	
