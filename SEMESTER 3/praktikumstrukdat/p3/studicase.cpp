#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    int nim;
    mahasiswa *next;
};

mahasiswa *newMahasiswa, *head, *tail, *temp, *hapus;

void listKosong(){
	head = NULL;
	tail = NULL;
}

void sisipNode(string nama_baru, int nim_baru){
	//deklarasi node
	newMahasiswa = new mahasiswa();
	newMahasiswa->nama = nama_baru;
    newMahasiswa->nim = nim_baru;
	newMahasiswa->next = NULL; //harus dibikin NULL dulu!
	
	//sisip node awal
	if(head == NULL && tail == NULL){
		head = newMahasiswa;
		tail = newMahasiswa;
	}
	else{
		//sisip depan
		if(newMahasiswa->nim < head->nim){
			newMahasiswa->next = head;
			head = newMahasiswa;
		}
		//sisip belakang
		else if (newMahasiswa->nim > tail->nim){
			tail->next = newMahasiswa;
			tail = newMahasiswa;
		}
		//sisip tengah
		else{
			temp = head;
			
			//perulangan mencari tempat penyisipan node
			while(temp != NULL && newMahasiswa->nim > temp->next->nim){
				temp = temp->next;
			}
			newMahasiswa->next = temp->next;
			temp->next = newMahasiswa;	
		}
	}
}

void hapusMahasiswa(int nim_hapus){
	temp = head;
	
	//hapus data depan;
	if(head->nim == nim_hapus){
		hapus = head;
		head = head->next;
		hapus->next = NULL;
		delete(hapus);
	}
	//hapus data belakang dan tengah
	else{
		//perulangan mencari node yang mau dihapus
		while(temp->next->nim != nim_hapus && temp != NULL){
			temp = temp->next;
		}
		
		//hapus belakang
		if(temp->next == tail){
			hapus = tail;
			tail = temp;
			tail->next = NULL;
		}
		//hapus tengah
		else{
			hapus = temp->next;
			temp->next = hapus->next;
			hapus->next = NULL;
			delete(hapus);
		}
	}
}

void traversal(){
    Node *pindah, *head_simpan;
    head_simpan = head;
    head = tail;
    
    //perulangan traversal
    do{
        pindah = head_simpan;
        
        //pindah gerak ke mendekati tail
        while (pindah->next != tail){
            pindah = pindah->next;
        }
        tail -> next = pindah;
        tail = pindah;
    }while(tail != head_simpan);
    
    tail->next = NULL;
    
}

void bacaMaju(){
	temp = head;
	int i = 0;
	while(temp != NULL){
		i++;
		cout<<"Mahasiswa -"<<i<<" : "<<temp->nama<<endl;
		cout<<"Nim "<<i<<": "<<temp->nim<<endl;
		temp = temp->next;
	}
}

void bacaMundur(){
	traversal();
	
	temp = head;
	int i = 0;
	
	while(temp != NULL){
		i++;
		cout<<"Data -"<<i<<" : "<<temp->info<<endl;
		temp = temp->next;
	}
	
	traversal();
}


int main()
{
    listKosong();
    sisipNode("Ricky", 123240126);
    sisipNode("Moreno", 123240121);
    sisipNode("Rangga", 123240112);
    sisipNode("Aldito", 123240118);
    sisipNode("Nico", 1232401000);

}