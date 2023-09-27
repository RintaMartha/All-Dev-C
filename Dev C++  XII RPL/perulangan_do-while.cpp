#include <iostream>
using namespace std;
int main ()

jumlah_percobaan = 0
while true :
	pin = input ("Masukan PIN anda: ")
	if pin == "1234" : #Ganti PIN yang benar
	print("PIN benar. Akses diberikan. ")
	break
	else:
		print("PIN salah. silahkan coba lagi")
		jumlah_percobaan += 1
		if jumlah_percobaan >= 3:
		print ("Anda telah mencoba sebanyak 3 kali. hubungi call center.")
		break  
