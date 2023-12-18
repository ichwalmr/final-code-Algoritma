#include <iostream>
#include <cmath>
using namespace std;

void deret(int ary[],int pjg);
void List();
void mix(int ary[],int pjg, int min);
int loopPlus(int ary[], int pjg);
int max(int ary[], int pjg);
int min(int ary[], int pjg);

int main() {
	int pjg,list;
	cout << "Masukkan ukuran aray : ";cin>>pjg;
	int ary[pjg];
	cout << "Masukkan elemen elemen array:\n";
	for(int i=0;i<pjg;i++){
		cout << "Elemen ke-"<<i+1<<": ";cin>>ary[i];
	}	system("cls");
	cout << "Ukuran array lebih dari 0.\n";
	while(true){
		deret(ary, pjg);cout<<endl;
		List();cin>>list;
		switch(list){
			case 1:
				system("cls");
				cout <<"Jumlah elemen array: "<<loopPlus(ary,pjg)<<"\n";break;
			case 2:
				system("cls");
				cout <<"Nilai maksismum dalam array: "<<max(ary,pjg)<<"\n";break;
			case 3:
				system("cls");
				cout << "Nilai minimum dalam array: "<< min(ary, pjg)<<"\n";break;
			case 4:
				return 0;break;
			default:
				system("cls");
				cout <<"Pilihan tidak valid\n";break;
		}
	}
	return 0;
}
int loopPlus(int ary[], int pjg){
	int plus=0;
	for(int i=0;i<pjg;i++){
		plus+=ary[i];
	}return plus;
}
int max(int ary[], int pjg){
	int maksimum=0;
	for(int i=0;i<pjg;i++){
		if(maksimum<ary[i]){
			maksimum=ary[i];
		}
	}return maksimum;
}
int min(int ary[], int pjg){
	int minimum=ary[1];
	for(int i=0;i<pjg;i++){
		if(minimum>ary[i]){
			minimum=ary[i];
		}
	}
	return minimum;
}
 
void deret(int ary[],int pjg){
	cout << "Array: ";
	for(int i=0;i<pjg;i++){
		cout << ary[i]<< " ";
	}
}
void List(){
	cout<<"\nPilih operasi :\n 1: Jumlah Elemen\n 2: Nilai Maksimum\n 3: Nilai Minimum\n 4: log out\n Masukkan pilihan[1..4]: ";
}