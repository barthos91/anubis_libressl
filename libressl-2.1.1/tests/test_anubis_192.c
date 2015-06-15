
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <openssl/anubis.h>

int main(int argc, char** argv)
{
int ite = 1;
int j;
//Test vectors -- set 1
unsigned char res_cipher1[16];
unsigned char res_uncipher1[16];
                      char key1[]={0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain1, res_cipher1, structpointer1);
if(strncmp(res_cipher1, cipher1, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher1, res_uncipher1, structpointer1);
if(strncmp(res_uncipher1, decrypted1, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher1, plain1, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher1, res_cipher1, structpointer1);
}
if(strncmp(res_cipher1, Iterated_100_times1, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher1, res_cipher1, structpointer1);
}
if(strncmp(res_cipher1, Iterated_1000_times1, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer1);
ite++;

unsigned char res_cipher2[16];
unsigned char res_uncipher2[16];
                      char key2[]={0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain2, res_cipher2, structpointer2);
if(strncmp(res_cipher2, cipher2, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher2, res_uncipher2, structpointer2);
if(strncmp(res_uncipher2, decrypted2, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher2, plain2, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher2, res_cipher2, structpointer2);
}
if(strncmp(res_cipher2, Iterated_100_times2, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher2, res_cipher2, structpointer2);
}
if(strncmp(res_cipher2, Iterated_1000_times2, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer2);
ite++;

unsigned char res_cipher3[16];
unsigned char res_uncipher3[16];
                      char key3[]={0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain3, res_cipher3, structpointer3);
if(strncmp(res_cipher3, cipher3, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher3, res_uncipher3, structpointer3);
if(strncmp(res_uncipher3, decrypted3, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher3, plain3, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher3, res_cipher3, structpointer3);
}
if(strncmp(res_cipher3, Iterated_100_times3, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher3, res_cipher3, structpointer3);
}
if(strncmp(res_cipher3, Iterated_1000_times3, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer3);
ite++;

unsigned char res_cipher4[16];
unsigned char res_uncipher4[16];
                      char key4[]={0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain4, res_cipher4, structpointer4);
if(strncmp(res_cipher4, cipher4, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher4, res_uncipher4, structpointer4);
if(strncmp(res_uncipher4, decrypted4, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher4, plain4, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher4, res_cipher4, structpointer4);
}
if(strncmp(res_cipher4, Iterated_100_times4, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher4, res_cipher4, structpointer4);
}
if(strncmp(res_cipher4, Iterated_1000_times4, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer4);
ite++;

unsigned char res_cipher5[16];
unsigned char res_uncipher5[16];
                      char key5[]={0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain5, res_cipher5, structpointer5);
if(strncmp(res_cipher5, cipher5, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher5, res_uncipher5, structpointer5);
if(strncmp(res_uncipher5, decrypted5, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher5, plain5, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher5, res_cipher5, structpointer5);
}
if(strncmp(res_cipher5, Iterated_100_times5, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher5, res_cipher5, structpointer5);
}
if(strncmp(res_cipher5, Iterated_1000_times5, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer5);
ite++;

unsigned char res_cipher6[16];
unsigned char res_uncipher6[16];
                      char key6[]={0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain6, res_cipher6, structpointer6);
if(strncmp(res_cipher6, cipher6, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher6, res_uncipher6, structpointer6);
if(strncmp(res_uncipher6, decrypted6, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher6, plain6, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher6, res_cipher6, structpointer6);
}
if(strncmp(res_cipher6, Iterated_100_times6, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher6, res_cipher6, structpointer6);
}
if(strncmp(res_cipher6, Iterated_1000_times6, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer6);
ite++;

unsigned char res_cipher7[16];
unsigned char res_uncipher7[16];
                      char key7[]={0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain7, res_cipher7, structpointer7);
if(strncmp(res_cipher7, cipher7, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher7, res_uncipher7, structpointer7);
if(strncmp(res_uncipher7, decrypted7, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher7, plain7, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher7, res_cipher7, structpointer7);
}
if(strncmp(res_cipher7, Iterated_100_times7, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher7, res_cipher7, structpointer7);
}
if(strncmp(res_cipher7, Iterated_1000_times7, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer7);
ite++;

unsigned char res_cipher8[16];
unsigned char res_uncipher8[16];
                      char key8[]={0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain8, res_cipher8, structpointer8);
if(strncmp(res_cipher8, cipher8, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher8, res_uncipher8, structpointer8);
if(strncmp(res_uncipher8, decrypted8, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher8, plain8, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher8, res_cipher8, structpointer8);
}
if(strncmp(res_cipher8, Iterated_100_times8, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher8, res_cipher8, structpointer8);
}
if(strncmp(res_cipher8, Iterated_1000_times8, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer8);
ite++;

unsigned char res_cipher9[16];
unsigned char res_uncipher9[16];
                      char key9[]={0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain9, res_cipher9, structpointer9);
if(strncmp(res_cipher9, cipher9, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher9, res_uncipher9, structpointer9);
if(strncmp(res_uncipher9, decrypted9, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher9, plain9, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher9, res_cipher9, structpointer9);
}
if(strncmp(res_cipher9, Iterated_100_times9, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher9, res_cipher9, structpointer9);
}
if(strncmp(res_cipher9, Iterated_1000_times9, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer9);
ite++;

unsigned char res_cipher10[16];
unsigned char res_uncipher10[16];
                      char key10[]={0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain10, res_cipher10, structpointer10);
if(strncmp(res_cipher10, cipher10, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher10, res_uncipher10, structpointer10);
if(strncmp(res_uncipher10, decrypted10, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher10, plain10, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher10, res_cipher10, structpointer10);
}
if(strncmp(res_cipher10, Iterated_100_times10, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher10, res_cipher10, structpointer10);
}
if(strncmp(res_cipher10, Iterated_1000_times10, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer10);
ite++;

unsigned char res_cipher11[16];
unsigned char res_uncipher11[16];
                      char key11[]={0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain11, res_cipher11, structpointer11);
if(strncmp(res_cipher11, cipher11, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher11, res_uncipher11, structpointer11);
if(strncmp(res_uncipher11, decrypted11, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher11, plain11, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher11, res_cipher11, structpointer11);
}
if(strncmp(res_cipher11, Iterated_100_times11, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher11, res_cipher11, structpointer11);
}
if(strncmp(res_cipher11, Iterated_1000_times11, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer11);
ite++;

unsigned char res_cipher12[16];
unsigned char res_uncipher12[16];
                      char key12[]={0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain12, res_cipher12, structpointer12);
if(strncmp(res_cipher12, cipher12, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher12, res_uncipher12, structpointer12);
if(strncmp(res_uncipher12, decrypted12, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher12, plain12, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher12, res_cipher12, structpointer12);
}
if(strncmp(res_cipher12, Iterated_100_times12, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher12, res_cipher12, structpointer12);
}
if(strncmp(res_cipher12, Iterated_1000_times12, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer12);
ite++;

unsigned char res_cipher13[16];
unsigned char res_uncipher13[16];
                      char key13[]={0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain13, res_cipher13, structpointer13);
if(strncmp(res_cipher13, cipher13, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher13, res_uncipher13, structpointer13);
if(strncmp(res_uncipher13, decrypted13, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher13, plain13, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher13, res_cipher13, structpointer13);
}
if(strncmp(res_cipher13, Iterated_100_times13, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher13, res_cipher13, structpointer13);
}
if(strncmp(res_cipher13, Iterated_1000_times13, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer13);
ite++;

unsigned char res_cipher14[16];
unsigned char res_uncipher14[16];
                      char key14[]={0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain14, res_cipher14, structpointer14);
if(strncmp(res_cipher14, cipher14, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher14, res_uncipher14, structpointer14);
if(strncmp(res_uncipher14, decrypted14, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher14, plain14, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher14, res_cipher14, structpointer14);
}
if(strncmp(res_cipher14, Iterated_100_times14, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher14, res_cipher14, structpointer14);
}
if(strncmp(res_cipher14, Iterated_1000_times14, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer14);
ite++;

unsigned char res_cipher15[16];
unsigned char res_uncipher15[16];
                      char key15[]={0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain15, res_cipher15, structpointer15);
if(strncmp(res_cipher15, cipher15, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher15, res_uncipher15, structpointer15);
if(strncmp(res_uncipher15, decrypted15, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher15, plain15, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher15, res_cipher15, structpointer15);
}
if(strncmp(res_cipher15, Iterated_100_times15, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher15, res_cipher15, structpointer15);
}
if(strncmp(res_cipher15, Iterated_1000_times15, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer15);
ite++;

unsigned char res_cipher16[16];
unsigned char res_uncipher16[16];
                      char key16[]={0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain16, res_cipher16, structpointer16);
if(strncmp(res_cipher16, cipher16, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher16, res_uncipher16, structpointer16);
if(strncmp(res_uncipher16, decrypted16, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher16, plain16, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher16, res_cipher16, structpointer16);
}
if(strncmp(res_cipher16, Iterated_100_times16, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher16, res_cipher16, structpointer16);
}
if(strncmp(res_cipher16, Iterated_1000_times16, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer16);
ite++;

unsigned char res_cipher17[16];
unsigned char res_uncipher17[16];
                      char key17[]={0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain17, res_cipher17, structpointer17);
if(strncmp(res_cipher17, cipher17, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher17, res_uncipher17, structpointer17);
if(strncmp(res_uncipher17, decrypted17, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher17, plain17, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher17, res_cipher17, structpointer17);
}
if(strncmp(res_cipher17, Iterated_100_times17, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher17, res_cipher17, structpointer17);
}
if(strncmp(res_cipher17, Iterated_1000_times17, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer17);
ite++;

unsigned char res_cipher18[16];
unsigned char res_uncipher18[16];
                      char key18[]={0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain18, res_cipher18, structpointer18);
if(strncmp(res_cipher18, cipher18, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher18, res_uncipher18, structpointer18);
if(strncmp(res_uncipher18, decrypted18, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher18, plain18, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher18, res_cipher18, structpointer18);
}
if(strncmp(res_cipher18, Iterated_100_times18, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher18, res_cipher18, structpointer18);
}
if(strncmp(res_cipher18, Iterated_1000_times18, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer18);
ite++;

unsigned char res_cipher19[16];
unsigned char res_uncipher19[16];
                      char key19[]={0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain19, res_cipher19, structpointer19);
if(strncmp(res_cipher19, cipher19, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher19, res_uncipher19, structpointer19);
if(strncmp(res_uncipher19, decrypted19, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher19, plain19, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher19, res_cipher19, structpointer19);
}
if(strncmp(res_cipher19, Iterated_100_times19, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher19, res_cipher19, structpointer19);
}
if(strncmp(res_cipher19, Iterated_1000_times19, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer19);
ite++;

unsigned char res_cipher20[16];
unsigned char res_uncipher20[16];
                      char key20[]={0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain20, res_cipher20, structpointer20);
if(strncmp(res_cipher20, cipher20, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher20, res_uncipher20, structpointer20);
if(strncmp(res_uncipher20, decrypted20, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher20, plain20, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher20, res_cipher20, structpointer20);
}
if(strncmp(res_cipher20, Iterated_100_times20, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher20, res_cipher20, structpointer20);
}
if(strncmp(res_cipher20, Iterated_1000_times20, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer20);
ite++;

unsigned char res_cipher21[16];
unsigned char res_uncipher21[16];
                      char key21[]={0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain21, res_cipher21, structpointer21);
if(strncmp(res_cipher21, cipher21, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher21, res_uncipher21, structpointer21);
if(strncmp(res_uncipher21, decrypted21, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher21, plain21, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher21, res_cipher21, structpointer21);
}
if(strncmp(res_cipher21, Iterated_100_times21, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher21, res_cipher21, structpointer21);
}
if(strncmp(res_cipher21, Iterated_1000_times21, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer21);
ite++;

unsigned char res_cipher22[16];
unsigned char res_uncipher22[16];
                      char key22[]={0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain22, res_cipher22, structpointer22);
if(strncmp(res_cipher22, cipher22, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher22, res_uncipher22, structpointer22);
if(strncmp(res_uncipher22, decrypted22, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher22, plain22, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher22, res_cipher22, structpointer22);
}
if(strncmp(res_cipher22, Iterated_100_times22, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher22, res_cipher22, structpointer22);
}
if(strncmp(res_cipher22, Iterated_1000_times22, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer22);
ite++;

unsigned char res_cipher23[16];
unsigned char res_uncipher23[16];
                      char key23[]={0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain23, res_cipher23, structpointer23);
if(strncmp(res_cipher23, cipher23, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher23, res_uncipher23, structpointer23);
if(strncmp(res_uncipher23, decrypted23, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher23, plain23, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher23, res_cipher23, structpointer23);
}
if(strncmp(res_cipher23, Iterated_100_times23, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher23, res_cipher23, structpointer23);
}
if(strncmp(res_cipher23, Iterated_1000_times23, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer23);
ite++;

unsigned char res_cipher24[16];
unsigned char res_uncipher24[16];
                      char key24[]={0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain24, res_cipher24, structpointer24);
if(strncmp(res_cipher24, cipher24, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher24, res_uncipher24, structpointer24);
if(strncmp(res_uncipher24, decrypted24, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher24, plain24, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher24, res_cipher24, structpointer24);
}
if(strncmp(res_cipher24, Iterated_100_times24, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher24, res_cipher24, structpointer24);
}
if(strncmp(res_cipher24, Iterated_1000_times24, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer24);
ite++;

unsigned char res_cipher25[16];
unsigned char res_uncipher25[16];
                      char key25[]={0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain25, res_cipher25, structpointer25);
if(strncmp(res_cipher25, cipher25, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher25, res_uncipher25, structpointer25);
if(strncmp(res_uncipher25, decrypted25, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher25, plain25, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher25, res_cipher25, structpointer25);
}
if(strncmp(res_cipher25, Iterated_100_times25, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher25, res_cipher25, structpointer25);
}
if(strncmp(res_cipher25, Iterated_1000_times25, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer25);
ite++;

unsigned char res_cipher26[16];
unsigned char res_uncipher26[16];
                      char key26[]={0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain26, res_cipher26, structpointer26);
if(strncmp(res_cipher26, cipher26, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher26, res_uncipher26, structpointer26);
if(strncmp(res_uncipher26, decrypted26, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher26, plain26, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher26, res_cipher26, structpointer26);
}
if(strncmp(res_cipher26, Iterated_100_times26, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher26, res_cipher26, structpointer26);
}
if(strncmp(res_cipher26, Iterated_1000_times26, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer26);
ite++;

unsigned char res_cipher27[16];
unsigned char res_uncipher27[16];
                      char key27[]={0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain27, res_cipher27, structpointer27);
if(strncmp(res_cipher27, cipher27, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher27, res_uncipher27, structpointer27);
if(strncmp(res_uncipher27, decrypted27, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher27, plain27, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher27, res_cipher27, structpointer27);
}
if(strncmp(res_cipher27, Iterated_100_times27, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher27, res_cipher27, structpointer27);
}
if(strncmp(res_cipher27, Iterated_1000_times27, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer27);
ite++;

unsigned char res_cipher28[16];
unsigned char res_uncipher28[16];
                      char key28[]={0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain28, res_cipher28, structpointer28);
if(strncmp(res_cipher28, cipher28, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher28, res_uncipher28, structpointer28);
if(strncmp(res_uncipher28, decrypted28, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher28, plain28, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher28, res_cipher28, structpointer28);
}
if(strncmp(res_cipher28, Iterated_100_times28, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher28, res_cipher28, structpointer28);
}
if(strncmp(res_cipher28, Iterated_1000_times28, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer28);
ite++;

unsigned char res_cipher29[16];
unsigned char res_uncipher29[16];
                      char key29[]={0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain29, res_cipher29, structpointer29);
if(strncmp(res_cipher29, cipher29, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher29, res_uncipher29, structpointer29);
if(strncmp(res_uncipher29, decrypted29, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher29, plain29, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher29, res_cipher29, structpointer29);
}
if(strncmp(res_cipher29, Iterated_100_times29, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher29, res_cipher29, structpointer29);
}
if(strncmp(res_cipher29, Iterated_1000_times29, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer29);
ite++;

unsigned char res_cipher30[16];
unsigned char res_uncipher30[16];
                      char key30[]={0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain30, res_cipher30, structpointer30);
if(strncmp(res_cipher30, cipher30, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher30, res_uncipher30, structpointer30);
if(strncmp(res_uncipher30, decrypted30, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher30, plain30, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher30, res_cipher30, structpointer30);
}
if(strncmp(res_cipher30, Iterated_100_times30, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher30, res_cipher30, structpointer30);
}
if(strncmp(res_cipher30, Iterated_1000_times30, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer30);
ite++;

unsigned char res_cipher31[16];
unsigned char res_uncipher31[16];
                      char key31[]={0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain31, res_cipher31, structpointer31);
if(strncmp(res_cipher31, cipher31, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher31, res_uncipher31, structpointer31);
if(strncmp(res_uncipher31, decrypted31, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher31, plain31, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher31, res_cipher31, structpointer31);
}
if(strncmp(res_cipher31, Iterated_100_times31, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher31, res_cipher31, structpointer31);
}
if(strncmp(res_cipher31, Iterated_1000_times31, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer31);
ite++;

unsigned char res_cipher32[16];
unsigned char res_uncipher32[16];
                      char key32[]={0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain32, res_cipher32, structpointer32);
if(strncmp(res_cipher32, cipher32, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher32, res_uncipher32, structpointer32);
if(strncmp(res_uncipher32, decrypted32, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher32, plain32, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher32, res_cipher32, structpointer32);
}
if(strncmp(res_cipher32, Iterated_100_times32, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher32, res_cipher32, structpointer32);
}
if(strncmp(res_cipher32, Iterated_1000_times32, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer32);
ite++;

unsigned char res_cipher33[16];
unsigned char res_uncipher33[16];
                      char key33[]={0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain33, res_cipher33, structpointer33);
if(strncmp(res_cipher33, cipher33, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher33, res_uncipher33, structpointer33);
if(strncmp(res_uncipher33, decrypted33, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher33, plain33, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher33, res_cipher33, structpointer33);
}
if(strncmp(res_cipher33, Iterated_100_times33, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher33, res_cipher33, structpointer33);
}
if(strncmp(res_cipher33, Iterated_1000_times33, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer33);
ite++;

unsigned char res_cipher34[16];
unsigned char res_uncipher34[16];
                      char key34[]={0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain34, res_cipher34, structpointer34);
if(strncmp(res_cipher34, cipher34, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher34, res_uncipher34, structpointer34);
if(strncmp(res_uncipher34, decrypted34, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher34, plain34, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher34, res_cipher34, structpointer34);
}
if(strncmp(res_cipher34, Iterated_100_times34, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher34, res_cipher34, structpointer34);
}
if(strncmp(res_cipher34, Iterated_1000_times34, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer34);
ite++;

unsigned char res_cipher35[16];
unsigned char res_uncipher35[16];
                      char key35[]={0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain35, res_cipher35, structpointer35);
if(strncmp(res_cipher35, cipher35, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher35, res_uncipher35, structpointer35);
if(strncmp(res_uncipher35, decrypted35, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher35, plain35, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher35, res_cipher35, structpointer35);
}
if(strncmp(res_cipher35, Iterated_100_times35, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher35, res_cipher35, structpointer35);
}
if(strncmp(res_cipher35, Iterated_1000_times35, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer35);
ite++;

unsigned char res_cipher36[16];
unsigned char res_uncipher36[16];
                      char key36[]={0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain36, res_cipher36, structpointer36);
if(strncmp(res_cipher36, cipher36, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher36, res_uncipher36, structpointer36);
if(strncmp(res_uncipher36, decrypted36, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher36, plain36, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher36, res_cipher36, structpointer36);
}
if(strncmp(res_cipher36, Iterated_100_times36, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher36, res_cipher36, structpointer36);
}
if(strncmp(res_cipher36, Iterated_1000_times36, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer36);
ite++;

unsigned char res_cipher37[16];
unsigned char res_uncipher37[16];
                      char key37[]={0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain37, res_cipher37, structpointer37);
if(strncmp(res_cipher37, cipher37, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher37, res_uncipher37, structpointer37);
if(strncmp(res_uncipher37, decrypted37, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher37, plain37, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher37, res_cipher37, structpointer37);
}
if(strncmp(res_cipher37, Iterated_100_times37, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher37, res_cipher37, structpointer37);
}
if(strncmp(res_cipher37, Iterated_1000_times37, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer37);
ite++;

unsigned char res_cipher38[16];
unsigned char res_uncipher38[16];
                      char key38[]={0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain38, res_cipher38, structpointer38);
if(strncmp(res_cipher38, cipher38, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher38, res_uncipher38, structpointer38);
if(strncmp(res_uncipher38, decrypted38, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher38, plain38, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher38, res_cipher38, structpointer38);
}
if(strncmp(res_cipher38, Iterated_100_times38, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher38, res_cipher38, structpointer38);
}
if(strncmp(res_cipher38, Iterated_1000_times38, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer38);
ite++;

unsigned char res_cipher39[16];
unsigned char res_uncipher39[16];
                      char key39[]={0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain39, res_cipher39, structpointer39);
if(strncmp(res_cipher39, cipher39, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher39, res_uncipher39, structpointer39);
if(strncmp(res_uncipher39, decrypted39, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher39, plain39, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher39, res_cipher39, structpointer39);
}
if(strncmp(res_cipher39, Iterated_100_times39, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher39, res_cipher39, structpointer39);
}
if(strncmp(res_cipher39, Iterated_1000_times39, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer39);
ite++;

unsigned char res_cipher40[16];
unsigned char res_uncipher40[16];
                      char key40[]={0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain40, res_cipher40, structpointer40);
if(strncmp(res_cipher40, cipher40, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher40, res_uncipher40, structpointer40);
if(strncmp(res_uncipher40, decrypted40, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher40, plain40, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher40, res_cipher40, structpointer40);
}
if(strncmp(res_cipher40, Iterated_100_times40, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher40, res_cipher40, structpointer40);
}
if(strncmp(res_cipher40, Iterated_1000_times40, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer40);
ite++;

unsigned char res_cipher41[16];
unsigned char res_uncipher41[16];
                      char key41[]={0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain41, res_cipher41, structpointer41);
if(strncmp(res_cipher41, cipher41, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher41, res_uncipher41, structpointer41);
if(strncmp(res_uncipher41, decrypted41, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher41, plain41, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher41, res_cipher41, structpointer41);
}
if(strncmp(res_cipher41, Iterated_100_times41, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher41, res_cipher41, structpointer41);
}
if(strncmp(res_cipher41, Iterated_1000_times41, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer41);
ite++;

unsigned char res_cipher42[16];
unsigned char res_uncipher42[16];
                      char key42[]={0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain42, res_cipher42, structpointer42);
if(strncmp(res_cipher42, cipher42, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher42, res_uncipher42, structpointer42);
if(strncmp(res_uncipher42, decrypted42, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher42, plain42, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher42, res_cipher42, structpointer42);
}
if(strncmp(res_cipher42, Iterated_100_times42, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher42, res_cipher42, structpointer42);
}
if(strncmp(res_cipher42, Iterated_1000_times42, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer42);
ite++;

unsigned char res_cipher43[16];
unsigned char res_uncipher43[16];
                      char key43[]={0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain43, res_cipher43, structpointer43);
if(strncmp(res_cipher43, cipher43, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher43, res_uncipher43, structpointer43);
if(strncmp(res_uncipher43, decrypted43, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher43, plain43, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher43, res_cipher43, structpointer43);
}
if(strncmp(res_cipher43, Iterated_100_times43, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher43, res_cipher43, structpointer43);
}
if(strncmp(res_cipher43, Iterated_1000_times43, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer43);
ite++;

unsigned char res_cipher44[16];
unsigned char res_uncipher44[16];
                      char key44[]={0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain44, res_cipher44, structpointer44);
if(strncmp(res_cipher44, cipher44, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher44, res_uncipher44, structpointer44);
if(strncmp(res_uncipher44, decrypted44, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher44, plain44, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher44, res_cipher44, structpointer44);
}
if(strncmp(res_cipher44, Iterated_100_times44, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher44, res_cipher44, structpointer44);
}
if(strncmp(res_cipher44, Iterated_1000_times44, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer44);
ite++;

unsigned char res_cipher45[16];
unsigned char res_uncipher45[16];
                      char key45[]={0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain45, res_cipher45, structpointer45);
if(strncmp(res_cipher45, cipher45, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher45, res_uncipher45, structpointer45);
if(strncmp(res_uncipher45, decrypted45, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher45, plain45, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher45, res_cipher45, structpointer45);
}
if(strncmp(res_cipher45, Iterated_100_times45, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher45, res_cipher45, structpointer45);
}
if(strncmp(res_cipher45, Iterated_1000_times45, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer45);
ite++;

unsigned char res_cipher46[16];
unsigned char res_uncipher46[16];
                      char key46[]={0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain46, res_cipher46, structpointer46);
if(strncmp(res_cipher46, cipher46, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher46, res_uncipher46, structpointer46);
if(strncmp(res_uncipher46, decrypted46, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher46, plain46, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher46, res_cipher46, structpointer46);
}
if(strncmp(res_cipher46, Iterated_100_times46, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher46, res_cipher46, structpointer46);
}
if(strncmp(res_cipher46, Iterated_1000_times46, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer46);
ite++;

unsigned char res_cipher47[16];
unsigned char res_uncipher47[16];
                      char key47[]={0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain47, res_cipher47, structpointer47);
if(strncmp(res_cipher47, cipher47, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher47, res_uncipher47, structpointer47);
if(strncmp(res_uncipher47, decrypted47, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher47, plain47, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher47, res_cipher47, structpointer47);
}
if(strncmp(res_cipher47, Iterated_100_times47, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher47, res_cipher47, structpointer47);
}
if(strncmp(res_cipher47, Iterated_1000_times47, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer47);
ite++;

unsigned char res_cipher48[16];
unsigned char res_uncipher48[16];
                      char key48[]={0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain48, res_cipher48, structpointer48);
if(strncmp(res_cipher48, cipher48, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher48, res_uncipher48, structpointer48);
if(strncmp(res_uncipher48, decrypted48, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher48, plain48, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher48, res_cipher48, structpointer48);
}
if(strncmp(res_cipher48, Iterated_100_times48, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher48, res_cipher48, structpointer48);
}
if(strncmp(res_cipher48, Iterated_1000_times48, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer48);
ite++;

unsigned char res_cipher49[16];
unsigned char res_uncipher49[16];
                      char key49[]={0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain49, res_cipher49, structpointer49);
if(strncmp(res_cipher49, cipher49, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher49, res_uncipher49, structpointer49);
if(strncmp(res_uncipher49, decrypted49, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher49, plain49, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher49, res_cipher49, structpointer49);
}
if(strncmp(res_cipher49, Iterated_100_times49, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher49, res_cipher49, structpointer49);
}
if(strncmp(res_cipher49, Iterated_1000_times49, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer49);
ite++;

unsigned char res_cipher50[16];
unsigned char res_uncipher50[16];
                      char key50[]={0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain50, res_cipher50, structpointer50);
if(strncmp(res_cipher50, cipher50, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher50, res_uncipher50, structpointer50);
if(strncmp(res_uncipher50, decrypted50, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher50, plain50, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher50, res_cipher50, structpointer50);
}
if(strncmp(res_cipher50, Iterated_100_times50, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher50, res_cipher50, structpointer50);
}
if(strncmp(res_cipher50, Iterated_1000_times50, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer50);
ite++;

unsigned char res_cipher51[16];
unsigned char res_uncipher51[16];
                      char key51[]={0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain51, res_cipher51, structpointer51);
if(strncmp(res_cipher51, cipher51, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher51, res_uncipher51, structpointer51);
if(strncmp(res_uncipher51, decrypted51, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher51, plain51, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher51, res_cipher51, structpointer51);
}
if(strncmp(res_cipher51, Iterated_100_times51, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher51, res_cipher51, structpointer51);
}
if(strncmp(res_cipher51, Iterated_1000_times51, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer51);
ite++;

unsigned char res_cipher52[16];
unsigned char res_uncipher52[16];
                      char key52[]={0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain52, res_cipher52, structpointer52);
if(strncmp(res_cipher52, cipher52, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher52, res_uncipher52, structpointer52);
if(strncmp(res_uncipher52, decrypted52, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher52, plain52, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher52, res_cipher52, structpointer52);
}
if(strncmp(res_cipher52, Iterated_100_times52, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher52, res_cipher52, structpointer52);
}
if(strncmp(res_cipher52, Iterated_1000_times52, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer52);
ite++;

unsigned char res_cipher53[16];
unsigned char res_uncipher53[16];
                      char key53[]={0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain53, res_cipher53, structpointer53);
if(strncmp(res_cipher53, cipher53, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher53, res_uncipher53, structpointer53);
if(strncmp(res_uncipher53, decrypted53, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher53, plain53, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher53, res_cipher53, structpointer53);
}
if(strncmp(res_cipher53, Iterated_100_times53, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher53, res_cipher53, structpointer53);
}
if(strncmp(res_cipher53, Iterated_1000_times53, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer53);
ite++;

unsigned char res_cipher54[16];
unsigned char res_uncipher54[16];
                      char key54[]={0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain54, res_cipher54, structpointer54);
if(strncmp(res_cipher54, cipher54, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher54, res_uncipher54, structpointer54);
if(strncmp(res_uncipher54, decrypted54, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher54, plain54, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher54, res_cipher54, structpointer54);
}
if(strncmp(res_cipher54, Iterated_100_times54, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher54, res_cipher54, structpointer54);
}
if(strncmp(res_cipher54, Iterated_1000_times54, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer54);
ite++;

unsigned char res_cipher55[16];
unsigned char res_uncipher55[16];
                      char key55[]={0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain55, res_cipher55, structpointer55);
if(strncmp(res_cipher55, cipher55, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher55, res_uncipher55, structpointer55);
if(strncmp(res_uncipher55, decrypted55, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher55, plain55, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher55, res_cipher55, structpointer55);
}
if(strncmp(res_cipher55, Iterated_100_times55, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher55, res_cipher55, structpointer55);
}
if(strncmp(res_cipher55, Iterated_1000_times55, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer55);
ite++;

unsigned char res_cipher56[16];
unsigned char res_uncipher56[16];
                      char key56[]={0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain56, res_cipher56, structpointer56);
if(strncmp(res_cipher56, cipher56, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher56, res_uncipher56, structpointer56);
if(strncmp(res_uncipher56, decrypted56, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher56, plain56, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher56, res_cipher56, structpointer56);
}
if(strncmp(res_cipher56, Iterated_100_times56, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher56, res_cipher56, structpointer56);
}
if(strncmp(res_cipher56, Iterated_1000_times56, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer56);
ite++;

unsigned char res_cipher57[16];
unsigned char res_uncipher57[16];
                      char key57[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain57, res_cipher57, structpointer57);
if(strncmp(res_cipher57, cipher57, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher57, res_uncipher57, structpointer57);
if(strncmp(res_uncipher57, decrypted57, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher57, plain57, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher57, res_cipher57, structpointer57);
}
if(strncmp(res_cipher57, Iterated_100_times57, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher57, res_cipher57, structpointer57);
}
if(strncmp(res_cipher57, Iterated_1000_times57, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer57);
ite++;

unsigned char res_cipher58[16];
unsigned char res_uncipher58[16];
                      char key58[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain58, res_cipher58, structpointer58);
if(strncmp(res_cipher58, cipher58, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher58, res_uncipher58, structpointer58);
if(strncmp(res_uncipher58, decrypted58, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher58, plain58, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher58, res_cipher58, structpointer58);
}
if(strncmp(res_cipher58, Iterated_100_times58, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher58, res_cipher58, structpointer58);
}
if(strncmp(res_cipher58, Iterated_1000_times58, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer58);
ite++;

unsigned char res_cipher59[16];
unsigned char res_uncipher59[16];
                      char key59[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain59, res_cipher59, structpointer59);
if(strncmp(res_cipher59, cipher59, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher59, res_uncipher59, structpointer59);
if(strncmp(res_uncipher59, decrypted59, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher59, plain59, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher59, res_cipher59, structpointer59);
}
if(strncmp(res_cipher59, Iterated_100_times59, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher59, res_cipher59, structpointer59);
}
if(strncmp(res_cipher59, Iterated_1000_times59, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer59);
ite++;

unsigned char res_cipher60[16];
unsigned char res_uncipher60[16];
                      char key60[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain60, res_cipher60, structpointer60);
if(strncmp(res_cipher60, cipher60, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher60, res_uncipher60, structpointer60);
if(strncmp(res_uncipher60, decrypted60, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher60, plain60, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher60, res_cipher60, structpointer60);
}
if(strncmp(res_cipher60, Iterated_100_times60, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher60, res_cipher60, structpointer60);
}
if(strncmp(res_cipher60, Iterated_1000_times60, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer60);
ite++;

unsigned char res_cipher61[16];
unsigned char res_uncipher61[16];
                      char key61[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain61, res_cipher61, structpointer61);
if(strncmp(res_cipher61, cipher61, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher61, res_uncipher61, structpointer61);
if(strncmp(res_uncipher61, decrypted61, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher61, plain61, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher61, res_cipher61, structpointer61);
}
if(strncmp(res_cipher61, Iterated_100_times61, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher61, res_cipher61, structpointer61);
}
if(strncmp(res_cipher61, Iterated_1000_times61, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer61);
ite++;

unsigned char res_cipher62[16];
unsigned char res_uncipher62[16];
                      char key62[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain62, res_cipher62, structpointer62);
if(strncmp(res_cipher62, cipher62, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher62, res_uncipher62, structpointer62);
if(strncmp(res_uncipher62, decrypted62, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher62, plain62, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher62, res_cipher62, structpointer62);
}
if(strncmp(res_cipher62, Iterated_100_times62, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher62, res_cipher62, structpointer62);
}
if(strncmp(res_cipher62, Iterated_1000_times62, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer62);
ite++;

unsigned char res_cipher63[16];
unsigned char res_uncipher63[16];
                      char key63[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain63, res_cipher63, structpointer63);
if(strncmp(res_cipher63, cipher63, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher63, res_uncipher63, structpointer63);
if(strncmp(res_uncipher63, decrypted63, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher63, plain63, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher63, res_cipher63, structpointer63);
}
if(strncmp(res_cipher63, Iterated_100_times63, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher63, res_cipher63, structpointer63);
}
if(strncmp(res_cipher63, Iterated_1000_times63, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer63);
ite++;

unsigned char res_cipher64[16];
unsigned char res_uncipher64[16];
                      char key64[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain64, res_cipher64, structpointer64);
if(strncmp(res_cipher64, cipher64, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher64, res_uncipher64, structpointer64);
if(strncmp(res_uncipher64, decrypted64, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher64, plain64, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher64, res_cipher64, structpointer64);
}
if(strncmp(res_cipher64, Iterated_100_times64, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher64, res_cipher64, structpointer64);
}
if(strncmp(res_cipher64, Iterated_1000_times64, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer64);
ite++;

unsigned char res_cipher65[16];
unsigned char res_uncipher65[16];
                      char key65[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain65, res_cipher65, structpointer65);
if(strncmp(res_cipher65, cipher65, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher65, res_uncipher65, structpointer65);
if(strncmp(res_uncipher65, decrypted65, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher65, plain65, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher65, res_cipher65, structpointer65);
}
if(strncmp(res_cipher65, Iterated_100_times65, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher65, res_cipher65, structpointer65);
}
if(strncmp(res_cipher65, Iterated_1000_times65, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer65);
ite++;

unsigned char res_cipher66[16];
unsigned char res_uncipher66[16];
                      char key66[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain66, res_cipher66, structpointer66);
if(strncmp(res_cipher66, cipher66, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher66, res_uncipher66, structpointer66);
if(strncmp(res_uncipher66, decrypted66, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher66, plain66, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher66, res_cipher66, structpointer66);
}
if(strncmp(res_cipher66, Iterated_100_times66, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher66, res_cipher66, structpointer66);
}
if(strncmp(res_cipher66, Iterated_1000_times66, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer66);
ite++;

unsigned char res_cipher67[16];
unsigned char res_uncipher67[16];
                      char key67[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain67, res_cipher67, structpointer67);
if(strncmp(res_cipher67, cipher67, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher67, res_uncipher67, structpointer67);
if(strncmp(res_uncipher67, decrypted67, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher67, plain67, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher67, res_cipher67, structpointer67);
}
if(strncmp(res_cipher67, Iterated_100_times67, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher67, res_cipher67, structpointer67);
}
if(strncmp(res_cipher67, Iterated_1000_times67, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer67);
ite++;

unsigned char res_cipher68[16];
unsigned char res_uncipher68[16];
                      char key68[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain68, res_cipher68, structpointer68);
if(strncmp(res_cipher68, cipher68, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher68, res_uncipher68, structpointer68);
if(strncmp(res_uncipher68, decrypted68, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher68, plain68, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher68, res_cipher68, structpointer68);
}
if(strncmp(res_cipher68, Iterated_100_times68, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher68, res_cipher68, structpointer68);
}
if(strncmp(res_cipher68, Iterated_1000_times68, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer68);
ite++;

unsigned char res_cipher69[16];
unsigned char res_uncipher69[16];
                      char key69[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain69, res_cipher69, structpointer69);
if(strncmp(res_cipher69, cipher69, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher69, res_uncipher69, structpointer69);
if(strncmp(res_uncipher69, decrypted69, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher69, plain69, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher69, res_cipher69, structpointer69);
}
if(strncmp(res_cipher69, Iterated_100_times69, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher69, res_cipher69, structpointer69);
}
if(strncmp(res_cipher69, Iterated_1000_times69, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer69);
ite++;

unsigned char res_cipher70[16];
unsigned char res_uncipher70[16];
                      char key70[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain70, res_cipher70, structpointer70);
if(strncmp(res_cipher70, cipher70, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher70, res_uncipher70, structpointer70);
if(strncmp(res_uncipher70, decrypted70, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher70, plain70, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher70, res_cipher70, structpointer70);
}
if(strncmp(res_cipher70, Iterated_100_times70, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher70, res_cipher70, structpointer70);
}
if(strncmp(res_cipher70, Iterated_1000_times70, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer70);
ite++;

unsigned char res_cipher71[16];
unsigned char res_uncipher71[16];
                      char key71[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain71, res_cipher71, structpointer71);
if(strncmp(res_cipher71, cipher71, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher71, res_uncipher71, structpointer71);
if(strncmp(res_uncipher71, decrypted71, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher71, plain71, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher71, res_cipher71, structpointer71);
}
if(strncmp(res_cipher71, Iterated_100_times71, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher71, res_cipher71, structpointer71);
}
if(strncmp(res_cipher71, Iterated_1000_times71, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer71);
ite++;

unsigned char res_cipher72[16];
unsigned char res_uncipher72[16];
                      char key72[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain72, res_cipher72, structpointer72);
if(strncmp(res_cipher72, cipher72, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher72, res_uncipher72, structpointer72);
if(strncmp(res_uncipher72, decrypted72, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher72, plain72, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher72, res_cipher72, structpointer72);
}
if(strncmp(res_cipher72, Iterated_100_times72, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher72, res_cipher72, structpointer72);
}
if(strncmp(res_cipher72, Iterated_1000_times72, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer72);
ite++;

unsigned char res_cipher73[16];
unsigned char res_uncipher73[16];
                      char key73[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain73, res_cipher73, structpointer73);
if(strncmp(res_cipher73, cipher73, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher73, res_uncipher73, structpointer73);
if(strncmp(res_uncipher73, decrypted73, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher73, plain73, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher73, res_cipher73, structpointer73);
}
if(strncmp(res_cipher73, Iterated_100_times73, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher73, res_cipher73, structpointer73);
}
if(strncmp(res_cipher73, Iterated_1000_times73, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer73);
ite++;

unsigned char res_cipher74[16];
unsigned char res_uncipher74[16];
                      char key74[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain74, res_cipher74, structpointer74);
if(strncmp(res_cipher74, cipher74, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher74, res_uncipher74, structpointer74);
if(strncmp(res_uncipher74, decrypted74, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher74, plain74, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher74, res_cipher74, structpointer74);
}
if(strncmp(res_cipher74, Iterated_100_times74, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher74, res_cipher74, structpointer74);
}
if(strncmp(res_cipher74, Iterated_1000_times74, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer74);
ite++;

unsigned char res_cipher75[16];
unsigned char res_uncipher75[16];
                      char key75[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain75, res_cipher75, structpointer75);
if(strncmp(res_cipher75, cipher75, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher75, res_uncipher75, structpointer75);
if(strncmp(res_uncipher75, decrypted75, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher75, plain75, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher75, res_cipher75, structpointer75);
}
if(strncmp(res_cipher75, Iterated_100_times75, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher75, res_cipher75, structpointer75);
}
if(strncmp(res_cipher75, Iterated_1000_times75, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer75);
ite++;

unsigned char res_cipher76[16];
unsigned char res_uncipher76[16];
                      char key76[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain76, res_cipher76, structpointer76);
if(strncmp(res_cipher76, cipher76, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher76, res_uncipher76, structpointer76);
if(strncmp(res_uncipher76, decrypted76, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher76, plain76, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher76, res_cipher76, structpointer76);
}
if(strncmp(res_cipher76, Iterated_100_times76, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher76, res_cipher76, structpointer76);
}
if(strncmp(res_cipher76, Iterated_1000_times76, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer76);
ite++;

unsigned char res_cipher77[16];
unsigned char res_uncipher77[16];
                      char key77[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain77, res_cipher77, structpointer77);
if(strncmp(res_cipher77, cipher77, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher77, res_uncipher77, structpointer77);
if(strncmp(res_uncipher77, decrypted77, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher77, plain77, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher77, res_cipher77, structpointer77);
}
if(strncmp(res_cipher77, Iterated_100_times77, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher77, res_cipher77, structpointer77);
}
if(strncmp(res_cipher77, Iterated_1000_times77, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer77);
ite++;

unsigned char res_cipher78[16];
unsigned char res_uncipher78[16];
                      char key78[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain78, res_cipher78, structpointer78);
if(strncmp(res_cipher78, cipher78, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher78, res_uncipher78, structpointer78);
if(strncmp(res_uncipher78, decrypted78, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher78, plain78, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher78, res_cipher78, structpointer78);
}
if(strncmp(res_cipher78, Iterated_100_times78, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher78, res_cipher78, structpointer78);
}
if(strncmp(res_cipher78, Iterated_1000_times78, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer78);
ite++;

unsigned char res_cipher79[16];
unsigned char res_uncipher79[16];
                      char key79[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain79, res_cipher79, structpointer79);
if(strncmp(res_cipher79, cipher79, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher79, res_uncipher79, structpointer79);
if(strncmp(res_uncipher79, decrypted79, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher79, plain79, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher79, res_cipher79, structpointer79);
}
if(strncmp(res_cipher79, Iterated_100_times79, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher79, res_cipher79, structpointer79);
}
if(strncmp(res_cipher79, Iterated_1000_times79, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer79);
ite++;

unsigned char res_cipher80[16];
unsigned char res_uncipher80[16];
                      char key80[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain80, res_cipher80, structpointer80);
if(strncmp(res_cipher80, cipher80, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher80, res_uncipher80, structpointer80);
if(strncmp(res_uncipher80, decrypted80, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher80, plain80, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher80, res_cipher80, structpointer80);
}
if(strncmp(res_cipher80, Iterated_100_times80, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher80, res_cipher80, structpointer80);
}
if(strncmp(res_cipher80, Iterated_1000_times80, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer80);
ite++;

unsigned char res_cipher81[16];
unsigned char res_uncipher81[16];
                      char key81[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain81, res_cipher81, structpointer81);
if(strncmp(res_cipher81, cipher81, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher81, res_uncipher81, structpointer81);
if(strncmp(res_uncipher81, decrypted81, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher81, plain81, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher81, res_cipher81, structpointer81);
}
if(strncmp(res_cipher81, Iterated_100_times81, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher81, res_cipher81, structpointer81);
}
if(strncmp(res_cipher81, Iterated_1000_times81, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer81);
ite++;

unsigned char res_cipher82[16];
unsigned char res_uncipher82[16];
                      char key82[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain82, res_cipher82, structpointer82);
if(strncmp(res_cipher82, cipher82, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher82, res_uncipher82, structpointer82);
if(strncmp(res_uncipher82, decrypted82, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher82, plain82, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher82, res_cipher82, structpointer82);
}
if(strncmp(res_cipher82, Iterated_100_times82, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher82, res_cipher82, structpointer82);
}
if(strncmp(res_cipher82, Iterated_1000_times82, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer82);
ite++;

unsigned char res_cipher83[16];
unsigned char res_uncipher83[16];
                      char key83[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain83, res_cipher83, structpointer83);
if(strncmp(res_cipher83, cipher83, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher83, res_uncipher83, structpointer83);
if(strncmp(res_uncipher83, decrypted83, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher83, plain83, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher83, res_cipher83, structpointer83);
}
if(strncmp(res_cipher83, Iterated_100_times83, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher83, res_cipher83, structpointer83);
}
if(strncmp(res_cipher83, Iterated_1000_times83, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer83);
ite++;

unsigned char res_cipher84[16];
unsigned char res_uncipher84[16];
                      char key84[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain84, res_cipher84, structpointer84);
if(strncmp(res_cipher84, cipher84, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher84, res_uncipher84, structpointer84);
if(strncmp(res_uncipher84, decrypted84, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher84, plain84, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher84, res_cipher84, structpointer84);
}
if(strncmp(res_cipher84, Iterated_100_times84, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher84, res_cipher84, structpointer84);
}
if(strncmp(res_cipher84, Iterated_1000_times84, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer84);
ite++;

unsigned char res_cipher85[16];
unsigned char res_uncipher85[16];
                      char key85[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain85, res_cipher85, structpointer85);
if(strncmp(res_cipher85, cipher85, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher85, res_uncipher85, structpointer85);
if(strncmp(res_uncipher85, decrypted85, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher85, plain85, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher85, res_cipher85, structpointer85);
}
if(strncmp(res_cipher85, Iterated_100_times85, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher85, res_cipher85, structpointer85);
}
if(strncmp(res_cipher85, Iterated_1000_times85, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer85);
ite++;

unsigned char res_cipher86[16];
unsigned char res_uncipher86[16];
                      char key86[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain86, res_cipher86, structpointer86);
if(strncmp(res_cipher86, cipher86, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher86, res_uncipher86, structpointer86);
if(strncmp(res_uncipher86, decrypted86, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher86, plain86, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher86, res_cipher86, structpointer86);
}
if(strncmp(res_cipher86, Iterated_100_times86, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher86, res_cipher86, structpointer86);
}
if(strncmp(res_cipher86, Iterated_1000_times86, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer86);
ite++;

unsigned char res_cipher87[16];
unsigned char res_uncipher87[16];
                      char key87[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain87, res_cipher87, structpointer87);
if(strncmp(res_cipher87, cipher87, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher87, res_uncipher87, structpointer87);
if(strncmp(res_uncipher87, decrypted87, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher87, plain87, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher87, res_cipher87, structpointer87);
}
if(strncmp(res_cipher87, Iterated_100_times87, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher87, res_cipher87, structpointer87);
}
if(strncmp(res_cipher87, Iterated_1000_times87, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer87);
ite++;

unsigned char res_cipher88[16];
unsigned char res_uncipher88[16];
                      char key88[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain88, res_cipher88, structpointer88);
if(strncmp(res_cipher88, cipher88, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher88, res_uncipher88, structpointer88);
if(strncmp(res_uncipher88, decrypted88, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher88, plain88, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher88, res_cipher88, structpointer88);
}
if(strncmp(res_cipher88, Iterated_100_times88, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher88, res_cipher88, structpointer88);
}
if(strncmp(res_cipher88, Iterated_1000_times88, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer88);
ite++;

unsigned char res_cipher89[16];
unsigned char res_uncipher89[16];
                      char key89[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain89, res_cipher89, structpointer89);
if(strncmp(res_cipher89, cipher89, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher89, res_uncipher89, structpointer89);
if(strncmp(res_uncipher89, decrypted89, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher89, plain89, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher89, res_cipher89, structpointer89);
}
if(strncmp(res_cipher89, Iterated_100_times89, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher89, res_cipher89, structpointer89);
}
if(strncmp(res_cipher89, Iterated_1000_times89, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer89);
ite++;

unsigned char res_cipher90[16];
unsigned char res_uncipher90[16];
                      char key90[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain90, res_cipher90, structpointer90);
if(strncmp(res_cipher90, cipher90, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher90, res_uncipher90, structpointer90);
if(strncmp(res_uncipher90, decrypted90, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher90, plain90, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher90, res_cipher90, structpointer90);
}
if(strncmp(res_cipher90, Iterated_100_times90, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher90, res_cipher90, structpointer90);
}
if(strncmp(res_cipher90, Iterated_1000_times90, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer90);
ite++;

unsigned char res_cipher91[16];
unsigned char res_uncipher91[16];
                      char key91[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain91, res_cipher91, structpointer91);
if(strncmp(res_cipher91, cipher91, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher91, res_uncipher91, structpointer91);
if(strncmp(res_uncipher91, decrypted91, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher91, plain91, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher91, res_cipher91, structpointer91);
}
if(strncmp(res_cipher91, Iterated_100_times91, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher91, res_cipher91, structpointer91);
}
if(strncmp(res_cipher91, Iterated_1000_times91, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer91);
ite++;

unsigned char res_cipher92[16];
unsigned char res_uncipher92[16];
                      char key92[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain92, res_cipher92, structpointer92);
if(strncmp(res_cipher92, cipher92, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher92, res_uncipher92, structpointer92);
if(strncmp(res_uncipher92, decrypted92, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher92, plain92, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher92, res_cipher92, structpointer92);
}
if(strncmp(res_cipher92, Iterated_100_times92, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher92, res_cipher92, structpointer92);
}
if(strncmp(res_cipher92, Iterated_1000_times92, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer92);
ite++;

unsigned char res_cipher93[16];
unsigned char res_uncipher93[16];
                      char key93[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain93, res_cipher93, structpointer93);
if(strncmp(res_cipher93, cipher93, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher93, res_uncipher93, structpointer93);
if(strncmp(res_uncipher93, decrypted93, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher93, plain93, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher93, res_cipher93, structpointer93);
}
if(strncmp(res_cipher93, Iterated_100_times93, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher93, res_cipher93, structpointer93);
}
if(strncmp(res_cipher93, Iterated_1000_times93, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer93);
ite++;

unsigned char res_cipher94[16];
unsigned char res_uncipher94[16];
                      char key94[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain94, res_cipher94, structpointer94);
if(strncmp(res_cipher94, cipher94, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher94, res_uncipher94, structpointer94);
if(strncmp(res_uncipher94, decrypted94, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher94, plain94, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher94, res_cipher94, structpointer94);
}
if(strncmp(res_cipher94, Iterated_100_times94, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher94, res_cipher94, structpointer94);
}
if(strncmp(res_cipher94, Iterated_1000_times94, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer94);
ite++;

unsigned char res_cipher95[16];
unsigned char res_uncipher95[16];
                      char key95[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain95, res_cipher95, structpointer95);
if(strncmp(res_cipher95, cipher95, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher95, res_uncipher95, structpointer95);
if(strncmp(res_uncipher95, decrypted95, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher95, plain95, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher95, res_cipher95, structpointer95);
}
if(strncmp(res_cipher95, Iterated_100_times95, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher95, res_cipher95, structpointer95);
}
if(strncmp(res_cipher95, Iterated_1000_times95, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer95);
ite++;

unsigned char res_cipher96[16];
unsigned char res_uncipher96[16];
                      char key96[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain96, res_cipher96, structpointer96);
if(strncmp(res_cipher96, cipher96, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher96, res_uncipher96, structpointer96);
if(strncmp(res_uncipher96, decrypted96, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher96, plain96, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher96, res_cipher96, structpointer96);
}
if(strncmp(res_cipher96, Iterated_100_times96, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher96, res_cipher96, structpointer96);
}
if(strncmp(res_cipher96, Iterated_1000_times96, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer96);
ite++;

unsigned char res_cipher97[16];
unsigned char res_uncipher97[16];
                      char key97[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain97, res_cipher97, structpointer97);
if(strncmp(res_cipher97, cipher97, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher97, res_uncipher97, structpointer97);
if(strncmp(res_uncipher97, decrypted97, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher97, plain97, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher97, res_cipher97, structpointer97);
}
if(strncmp(res_cipher97, Iterated_100_times97, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher97, res_cipher97, structpointer97);
}
if(strncmp(res_cipher97, Iterated_1000_times97, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer97);
ite++;

unsigned char res_cipher98[16];
unsigned char res_uncipher98[16];
                      char key98[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain98, res_cipher98, structpointer98);
if(strncmp(res_cipher98, cipher98, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher98, res_uncipher98, structpointer98);
if(strncmp(res_uncipher98, decrypted98, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher98, plain98, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher98, res_cipher98, structpointer98);
}
if(strncmp(res_cipher98, Iterated_100_times98, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher98, res_cipher98, structpointer98);
}
if(strncmp(res_cipher98, Iterated_1000_times98, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer98);
ite++;

unsigned char res_cipher99[16];
unsigned char res_uncipher99[16];
                      char key99[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain99, res_cipher99, structpointer99);
if(strncmp(res_cipher99, cipher99, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher99, res_uncipher99, structpointer99);
if(strncmp(res_uncipher99, decrypted99, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher99, plain99, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher99, res_cipher99, structpointer99);
}
if(strncmp(res_cipher99, Iterated_100_times99, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher99, res_cipher99, structpointer99);
}
if(strncmp(res_cipher99, Iterated_1000_times99, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer99);
ite++;

unsigned char res_cipher100[16];
unsigned char res_uncipher100[16];
                      char key100[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain100, res_cipher100, structpointer100);
if(strncmp(res_cipher100, cipher100, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher100, res_uncipher100, structpointer100);
if(strncmp(res_uncipher100, decrypted100, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher100, plain100, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher100, res_cipher100, structpointer100);
}
if(strncmp(res_cipher100, Iterated_100_times100, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher100, res_cipher100, structpointer100);
}
if(strncmp(res_cipher100, Iterated_1000_times100, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer100);
ite++;

unsigned char res_cipher101[16];
unsigned char res_uncipher101[16];
                      char key101[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain101, res_cipher101, structpointer101);
if(strncmp(res_cipher101, cipher101, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher101, res_uncipher101, structpointer101);
if(strncmp(res_uncipher101, decrypted101, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher101, plain101, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher101, res_cipher101, structpointer101);
}
if(strncmp(res_cipher101, Iterated_100_times101, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher101, res_cipher101, structpointer101);
}
if(strncmp(res_cipher101, Iterated_1000_times101, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer101);
ite++;

unsigned char res_cipher102[16];
unsigned char res_uncipher102[16];
                      char key102[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain102, res_cipher102, structpointer102);
if(strncmp(res_cipher102, cipher102, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher102, res_uncipher102, structpointer102);
if(strncmp(res_uncipher102, decrypted102, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher102, plain102, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher102, res_cipher102, structpointer102);
}
if(strncmp(res_cipher102, Iterated_100_times102, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher102, res_cipher102, structpointer102);
}
if(strncmp(res_cipher102, Iterated_1000_times102, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer102);
ite++;

unsigned char res_cipher103[16];
unsigned char res_uncipher103[16];
                      char key103[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain103, res_cipher103, structpointer103);
if(strncmp(res_cipher103, cipher103, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher103, res_uncipher103, structpointer103);
if(strncmp(res_uncipher103, decrypted103, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher103, plain103, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher103, res_cipher103, structpointer103);
}
if(strncmp(res_cipher103, Iterated_100_times103, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher103, res_cipher103, structpointer103);
}
if(strncmp(res_cipher103, Iterated_1000_times103, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer103);
ite++;

unsigned char res_cipher104[16];
unsigned char res_uncipher104[16];
                      char key104[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain104, res_cipher104, structpointer104);
if(strncmp(res_cipher104, cipher104, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher104, res_uncipher104, structpointer104);
if(strncmp(res_uncipher104, decrypted104, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher104, plain104, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher104, res_cipher104, structpointer104);
}
if(strncmp(res_cipher104, Iterated_100_times104, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher104, res_cipher104, structpointer104);
}
if(strncmp(res_cipher104, Iterated_1000_times104, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer104);
ite++;

unsigned char res_cipher105[16];
unsigned char res_uncipher105[16];
                      char key105[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain105, res_cipher105, structpointer105);
if(strncmp(res_cipher105, cipher105, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher105, res_uncipher105, structpointer105);
if(strncmp(res_uncipher105, decrypted105, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher105, plain105, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher105, res_cipher105, structpointer105);
}
if(strncmp(res_cipher105, Iterated_100_times105, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher105, res_cipher105, structpointer105);
}
if(strncmp(res_cipher105, Iterated_1000_times105, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer105);
ite++;

unsigned char res_cipher106[16];
unsigned char res_uncipher106[16];
                      char key106[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain106, res_cipher106, structpointer106);
if(strncmp(res_cipher106, cipher106, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher106, res_uncipher106, structpointer106);
if(strncmp(res_uncipher106, decrypted106, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher106, plain106, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher106, res_cipher106, structpointer106);
}
if(strncmp(res_cipher106, Iterated_100_times106, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher106, res_cipher106, structpointer106);
}
if(strncmp(res_cipher106, Iterated_1000_times106, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer106);
ite++;

unsigned char res_cipher107[16];
unsigned char res_uncipher107[16];
                      char key107[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain107, res_cipher107, structpointer107);
if(strncmp(res_cipher107, cipher107, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher107, res_uncipher107, structpointer107);
if(strncmp(res_uncipher107, decrypted107, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher107, plain107, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher107, res_cipher107, structpointer107);
}
if(strncmp(res_cipher107, Iterated_100_times107, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher107, res_cipher107, structpointer107);
}
if(strncmp(res_cipher107, Iterated_1000_times107, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer107);
ite++;

unsigned char res_cipher108[16];
unsigned char res_uncipher108[16];
                      char key108[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain108, res_cipher108, structpointer108);
if(strncmp(res_cipher108, cipher108, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher108, res_uncipher108, structpointer108);
if(strncmp(res_uncipher108, decrypted108, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher108, plain108, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher108, res_cipher108, structpointer108);
}
if(strncmp(res_cipher108, Iterated_100_times108, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher108, res_cipher108, structpointer108);
}
if(strncmp(res_cipher108, Iterated_1000_times108, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer108);
ite++;

unsigned char res_cipher109[16];
unsigned char res_uncipher109[16];
                      char key109[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain109, res_cipher109, structpointer109);
if(strncmp(res_cipher109, cipher109, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher109, res_uncipher109, structpointer109);
if(strncmp(res_uncipher109, decrypted109, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher109, plain109, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher109, res_cipher109, structpointer109);
}
if(strncmp(res_cipher109, Iterated_100_times109, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher109, res_cipher109, structpointer109);
}
if(strncmp(res_cipher109, Iterated_1000_times109, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer109);
ite++;

unsigned char res_cipher110[16];
unsigned char res_uncipher110[16];
                      char key110[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain110, res_cipher110, structpointer110);
if(strncmp(res_cipher110, cipher110, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher110, res_uncipher110, structpointer110);
if(strncmp(res_uncipher110, decrypted110, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher110, plain110, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher110, res_cipher110, structpointer110);
}
if(strncmp(res_cipher110, Iterated_100_times110, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher110, res_cipher110, structpointer110);
}
if(strncmp(res_cipher110, Iterated_1000_times110, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer110);
ite++;

unsigned char res_cipher111[16];
unsigned char res_uncipher111[16];
                      char key111[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain111, res_cipher111, structpointer111);
if(strncmp(res_cipher111, cipher111, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher111, res_uncipher111, structpointer111);
if(strncmp(res_uncipher111, decrypted111, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher111, plain111, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher111, res_cipher111, structpointer111);
}
if(strncmp(res_cipher111, Iterated_100_times111, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher111, res_cipher111, structpointer111);
}
if(strncmp(res_cipher111, Iterated_1000_times111, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer111);
ite++;

unsigned char res_cipher112[16];
unsigned char res_uncipher112[16];
                      char key112[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain112, res_cipher112, structpointer112);
if(strncmp(res_cipher112, cipher112, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher112, res_uncipher112, structpointer112);
if(strncmp(res_uncipher112, decrypted112, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher112, plain112, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher112, res_cipher112, structpointer112);
}
if(strncmp(res_cipher112, Iterated_100_times112, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher112, res_cipher112, structpointer112);
}
if(strncmp(res_cipher112, Iterated_1000_times112, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer112);
ite++;

unsigned char res_cipher113[16];
unsigned char res_uncipher113[16];
                      char key113[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain113, res_cipher113, structpointer113);
if(strncmp(res_cipher113, cipher113, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher113, res_uncipher113, structpointer113);
if(strncmp(res_uncipher113, decrypted113, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher113, plain113, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher113, res_cipher113, structpointer113);
}
if(strncmp(res_cipher113, Iterated_100_times113, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher113, res_cipher113, structpointer113);
}
if(strncmp(res_cipher113, Iterated_1000_times113, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer113);
ite++;

unsigned char res_cipher114[16];
unsigned char res_uncipher114[16];
                      char key114[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain114, res_cipher114, structpointer114);
if(strncmp(res_cipher114, cipher114, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher114, res_uncipher114, structpointer114);
if(strncmp(res_uncipher114, decrypted114, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher114, plain114, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher114, res_cipher114, structpointer114);
}
if(strncmp(res_cipher114, Iterated_100_times114, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher114, res_cipher114, structpointer114);
}
if(strncmp(res_cipher114, Iterated_1000_times114, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer114);
ite++;

unsigned char res_cipher115[16];
unsigned char res_uncipher115[16];
                      char key115[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain115, res_cipher115, structpointer115);
if(strncmp(res_cipher115, cipher115, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher115, res_uncipher115, structpointer115);
if(strncmp(res_uncipher115, decrypted115, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher115, plain115, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher115, res_cipher115, structpointer115);
}
if(strncmp(res_cipher115, Iterated_100_times115, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher115, res_cipher115, structpointer115);
}
if(strncmp(res_cipher115, Iterated_1000_times115, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer115);
ite++;

unsigned char res_cipher116[16];
unsigned char res_uncipher116[16];
                      char key116[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain116, res_cipher116, structpointer116);
if(strncmp(res_cipher116, cipher116, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher116, res_uncipher116, structpointer116);
if(strncmp(res_uncipher116, decrypted116, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher116, plain116, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher116, res_cipher116, structpointer116);
}
if(strncmp(res_cipher116, Iterated_100_times116, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher116, res_cipher116, structpointer116);
}
if(strncmp(res_cipher116, Iterated_1000_times116, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer116);
ite++;

unsigned char res_cipher117[16];
unsigned char res_uncipher117[16];
                      char key117[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain117, res_cipher117, structpointer117);
if(strncmp(res_cipher117, cipher117, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher117, res_uncipher117, structpointer117);
if(strncmp(res_uncipher117, decrypted117, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher117, plain117, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher117, res_cipher117, structpointer117);
}
if(strncmp(res_cipher117, Iterated_100_times117, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher117, res_cipher117, structpointer117);
}
if(strncmp(res_cipher117, Iterated_1000_times117, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer117);
ite++;

unsigned char res_cipher118[16];
unsigned char res_uncipher118[16];
                      char key118[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain118, res_cipher118, structpointer118);
if(strncmp(res_cipher118, cipher118, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher118, res_uncipher118, structpointer118);
if(strncmp(res_uncipher118, decrypted118, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher118, plain118, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher118, res_cipher118, structpointer118);
}
if(strncmp(res_cipher118, Iterated_100_times118, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher118, res_cipher118, structpointer118);
}
if(strncmp(res_cipher118, Iterated_1000_times118, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer118);
ite++;

unsigned char res_cipher119[16];
unsigned char res_uncipher119[16];
                      char key119[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain119, res_cipher119, structpointer119);
if(strncmp(res_cipher119, cipher119, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher119, res_uncipher119, structpointer119);
if(strncmp(res_uncipher119, decrypted119, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher119, plain119, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher119, res_cipher119, structpointer119);
}
if(strncmp(res_cipher119, Iterated_100_times119, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher119, res_cipher119, structpointer119);
}
if(strncmp(res_cipher119, Iterated_1000_times119, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer119);
ite++;

unsigned char res_cipher120[16];
unsigned char res_uncipher120[16];
                      char key120[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain120, res_cipher120, structpointer120);
if(strncmp(res_cipher120, cipher120, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher120, res_uncipher120, structpointer120);
if(strncmp(res_uncipher120, decrypted120, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher120, plain120, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher120, res_cipher120, structpointer120);
}
if(strncmp(res_cipher120, Iterated_100_times120, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher120, res_cipher120, structpointer120);
}
if(strncmp(res_cipher120, Iterated_1000_times120, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer120);
ite++;

unsigned char res_cipher121[16];
unsigned char res_uncipher121[16];
                      char key121[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain121, res_cipher121, structpointer121);
if(strncmp(res_cipher121, cipher121, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher121, res_uncipher121, structpointer121);
if(strncmp(res_uncipher121, decrypted121, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher121, plain121, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher121, res_cipher121, structpointer121);
}
if(strncmp(res_cipher121, Iterated_100_times121, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher121, res_cipher121, structpointer121);
}
if(strncmp(res_cipher121, Iterated_1000_times121, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer121);
ite++;

unsigned char res_cipher122[16];
unsigned char res_uncipher122[16];
                      char key122[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain122, res_cipher122, structpointer122);
if(strncmp(res_cipher122, cipher122, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher122, res_uncipher122, structpointer122);
if(strncmp(res_uncipher122, decrypted122, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher122, plain122, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher122, res_cipher122, structpointer122);
}
if(strncmp(res_cipher122, Iterated_100_times122, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher122, res_cipher122, structpointer122);
}
if(strncmp(res_cipher122, Iterated_1000_times122, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer122);
ite++;

unsigned char res_cipher123[16];
unsigned char res_uncipher123[16];
                      char key123[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain123, res_cipher123, structpointer123);
if(strncmp(res_cipher123, cipher123, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher123, res_uncipher123, structpointer123);
if(strncmp(res_uncipher123, decrypted123, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher123, plain123, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher123, res_cipher123, structpointer123);
}
if(strncmp(res_cipher123, Iterated_100_times123, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher123, res_cipher123, structpointer123);
}
if(strncmp(res_cipher123, Iterated_1000_times123, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer123);
ite++;

unsigned char res_cipher124[16];
unsigned char res_uncipher124[16];
                      char key124[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain124, res_cipher124, structpointer124);
if(strncmp(res_cipher124, cipher124, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher124, res_uncipher124, structpointer124);
if(strncmp(res_uncipher124, decrypted124, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher124, plain124, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher124, res_cipher124, structpointer124);
}
if(strncmp(res_cipher124, Iterated_100_times124, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher124, res_cipher124, structpointer124);
}
if(strncmp(res_cipher124, Iterated_1000_times124, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer124);
ite++;

unsigned char res_cipher125[16];
unsigned char res_uncipher125[16];
                      char key125[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain125, res_cipher125, structpointer125);
if(strncmp(res_cipher125, cipher125, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher125, res_uncipher125, structpointer125);
if(strncmp(res_uncipher125, decrypted125, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher125, plain125, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher125, res_cipher125, structpointer125);
}
if(strncmp(res_cipher125, Iterated_100_times125, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher125, res_cipher125, structpointer125);
}
if(strncmp(res_cipher125, Iterated_1000_times125, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer125);
ite++;

unsigned char res_cipher126[16];
unsigned char res_uncipher126[16];
                      char key126[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain126, res_cipher126, structpointer126);
if(strncmp(res_cipher126, cipher126, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher126, res_uncipher126, structpointer126);
if(strncmp(res_uncipher126, decrypted126, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher126, plain126, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher126, res_cipher126, structpointer126);
}
if(strncmp(res_cipher126, Iterated_100_times126, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher126, res_cipher126, structpointer126);
}
if(strncmp(res_cipher126, Iterated_1000_times126, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer126);
ite++;

unsigned char res_cipher127[16];
unsigned char res_uncipher127[16];
                      char key127[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain127, res_cipher127, structpointer127);
if(strncmp(res_cipher127, cipher127, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher127, res_uncipher127, structpointer127);
if(strncmp(res_uncipher127, decrypted127, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher127, plain127, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher127, res_cipher127, structpointer127);
}
if(strncmp(res_cipher127, Iterated_100_times127, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher127, res_cipher127, structpointer127);
}
if(strncmp(res_cipher127, Iterated_1000_times127, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer127);
ite++;

unsigned char res_cipher128[16];
unsigned char res_uncipher128[16];
                      char key128[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain128, res_cipher128, structpointer128);
if(strncmp(res_cipher128, cipher128, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher128, res_uncipher128, structpointer128);
if(strncmp(res_uncipher128, decrypted128, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher128, plain128, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher128, res_cipher128, structpointer128);
}
if(strncmp(res_cipher128, Iterated_100_times128, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher128, res_cipher128, structpointer128);
}
if(strncmp(res_cipher128, Iterated_1000_times128, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer128);
ite++;

unsigned char res_cipher129[16];
unsigned char res_uncipher129[16];
                      char key129[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain129, res_cipher129, structpointer129);
if(strncmp(res_cipher129, cipher129, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher129, res_uncipher129, structpointer129);
if(strncmp(res_uncipher129, decrypted129, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher129, plain129, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher129, res_cipher129, structpointer129);
}
if(strncmp(res_cipher129, Iterated_100_times129, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher129, res_cipher129, structpointer129);
}
if(strncmp(res_cipher129, Iterated_1000_times129, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer129);
ite++;

unsigned char res_cipher130[16];
unsigned char res_uncipher130[16];
                      char key130[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain130, res_cipher130, structpointer130);
if(strncmp(res_cipher130, cipher130, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher130, res_uncipher130, structpointer130);
if(strncmp(res_uncipher130, decrypted130, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher130, plain130, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher130, res_cipher130, structpointer130);
}
if(strncmp(res_cipher130, Iterated_100_times130, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher130, res_cipher130, structpointer130);
}
if(strncmp(res_cipher130, Iterated_1000_times130, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer130);
ite++;

unsigned char res_cipher131[16];
unsigned char res_uncipher131[16];
                      char key131[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain131, res_cipher131, structpointer131);
if(strncmp(res_cipher131, cipher131, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher131, res_uncipher131, structpointer131);
if(strncmp(res_uncipher131, decrypted131, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher131, plain131, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher131, res_cipher131, structpointer131);
}
if(strncmp(res_cipher131, Iterated_100_times131, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher131, res_cipher131, structpointer131);
}
if(strncmp(res_cipher131, Iterated_1000_times131, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer131);
ite++;

unsigned char res_cipher132[16];
unsigned char res_uncipher132[16];
                      char key132[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain132, res_cipher132, structpointer132);
if(strncmp(res_cipher132, cipher132, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher132, res_uncipher132, structpointer132);
if(strncmp(res_uncipher132, decrypted132, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher132, plain132, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher132, res_cipher132, structpointer132);
}
if(strncmp(res_cipher132, Iterated_100_times132, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher132, res_cipher132, structpointer132);
}
if(strncmp(res_cipher132, Iterated_1000_times132, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer132);
ite++;

unsigned char res_cipher133[16];
unsigned char res_uncipher133[16];
                      char key133[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain133, res_cipher133, structpointer133);
if(strncmp(res_cipher133, cipher133, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher133, res_uncipher133, structpointer133);
if(strncmp(res_uncipher133, decrypted133, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher133, plain133, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher133, res_cipher133, structpointer133);
}
if(strncmp(res_cipher133, Iterated_100_times133, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher133, res_cipher133, structpointer133);
}
if(strncmp(res_cipher133, Iterated_1000_times133, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer133);
ite++;

unsigned char res_cipher134[16];
unsigned char res_uncipher134[16];
                      char key134[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain134, res_cipher134, structpointer134);
if(strncmp(res_cipher134, cipher134, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher134, res_uncipher134, structpointer134);
if(strncmp(res_uncipher134, decrypted134, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher134, plain134, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher134, res_cipher134, structpointer134);
}
if(strncmp(res_cipher134, Iterated_100_times134, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher134, res_cipher134, structpointer134);
}
if(strncmp(res_cipher134, Iterated_1000_times134, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer134);
ite++;

unsigned char res_cipher135[16];
unsigned char res_uncipher135[16];
                      char key135[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain135, res_cipher135, structpointer135);
if(strncmp(res_cipher135, cipher135, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher135, res_uncipher135, structpointer135);
if(strncmp(res_uncipher135, decrypted135, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher135, plain135, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher135, res_cipher135, structpointer135);
}
if(strncmp(res_cipher135, Iterated_100_times135, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher135, res_cipher135, structpointer135);
}
if(strncmp(res_cipher135, Iterated_1000_times135, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer135);
ite++;

unsigned char res_cipher136[16];
unsigned char res_uncipher136[16];
                      char key136[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain136, res_cipher136, structpointer136);
if(strncmp(res_cipher136, cipher136, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher136, res_uncipher136, structpointer136);
if(strncmp(res_uncipher136, decrypted136, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher136, plain136, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher136, res_cipher136, structpointer136);
}
if(strncmp(res_cipher136, Iterated_100_times136, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher136, res_cipher136, structpointer136);
}
if(strncmp(res_cipher136, Iterated_1000_times136, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer136);
ite++;

unsigned char res_cipher137[16];
unsigned char res_uncipher137[16];
                      char key137[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain137, res_cipher137, structpointer137);
if(strncmp(res_cipher137, cipher137, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher137, res_uncipher137, structpointer137);
if(strncmp(res_uncipher137, decrypted137, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher137, plain137, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher137, res_cipher137, structpointer137);
}
if(strncmp(res_cipher137, Iterated_100_times137, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher137, res_cipher137, structpointer137);
}
if(strncmp(res_cipher137, Iterated_1000_times137, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer137);
ite++;

unsigned char res_cipher138[16];
unsigned char res_uncipher138[16];
                      char key138[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain138, res_cipher138, structpointer138);
if(strncmp(res_cipher138, cipher138, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher138, res_uncipher138, structpointer138);
if(strncmp(res_uncipher138, decrypted138, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher138, plain138, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher138, res_cipher138, structpointer138);
}
if(strncmp(res_cipher138, Iterated_100_times138, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher138, res_cipher138, structpointer138);
}
if(strncmp(res_cipher138, Iterated_1000_times138, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer138);
ite++;

unsigned char res_cipher139[16];
unsigned char res_uncipher139[16];
                      char key139[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain139, res_cipher139, structpointer139);
if(strncmp(res_cipher139, cipher139, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher139, res_uncipher139, structpointer139);
if(strncmp(res_uncipher139, decrypted139, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher139, plain139, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher139, res_cipher139, structpointer139);
}
if(strncmp(res_cipher139, Iterated_100_times139, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher139, res_cipher139, structpointer139);
}
if(strncmp(res_cipher139, Iterated_1000_times139, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer139);
ite++;

unsigned char res_cipher140[16];
unsigned char res_uncipher140[16];
                      char key140[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain140, res_cipher140, structpointer140);
if(strncmp(res_cipher140, cipher140, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher140, res_uncipher140, structpointer140);
if(strncmp(res_uncipher140, decrypted140, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher140, plain140, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher140, res_cipher140, structpointer140);
}
if(strncmp(res_cipher140, Iterated_100_times140, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher140, res_cipher140, structpointer140);
}
if(strncmp(res_cipher140, Iterated_1000_times140, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer140);
ite++;

unsigned char res_cipher141[16];
unsigned char res_uncipher141[16];
                      char key141[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain141, res_cipher141, structpointer141);
if(strncmp(res_cipher141, cipher141, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher141, res_uncipher141, structpointer141);
if(strncmp(res_uncipher141, decrypted141, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher141, plain141, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher141, res_cipher141, structpointer141);
}
if(strncmp(res_cipher141, Iterated_100_times141, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher141, res_cipher141, structpointer141);
}
if(strncmp(res_cipher141, Iterated_1000_times141, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer141);
ite++;

unsigned char res_cipher142[16];
unsigned char res_uncipher142[16];
                      char key142[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain142, res_cipher142, structpointer142);
if(strncmp(res_cipher142, cipher142, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher142, res_uncipher142, structpointer142);
if(strncmp(res_uncipher142, decrypted142, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher142, plain142, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher142, res_cipher142, structpointer142);
}
if(strncmp(res_cipher142, Iterated_100_times142, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher142, res_cipher142, structpointer142);
}
if(strncmp(res_cipher142, Iterated_1000_times142, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer142);
ite++;

unsigned char res_cipher143[16];
unsigned char res_uncipher143[16];
                      char key143[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain143, res_cipher143, structpointer143);
if(strncmp(res_cipher143, cipher143, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher143, res_uncipher143, structpointer143);
if(strncmp(res_uncipher143, decrypted143, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher143, plain143, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher143, res_cipher143, structpointer143);
}
if(strncmp(res_cipher143, Iterated_100_times143, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher143, res_cipher143, structpointer143);
}
if(strncmp(res_cipher143, Iterated_1000_times143, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer143);
ite++;

unsigned char res_cipher144[16];
unsigned char res_uncipher144[16];
                      char key144[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain144, res_cipher144, structpointer144);
if(strncmp(res_cipher144, cipher144, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher144, res_uncipher144, structpointer144);
if(strncmp(res_uncipher144, decrypted144, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher144, plain144, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher144, res_cipher144, structpointer144);
}
if(strncmp(res_cipher144, Iterated_100_times144, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher144, res_cipher144, structpointer144);
}
if(strncmp(res_cipher144, Iterated_1000_times144, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer144);
ite++;

unsigned char res_cipher145[16];
unsigned char res_uncipher145[16];
                      char key145[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain145, res_cipher145, structpointer145);
if(strncmp(res_cipher145, cipher145, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher145, res_uncipher145, structpointer145);
if(strncmp(res_uncipher145, decrypted145, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher145, plain145, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher145, res_cipher145, structpointer145);
}
if(strncmp(res_cipher145, Iterated_100_times145, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher145, res_cipher145, structpointer145);
}
if(strncmp(res_cipher145, Iterated_1000_times145, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer145);
ite++;

unsigned char res_cipher146[16];
unsigned char res_uncipher146[16];
                      char key146[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain146, res_cipher146, structpointer146);
if(strncmp(res_cipher146, cipher146, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher146, res_uncipher146, structpointer146);
if(strncmp(res_uncipher146, decrypted146, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher146, plain146, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher146, res_cipher146, structpointer146);
}
if(strncmp(res_cipher146, Iterated_100_times146, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher146, res_cipher146, structpointer146);
}
if(strncmp(res_cipher146, Iterated_1000_times146, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer146);
ite++;

unsigned char res_cipher147[16];
unsigned char res_uncipher147[16];
                      char key147[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain147, res_cipher147, structpointer147);
if(strncmp(res_cipher147, cipher147, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher147, res_uncipher147, structpointer147);
if(strncmp(res_uncipher147, decrypted147, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher147, plain147, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher147, res_cipher147, structpointer147);
}
if(strncmp(res_cipher147, Iterated_100_times147, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher147, res_cipher147, structpointer147);
}
if(strncmp(res_cipher147, Iterated_1000_times147, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer147);
ite++;

unsigned char res_cipher148[16];
unsigned char res_uncipher148[16];
                      char key148[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain148, res_cipher148, structpointer148);
if(strncmp(res_cipher148, cipher148, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher148, res_uncipher148, structpointer148);
if(strncmp(res_uncipher148, decrypted148, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher148, plain148, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher148, res_cipher148, structpointer148);
}
if(strncmp(res_cipher148, Iterated_100_times148, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher148, res_cipher148, structpointer148);
}
if(strncmp(res_cipher148, Iterated_1000_times148, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer148);
ite++;

unsigned char res_cipher149[16];
unsigned char res_uncipher149[16];
                      char key149[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain149, res_cipher149, structpointer149);
if(strncmp(res_cipher149, cipher149, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher149, res_uncipher149, structpointer149);
if(strncmp(res_uncipher149, decrypted149, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher149, plain149, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher149, res_cipher149, structpointer149);
}
if(strncmp(res_cipher149, Iterated_100_times149, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher149, res_cipher149, structpointer149);
}
if(strncmp(res_cipher149, Iterated_1000_times149, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer149);
ite++;

unsigned char res_cipher150[16];
unsigned char res_uncipher150[16];
                      char key150[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain150, res_cipher150, structpointer150);
if(strncmp(res_cipher150, cipher150, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher150, res_uncipher150, structpointer150);
if(strncmp(res_uncipher150, decrypted150, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher150, plain150, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher150, res_cipher150, structpointer150);
}
if(strncmp(res_cipher150, Iterated_100_times150, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher150, res_cipher150, structpointer150);
}
if(strncmp(res_cipher150, Iterated_1000_times150, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer150);
ite++;

unsigned char res_cipher151[16];
unsigned char res_uncipher151[16];
                      char key151[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain151, res_cipher151, structpointer151);
if(strncmp(res_cipher151, cipher151, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher151, res_uncipher151, structpointer151);
if(strncmp(res_uncipher151, decrypted151, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher151, plain151, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher151, res_cipher151, structpointer151);
}
if(strncmp(res_cipher151, Iterated_100_times151, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher151, res_cipher151, structpointer151);
}
if(strncmp(res_cipher151, Iterated_1000_times151, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer151);
ite++;

unsigned char res_cipher152[16];
unsigned char res_uncipher152[16];
                      char key152[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain152, res_cipher152, structpointer152);
if(strncmp(res_cipher152, cipher152, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher152, res_uncipher152, structpointer152);
if(strncmp(res_uncipher152, decrypted152, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher152, plain152, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher152, res_cipher152, structpointer152);
}
if(strncmp(res_cipher152, Iterated_100_times152, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher152, res_cipher152, structpointer152);
}
if(strncmp(res_cipher152, Iterated_1000_times152, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer152);
ite++;

unsigned char res_cipher153[16];
unsigned char res_uncipher153[16];
                      char key153[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain153, res_cipher153, structpointer153);
if(strncmp(res_cipher153, cipher153, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher153, res_uncipher153, structpointer153);
if(strncmp(res_uncipher153, decrypted153, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher153, plain153, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher153, res_cipher153, structpointer153);
}
if(strncmp(res_cipher153, Iterated_100_times153, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher153, res_cipher153, structpointer153);
}
if(strncmp(res_cipher153, Iterated_1000_times153, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer153);
ite++;

unsigned char res_cipher154[16];
unsigned char res_uncipher154[16];
                      char key154[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain154, res_cipher154, structpointer154);
if(strncmp(res_cipher154, cipher154, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher154, res_uncipher154, structpointer154);
if(strncmp(res_uncipher154, decrypted154, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher154, plain154, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher154, res_cipher154, structpointer154);
}
if(strncmp(res_cipher154, Iterated_100_times154, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher154, res_cipher154, structpointer154);
}
if(strncmp(res_cipher154, Iterated_1000_times154, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer154);
ite++;

unsigned char res_cipher155[16];
unsigned char res_uncipher155[16];
                      char key155[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain155, res_cipher155, structpointer155);
if(strncmp(res_cipher155, cipher155, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher155, res_uncipher155, structpointer155);
if(strncmp(res_uncipher155, decrypted155, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher155, plain155, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher155, res_cipher155, structpointer155);
}
if(strncmp(res_cipher155, Iterated_100_times155, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher155, res_cipher155, structpointer155);
}
if(strncmp(res_cipher155, Iterated_1000_times155, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer155);
ite++;

unsigned char res_cipher156[16];
unsigned char res_uncipher156[16];
                      char key156[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain156, res_cipher156, structpointer156);
if(strncmp(res_cipher156, cipher156, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher156, res_uncipher156, structpointer156);
if(strncmp(res_uncipher156, decrypted156, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher156, plain156, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher156, res_cipher156, structpointer156);
}
if(strncmp(res_cipher156, Iterated_100_times156, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher156, res_cipher156, structpointer156);
}
if(strncmp(res_cipher156, Iterated_1000_times156, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer156);
ite++;

unsigned char res_cipher157[16];
unsigned char res_uncipher157[16];
                      char key157[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain157, res_cipher157, structpointer157);
if(strncmp(res_cipher157, cipher157, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher157, res_uncipher157, structpointer157);
if(strncmp(res_uncipher157, decrypted157, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher157, plain157, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher157, res_cipher157, structpointer157);
}
if(strncmp(res_cipher157, Iterated_100_times157, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher157, res_cipher157, structpointer157);
}
if(strncmp(res_cipher157, Iterated_1000_times157, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer157);
ite++;

unsigned char res_cipher158[16];
unsigned char res_uncipher158[16];
                      char key158[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain158, res_cipher158, structpointer158);
if(strncmp(res_cipher158, cipher158, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher158, res_uncipher158, structpointer158);
if(strncmp(res_uncipher158, decrypted158, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher158, plain158, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher158, res_cipher158, structpointer158);
}
if(strncmp(res_cipher158, Iterated_100_times158, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher158, res_cipher158, structpointer158);
}
if(strncmp(res_cipher158, Iterated_1000_times158, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer158);
ite++;

unsigned char res_cipher159[16];
unsigned char res_uncipher159[16];
                      char key159[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain159, res_cipher159, structpointer159);
if(strncmp(res_cipher159, cipher159, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher159, res_uncipher159, structpointer159);
if(strncmp(res_uncipher159, decrypted159, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher159, plain159, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher159, res_cipher159, structpointer159);
}
if(strncmp(res_cipher159, Iterated_100_times159, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher159, res_cipher159, structpointer159);
}
if(strncmp(res_cipher159, Iterated_1000_times159, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer159);
ite++;

unsigned char res_cipher160[16];
unsigned char res_uncipher160[16];
                      char key160[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain160, res_cipher160, structpointer160);
if(strncmp(res_cipher160, cipher160, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher160, res_uncipher160, structpointer160);
if(strncmp(res_uncipher160, decrypted160, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher160, plain160, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher160, res_cipher160, structpointer160);
}
if(strncmp(res_cipher160, Iterated_100_times160, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher160, res_cipher160, structpointer160);
}
if(strncmp(res_cipher160, Iterated_1000_times160, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer160);
ite++;

unsigned char res_cipher161[16];
unsigned char res_uncipher161[16];
                      char key161[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00};
NESSIEencrypt(plain161, res_cipher161, structpointer161);
if(strncmp(res_cipher161, cipher161, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher161, res_uncipher161, structpointer161);
if(strncmp(res_uncipher161, decrypted161, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher161, plain161, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher161, res_cipher161, structpointer161);
}
if(strncmp(res_cipher161, Iterated_100_times161, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher161, res_cipher161, structpointer161);
}
if(strncmp(res_cipher161, Iterated_1000_times161, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer161);
ite++;

unsigned char res_cipher162[16];
unsigned char res_uncipher162[16];
                      char key162[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00};
NESSIEencrypt(plain162, res_cipher162, structpointer162);
if(strncmp(res_cipher162, cipher162, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher162, res_uncipher162, structpointer162);
if(strncmp(res_uncipher162, decrypted162, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher162, plain162, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher162, res_cipher162, structpointer162);
}
if(strncmp(res_cipher162, Iterated_100_times162, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher162, res_cipher162, structpointer162);
}
if(strncmp(res_cipher162, Iterated_1000_times162, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer162);
ite++;

unsigned char res_cipher163[16];
unsigned char res_uncipher163[16];
                      char key163[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00};
NESSIEencrypt(plain163, res_cipher163, structpointer163);
if(strncmp(res_cipher163, cipher163, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher163, res_uncipher163, structpointer163);
if(strncmp(res_uncipher163, decrypted163, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher163, plain163, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher163, res_cipher163, structpointer163);
}
if(strncmp(res_cipher163, Iterated_100_times163, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher163, res_cipher163, structpointer163);
}
if(strncmp(res_cipher163, Iterated_1000_times163, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer163);
ite++;

unsigned char res_cipher164[16];
unsigned char res_uncipher164[16];
                      char key164[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00};
NESSIEencrypt(plain164, res_cipher164, structpointer164);
if(strncmp(res_cipher164, cipher164, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher164, res_uncipher164, structpointer164);
if(strncmp(res_uncipher164, decrypted164, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher164, plain164, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher164, res_cipher164, structpointer164);
}
if(strncmp(res_cipher164, Iterated_100_times164, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher164, res_cipher164, structpointer164);
}
if(strncmp(res_cipher164, Iterated_1000_times164, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer164);
ite++;

unsigned char res_cipher165[16];
unsigned char res_uncipher165[16];
                      char key165[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00};
NESSIEencrypt(plain165, res_cipher165, structpointer165);
if(strncmp(res_cipher165, cipher165, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher165, res_uncipher165, structpointer165);
if(strncmp(res_uncipher165, decrypted165, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher165, plain165, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher165, res_cipher165, structpointer165);
}
if(strncmp(res_cipher165, Iterated_100_times165, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher165, res_cipher165, structpointer165);
}
if(strncmp(res_cipher165, Iterated_1000_times165, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer165);
ite++;

unsigned char res_cipher166[16];
unsigned char res_uncipher166[16];
                      char key166[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00};
NESSIEencrypt(plain166, res_cipher166, structpointer166);
if(strncmp(res_cipher166, cipher166, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher166, res_uncipher166, structpointer166);
if(strncmp(res_uncipher166, decrypted166, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher166, plain166, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher166, res_cipher166, structpointer166);
}
if(strncmp(res_cipher166, Iterated_100_times166, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher166, res_cipher166, structpointer166);
}
if(strncmp(res_cipher166, Iterated_1000_times166, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer166);
ite++;

unsigned char res_cipher167[16];
unsigned char res_uncipher167[16];
                      char key167[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00};
NESSIEencrypt(plain167, res_cipher167, structpointer167);
if(strncmp(res_cipher167, cipher167, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher167, res_uncipher167, structpointer167);
if(strncmp(res_uncipher167, decrypted167, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher167, plain167, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher167, res_cipher167, structpointer167);
}
if(strncmp(res_cipher167, Iterated_100_times167, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher167, res_cipher167, structpointer167);
}
if(strncmp(res_cipher167, Iterated_1000_times167, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer167);
ite++;

unsigned char res_cipher168[16];
unsigned char res_uncipher168[16];
                      char key168[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00};
NESSIEencrypt(plain168, res_cipher168, structpointer168);
if(strncmp(res_cipher168, cipher168, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher168, res_uncipher168, structpointer168);
if(strncmp(res_uncipher168, decrypted168, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher168, plain168, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher168, res_cipher168, structpointer168);
}
if(strncmp(res_cipher168, Iterated_100_times168, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher168, res_cipher168, structpointer168);
}
if(strncmp(res_cipher168, Iterated_1000_times168, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer168);
ite++;

unsigned char res_cipher169[16];
unsigned char res_uncipher169[16];
                      char key169[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00};
NESSIEencrypt(plain169, res_cipher169, structpointer169);
if(strncmp(res_cipher169, cipher169, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher169, res_uncipher169, structpointer169);
if(strncmp(res_uncipher169, decrypted169, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher169, plain169, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher169, res_cipher169, structpointer169);
}
if(strncmp(res_cipher169, Iterated_100_times169, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher169, res_cipher169, structpointer169);
}
if(strncmp(res_cipher169, Iterated_1000_times169, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer169);
ite++;

unsigned char res_cipher170[16];
unsigned char res_uncipher170[16];
                      char key170[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00};
NESSIEencrypt(plain170, res_cipher170, structpointer170);
if(strncmp(res_cipher170, cipher170, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher170, res_uncipher170, structpointer170);
if(strncmp(res_uncipher170, decrypted170, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher170, plain170, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher170, res_cipher170, structpointer170);
}
if(strncmp(res_cipher170, Iterated_100_times170, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher170, res_cipher170, structpointer170);
}
if(strncmp(res_cipher170, Iterated_1000_times170, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer170);
ite++;

unsigned char res_cipher171[16];
unsigned char res_uncipher171[16];
                      char key171[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00};
NESSIEencrypt(plain171, res_cipher171, structpointer171);
if(strncmp(res_cipher171, cipher171, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher171, res_uncipher171, structpointer171);
if(strncmp(res_uncipher171, decrypted171, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher171, plain171, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher171, res_cipher171, structpointer171);
}
if(strncmp(res_cipher171, Iterated_100_times171, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher171, res_cipher171, structpointer171);
}
if(strncmp(res_cipher171, Iterated_1000_times171, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer171);
ite++;

unsigned char res_cipher172[16];
unsigned char res_uncipher172[16];
                      char key172[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00};
NESSIEencrypt(plain172, res_cipher172, structpointer172);
if(strncmp(res_cipher172, cipher172, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher172, res_uncipher172, structpointer172);
if(strncmp(res_uncipher172, decrypted172, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher172, plain172, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher172, res_cipher172, structpointer172);
}
if(strncmp(res_cipher172, Iterated_100_times172, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher172, res_cipher172, structpointer172);
}
if(strncmp(res_cipher172, Iterated_1000_times172, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer172);
ite++;

unsigned char res_cipher173[16];
unsigned char res_uncipher173[16];
                      char key173[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00};
NESSIEencrypt(plain173, res_cipher173, structpointer173);
if(strncmp(res_cipher173, cipher173, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher173, res_uncipher173, structpointer173);
if(strncmp(res_uncipher173, decrypted173, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher173, plain173, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher173, res_cipher173, structpointer173);
}
if(strncmp(res_cipher173, Iterated_100_times173, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher173, res_cipher173, structpointer173);
}
if(strncmp(res_cipher173, Iterated_1000_times173, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer173);
ite++;

unsigned char res_cipher174[16];
unsigned char res_uncipher174[16];
                      char key174[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00};
NESSIEencrypt(plain174, res_cipher174, structpointer174);
if(strncmp(res_cipher174, cipher174, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher174, res_uncipher174, structpointer174);
if(strncmp(res_uncipher174, decrypted174, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher174, plain174, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher174, res_cipher174, structpointer174);
}
if(strncmp(res_cipher174, Iterated_100_times174, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher174, res_cipher174, structpointer174);
}
if(strncmp(res_cipher174, Iterated_1000_times174, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer174);
ite++;

unsigned char res_cipher175[16];
unsigned char res_uncipher175[16];
                      char key175[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00};
NESSIEencrypt(plain175, res_cipher175, structpointer175);
if(strncmp(res_cipher175, cipher175, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher175, res_uncipher175, structpointer175);
if(strncmp(res_uncipher175, decrypted175, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher175, plain175, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher175, res_cipher175, structpointer175);
}
if(strncmp(res_cipher175, Iterated_100_times175, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher175, res_cipher175, structpointer175);
}
if(strncmp(res_cipher175, Iterated_1000_times175, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer175);
ite++;

unsigned char res_cipher176[16];
unsigned char res_uncipher176[16];
                      char key176[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00};
NESSIEencrypt(plain176, res_cipher176, structpointer176);
if(strncmp(res_cipher176, cipher176, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher176, res_uncipher176, structpointer176);
if(strncmp(res_uncipher176, decrypted176, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher176, plain176, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher176, res_cipher176, structpointer176);
}
if(strncmp(res_cipher176, Iterated_100_times176, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher176, res_cipher176, structpointer176);
}
if(strncmp(res_cipher176, Iterated_1000_times176, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer176);
ite++;

unsigned char res_cipher177[16];
unsigned char res_uncipher177[16];
                      char key177[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00};
NESSIEencrypt(plain177, res_cipher177, structpointer177);
if(strncmp(res_cipher177, cipher177, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher177, res_uncipher177, structpointer177);
if(strncmp(res_uncipher177, decrypted177, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher177, plain177, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher177, res_cipher177, structpointer177);
}
if(strncmp(res_cipher177, Iterated_100_times177, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher177, res_cipher177, structpointer177);
}
if(strncmp(res_cipher177, Iterated_1000_times177, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer177);
ite++;

unsigned char res_cipher178[16];
unsigned char res_uncipher178[16];
                      char key178[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00};
NESSIEencrypt(plain178, res_cipher178, structpointer178);
if(strncmp(res_cipher178, cipher178, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher178, res_uncipher178, structpointer178);
if(strncmp(res_uncipher178, decrypted178, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher178, plain178, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher178, res_cipher178, structpointer178);
}
if(strncmp(res_cipher178, Iterated_100_times178, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher178, res_cipher178, structpointer178);
}
if(strncmp(res_cipher178, Iterated_1000_times178, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer178);
ite++;

unsigned char res_cipher179[16];
unsigned char res_uncipher179[16];
                      char key179[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00};
NESSIEencrypt(plain179, res_cipher179, structpointer179);
if(strncmp(res_cipher179, cipher179, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher179, res_uncipher179, structpointer179);
if(strncmp(res_uncipher179, decrypted179, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher179, plain179, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher179, res_cipher179, structpointer179);
}
if(strncmp(res_cipher179, Iterated_100_times179, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher179, res_cipher179, structpointer179);
}
if(strncmp(res_cipher179, Iterated_1000_times179, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer179);
ite++;

unsigned char res_cipher180[16];
unsigned char res_uncipher180[16];
                      char key180[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00};
NESSIEencrypt(plain180, res_cipher180, structpointer180);
if(strncmp(res_cipher180, cipher180, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher180, res_uncipher180, structpointer180);
if(strncmp(res_uncipher180, decrypted180, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher180, plain180, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher180, res_cipher180, structpointer180);
}
if(strncmp(res_cipher180, Iterated_100_times180, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher180, res_cipher180, structpointer180);
}
if(strncmp(res_cipher180, Iterated_1000_times180, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer180);
ite++;

unsigned char res_cipher181[16];
unsigned char res_uncipher181[16];
                      char key181[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00};
NESSIEencrypt(plain181, res_cipher181, structpointer181);
if(strncmp(res_cipher181, cipher181, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher181, res_uncipher181, structpointer181);
if(strncmp(res_uncipher181, decrypted181, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher181, plain181, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher181, res_cipher181, structpointer181);
}
if(strncmp(res_cipher181, Iterated_100_times181, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher181, res_cipher181, structpointer181);
}
if(strncmp(res_cipher181, Iterated_1000_times181, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer181);
ite++;

unsigned char res_cipher182[16];
unsigned char res_uncipher182[16];
                      char key182[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00};
NESSIEencrypt(plain182, res_cipher182, structpointer182);
if(strncmp(res_cipher182, cipher182, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher182, res_uncipher182, structpointer182);
if(strncmp(res_uncipher182, decrypted182, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher182, plain182, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher182, res_cipher182, structpointer182);
}
if(strncmp(res_cipher182, Iterated_100_times182, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher182, res_cipher182, structpointer182);
}
if(strncmp(res_cipher182, Iterated_1000_times182, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer182);
ite++;

unsigned char res_cipher183[16];
unsigned char res_uncipher183[16];
                      char key183[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00};
NESSIEencrypt(plain183, res_cipher183, structpointer183);
if(strncmp(res_cipher183, cipher183, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher183, res_uncipher183, structpointer183);
if(strncmp(res_uncipher183, decrypted183, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher183, plain183, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher183, res_cipher183, structpointer183);
}
if(strncmp(res_cipher183, Iterated_100_times183, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher183, res_cipher183, structpointer183);
}
if(strncmp(res_cipher183, Iterated_1000_times183, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer183);
ite++;

unsigned char res_cipher184[16];
unsigned char res_uncipher184[16];
                      char key184[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00};
NESSIEencrypt(plain184, res_cipher184, structpointer184);
if(strncmp(res_cipher184, cipher184, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher184, res_uncipher184, structpointer184);
if(strncmp(res_uncipher184, decrypted184, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher184, plain184, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher184, res_cipher184, structpointer184);
}
if(strncmp(res_cipher184, Iterated_100_times184, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher184, res_cipher184, structpointer184);
}
if(strncmp(res_cipher184, Iterated_1000_times184, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer184);
ite++;

unsigned char res_cipher185[16];
unsigned char res_uncipher185[16];
                      char key185[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80};
NESSIEencrypt(plain185, res_cipher185, structpointer185);
if(strncmp(res_cipher185, cipher185, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher185, res_uncipher185, structpointer185);
if(strncmp(res_uncipher185, decrypted185, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher185, plain185, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher185, res_cipher185, structpointer185);
}
if(strncmp(res_cipher185, Iterated_100_times185, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher185, res_cipher185, structpointer185);
}
if(strncmp(res_cipher185, Iterated_1000_times185, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer185);
ite++;

unsigned char res_cipher186[16];
unsigned char res_uncipher186[16];
                      char key186[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40};
NESSIEencrypt(plain186, res_cipher186, structpointer186);
if(strncmp(res_cipher186, cipher186, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher186, res_uncipher186, structpointer186);
if(strncmp(res_uncipher186, decrypted186, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher186, plain186, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher186, res_cipher186, structpointer186);
}
if(strncmp(res_cipher186, Iterated_100_times186, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher186, res_cipher186, structpointer186);
}
if(strncmp(res_cipher186, Iterated_1000_times186, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer186);
ite++;

unsigned char res_cipher187[16];
unsigned char res_uncipher187[16];
                      char key187[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20};
NESSIEencrypt(plain187, res_cipher187, structpointer187);
if(strncmp(res_cipher187, cipher187, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher187, res_uncipher187, structpointer187);
if(strncmp(res_uncipher187, decrypted187, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher187, plain187, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher187, res_cipher187, structpointer187);
}
if(strncmp(res_cipher187, Iterated_100_times187, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher187, res_cipher187, structpointer187);
}
if(strncmp(res_cipher187, Iterated_1000_times187, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer187);
ite++;

unsigned char res_cipher188[16];
unsigned char res_uncipher188[16];
                      char key188[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10};
NESSIEencrypt(plain188, res_cipher188, structpointer188);
if(strncmp(res_cipher188, cipher188, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher188, res_uncipher188, structpointer188);
if(strncmp(res_uncipher188, decrypted188, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher188, plain188, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher188, res_cipher188, structpointer188);
}
if(strncmp(res_cipher188, Iterated_100_times188, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher188, res_cipher188, structpointer188);
}
if(strncmp(res_cipher188, Iterated_1000_times188, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer188);
ite++;

unsigned char res_cipher189[16];
unsigned char res_uncipher189[16];
                      char key189[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08};
NESSIEencrypt(plain189, res_cipher189, structpointer189);
if(strncmp(res_cipher189, cipher189, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher189, res_uncipher189, structpointer189);
if(strncmp(res_uncipher189, decrypted189, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher189, plain189, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher189, res_cipher189, structpointer189);
}
if(strncmp(res_cipher189, Iterated_100_times189, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher189, res_cipher189, structpointer189);
}
if(strncmp(res_cipher189, Iterated_1000_times189, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer189);
ite++;

unsigned char res_cipher190[16];
unsigned char res_uncipher190[16];
                      char key190[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04};
NESSIEencrypt(plain190, res_cipher190, structpointer190);
if(strncmp(res_cipher190, cipher190, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher190, res_uncipher190, structpointer190);
if(strncmp(res_uncipher190, decrypted190, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher190, plain190, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher190, res_cipher190, structpointer190);
}
if(strncmp(res_cipher190, Iterated_100_times190, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher190, res_cipher190, structpointer190);
}
if(strncmp(res_cipher190, Iterated_1000_times190, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer190);
ite++;

unsigned char res_cipher191[16];
unsigned char res_uncipher191[16];
                      char key191[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02};
NESSIEencrypt(plain191, res_cipher191, structpointer191);
if(strncmp(res_cipher191, cipher191, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher191, res_uncipher191, structpointer191);
if(strncmp(res_uncipher191, decrypted191, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher191, plain191, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher191, res_cipher191, structpointer191);
}
if(strncmp(res_cipher191, Iterated_100_times191, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher191, res_cipher191, structpointer191);
}
if(strncmp(res_cipher191, Iterated_1000_times191, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer191);
ite++;

unsigned char res_cipher192[16];
unsigned char res_uncipher192[16];
                      char key192[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01};
NESSIEencrypt(plain192, res_cipher192, structpointer192);
if(strncmp(res_cipher192, cipher192, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher192, res_uncipher192, structpointer192);
if(strncmp(res_uncipher192, decrypted192, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher192, plain192, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher192, res_cipher192, structpointer192);
}
if(strncmp(res_cipher192, Iterated_100_times192, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher192, res_cipher192, structpointer192);
}
if(strncmp(res_cipher192, Iterated_1000_times192, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer192);
ite++;

unsigned char res_cipher193[16];
unsigned char res_uncipher193[16];
                      char key193[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain193, res_cipher193, structpointer193);
if(strncmp(res_cipher193, cipher193, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher193, res_uncipher193, structpointer193);
if(strncmp(res_uncipher193, decrypted193, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher193, plain193, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher193, res_cipher193, structpointer193);
}
if(strncmp(res_cipher193, Iterated_100_times193, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher193, res_cipher193, structpointer193);
}
if(strncmp(res_cipher193, Iterated_1000_times193, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer193);
ite++;

unsigned char res_cipher194[16];
unsigned char res_uncipher194[16];
                      char key194[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain194, res_cipher194, structpointer194);
if(strncmp(res_cipher194, cipher194, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher194, res_uncipher194, structpointer194);
if(strncmp(res_uncipher194, decrypted194, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher194, plain194, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher194, res_cipher194, structpointer194);
}
if(strncmp(res_cipher194, Iterated_100_times194, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher194, res_cipher194, structpointer194);
}
if(strncmp(res_cipher194, Iterated_1000_times194, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer194);
ite++;

unsigned char res_cipher195[16];
unsigned char res_uncipher195[16];
                      char key195[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain195, res_cipher195, structpointer195);
if(strncmp(res_cipher195, cipher195, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher195, res_uncipher195, structpointer195);
if(strncmp(res_uncipher195, decrypted195, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher195, plain195, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher195, res_cipher195, structpointer195);
}
if(strncmp(res_cipher195, Iterated_100_times195, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher195, res_cipher195, structpointer195);
}
if(strncmp(res_cipher195, Iterated_1000_times195, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer195);
ite++;

unsigned char res_cipher196[16];
unsigned char res_uncipher196[16];
                      char key196[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain196, res_cipher196, structpointer196);
if(strncmp(res_cipher196, cipher196, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher196, res_uncipher196, structpointer196);
if(strncmp(res_uncipher196, decrypted196, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher196, plain196, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher196, res_cipher196, structpointer196);
}
if(strncmp(res_cipher196, Iterated_100_times196, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher196, res_cipher196, structpointer196);
}
if(strncmp(res_cipher196, Iterated_1000_times196, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer196);
ite++;

unsigned char res_cipher197[16];
unsigned char res_uncipher197[16];
                      char key197[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain197, res_cipher197, structpointer197);
if(strncmp(res_cipher197, cipher197, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher197, res_uncipher197, structpointer197);
if(strncmp(res_uncipher197, decrypted197, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher197, plain197, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher197, res_cipher197, structpointer197);
}
if(strncmp(res_cipher197, Iterated_100_times197, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher197, res_cipher197, structpointer197);
}
if(strncmp(res_cipher197, Iterated_1000_times197, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer197);
ite++;

unsigned char res_cipher198[16];
unsigned char res_uncipher198[16];
                      char key198[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain198, res_cipher198, structpointer198);
if(strncmp(res_cipher198, cipher198, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher198, res_uncipher198, structpointer198);
if(strncmp(res_uncipher198, decrypted198, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher198, plain198, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher198, res_cipher198, structpointer198);
}
if(strncmp(res_cipher198, Iterated_100_times198, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher198, res_cipher198, structpointer198);
}
if(strncmp(res_cipher198, Iterated_1000_times198, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer198);
ite++;

unsigned char res_cipher199[16];
unsigned char res_uncipher199[16];
                      char key199[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain199, res_cipher199, structpointer199);
if(strncmp(res_cipher199, cipher199, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher199, res_uncipher199, structpointer199);
if(strncmp(res_uncipher199, decrypted199, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher199, plain199, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher199, res_cipher199, structpointer199);
}
if(strncmp(res_cipher199, Iterated_100_times199, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher199, res_cipher199, structpointer199);
}
if(strncmp(res_cipher199, Iterated_1000_times199, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer199);
ite++;

unsigned char res_cipher200[16];
unsigned char res_uncipher200[16];
                      char key200[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain200, res_cipher200, structpointer200);
if(strncmp(res_cipher200, cipher200, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher200, res_uncipher200, structpointer200);
if(strncmp(res_uncipher200, decrypted200, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher200, plain200, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher200, res_cipher200, structpointer200);
}
if(strncmp(res_cipher200, Iterated_100_times200, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher200, res_cipher200, structpointer200);
}
if(strncmp(res_cipher200, Iterated_1000_times200, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer200);
ite++;

unsigned char res_cipher201[16];
unsigned char res_uncipher201[16];
                      char key201[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain201, res_cipher201, structpointer201);
if(strncmp(res_cipher201, cipher201, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher201, res_uncipher201, structpointer201);
if(strncmp(res_uncipher201, decrypted201, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher201, plain201, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher201, res_cipher201, structpointer201);
}
if(strncmp(res_cipher201, Iterated_100_times201, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher201, res_cipher201, structpointer201);
}
if(strncmp(res_cipher201, Iterated_1000_times201, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer201);
ite++;

unsigned char res_cipher202[16];
unsigned char res_uncipher202[16];
                      char key202[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain202, res_cipher202, structpointer202);
if(strncmp(res_cipher202, cipher202, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher202, res_uncipher202, structpointer202);
if(strncmp(res_uncipher202, decrypted202, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher202, plain202, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher202, res_cipher202, structpointer202);
}
if(strncmp(res_cipher202, Iterated_100_times202, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher202, res_cipher202, structpointer202);
}
if(strncmp(res_cipher202, Iterated_1000_times202, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer202);
ite++;

unsigned char res_cipher203[16];
unsigned char res_uncipher203[16];
                      char key203[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain203, res_cipher203, structpointer203);
if(strncmp(res_cipher203, cipher203, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher203, res_uncipher203, structpointer203);
if(strncmp(res_uncipher203, decrypted203, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher203, plain203, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher203, res_cipher203, structpointer203);
}
if(strncmp(res_cipher203, Iterated_100_times203, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher203, res_cipher203, structpointer203);
}
if(strncmp(res_cipher203, Iterated_1000_times203, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer203);
ite++;

unsigned char res_cipher204[16];
unsigned char res_uncipher204[16];
                      char key204[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain204, res_cipher204, structpointer204);
if(strncmp(res_cipher204, cipher204, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher204, res_uncipher204, structpointer204);
if(strncmp(res_uncipher204, decrypted204, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher204, plain204, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher204, res_cipher204, structpointer204);
}
if(strncmp(res_cipher204, Iterated_100_times204, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher204, res_cipher204, structpointer204);
}
if(strncmp(res_cipher204, Iterated_1000_times204, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer204);
ite++;

unsigned char res_cipher205[16];
unsigned char res_uncipher205[16];
                      char key205[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain205, res_cipher205, structpointer205);
if(strncmp(res_cipher205, cipher205, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher205, res_uncipher205, structpointer205);
if(strncmp(res_uncipher205, decrypted205, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher205, plain205, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher205, res_cipher205, structpointer205);
}
if(strncmp(res_cipher205, Iterated_100_times205, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher205, res_cipher205, structpointer205);
}
if(strncmp(res_cipher205, Iterated_1000_times205, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer205);
ite++;

unsigned char res_cipher206[16];
unsigned char res_uncipher206[16];
                      char key206[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain206, res_cipher206, structpointer206);
if(strncmp(res_cipher206, cipher206, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher206, res_uncipher206, structpointer206);
if(strncmp(res_uncipher206, decrypted206, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher206, plain206, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher206, res_cipher206, structpointer206);
}
if(strncmp(res_cipher206, Iterated_100_times206, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher206, res_cipher206, structpointer206);
}
if(strncmp(res_cipher206, Iterated_1000_times206, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer206);
ite++;

unsigned char res_cipher207[16];
unsigned char res_uncipher207[16];
                      char key207[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain207, res_cipher207, structpointer207);
if(strncmp(res_cipher207, cipher207, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher207, res_uncipher207, structpointer207);
if(strncmp(res_uncipher207, decrypted207, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher207, plain207, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher207, res_cipher207, structpointer207);
}
if(strncmp(res_cipher207, Iterated_100_times207, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher207, res_cipher207, structpointer207);
}
if(strncmp(res_cipher207, Iterated_1000_times207, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer207);
ite++;

unsigned char res_cipher208[16];
unsigned char res_uncipher208[16];
                      char key208[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain208, res_cipher208, structpointer208);
if(strncmp(res_cipher208, cipher208, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher208, res_uncipher208, structpointer208);
if(strncmp(res_uncipher208, decrypted208, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher208, plain208, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher208, res_cipher208, structpointer208);
}
if(strncmp(res_cipher208, Iterated_100_times208, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher208, res_cipher208, structpointer208);
}
if(strncmp(res_cipher208, Iterated_1000_times208, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer208);
ite++;

unsigned char res_cipher209[16];
unsigned char res_uncipher209[16];
                      char key209[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain209, res_cipher209, structpointer209);
if(strncmp(res_cipher209, cipher209, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher209, res_uncipher209, structpointer209);
if(strncmp(res_uncipher209, decrypted209, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher209, plain209, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher209, res_cipher209, structpointer209);
}
if(strncmp(res_cipher209, Iterated_100_times209, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher209, res_cipher209, structpointer209);
}
if(strncmp(res_cipher209, Iterated_1000_times209, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer209);
ite++;

unsigned char res_cipher210[16];
unsigned char res_uncipher210[16];
                      char key210[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain210, res_cipher210, structpointer210);
if(strncmp(res_cipher210, cipher210, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher210, res_uncipher210, structpointer210);
if(strncmp(res_uncipher210, decrypted210, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher210, plain210, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher210, res_cipher210, structpointer210);
}
if(strncmp(res_cipher210, Iterated_100_times210, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher210, res_cipher210, structpointer210);
}
if(strncmp(res_cipher210, Iterated_1000_times210, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer210);
ite++;

unsigned char res_cipher211[16];
unsigned char res_uncipher211[16];
                      char key211[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain211, res_cipher211, structpointer211);
if(strncmp(res_cipher211, cipher211, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher211, res_uncipher211, structpointer211);
if(strncmp(res_uncipher211, decrypted211, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher211, plain211, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher211, res_cipher211, structpointer211);
}
if(strncmp(res_cipher211, Iterated_100_times211, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher211, res_cipher211, structpointer211);
}
if(strncmp(res_cipher211, Iterated_1000_times211, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer211);
ite++;

unsigned char res_cipher212[16];
unsigned char res_uncipher212[16];
                      char key212[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain212, res_cipher212, structpointer212);
if(strncmp(res_cipher212, cipher212, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher212, res_uncipher212, structpointer212);
if(strncmp(res_uncipher212, decrypted212, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher212, plain212, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher212, res_cipher212, structpointer212);
}
if(strncmp(res_cipher212, Iterated_100_times212, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher212, res_cipher212, structpointer212);
}
if(strncmp(res_cipher212, Iterated_1000_times212, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer212);
ite++;

unsigned char res_cipher213[16];
unsigned char res_uncipher213[16];
                      char key213[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain213, res_cipher213, structpointer213);
if(strncmp(res_cipher213, cipher213, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher213, res_uncipher213, structpointer213);
if(strncmp(res_uncipher213, decrypted213, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher213, plain213, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher213, res_cipher213, structpointer213);
}
if(strncmp(res_cipher213, Iterated_100_times213, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher213, res_cipher213, structpointer213);
}
if(strncmp(res_cipher213, Iterated_1000_times213, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer213);
ite++;

unsigned char res_cipher214[16];
unsigned char res_uncipher214[16];
                      char key214[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain214, res_cipher214, structpointer214);
if(strncmp(res_cipher214, cipher214, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher214, res_uncipher214, structpointer214);
if(strncmp(res_uncipher214, decrypted214, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher214, plain214, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher214, res_cipher214, structpointer214);
}
if(strncmp(res_cipher214, Iterated_100_times214, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher214, res_cipher214, structpointer214);
}
if(strncmp(res_cipher214, Iterated_1000_times214, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer214);
ite++;

unsigned char res_cipher215[16];
unsigned char res_uncipher215[16];
                      char key215[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain215, res_cipher215, structpointer215);
if(strncmp(res_cipher215, cipher215, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher215, res_uncipher215, structpointer215);
if(strncmp(res_uncipher215, decrypted215, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher215, plain215, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher215, res_cipher215, structpointer215);
}
if(strncmp(res_cipher215, Iterated_100_times215, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher215, res_cipher215, structpointer215);
}
if(strncmp(res_cipher215, Iterated_1000_times215, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer215);
ite++;

unsigned char res_cipher216[16];
unsigned char res_uncipher216[16];
                      char key216[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain216, res_cipher216, structpointer216);
if(strncmp(res_cipher216, cipher216, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher216, res_uncipher216, structpointer216);
if(strncmp(res_uncipher216, decrypted216, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher216, plain216, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher216, res_cipher216, structpointer216);
}
if(strncmp(res_cipher216, Iterated_100_times216, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher216, res_cipher216, structpointer216);
}
if(strncmp(res_cipher216, Iterated_1000_times216, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer216);
ite++;

unsigned char res_cipher217[16];
unsigned char res_uncipher217[16];
                      char key217[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain217, res_cipher217, structpointer217);
if(strncmp(res_cipher217, cipher217, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher217, res_uncipher217, structpointer217);
if(strncmp(res_uncipher217, decrypted217, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher217, plain217, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher217, res_cipher217, structpointer217);
}
if(strncmp(res_cipher217, Iterated_100_times217, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher217, res_cipher217, structpointer217);
}
if(strncmp(res_cipher217, Iterated_1000_times217, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer217);
ite++;

unsigned char res_cipher218[16];
unsigned char res_uncipher218[16];
                      char key218[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain218, res_cipher218, structpointer218);
if(strncmp(res_cipher218, cipher218, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher218, res_uncipher218, structpointer218);
if(strncmp(res_uncipher218, decrypted218, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher218, plain218, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher218, res_cipher218, structpointer218);
}
if(strncmp(res_cipher218, Iterated_100_times218, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher218, res_cipher218, structpointer218);
}
if(strncmp(res_cipher218, Iterated_1000_times218, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer218);
ite++;

unsigned char res_cipher219[16];
unsigned char res_uncipher219[16];
                      char key219[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain219, res_cipher219, structpointer219);
if(strncmp(res_cipher219, cipher219, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher219, res_uncipher219, structpointer219);
if(strncmp(res_uncipher219, decrypted219, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher219, plain219, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher219, res_cipher219, structpointer219);
}
if(strncmp(res_cipher219, Iterated_100_times219, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher219, res_cipher219, structpointer219);
}
if(strncmp(res_cipher219, Iterated_1000_times219, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer219);
ite++;

unsigned char res_cipher220[16];
unsigned char res_uncipher220[16];
                      char key220[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain220, res_cipher220, structpointer220);
if(strncmp(res_cipher220, cipher220, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher220, res_uncipher220, structpointer220);
if(strncmp(res_uncipher220, decrypted220, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher220, plain220, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher220, res_cipher220, structpointer220);
}
if(strncmp(res_cipher220, Iterated_100_times220, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher220, res_cipher220, structpointer220);
}
if(strncmp(res_cipher220, Iterated_1000_times220, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer220);
ite++;

unsigned char res_cipher221[16];
unsigned char res_uncipher221[16];
                      char key221[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain221, res_cipher221, structpointer221);
if(strncmp(res_cipher221, cipher221, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher221, res_uncipher221, structpointer221);
if(strncmp(res_uncipher221, decrypted221, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher221, plain221, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher221, res_cipher221, structpointer221);
}
if(strncmp(res_cipher221, Iterated_100_times221, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher221, res_cipher221, structpointer221);
}
if(strncmp(res_cipher221, Iterated_1000_times221, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer221);
ite++;

unsigned char res_cipher222[16];
unsigned char res_uncipher222[16];
                      char key222[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain222, res_cipher222, structpointer222);
if(strncmp(res_cipher222, cipher222, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher222, res_uncipher222, structpointer222);
if(strncmp(res_uncipher222, decrypted222, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher222, plain222, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher222, res_cipher222, structpointer222);
}
if(strncmp(res_cipher222, Iterated_100_times222, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher222, res_cipher222, structpointer222);
}
if(strncmp(res_cipher222, Iterated_1000_times222, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer222);
ite++;

unsigned char res_cipher223[16];
unsigned char res_uncipher223[16];
                      char key223[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain223, res_cipher223, structpointer223);
if(strncmp(res_cipher223, cipher223, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher223, res_uncipher223, structpointer223);
if(strncmp(res_uncipher223, decrypted223, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher223, plain223, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher223, res_cipher223, structpointer223);
}
if(strncmp(res_cipher223, Iterated_100_times223, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher223, res_cipher223, structpointer223);
}
if(strncmp(res_cipher223, Iterated_1000_times223, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer223);
ite++;

unsigned char res_cipher224[16];
unsigned char res_uncipher224[16];
                      char key224[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain224, res_cipher224, structpointer224);
if(strncmp(res_cipher224, cipher224, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher224, res_uncipher224, structpointer224);
if(strncmp(res_uncipher224, decrypted224, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher224, plain224, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher224, res_cipher224, structpointer224);
}
if(strncmp(res_cipher224, Iterated_100_times224, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher224, res_cipher224, structpointer224);
}
if(strncmp(res_cipher224, Iterated_1000_times224, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer224);
ite++;

unsigned char res_cipher225[16];
unsigned char res_uncipher225[16];
                      char key225[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain225, res_cipher225, structpointer225);
if(strncmp(res_cipher225, cipher225, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher225, res_uncipher225, structpointer225);
if(strncmp(res_uncipher225, decrypted225, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher225, plain225, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher225, res_cipher225, structpointer225);
}
if(strncmp(res_cipher225, Iterated_100_times225, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher225, res_cipher225, structpointer225);
}
if(strncmp(res_cipher225, Iterated_1000_times225, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer225);
ite++;

unsigned char res_cipher226[16];
unsigned char res_uncipher226[16];
                      char key226[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain226, res_cipher226, structpointer226);
if(strncmp(res_cipher226, cipher226, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher226, res_uncipher226, structpointer226);
if(strncmp(res_uncipher226, decrypted226, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher226, plain226, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher226, res_cipher226, structpointer226);
}
if(strncmp(res_cipher226, Iterated_100_times226, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher226, res_cipher226, structpointer226);
}
if(strncmp(res_cipher226, Iterated_1000_times226, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer226);
ite++;

unsigned char res_cipher227[16];
unsigned char res_uncipher227[16];
                      char key227[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain227, res_cipher227, structpointer227);
if(strncmp(res_cipher227, cipher227, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher227, res_uncipher227, structpointer227);
if(strncmp(res_uncipher227, decrypted227, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher227, plain227, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher227, res_cipher227, structpointer227);
}
if(strncmp(res_cipher227, Iterated_100_times227, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher227, res_cipher227, structpointer227);
}
if(strncmp(res_cipher227, Iterated_1000_times227, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer227);
ite++;

unsigned char res_cipher228[16];
unsigned char res_uncipher228[16];
                      char key228[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain228, res_cipher228, structpointer228);
if(strncmp(res_cipher228, cipher228, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher228, res_uncipher228, structpointer228);
if(strncmp(res_uncipher228, decrypted228, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher228, plain228, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher228, res_cipher228, structpointer228);
}
if(strncmp(res_cipher228, Iterated_100_times228, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher228, res_cipher228, structpointer228);
}
if(strncmp(res_cipher228, Iterated_1000_times228, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer228);
ite++;

unsigned char res_cipher229[16];
unsigned char res_uncipher229[16];
                      char key229[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain229, res_cipher229, structpointer229);
if(strncmp(res_cipher229, cipher229, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher229, res_uncipher229, structpointer229);
if(strncmp(res_uncipher229, decrypted229, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher229, plain229, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher229, res_cipher229, structpointer229);
}
if(strncmp(res_cipher229, Iterated_100_times229, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher229, res_cipher229, structpointer229);
}
if(strncmp(res_cipher229, Iterated_1000_times229, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer229);
ite++;

unsigned char res_cipher230[16];
unsigned char res_uncipher230[16];
                      char key230[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain230, res_cipher230, structpointer230);
if(strncmp(res_cipher230, cipher230, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher230, res_uncipher230, structpointer230);
if(strncmp(res_uncipher230, decrypted230, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher230, plain230, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher230, res_cipher230, structpointer230);
}
if(strncmp(res_cipher230, Iterated_100_times230, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher230, res_cipher230, structpointer230);
}
if(strncmp(res_cipher230, Iterated_1000_times230, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer230);
ite++;

unsigned char res_cipher231[16];
unsigned char res_uncipher231[16];
                      char key231[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain231, res_cipher231, structpointer231);
if(strncmp(res_cipher231, cipher231, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher231, res_uncipher231, structpointer231);
if(strncmp(res_uncipher231, decrypted231, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher231, plain231, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher231, res_cipher231, structpointer231);
}
if(strncmp(res_cipher231, Iterated_100_times231, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher231, res_cipher231, structpointer231);
}
if(strncmp(res_cipher231, Iterated_1000_times231, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer231);
ite++;

unsigned char res_cipher232[16];
unsigned char res_uncipher232[16];
                      char key232[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain232, res_cipher232, structpointer232);
if(strncmp(res_cipher232, cipher232, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher232, res_uncipher232, structpointer232);
if(strncmp(res_uncipher232, decrypted232, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher232, plain232, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher232, res_cipher232, structpointer232);
}
if(strncmp(res_cipher232, Iterated_100_times232, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher232, res_cipher232, structpointer232);
}
if(strncmp(res_cipher232, Iterated_1000_times232, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer232);
ite++;

unsigned char res_cipher233[16];
unsigned char res_uncipher233[16];
                      char key233[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain233, res_cipher233, structpointer233);
if(strncmp(res_cipher233, cipher233, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher233, res_uncipher233, structpointer233);
if(strncmp(res_uncipher233, decrypted233, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher233, plain233, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher233, res_cipher233, structpointer233);
}
if(strncmp(res_cipher233, Iterated_100_times233, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher233, res_cipher233, structpointer233);
}
if(strncmp(res_cipher233, Iterated_1000_times233, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer233);
ite++;

unsigned char res_cipher234[16];
unsigned char res_uncipher234[16];
                      char key234[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain234, res_cipher234, structpointer234);
if(strncmp(res_cipher234, cipher234, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher234, res_uncipher234, structpointer234);
if(strncmp(res_uncipher234, decrypted234, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher234, plain234, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher234, res_cipher234, structpointer234);
}
if(strncmp(res_cipher234, Iterated_100_times234, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher234, res_cipher234, structpointer234);
}
if(strncmp(res_cipher234, Iterated_1000_times234, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer234);
ite++;

unsigned char res_cipher235[16];
unsigned char res_uncipher235[16];
                      char key235[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain235, res_cipher235, structpointer235);
if(strncmp(res_cipher235, cipher235, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher235, res_uncipher235, structpointer235);
if(strncmp(res_uncipher235, decrypted235, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher235, plain235, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher235, res_cipher235, structpointer235);
}
if(strncmp(res_cipher235, Iterated_100_times235, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher235, res_cipher235, structpointer235);
}
if(strncmp(res_cipher235, Iterated_1000_times235, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer235);
ite++;

unsigned char res_cipher236[16];
unsigned char res_uncipher236[16];
                      char key236[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain236, res_cipher236, structpointer236);
if(strncmp(res_cipher236, cipher236, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher236, res_uncipher236, structpointer236);
if(strncmp(res_uncipher236, decrypted236, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher236, plain236, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher236, res_cipher236, structpointer236);
}
if(strncmp(res_cipher236, Iterated_100_times236, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher236, res_cipher236, structpointer236);
}
if(strncmp(res_cipher236, Iterated_1000_times236, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer236);
ite++;

unsigned char res_cipher237[16];
unsigned char res_uncipher237[16];
                      char key237[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain237, res_cipher237, structpointer237);
if(strncmp(res_cipher237, cipher237, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher237, res_uncipher237, structpointer237);
if(strncmp(res_uncipher237, decrypted237, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher237, plain237, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher237, res_cipher237, structpointer237);
}
if(strncmp(res_cipher237, Iterated_100_times237, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher237, res_cipher237, structpointer237);
}
if(strncmp(res_cipher237, Iterated_1000_times237, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer237);
ite++;

unsigned char res_cipher238[16];
unsigned char res_uncipher238[16];
                      char key238[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain238, res_cipher238, structpointer238);
if(strncmp(res_cipher238, cipher238, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher238, res_uncipher238, structpointer238);
if(strncmp(res_uncipher238, decrypted238, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher238, plain238, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher238, res_cipher238, structpointer238);
}
if(strncmp(res_cipher238, Iterated_100_times238, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher238, res_cipher238, structpointer238);
}
if(strncmp(res_cipher238, Iterated_1000_times238, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer238);
ite++;

unsigned char res_cipher239[16];
unsigned char res_uncipher239[16];
                      char key239[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain239, res_cipher239, structpointer239);
if(strncmp(res_cipher239, cipher239, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher239, res_uncipher239, structpointer239);
if(strncmp(res_uncipher239, decrypted239, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher239, plain239, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher239, res_cipher239, structpointer239);
}
if(strncmp(res_cipher239, Iterated_100_times239, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher239, res_cipher239, structpointer239);
}
if(strncmp(res_cipher239, Iterated_1000_times239, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer239);
ite++;

unsigned char res_cipher240[16];
unsigned char res_uncipher240[16];
                      char key240[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain240, res_cipher240, structpointer240);
if(strncmp(res_cipher240, cipher240, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher240, res_uncipher240, structpointer240);
if(strncmp(res_uncipher240, decrypted240, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher240, plain240, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher240, res_cipher240, structpointer240);
}
if(strncmp(res_cipher240, Iterated_100_times240, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher240, res_cipher240, structpointer240);
}
if(strncmp(res_cipher240, Iterated_1000_times240, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer240);
ite++;

unsigned char res_cipher241[16];
unsigned char res_uncipher241[16];
                      char key241[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain241, res_cipher241, structpointer241);
if(strncmp(res_cipher241, cipher241, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher241, res_uncipher241, structpointer241);
if(strncmp(res_uncipher241, decrypted241, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher241, plain241, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher241, res_cipher241, structpointer241);
}
if(strncmp(res_cipher241, Iterated_100_times241, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher241, res_cipher241, structpointer241);
}
if(strncmp(res_cipher241, Iterated_1000_times241, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer241);
ite++;

unsigned char res_cipher242[16];
unsigned char res_uncipher242[16];
                      char key242[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain242, res_cipher242, structpointer242);
if(strncmp(res_cipher242, cipher242, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher242, res_uncipher242, structpointer242);
if(strncmp(res_uncipher242, decrypted242, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher242, plain242, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher242, res_cipher242, structpointer242);
}
if(strncmp(res_cipher242, Iterated_100_times242, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher242, res_cipher242, structpointer242);
}
if(strncmp(res_cipher242, Iterated_1000_times242, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer242);
ite++;

unsigned char res_cipher243[16];
unsigned char res_uncipher243[16];
                      char key243[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain243, res_cipher243, structpointer243);
if(strncmp(res_cipher243, cipher243, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher243, res_uncipher243, structpointer243);
if(strncmp(res_uncipher243, decrypted243, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher243, plain243, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher243, res_cipher243, structpointer243);
}
if(strncmp(res_cipher243, Iterated_100_times243, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher243, res_cipher243, structpointer243);
}
if(strncmp(res_cipher243, Iterated_1000_times243, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer243);
ite++;

unsigned char res_cipher244[16];
unsigned char res_uncipher244[16];
                      char key244[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain244, res_cipher244, structpointer244);
if(strncmp(res_cipher244, cipher244, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher244, res_uncipher244, structpointer244);
if(strncmp(res_uncipher244, decrypted244, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher244, plain244, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher244, res_cipher244, structpointer244);
}
if(strncmp(res_cipher244, Iterated_100_times244, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher244, res_cipher244, structpointer244);
}
if(strncmp(res_cipher244, Iterated_1000_times244, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer244);
ite++;

unsigned char res_cipher245[16];
unsigned char res_uncipher245[16];
                      char key245[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain245, res_cipher245, structpointer245);
if(strncmp(res_cipher245, cipher245, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher245, res_uncipher245, structpointer245);
if(strncmp(res_uncipher245, decrypted245, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher245, plain245, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher245, res_cipher245, structpointer245);
}
if(strncmp(res_cipher245, Iterated_100_times245, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher245, res_cipher245, structpointer245);
}
if(strncmp(res_cipher245, Iterated_1000_times245, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer245);
ite++;

unsigned char res_cipher246[16];
unsigned char res_uncipher246[16];
                      char key246[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain246, res_cipher246, structpointer246);
if(strncmp(res_cipher246, cipher246, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher246, res_uncipher246, structpointer246);
if(strncmp(res_uncipher246, decrypted246, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher246, plain246, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher246, res_cipher246, structpointer246);
}
if(strncmp(res_cipher246, Iterated_100_times246, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher246, res_cipher246, structpointer246);
}
if(strncmp(res_cipher246, Iterated_1000_times246, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer246);
ite++;

unsigned char res_cipher247[16];
unsigned char res_uncipher247[16];
                      char key247[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain247, res_cipher247, structpointer247);
if(strncmp(res_cipher247, cipher247, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher247, res_uncipher247, structpointer247);
if(strncmp(res_uncipher247, decrypted247, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher247, plain247, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher247, res_cipher247, structpointer247);
}
if(strncmp(res_cipher247, Iterated_100_times247, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher247, res_cipher247, structpointer247);
}
if(strncmp(res_cipher247, Iterated_1000_times247, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer247);
ite++;

unsigned char res_cipher248[16];
unsigned char res_uncipher248[16];
                      char key248[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain248, res_cipher248, structpointer248);
if(strncmp(res_cipher248, cipher248, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher248, res_uncipher248, structpointer248);
if(strncmp(res_uncipher248, decrypted248, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher248, plain248, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher248, res_cipher248, structpointer248);
}
if(strncmp(res_cipher248, Iterated_100_times248, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher248, res_cipher248, structpointer248);
}
if(strncmp(res_cipher248, Iterated_1000_times248, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer248);
ite++;

unsigned char res_cipher249[16];
unsigned char res_uncipher249[16];
                      char key249[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain249, res_cipher249, structpointer249);
if(strncmp(res_cipher249, cipher249, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher249, res_uncipher249, structpointer249);
if(strncmp(res_uncipher249, decrypted249, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher249, plain249, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher249, res_cipher249, structpointer249);
}
if(strncmp(res_cipher249, Iterated_100_times249, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher249, res_cipher249, structpointer249);
}
if(strncmp(res_cipher249, Iterated_1000_times249, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer249);
ite++;

unsigned char res_cipher250[16];
unsigned char res_uncipher250[16];
                      char key250[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain250, res_cipher250, structpointer250);
if(strncmp(res_cipher250, cipher250, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher250, res_uncipher250, structpointer250);
if(strncmp(res_uncipher250, decrypted250, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher250, plain250, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher250, res_cipher250, structpointer250);
}
if(strncmp(res_cipher250, Iterated_100_times250, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher250, res_cipher250, structpointer250);
}
if(strncmp(res_cipher250, Iterated_1000_times250, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer250);
ite++;

unsigned char res_cipher251[16];
unsigned char res_uncipher251[16];
                      char key251[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain251, res_cipher251, structpointer251);
if(strncmp(res_cipher251, cipher251, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher251, res_uncipher251, structpointer251);
if(strncmp(res_uncipher251, decrypted251, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher251, plain251, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher251, res_cipher251, structpointer251);
}
if(strncmp(res_cipher251, Iterated_100_times251, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher251, res_cipher251, structpointer251);
}
if(strncmp(res_cipher251, Iterated_1000_times251, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer251);
ite++;

unsigned char res_cipher252[16];
unsigned char res_uncipher252[16];
                      char key252[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain252, res_cipher252, structpointer252);
if(strncmp(res_cipher252, cipher252, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher252, res_uncipher252, structpointer252);
if(strncmp(res_uncipher252, decrypted252, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher252, plain252, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher252, res_cipher252, structpointer252);
}
if(strncmp(res_cipher252, Iterated_100_times252, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher252, res_cipher252, structpointer252);
}
if(strncmp(res_cipher252, Iterated_1000_times252, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer252);
ite++;

unsigned char res_cipher253[16];
unsigned char res_uncipher253[16];
                      char key253[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain253, res_cipher253, structpointer253);
if(strncmp(res_cipher253, cipher253, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher253, res_uncipher253, structpointer253);
if(strncmp(res_uncipher253, decrypted253, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher253, plain253, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher253, res_cipher253, structpointer253);
}
if(strncmp(res_cipher253, Iterated_100_times253, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher253, res_cipher253, structpointer253);
}
if(strncmp(res_cipher253, Iterated_1000_times253, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer253);
ite++;

unsigned char res_cipher254[16];
unsigned char res_uncipher254[16];
                      char key254[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain254, res_cipher254, structpointer254);
if(strncmp(res_cipher254, cipher254, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher254, res_uncipher254, structpointer254);
if(strncmp(res_uncipher254, decrypted254, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher254, plain254, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher254, res_cipher254, structpointer254);
}
if(strncmp(res_cipher254, Iterated_100_times254, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher254, res_cipher254, structpointer254);
}
if(strncmp(res_cipher254, Iterated_1000_times254, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer254);
ite++;

unsigned char res_cipher255[16];
unsigned char res_uncipher255[16];
                      char key255[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain255, res_cipher255, structpointer255);
if(strncmp(res_cipher255, cipher255, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher255, res_uncipher255, structpointer255);
if(strncmp(res_uncipher255, decrypted255, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher255, plain255, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher255, res_cipher255, structpointer255);
}
if(strncmp(res_cipher255, Iterated_100_times255, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher255, res_cipher255, structpointer255);
}
if(strncmp(res_cipher255, Iterated_1000_times255, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer255);
ite++;

unsigned char res_cipher256[16];
unsigned char res_uncipher256[16];
                      char key256[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain256, res_cipher256, structpointer256);
if(strncmp(res_cipher256, cipher256, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher256, res_uncipher256, structpointer256);
if(strncmp(res_uncipher256, decrypted256, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher256, plain256, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher256, res_cipher256, structpointer256);
}
if(strncmp(res_cipher256, Iterated_100_times256, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher256, res_cipher256, structpointer256);
}
if(strncmp(res_cipher256, Iterated_1000_times256, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer256);
ite++;

unsigned char res_cipher257[16];
unsigned char res_uncipher257[16];
                      char key257[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain257, res_cipher257, structpointer257);
if(strncmp(res_cipher257, cipher257, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher257, res_uncipher257, structpointer257);
if(strncmp(res_uncipher257, decrypted257, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher257, plain257, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher257, res_cipher257, structpointer257);
}
if(strncmp(res_cipher257, Iterated_100_times257, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher257, res_cipher257, structpointer257);
}
if(strncmp(res_cipher257, Iterated_1000_times257, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer257);
ite++;

unsigned char res_cipher258[16];
unsigned char res_uncipher258[16];
                      char key258[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain258, res_cipher258, structpointer258);
if(strncmp(res_cipher258, cipher258, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher258, res_uncipher258, structpointer258);
if(strncmp(res_uncipher258, decrypted258, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher258, plain258, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher258, res_cipher258, structpointer258);
}
if(strncmp(res_cipher258, Iterated_100_times258, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher258, res_cipher258, structpointer258);
}
if(strncmp(res_cipher258, Iterated_1000_times258, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer258);
ite++;

unsigned char res_cipher259[16];
unsigned char res_uncipher259[16];
                      char key259[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain259, res_cipher259, structpointer259);
if(strncmp(res_cipher259, cipher259, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher259, res_uncipher259, structpointer259);
if(strncmp(res_uncipher259, decrypted259, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher259, plain259, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher259, res_cipher259, structpointer259);
}
if(strncmp(res_cipher259, Iterated_100_times259, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher259, res_cipher259, structpointer259);
}
if(strncmp(res_cipher259, Iterated_1000_times259, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer259);
ite++;

unsigned char res_cipher260[16];
unsigned char res_uncipher260[16];
                      char key260[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain260, res_cipher260, structpointer260);
if(strncmp(res_cipher260, cipher260, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher260, res_uncipher260, structpointer260);
if(strncmp(res_uncipher260, decrypted260, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher260, plain260, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher260, res_cipher260, structpointer260);
}
if(strncmp(res_cipher260, Iterated_100_times260, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher260, res_cipher260, structpointer260);
}
if(strncmp(res_cipher260, Iterated_1000_times260, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer260);
ite++;

unsigned char res_cipher261[16];
unsigned char res_uncipher261[16];
                      char key261[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain261, res_cipher261, structpointer261);
if(strncmp(res_cipher261, cipher261, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher261, res_uncipher261, structpointer261);
if(strncmp(res_uncipher261, decrypted261, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher261, plain261, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher261, res_cipher261, structpointer261);
}
if(strncmp(res_cipher261, Iterated_100_times261, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher261, res_cipher261, structpointer261);
}
if(strncmp(res_cipher261, Iterated_1000_times261, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer261);
ite++;

unsigned char res_cipher262[16];
unsigned char res_uncipher262[16];
                      char key262[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain262, res_cipher262, structpointer262);
if(strncmp(res_cipher262, cipher262, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher262, res_uncipher262, structpointer262);
if(strncmp(res_uncipher262, decrypted262, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher262, plain262, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher262, res_cipher262, structpointer262);
}
if(strncmp(res_cipher262, Iterated_100_times262, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher262, res_cipher262, structpointer262);
}
if(strncmp(res_cipher262, Iterated_1000_times262, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer262);
ite++;

unsigned char res_cipher263[16];
unsigned char res_uncipher263[16];
                      char key263[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain263, res_cipher263, structpointer263);
if(strncmp(res_cipher263, cipher263, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher263, res_uncipher263, structpointer263);
if(strncmp(res_uncipher263, decrypted263, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher263, plain263, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher263, res_cipher263, structpointer263);
}
if(strncmp(res_cipher263, Iterated_100_times263, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher263, res_cipher263, structpointer263);
}
if(strncmp(res_cipher263, Iterated_1000_times263, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer263);
ite++;

unsigned char res_cipher264[16];
unsigned char res_uncipher264[16];
                      char key264[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain264, res_cipher264, structpointer264);
if(strncmp(res_cipher264, cipher264, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher264, res_uncipher264, structpointer264);
if(strncmp(res_uncipher264, decrypted264, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher264, plain264, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher264, res_cipher264, structpointer264);
}
if(strncmp(res_cipher264, Iterated_100_times264, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher264, res_cipher264, structpointer264);
}
if(strncmp(res_cipher264, Iterated_1000_times264, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer264);
ite++;

unsigned char res_cipher265[16];
unsigned char res_uncipher265[16];
                      char key265[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain265, res_cipher265, structpointer265);
if(strncmp(res_cipher265, cipher265, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher265, res_uncipher265, structpointer265);
if(strncmp(res_uncipher265, decrypted265, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher265, plain265, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher265, res_cipher265, structpointer265);
}
if(strncmp(res_cipher265, Iterated_100_times265, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher265, res_cipher265, structpointer265);
}
if(strncmp(res_cipher265, Iterated_1000_times265, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer265);
ite++;

unsigned char res_cipher266[16];
unsigned char res_uncipher266[16];
                      char key266[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain266, res_cipher266, structpointer266);
if(strncmp(res_cipher266, cipher266, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher266, res_uncipher266, structpointer266);
if(strncmp(res_uncipher266, decrypted266, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher266, plain266, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher266, res_cipher266, structpointer266);
}
if(strncmp(res_cipher266, Iterated_100_times266, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher266, res_cipher266, structpointer266);
}
if(strncmp(res_cipher266, Iterated_1000_times266, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer266);
ite++;

unsigned char res_cipher267[16];
unsigned char res_uncipher267[16];
                      char key267[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain267, res_cipher267, structpointer267);
if(strncmp(res_cipher267, cipher267, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher267, res_uncipher267, structpointer267);
if(strncmp(res_uncipher267, decrypted267, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher267, plain267, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher267, res_cipher267, structpointer267);
}
if(strncmp(res_cipher267, Iterated_100_times267, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher267, res_cipher267, structpointer267);
}
if(strncmp(res_cipher267, Iterated_1000_times267, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer267);
ite++;

unsigned char res_cipher268[16];
unsigned char res_uncipher268[16];
                      char key268[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain268, res_cipher268, structpointer268);
if(strncmp(res_cipher268, cipher268, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher268, res_uncipher268, structpointer268);
if(strncmp(res_uncipher268, decrypted268, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher268, plain268, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher268, res_cipher268, structpointer268);
}
if(strncmp(res_cipher268, Iterated_100_times268, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher268, res_cipher268, structpointer268);
}
if(strncmp(res_cipher268, Iterated_1000_times268, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer268);
ite++;

unsigned char res_cipher269[16];
unsigned char res_uncipher269[16];
                      char key269[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain269, res_cipher269, structpointer269);
if(strncmp(res_cipher269, cipher269, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher269, res_uncipher269, structpointer269);
if(strncmp(res_uncipher269, decrypted269, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher269, plain269, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher269, res_cipher269, structpointer269);
}
if(strncmp(res_cipher269, Iterated_100_times269, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher269, res_cipher269, structpointer269);
}
if(strncmp(res_cipher269, Iterated_1000_times269, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer269);
ite++;

unsigned char res_cipher270[16];
unsigned char res_uncipher270[16];
                      char key270[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain270, res_cipher270, structpointer270);
if(strncmp(res_cipher270, cipher270, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher270, res_uncipher270, structpointer270);
if(strncmp(res_uncipher270, decrypted270, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher270, plain270, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher270, res_cipher270, structpointer270);
}
if(strncmp(res_cipher270, Iterated_100_times270, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher270, res_cipher270, structpointer270);
}
if(strncmp(res_cipher270, Iterated_1000_times270, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer270);
ite++;

unsigned char res_cipher271[16];
unsigned char res_uncipher271[16];
                      char key271[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain271, res_cipher271, structpointer271);
if(strncmp(res_cipher271, cipher271, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher271, res_uncipher271, structpointer271);
if(strncmp(res_uncipher271, decrypted271, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher271, plain271, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher271, res_cipher271, structpointer271);
}
if(strncmp(res_cipher271, Iterated_100_times271, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher271, res_cipher271, structpointer271);
}
if(strncmp(res_cipher271, Iterated_1000_times271, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer271);
ite++;

unsigned char res_cipher272[16];
unsigned char res_uncipher272[16];
                      char key272[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain272, res_cipher272, structpointer272);
if(strncmp(res_cipher272, cipher272, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher272, res_uncipher272, structpointer272);
if(strncmp(res_uncipher272, decrypted272, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher272, plain272, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher272, res_cipher272, structpointer272);
}
if(strncmp(res_cipher272, Iterated_100_times272, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher272, res_cipher272, structpointer272);
}
if(strncmp(res_cipher272, Iterated_1000_times272, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer272);
ite++;

unsigned char res_cipher273[16];
unsigned char res_uncipher273[16];
                      char key273[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain273, res_cipher273, structpointer273);
if(strncmp(res_cipher273, cipher273, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher273, res_uncipher273, structpointer273);
if(strncmp(res_uncipher273, decrypted273, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher273, plain273, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher273, res_cipher273, structpointer273);
}
if(strncmp(res_cipher273, Iterated_100_times273, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher273, res_cipher273, structpointer273);
}
if(strncmp(res_cipher273, Iterated_1000_times273, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer273);
ite++;

unsigned char res_cipher274[16];
unsigned char res_uncipher274[16];
                      char key274[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain274, res_cipher274, structpointer274);
if(strncmp(res_cipher274, cipher274, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher274, res_uncipher274, structpointer274);
if(strncmp(res_uncipher274, decrypted274, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher274, plain274, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher274, res_cipher274, structpointer274);
}
if(strncmp(res_cipher274, Iterated_100_times274, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher274, res_cipher274, structpointer274);
}
if(strncmp(res_cipher274, Iterated_1000_times274, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer274);
ite++;

unsigned char res_cipher275[16];
unsigned char res_uncipher275[16];
                      char key275[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain275, res_cipher275, structpointer275);
if(strncmp(res_cipher275, cipher275, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher275, res_uncipher275, structpointer275);
if(strncmp(res_uncipher275, decrypted275, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher275, plain275, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher275, res_cipher275, structpointer275);
}
if(strncmp(res_cipher275, Iterated_100_times275, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher275, res_cipher275, structpointer275);
}
if(strncmp(res_cipher275, Iterated_1000_times275, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer275);
ite++;

unsigned char res_cipher276[16];
unsigned char res_uncipher276[16];
                      char key276[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain276, res_cipher276, structpointer276);
if(strncmp(res_cipher276, cipher276, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher276, res_uncipher276, structpointer276);
if(strncmp(res_uncipher276, decrypted276, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher276, plain276, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher276, res_cipher276, structpointer276);
}
if(strncmp(res_cipher276, Iterated_100_times276, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher276, res_cipher276, structpointer276);
}
if(strncmp(res_cipher276, Iterated_1000_times276, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer276);
ite++;

unsigned char res_cipher277[16];
unsigned char res_uncipher277[16];
                      char key277[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain277, res_cipher277, structpointer277);
if(strncmp(res_cipher277, cipher277, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher277, res_uncipher277, structpointer277);
if(strncmp(res_uncipher277, decrypted277, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher277, plain277, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher277, res_cipher277, structpointer277);
}
if(strncmp(res_cipher277, Iterated_100_times277, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher277, res_cipher277, structpointer277);
}
if(strncmp(res_cipher277, Iterated_1000_times277, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer277);
ite++;

unsigned char res_cipher278[16];
unsigned char res_uncipher278[16];
                      char key278[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain278, res_cipher278, structpointer278);
if(strncmp(res_cipher278, cipher278, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher278, res_uncipher278, structpointer278);
if(strncmp(res_uncipher278, decrypted278, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher278, plain278, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher278, res_cipher278, structpointer278);
}
if(strncmp(res_cipher278, Iterated_100_times278, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher278, res_cipher278, structpointer278);
}
if(strncmp(res_cipher278, Iterated_1000_times278, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer278);
ite++;

unsigned char res_cipher279[16];
unsigned char res_uncipher279[16];
                      char key279[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain279, res_cipher279, structpointer279);
if(strncmp(res_cipher279, cipher279, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher279, res_uncipher279, structpointer279);
if(strncmp(res_uncipher279, decrypted279, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher279, plain279, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher279, res_cipher279, structpointer279);
}
if(strncmp(res_cipher279, Iterated_100_times279, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher279, res_cipher279, structpointer279);
}
if(strncmp(res_cipher279, Iterated_1000_times279, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer279);
ite++;

unsigned char res_cipher280[16];
unsigned char res_uncipher280[16];
                      char key280[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain280, res_cipher280, structpointer280);
if(strncmp(res_cipher280, cipher280, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher280, res_uncipher280, structpointer280);
if(strncmp(res_uncipher280, decrypted280, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher280, plain280, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher280, res_cipher280, structpointer280);
}
if(strncmp(res_cipher280, Iterated_100_times280, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher280, res_cipher280, structpointer280);
}
if(strncmp(res_cipher280, Iterated_1000_times280, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer280);
ite++;

unsigned char res_cipher281[16];
unsigned char res_uncipher281[16];
                      char key281[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain281, res_cipher281, structpointer281);
if(strncmp(res_cipher281, cipher281, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher281, res_uncipher281, structpointer281);
if(strncmp(res_uncipher281, decrypted281, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher281, plain281, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher281, res_cipher281, structpointer281);
}
if(strncmp(res_cipher281, Iterated_100_times281, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher281, res_cipher281, structpointer281);
}
if(strncmp(res_cipher281, Iterated_1000_times281, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer281);
ite++;

unsigned char res_cipher282[16];
unsigned char res_uncipher282[16];
                      char key282[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain282, res_cipher282, structpointer282);
if(strncmp(res_cipher282, cipher282, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher282, res_uncipher282, structpointer282);
if(strncmp(res_uncipher282, decrypted282, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher282, plain282, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher282, res_cipher282, structpointer282);
}
if(strncmp(res_cipher282, Iterated_100_times282, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher282, res_cipher282, structpointer282);
}
if(strncmp(res_cipher282, Iterated_1000_times282, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer282);
ite++;

unsigned char res_cipher283[16];
unsigned char res_uncipher283[16];
                      char key283[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain283, res_cipher283, structpointer283);
if(strncmp(res_cipher283, cipher283, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher283, res_uncipher283, structpointer283);
if(strncmp(res_uncipher283, decrypted283, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher283, plain283, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher283, res_cipher283, structpointer283);
}
if(strncmp(res_cipher283, Iterated_100_times283, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher283, res_cipher283, structpointer283);
}
if(strncmp(res_cipher283, Iterated_1000_times283, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer283);
ite++;

unsigned char res_cipher284[16];
unsigned char res_uncipher284[16];
                      char key284[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain284, res_cipher284, structpointer284);
if(strncmp(res_cipher284, cipher284, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher284, res_uncipher284, structpointer284);
if(strncmp(res_uncipher284, decrypted284, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher284, plain284, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher284, res_cipher284, structpointer284);
}
if(strncmp(res_cipher284, Iterated_100_times284, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher284, res_cipher284, structpointer284);
}
if(strncmp(res_cipher284, Iterated_1000_times284, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer284);
ite++;

unsigned char res_cipher285[16];
unsigned char res_uncipher285[16];
                      char key285[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain285, res_cipher285, structpointer285);
if(strncmp(res_cipher285, cipher285, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher285, res_uncipher285, structpointer285);
if(strncmp(res_uncipher285, decrypted285, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher285, plain285, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher285, res_cipher285, structpointer285);
}
if(strncmp(res_cipher285, Iterated_100_times285, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher285, res_cipher285, structpointer285);
}
if(strncmp(res_cipher285, Iterated_1000_times285, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer285);
ite++;

unsigned char res_cipher286[16];
unsigned char res_uncipher286[16];
                      char key286[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain286, res_cipher286, structpointer286);
if(strncmp(res_cipher286, cipher286, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher286, res_uncipher286, structpointer286);
if(strncmp(res_uncipher286, decrypted286, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher286, plain286, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher286, res_cipher286, structpointer286);
}
if(strncmp(res_cipher286, Iterated_100_times286, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher286, res_cipher286, structpointer286);
}
if(strncmp(res_cipher286, Iterated_1000_times286, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer286);
ite++;

unsigned char res_cipher287[16];
unsigned char res_uncipher287[16];
                      char key287[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain287, res_cipher287, structpointer287);
if(strncmp(res_cipher287, cipher287, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher287, res_uncipher287, structpointer287);
if(strncmp(res_uncipher287, decrypted287, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher287, plain287, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher287, res_cipher287, structpointer287);
}
if(strncmp(res_cipher287, Iterated_100_times287, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher287, res_cipher287, structpointer287);
}
if(strncmp(res_cipher287, Iterated_1000_times287, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer287);
ite++;

unsigned char res_cipher288[16];
unsigned char res_uncipher288[16];
                      char key288[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain288, res_cipher288, structpointer288);
if(strncmp(res_cipher288, cipher288, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher288, res_uncipher288, structpointer288);
if(strncmp(res_uncipher288, decrypted288, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher288, plain288, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher288, res_cipher288, structpointer288);
}
if(strncmp(res_cipher288, Iterated_100_times288, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher288, res_cipher288, structpointer288);
}
if(strncmp(res_cipher288, Iterated_1000_times288, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer288);
ite++;

unsigned char res_cipher289[16];
unsigned char res_uncipher289[16];
                      char key289[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain289, res_cipher289, structpointer289);
if(strncmp(res_cipher289, cipher289, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher289, res_uncipher289, structpointer289);
if(strncmp(res_uncipher289, decrypted289, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher289, plain289, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher289, res_cipher289, structpointer289);
}
if(strncmp(res_cipher289, Iterated_100_times289, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher289, res_cipher289, structpointer289);
}
if(strncmp(res_cipher289, Iterated_1000_times289, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer289);
ite++;

unsigned char res_cipher290[16];
unsigned char res_uncipher290[16];
                      char key290[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain290, res_cipher290, structpointer290);
if(strncmp(res_cipher290, cipher290, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher290, res_uncipher290, structpointer290);
if(strncmp(res_uncipher290, decrypted290, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher290, plain290, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher290, res_cipher290, structpointer290);
}
if(strncmp(res_cipher290, Iterated_100_times290, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher290, res_cipher290, structpointer290);
}
if(strncmp(res_cipher290, Iterated_1000_times290, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer290);
ite++;

unsigned char res_cipher291[16];
unsigned char res_uncipher291[16];
                      char key291[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain291, res_cipher291, structpointer291);
if(strncmp(res_cipher291, cipher291, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher291, res_uncipher291, structpointer291);
if(strncmp(res_uncipher291, decrypted291, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher291, plain291, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher291, res_cipher291, structpointer291);
}
if(strncmp(res_cipher291, Iterated_100_times291, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher291, res_cipher291, structpointer291);
}
if(strncmp(res_cipher291, Iterated_1000_times291, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer291);
ite++;

unsigned char res_cipher292[16];
unsigned char res_uncipher292[16];
                      char key292[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain292, res_cipher292, structpointer292);
if(strncmp(res_cipher292, cipher292, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher292, res_uncipher292, structpointer292);
if(strncmp(res_uncipher292, decrypted292, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher292, plain292, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher292, res_cipher292, structpointer292);
}
if(strncmp(res_cipher292, Iterated_100_times292, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher292, res_cipher292, structpointer292);
}
if(strncmp(res_cipher292, Iterated_1000_times292, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer292);
ite++;

unsigned char res_cipher293[16];
unsigned char res_uncipher293[16];
                      char key293[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain293, res_cipher293, structpointer293);
if(strncmp(res_cipher293, cipher293, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher293, res_uncipher293, structpointer293);
if(strncmp(res_uncipher293, decrypted293, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher293, plain293, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher293, res_cipher293, structpointer293);
}
if(strncmp(res_cipher293, Iterated_100_times293, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher293, res_cipher293, structpointer293);
}
if(strncmp(res_cipher293, Iterated_1000_times293, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer293);
ite++;

unsigned char res_cipher294[16];
unsigned char res_uncipher294[16];
                      char key294[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain294, res_cipher294, structpointer294);
if(strncmp(res_cipher294, cipher294, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher294, res_uncipher294, structpointer294);
if(strncmp(res_uncipher294, decrypted294, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher294, plain294, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher294, res_cipher294, structpointer294);
}
if(strncmp(res_cipher294, Iterated_100_times294, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher294, res_cipher294, structpointer294);
}
if(strncmp(res_cipher294, Iterated_1000_times294, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer294);
ite++;

unsigned char res_cipher295[16];
unsigned char res_uncipher295[16];
                      char key295[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain295, res_cipher295, structpointer295);
if(strncmp(res_cipher295, cipher295, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher295, res_uncipher295, structpointer295);
if(strncmp(res_uncipher295, decrypted295, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher295, plain295, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher295, res_cipher295, structpointer295);
}
if(strncmp(res_cipher295, Iterated_100_times295, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher295, res_cipher295, structpointer295);
}
if(strncmp(res_cipher295, Iterated_1000_times295, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer295);
ite++;

unsigned char res_cipher296[16];
unsigned char res_uncipher296[16];
                      char key296[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain296, res_cipher296, structpointer296);
if(strncmp(res_cipher296, cipher296, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher296, res_uncipher296, structpointer296);
if(strncmp(res_uncipher296, decrypted296, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher296, plain296, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher296, res_cipher296, structpointer296);
}
if(strncmp(res_cipher296, Iterated_100_times296, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher296, res_cipher296, structpointer296);
}
if(strncmp(res_cipher296, Iterated_1000_times296, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer296);
ite++;

unsigned char res_cipher297[16];
unsigned char res_uncipher297[16];
                      char key297[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain297, res_cipher297, structpointer297);
if(strncmp(res_cipher297, cipher297, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher297, res_uncipher297, structpointer297);
if(strncmp(res_uncipher297, decrypted297, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher297, plain297, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher297, res_cipher297, structpointer297);
}
if(strncmp(res_cipher297, Iterated_100_times297, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher297, res_cipher297, structpointer297);
}
if(strncmp(res_cipher297, Iterated_1000_times297, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer297);
ite++;

unsigned char res_cipher298[16];
unsigned char res_uncipher298[16];
                      char key298[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain298, res_cipher298, structpointer298);
if(strncmp(res_cipher298, cipher298, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher298, res_uncipher298, structpointer298);
if(strncmp(res_uncipher298, decrypted298, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher298, plain298, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher298, res_cipher298, structpointer298);
}
if(strncmp(res_cipher298, Iterated_100_times298, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher298, res_cipher298, structpointer298);
}
if(strncmp(res_cipher298, Iterated_1000_times298, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer298);
ite++;

unsigned char res_cipher299[16];
unsigned char res_uncipher299[16];
                      char key299[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain299, res_cipher299, structpointer299);
if(strncmp(res_cipher299, cipher299, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher299, res_uncipher299, structpointer299);
if(strncmp(res_uncipher299, decrypted299, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher299, plain299, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher299, res_cipher299, structpointer299);
}
if(strncmp(res_cipher299, Iterated_100_times299, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher299, res_cipher299, structpointer299);
}
if(strncmp(res_cipher299, Iterated_1000_times299, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer299);
ite++;

unsigned char res_cipher300[16];
unsigned char res_uncipher300[16];
                      char key300[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain300, res_cipher300, structpointer300);
if(strncmp(res_cipher300, cipher300, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher300, res_uncipher300, structpointer300);
if(strncmp(res_uncipher300, decrypted300, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher300, plain300, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher300, res_cipher300, structpointer300);
}
if(strncmp(res_cipher300, Iterated_100_times300, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher300, res_cipher300, structpointer300);
}
if(strncmp(res_cipher300, Iterated_1000_times300, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer300);
ite++;

unsigned char res_cipher301[16];
unsigned char res_uncipher301[16];
                      char key301[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain301, res_cipher301, structpointer301);
if(strncmp(res_cipher301, cipher301, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher301, res_uncipher301, structpointer301);
if(strncmp(res_uncipher301, decrypted301, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher301, plain301, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher301, res_cipher301, structpointer301);
}
if(strncmp(res_cipher301, Iterated_100_times301, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher301, res_cipher301, structpointer301);
}
if(strncmp(res_cipher301, Iterated_1000_times301, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer301);
ite++;

unsigned char res_cipher302[16];
unsigned char res_uncipher302[16];
                      char key302[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain302, res_cipher302, structpointer302);
if(strncmp(res_cipher302, cipher302, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher302, res_uncipher302, structpointer302);
if(strncmp(res_uncipher302, decrypted302, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher302, plain302, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher302, res_cipher302, structpointer302);
}
if(strncmp(res_cipher302, Iterated_100_times302, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher302, res_cipher302, structpointer302);
}
if(strncmp(res_cipher302, Iterated_1000_times302, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer302);
ite++;

unsigned char res_cipher303[16];
unsigned char res_uncipher303[16];
                      char key303[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain303, res_cipher303, structpointer303);
if(strncmp(res_cipher303, cipher303, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher303, res_uncipher303, structpointer303);
if(strncmp(res_uncipher303, decrypted303, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher303, plain303, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher303, res_cipher303, structpointer303);
}
if(strncmp(res_cipher303, Iterated_100_times303, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher303, res_cipher303, structpointer303);
}
if(strncmp(res_cipher303, Iterated_1000_times303, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer303);
ite++;

unsigned char res_cipher304[16];
unsigned char res_uncipher304[16];
                      char key304[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain304, res_cipher304, structpointer304);
if(strncmp(res_cipher304, cipher304, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher304, res_uncipher304, structpointer304);
if(strncmp(res_uncipher304, decrypted304, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher304, plain304, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher304, res_cipher304, structpointer304);
}
if(strncmp(res_cipher304, Iterated_100_times304, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher304, res_cipher304, structpointer304);
}
if(strncmp(res_cipher304, Iterated_1000_times304, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer304);
ite++;

unsigned char res_cipher305[16];
unsigned char res_uncipher305[16];
                      char key305[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain305, res_cipher305, structpointer305);
if(strncmp(res_cipher305, cipher305, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher305, res_uncipher305, structpointer305);
if(strncmp(res_uncipher305, decrypted305, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher305, plain305, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher305, res_cipher305, structpointer305);
}
if(strncmp(res_cipher305, Iterated_100_times305, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher305, res_cipher305, structpointer305);
}
if(strncmp(res_cipher305, Iterated_1000_times305, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer305);
ite++;

unsigned char res_cipher306[16];
unsigned char res_uncipher306[16];
                      char key306[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain306, res_cipher306, structpointer306);
if(strncmp(res_cipher306, cipher306, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher306, res_uncipher306, structpointer306);
if(strncmp(res_uncipher306, decrypted306, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher306, plain306, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher306, res_cipher306, structpointer306);
}
if(strncmp(res_cipher306, Iterated_100_times306, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher306, res_cipher306, structpointer306);
}
if(strncmp(res_cipher306, Iterated_1000_times306, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer306);
ite++;

unsigned char res_cipher307[16];
unsigned char res_uncipher307[16];
                      char key307[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain307, res_cipher307, structpointer307);
if(strncmp(res_cipher307, cipher307, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher307, res_uncipher307, structpointer307);
if(strncmp(res_uncipher307, decrypted307, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher307, plain307, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher307, res_cipher307, structpointer307);
}
if(strncmp(res_cipher307, Iterated_100_times307, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher307, res_cipher307, structpointer307);
}
if(strncmp(res_cipher307, Iterated_1000_times307, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer307);
ite++;

unsigned char res_cipher308[16];
unsigned char res_uncipher308[16];
                      char key308[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain308, res_cipher308, structpointer308);
if(strncmp(res_cipher308, cipher308, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher308, res_uncipher308, structpointer308);
if(strncmp(res_uncipher308, decrypted308, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher308, plain308, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher308, res_cipher308, structpointer308);
}
if(strncmp(res_cipher308, Iterated_100_times308, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher308, res_cipher308, structpointer308);
}
if(strncmp(res_cipher308, Iterated_1000_times308, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer308);
ite++;

unsigned char res_cipher309[16];
unsigned char res_uncipher309[16];
                      char key309[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain309, res_cipher309, structpointer309);
if(strncmp(res_cipher309, cipher309, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher309, res_uncipher309, structpointer309);
if(strncmp(res_uncipher309, decrypted309, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher309, plain309, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher309, res_cipher309, structpointer309);
}
if(strncmp(res_cipher309, Iterated_100_times309, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher309, res_cipher309, structpointer309);
}
if(strncmp(res_cipher309, Iterated_1000_times309, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer309);
ite++;

unsigned char res_cipher310[16];
unsigned char res_uncipher310[16];
                      char key310[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain310, res_cipher310, structpointer310);
if(strncmp(res_cipher310, cipher310, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher310, res_uncipher310, structpointer310);
if(strncmp(res_uncipher310, decrypted310, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher310, plain310, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher310, res_cipher310, structpointer310);
}
if(strncmp(res_cipher310, Iterated_100_times310, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher310, res_cipher310, structpointer310);
}
if(strncmp(res_cipher310, Iterated_1000_times310, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer310);
ite++;

unsigned char res_cipher311[16];
unsigned char res_uncipher311[16];
                      char key311[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain311, res_cipher311, structpointer311);
if(strncmp(res_cipher311, cipher311, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher311, res_uncipher311, structpointer311);
if(strncmp(res_uncipher311, decrypted311, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher311, plain311, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher311, res_cipher311, structpointer311);
}
if(strncmp(res_cipher311, Iterated_100_times311, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher311, res_cipher311, structpointer311);
}
if(strncmp(res_cipher311, Iterated_1000_times311, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer311);
ite++;

unsigned char res_cipher312[16];
unsigned char res_uncipher312[16];
                      char key312[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain312, res_cipher312, structpointer312);
if(strncmp(res_cipher312, cipher312, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher312, res_uncipher312, structpointer312);
if(strncmp(res_uncipher312, decrypted312, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher312, plain312, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher312, res_cipher312, structpointer312);
}
if(strncmp(res_cipher312, Iterated_100_times312, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher312, res_cipher312, structpointer312);
}
if(strncmp(res_cipher312, Iterated_1000_times312, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer312);
ite++;

unsigned char res_cipher313[16];
unsigned char res_uncipher313[16];
                      char key313[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain313, res_cipher313, structpointer313);
if(strncmp(res_cipher313, cipher313, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher313, res_uncipher313, structpointer313);
if(strncmp(res_uncipher313, decrypted313, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher313, plain313, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher313, res_cipher313, structpointer313);
}
if(strncmp(res_cipher313, Iterated_100_times313, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher313, res_cipher313, structpointer313);
}
if(strncmp(res_cipher313, Iterated_1000_times313, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer313);
ite++;

unsigned char res_cipher314[16];
unsigned char res_uncipher314[16];
                      char key314[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain314, res_cipher314, structpointer314);
if(strncmp(res_cipher314, cipher314, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher314, res_uncipher314, structpointer314);
if(strncmp(res_uncipher314, decrypted314, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher314, plain314, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher314, res_cipher314, structpointer314);
}
if(strncmp(res_cipher314, Iterated_100_times314, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher314, res_cipher314, structpointer314);
}
if(strncmp(res_cipher314, Iterated_1000_times314, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer314);
ite++;

unsigned char res_cipher315[16];
unsigned char res_uncipher315[16];
                      char key315[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain315, res_cipher315, structpointer315);
if(strncmp(res_cipher315, cipher315, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher315, res_uncipher315, structpointer315);
if(strncmp(res_uncipher315, decrypted315, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher315, plain315, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher315, res_cipher315, structpointer315);
}
if(strncmp(res_cipher315, Iterated_100_times315, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher315, res_cipher315, structpointer315);
}
if(strncmp(res_cipher315, Iterated_1000_times315, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer315);
ite++;

unsigned char res_cipher316[16];
unsigned char res_uncipher316[16];
                      char key316[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain316, res_cipher316, structpointer316);
if(strncmp(res_cipher316, cipher316, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher316, res_uncipher316, structpointer316);
if(strncmp(res_uncipher316, decrypted316, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher316, plain316, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher316, res_cipher316, structpointer316);
}
if(strncmp(res_cipher316, Iterated_100_times316, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher316, res_cipher316, structpointer316);
}
if(strncmp(res_cipher316, Iterated_1000_times316, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer316);
ite++;

unsigned char res_cipher317[16];
unsigned char res_uncipher317[16];
                      char key317[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain317, res_cipher317, structpointer317);
if(strncmp(res_cipher317, cipher317, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher317, res_uncipher317, structpointer317);
if(strncmp(res_uncipher317, decrypted317, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher317, plain317, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher317, res_cipher317, structpointer317);
}
if(strncmp(res_cipher317, Iterated_100_times317, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher317, res_cipher317, structpointer317);
}
if(strncmp(res_cipher317, Iterated_1000_times317, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer317);
ite++;

unsigned char res_cipher318[16];
unsigned char res_uncipher318[16];
                      char key318[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain318, res_cipher318, structpointer318);
if(strncmp(res_cipher318, cipher318, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher318, res_uncipher318, structpointer318);
if(strncmp(res_uncipher318, decrypted318, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher318, plain318, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher318, res_cipher318, structpointer318);
}
if(strncmp(res_cipher318, Iterated_100_times318, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher318, res_cipher318, structpointer318);
}
if(strncmp(res_cipher318, Iterated_1000_times318, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer318);
ite++;

unsigned char res_cipher319[16];
unsigned char res_uncipher319[16];
                      char key319[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain319, res_cipher319, structpointer319);
if(strncmp(res_cipher319, cipher319, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher319, res_uncipher319, structpointer319);
if(strncmp(res_uncipher319, decrypted319, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher319, plain319, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher319, res_cipher319, structpointer319);
}
if(strncmp(res_cipher319, Iterated_100_times319, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher319, res_cipher319, structpointer319);
}
if(strncmp(res_cipher319, Iterated_1000_times319, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer319);
ite++;

unsigned char res_cipher320[16];
unsigned char res_uncipher320[16];
                      char key320[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain320, res_cipher320, structpointer320);
if(strncmp(res_cipher320, cipher320, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher320, res_uncipher320, structpointer320);
if(strncmp(res_uncipher320, decrypted320, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher320, plain320, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher320, res_cipher320, structpointer320);
}
if(strncmp(res_cipher320, Iterated_100_times320, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher320, res_cipher320, structpointer320);
}
if(strncmp(res_cipher320, Iterated_1000_times320, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer320);
ite++;

unsigned char res_cipher321[16];
unsigned char res_uncipher321[16];
                      char key321[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
NESSIEencrypt(plain321, res_cipher321, structpointer321);
if(strncmp(res_cipher321, cipher321, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher321, res_uncipher321, structpointer321);
if(strncmp(res_uncipher321, decrypted321, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher321, plain321, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher321, res_cipher321, structpointer321);
}
if(strncmp(res_cipher321, Iterated_100_times321, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher321, res_cipher321, structpointer321);
}
if(strncmp(res_cipher321, Iterated_1000_times321, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer321);
ite++;

unsigned char res_cipher322[16];
unsigned char res_uncipher322[16];
                      char key322[]={0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01};
NESSIEencrypt(plain322, res_cipher322, structpointer322);
if(strncmp(res_cipher322, cipher322, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher322, res_uncipher322, structpointer322);
if(strncmp(res_uncipher322, decrypted322, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher322, plain322, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher322, res_cipher322, structpointer322);
}
if(strncmp(res_cipher322, Iterated_100_times322, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher322, res_cipher322, structpointer322);
}
if(strncmp(res_cipher322, Iterated_1000_times322, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer322);
ite++;

unsigned char res_cipher323[16];
unsigned char res_uncipher323[16];
                      char key323[]={0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02};
NESSIEencrypt(plain323, res_cipher323, structpointer323);
if(strncmp(res_cipher323, cipher323, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher323, res_uncipher323, structpointer323);
if(strncmp(res_uncipher323, decrypted323, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher323, plain323, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher323, res_cipher323, structpointer323);
}
if(strncmp(res_cipher323, Iterated_100_times323, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher323, res_cipher323, structpointer323);
}
if(strncmp(res_cipher323, Iterated_1000_times323, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer323);
ite++;

unsigned char res_cipher324[16];
unsigned char res_uncipher324[16];
                      char key324[]={0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03};
NESSIEencrypt(plain324, res_cipher324, structpointer324);
if(strncmp(res_cipher324, cipher324, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher324, res_uncipher324, structpointer324);
if(strncmp(res_uncipher324, decrypted324, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher324, plain324, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher324, res_cipher324, structpointer324);
}
if(strncmp(res_cipher324, Iterated_100_times324, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher324, res_cipher324, structpointer324);
}
if(strncmp(res_cipher324, Iterated_1000_times324, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer324);
ite++;

unsigned char res_cipher325[16];
unsigned char res_uncipher325[16];
                      char key325[]={0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04};
NESSIEencrypt(plain325, res_cipher325, structpointer325);
if(strncmp(res_cipher325, cipher325, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher325, res_uncipher325, structpointer325);
if(strncmp(res_uncipher325, decrypted325, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher325, plain325, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher325, res_cipher325, structpointer325);
}
if(strncmp(res_cipher325, Iterated_100_times325, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher325, res_cipher325, structpointer325);
}
if(strncmp(res_cipher325, Iterated_1000_times325, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer325);
ite++;

unsigned char res_cipher326[16];
unsigned char res_uncipher326[16];
                      char key326[]={0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05};
NESSIEencrypt(plain326, res_cipher326, structpointer326);
if(strncmp(res_cipher326, cipher326, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher326, res_uncipher326, structpointer326);
if(strncmp(res_uncipher326, decrypted326, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher326, plain326, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher326, res_cipher326, structpointer326);
}
if(strncmp(res_cipher326, Iterated_100_times326, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher326, res_cipher326, structpointer326);
}
if(strncmp(res_cipher326, Iterated_1000_times326, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer326);
ite++;

unsigned char res_cipher327[16];
unsigned char res_uncipher327[16];
                      char key327[]={0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06};
NESSIEencrypt(plain327, res_cipher327, structpointer327);
if(strncmp(res_cipher327, cipher327, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher327, res_uncipher327, structpointer327);
if(strncmp(res_uncipher327, decrypted327, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher327, plain327, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher327, res_cipher327, structpointer327);
}
if(strncmp(res_cipher327, Iterated_100_times327, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher327, res_cipher327, structpointer327);
}
if(strncmp(res_cipher327, Iterated_1000_times327, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer327);
ite++;

unsigned char res_cipher328[16];
unsigned char res_uncipher328[16];
                      char key328[]={0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07};
NESSIEencrypt(plain328, res_cipher328, structpointer328);
if(strncmp(res_cipher328, cipher328, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher328, res_uncipher328, structpointer328);
if(strncmp(res_uncipher328, decrypted328, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher328, plain328, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher328, res_cipher328, structpointer328);
}
if(strncmp(res_cipher328, Iterated_100_times328, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher328, res_cipher328, structpointer328);
}
if(strncmp(res_cipher328, Iterated_1000_times328, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer328);
ite++;

unsigned char res_cipher329[16];
unsigned char res_uncipher329[16];
                      char key329[]={0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08};
NESSIEencrypt(plain329, res_cipher329, structpointer329);
if(strncmp(res_cipher329, cipher329, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher329, res_uncipher329, structpointer329);
if(strncmp(res_uncipher329, decrypted329, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher329, plain329, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher329, res_cipher329, structpointer329);
}
if(strncmp(res_cipher329, Iterated_100_times329, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher329, res_cipher329, structpointer329);
}
if(strncmp(res_cipher329, Iterated_1000_times329, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer329);
ite++;

unsigned char res_cipher330[16];
unsigned char res_uncipher330[16];
                      char key330[]={0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09};
NESSIEencrypt(plain330, res_cipher330, structpointer330);
if(strncmp(res_cipher330, cipher330, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher330, res_uncipher330, structpointer330);
if(strncmp(res_uncipher330, decrypted330, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher330, plain330, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher330, res_cipher330, structpointer330);
}
if(strncmp(res_cipher330, Iterated_100_times330, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher330, res_cipher330, structpointer330);
}
if(strncmp(res_cipher330, Iterated_1000_times330, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer330);
ite++;

unsigned char res_cipher331[16];
unsigned char res_uncipher331[16];
                      char key331[]={0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A};
NESSIEencrypt(plain331, res_cipher331, structpointer331);
if(strncmp(res_cipher331, cipher331, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher331, res_uncipher331, structpointer331);
if(strncmp(res_uncipher331, decrypted331, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher331, plain331, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher331, res_cipher331, structpointer331);
}
if(strncmp(res_cipher331, Iterated_100_times331, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher331, res_cipher331, structpointer331);
}
if(strncmp(res_cipher331, Iterated_1000_times331, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer331);
ite++;

unsigned char res_cipher332[16];
unsigned char res_uncipher332[16];
                      char key332[]={0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B,0x0B};
NESSIEencrypt(plain332, res_cipher332, structpointer332);
if(strncmp(res_cipher332, cipher332, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher332, res_uncipher332, structpointer332);
if(strncmp(res_uncipher332, decrypted332, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher332, plain332, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher332, res_cipher332, structpointer332);
}
if(strncmp(res_cipher332, Iterated_100_times332, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher332, res_cipher332, structpointer332);
}
if(strncmp(res_cipher332, Iterated_1000_times332, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer332);
ite++;

unsigned char res_cipher333[16];
unsigned char res_uncipher333[16];
                      char key333[]={0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C};
NESSIEencrypt(plain333, res_cipher333, structpointer333);
if(strncmp(res_cipher333, cipher333, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher333, res_uncipher333, structpointer333);
if(strncmp(res_uncipher333, decrypted333, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher333, plain333, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher333, res_cipher333, structpointer333);
}
if(strncmp(res_cipher333, Iterated_100_times333, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher333, res_cipher333, structpointer333);
}
if(strncmp(res_cipher333, Iterated_1000_times333, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer333);
ite++;

unsigned char res_cipher334[16];
unsigned char res_uncipher334[16];
                      char key334[]={0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D};
NESSIEencrypt(plain334, res_cipher334, structpointer334);
if(strncmp(res_cipher334, cipher334, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher334, res_uncipher334, structpointer334);
if(strncmp(res_uncipher334, decrypted334, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher334, plain334, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher334, res_cipher334, structpointer334);
}
if(strncmp(res_cipher334, Iterated_100_times334, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher334, res_cipher334, structpointer334);
}
if(strncmp(res_cipher334, Iterated_1000_times334, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer334);
ite++;

unsigned char res_cipher335[16];
unsigned char res_uncipher335[16];
                      char key335[]={0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E};
NESSIEencrypt(plain335, res_cipher335, structpointer335);
if(strncmp(res_cipher335, cipher335, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher335, res_uncipher335, structpointer335);
if(strncmp(res_uncipher335, decrypted335, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher335, plain335, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher335, res_cipher335, structpointer335);
}
if(strncmp(res_cipher335, Iterated_100_times335, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher335, res_cipher335, structpointer335);
}
if(strncmp(res_cipher335, Iterated_1000_times335, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer335);
ite++;

unsigned char res_cipher336[16];
unsigned char res_uncipher336[16];
                      char key336[]={0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F};
NESSIEencrypt(plain336, res_cipher336, structpointer336);
if(strncmp(res_cipher336, cipher336, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher336, res_uncipher336, structpointer336);
if(strncmp(res_uncipher336, decrypted336, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher336, plain336, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher336, res_cipher336, structpointer336);
}
if(strncmp(res_cipher336, Iterated_100_times336, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher336, res_cipher336, structpointer336);
}
if(strncmp(res_cipher336, Iterated_1000_times336, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer336);
ite++;

unsigned char res_cipher337[16];
unsigned char res_uncipher337[16];
                      char key337[]={0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10};
NESSIEencrypt(plain337, res_cipher337, structpointer337);
if(strncmp(res_cipher337, cipher337, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher337, res_uncipher337, structpointer337);
if(strncmp(res_uncipher337, decrypted337, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher337, plain337, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher337, res_cipher337, structpointer337);
}
if(strncmp(res_cipher337, Iterated_100_times337, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher337, res_cipher337, structpointer337);
}
if(strncmp(res_cipher337, Iterated_1000_times337, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer337);
ite++;

unsigned char res_cipher338[16];
unsigned char res_uncipher338[16];
                      char key338[]={0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11};
NESSIEencrypt(plain338, res_cipher338, structpointer338);
if(strncmp(res_cipher338, cipher338, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher338, res_uncipher338, structpointer338);
if(strncmp(res_uncipher338, decrypted338, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher338, plain338, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher338, res_cipher338, structpointer338);
}
if(strncmp(res_cipher338, Iterated_100_times338, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher338, res_cipher338, structpointer338);
}
if(strncmp(res_cipher338, Iterated_1000_times338, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer338);
ite++;

unsigned char res_cipher339[16];
unsigned char res_uncipher339[16];
                      char key339[]={0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x12};
NESSIEencrypt(plain339, res_cipher339, structpointer339);
if(strncmp(res_cipher339, cipher339, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher339, res_uncipher339, structpointer339);
if(strncmp(res_uncipher339, decrypted339, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher339, plain339, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher339, res_cipher339, structpointer339);
}
if(strncmp(res_cipher339, Iterated_100_times339, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher339, res_cipher339, structpointer339);
}
if(strncmp(res_cipher339, Iterated_1000_times339, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer339);
ite++;

unsigned char res_cipher340[16];
unsigned char res_uncipher340[16];
                      char key340[]={0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13};
NESSIEencrypt(plain340, res_cipher340, structpointer340);
if(strncmp(res_cipher340, cipher340, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher340, res_uncipher340, structpointer340);
if(strncmp(res_uncipher340, decrypted340, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher340, plain340, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher340, res_cipher340, structpointer340);
}
if(strncmp(res_cipher340, Iterated_100_times340, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher340, res_cipher340, structpointer340);
}
if(strncmp(res_cipher340, Iterated_1000_times340, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer340);
ite++;

unsigned char res_cipher341[16];
unsigned char res_uncipher341[16];
                      char key341[]={0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14,0x14};
NESSIEencrypt(plain341, res_cipher341, structpointer341);
if(strncmp(res_cipher341, cipher341, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher341, res_uncipher341, structpointer341);
if(strncmp(res_uncipher341, decrypted341, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher341, plain341, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher341, res_cipher341, structpointer341);
}
if(strncmp(res_cipher341, Iterated_100_times341, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher341, res_cipher341, structpointer341);
}
if(strncmp(res_cipher341, Iterated_1000_times341, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer341);
ite++;

unsigned char res_cipher342[16];
unsigned char res_uncipher342[16];
                      char key342[]={0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15,0x15};
NESSIEencrypt(plain342, res_cipher342, structpointer342);
if(strncmp(res_cipher342, cipher342, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher342, res_uncipher342, structpointer342);
if(strncmp(res_uncipher342, decrypted342, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher342, plain342, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher342, res_cipher342, structpointer342);
}
if(strncmp(res_cipher342, Iterated_100_times342, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher342, res_cipher342, structpointer342);
}
if(strncmp(res_cipher342, Iterated_1000_times342, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer342);
ite++;

unsigned char res_cipher343[16];
unsigned char res_uncipher343[16];
                      char key343[]={0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16};
NESSIEencrypt(plain343, res_cipher343, structpointer343);
if(strncmp(res_cipher343, cipher343, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher343, res_uncipher343, structpointer343);
if(strncmp(res_uncipher343, decrypted343, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher343, plain343, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher343, res_cipher343, structpointer343);
}
if(strncmp(res_cipher343, Iterated_100_times343, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher343, res_cipher343, structpointer343);
}
if(strncmp(res_cipher343, Iterated_1000_times343, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer343);
ite++;

unsigned char res_cipher344[16];
unsigned char res_uncipher344[16];
                      char key344[]={0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17,0x17};
NESSIEencrypt(plain344, res_cipher344, structpointer344);
if(strncmp(res_cipher344, cipher344, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher344, res_uncipher344, structpointer344);
if(strncmp(res_uncipher344, decrypted344, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher344, plain344, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher344, res_cipher344, structpointer344);
}
if(strncmp(res_cipher344, Iterated_100_times344, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher344, res_cipher344, structpointer344);
}
if(strncmp(res_cipher344, Iterated_1000_times344, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer344);
ite++;

unsigned char res_cipher345[16];
unsigned char res_uncipher345[16];
                      char key345[]={0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18};
NESSIEencrypt(plain345, res_cipher345, structpointer345);
if(strncmp(res_cipher345, cipher345, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher345, res_uncipher345, structpointer345);
if(strncmp(res_uncipher345, decrypted345, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher345, plain345, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher345, res_cipher345, structpointer345);
}
if(strncmp(res_cipher345, Iterated_100_times345, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher345, res_cipher345, structpointer345);
}
if(strncmp(res_cipher345, Iterated_1000_times345, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer345);
ite++;

unsigned char res_cipher346[16];
unsigned char res_uncipher346[16];
                      char key346[]={0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19};
NESSIEencrypt(plain346, res_cipher346, structpointer346);
if(strncmp(res_cipher346, cipher346, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher346, res_uncipher346, structpointer346);
if(strncmp(res_uncipher346, decrypted346, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher346, plain346, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher346, res_cipher346, structpointer346);
}
if(strncmp(res_cipher346, Iterated_100_times346, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher346, res_cipher346, structpointer346);
}
if(strncmp(res_cipher346, Iterated_1000_times346, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer346);
ite++;

unsigned char res_cipher347[16];
unsigned char res_uncipher347[16];
                      char key347[]={0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A,0x1A};
NESSIEencrypt(plain347, res_cipher347, structpointer347);
if(strncmp(res_cipher347, cipher347, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher347, res_uncipher347, structpointer347);
if(strncmp(res_uncipher347, decrypted347, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher347, plain347, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher347, res_cipher347, structpointer347);
}
if(strncmp(res_cipher347, Iterated_100_times347, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher347, res_cipher347, structpointer347);
}
if(strncmp(res_cipher347, Iterated_1000_times347, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer347);
ite++;

unsigned char res_cipher348[16];
unsigned char res_uncipher348[16];
                      char key348[]={0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B,0x1B};
NESSIEencrypt(plain348, res_cipher348, structpointer348);
if(strncmp(res_cipher348, cipher348, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher348, res_uncipher348, structpointer348);
if(strncmp(res_uncipher348, decrypted348, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher348, plain348, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher348, res_cipher348, structpointer348);
}
if(strncmp(res_cipher348, Iterated_100_times348, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher348, res_cipher348, structpointer348);
}
if(strncmp(res_cipher348, Iterated_1000_times348, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer348);
ite++;

unsigned char res_cipher349[16];
unsigned char res_uncipher349[16];
                      char key349[]={0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C};
NESSIEencrypt(plain349, res_cipher349, structpointer349);
if(strncmp(res_cipher349, cipher349, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher349, res_uncipher349, structpointer349);
if(strncmp(res_uncipher349, decrypted349, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher349, plain349, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher349, res_cipher349, structpointer349);
}
if(strncmp(res_cipher349, Iterated_100_times349, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher349, res_cipher349, structpointer349);
}
if(strncmp(res_cipher349, Iterated_1000_times349, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer349);
ite++;

unsigned char res_cipher350[16];
unsigned char res_uncipher350[16];
                      char key350[]={0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D,0x1D};
NESSIEencrypt(plain350, res_cipher350, structpointer350);
if(strncmp(res_cipher350, cipher350, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher350, res_uncipher350, structpointer350);
if(strncmp(res_uncipher350, decrypted350, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher350, plain350, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher350, res_cipher350, structpointer350);
}
if(strncmp(res_cipher350, Iterated_100_times350, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher350, res_cipher350, structpointer350);
}
if(strncmp(res_cipher350, Iterated_1000_times350, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer350);
ite++;

unsigned char res_cipher351[16];
unsigned char res_uncipher351[16];
                      char key351[]={0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E,0x1E};
NESSIEencrypt(plain351, res_cipher351, structpointer351);
if(strncmp(res_cipher351, cipher351, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher351, res_uncipher351, structpointer351);
if(strncmp(res_uncipher351, decrypted351, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher351, plain351, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher351, res_cipher351, structpointer351);
}
if(strncmp(res_cipher351, Iterated_100_times351, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher351, res_cipher351, structpointer351);
}
if(strncmp(res_cipher351, Iterated_1000_times351, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer351);
ite++;

unsigned char res_cipher352[16];
unsigned char res_uncipher352[16];
                      char key352[]={0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F};
NESSIEencrypt(plain352, res_cipher352, structpointer352);
if(strncmp(res_cipher352, cipher352, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher352, res_uncipher352, structpointer352);
if(strncmp(res_uncipher352, decrypted352, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher352, plain352, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher352, res_cipher352, structpointer352);
}
if(strncmp(res_cipher352, Iterated_100_times352, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher352, res_cipher352, structpointer352);
}
if(strncmp(res_cipher352, Iterated_1000_times352, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer352);
ite++;

unsigned char res_cipher353[16];
unsigned char res_uncipher353[16];
                      char key353[]={0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};
NESSIEencrypt(plain353, res_cipher353, structpointer353);
if(strncmp(res_cipher353, cipher353, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher353, res_uncipher353, structpointer353);
if(strncmp(res_uncipher353, decrypted353, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher353, plain353, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher353, res_cipher353, structpointer353);
}
if(strncmp(res_cipher353, Iterated_100_times353, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher353, res_cipher353, structpointer353);
}
if(strncmp(res_cipher353, Iterated_1000_times353, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer353);
ite++;

unsigned char res_cipher354[16];
unsigned char res_uncipher354[16];
                      char key354[]={0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21};
NESSIEencrypt(plain354, res_cipher354, structpointer354);
if(strncmp(res_cipher354, cipher354, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher354, res_uncipher354, structpointer354);
if(strncmp(res_uncipher354, decrypted354, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher354, plain354, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher354, res_cipher354, structpointer354);
}
if(strncmp(res_cipher354, Iterated_100_times354, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher354, res_cipher354, structpointer354);
}
if(strncmp(res_cipher354, Iterated_1000_times354, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer354);
ite++;

unsigned char res_cipher355[16];
unsigned char res_uncipher355[16];
                      char key355[]={0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22};
NESSIEencrypt(plain355, res_cipher355, structpointer355);
if(strncmp(res_cipher355, cipher355, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher355, res_uncipher355, structpointer355);
if(strncmp(res_uncipher355, decrypted355, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher355, plain355, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher355, res_cipher355, structpointer355);
}
if(strncmp(res_cipher355, Iterated_100_times355, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher355, res_cipher355, structpointer355);
}
if(strncmp(res_cipher355, Iterated_1000_times355, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer355);
ite++;

unsigned char res_cipher356[16];
unsigned char res_uncipher356[16];
                      char key356[]={0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23,0x23};
NESSIEencrypt(plain356, res_cipher356, structpointer356);
if(strncmp(res_cipher356, cipher356, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher356, res_uncipher356, structpointer356);
if(strncmp(res_uncipher356, decrypted356, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher356, plain356, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher356, res_cipher356, structpointer356);
}
if(strncmp(res_cipher356, Iterated_100_times356, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher356, res_cipher356, structpointer356);
}
if(strncmp(res_cipher356, Iterated_1000_times356, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer356);
ite++;

unsigned char res_cipher357[16];
unsigned char res_uncipher357[16];
                      char key357[]={0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24,0x24};
NESSIEencrypt(plain357, res_cipher357, structpointer357);
if(strncmp(res_cipher357, cipher357, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher357, res_uncipher357, structpointer357);
if(strncmp(res_uncipher357, decrypted357, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher357, plain357, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher357, res_cipher357, structpointer357);
}
if(strncmp(res_cipher357, Iterated_100_times357, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher357, res_cipher357, structpointer357);
}
if(strncmp(res_cipher357, Iterated_1000_times357, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer357);
ite++;

unsigned char res_cipher358[16];
unsigned char res_uncipher358[16];
                      char key358[]={0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25,0x25};
NESSIEencrypt(plain358, res_cipher358, structpointer358);
if(strncmp(res_cipher358, cipher358, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher358, res_uncipher358, structpointer358);
if(strncmp(res_uncipher358, decrypted358, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher358, plain358, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher358, res_cipher358, structpointer358);
}
if(strncmp(res_cipher358, Iterated_100_times358, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher358, res_cipher358, structpointer358);
}
if(strncmp(res_cipher358, Iterated_1000_times358, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer358);
ite++;

unsigned char res_cipher359[16];
unsigned char res_uncipher359[16];
                      char key359[]={0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26,0x26};
NESSIEencrypt(plain359, res_cipher359, structpointer359);
if(strncmp(res_cipher359, cipher359, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher359, res_uncipher359, structpointer359);
if(strncmp(res_uncipher359, decrypted359, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher359, plain359, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher359, res_cipher359, structpointer359);
}
if(strncmp(res_cipher359, Iterated_100_times359, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher359, res_cipher359, structpointer359);
}
if(strncmp(res_cipher359, Iterated_1000_times359, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer359);
ite++;

unsigned char res_cipher360[16];
unsigned char res_uncipher360[16];
                      char key360[]={0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27,0x27};
NESSIEencrypt(plain360, res_cipher360, structpointer360);
if(strncmp(res_cipher360, cipher360, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher360, res_uncipher360, structpointer360);
if(strncmp(res_uncipher360, decrypted360, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher360, plain360, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher360, res_cipher360, structpointer360);
}
if(strncmp(res_cipher360, Iterated_100_times360, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher360, res_cipher360, structpointer360);
}
if(strncmp(res_cipher360, Iterated_1000_times360, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer360);
ite++;

unsigned char res_cipher361[16];
unsigned char res_uncipher361[16];
                      char key361[]={0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28};
NESSIEencrypt(plain361, res_cipher361, structpointer361);
if(strncmp(res_cipher361, cipher361, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher361, res_uncipher361, structpointer361);
if(strncmp(res_uncipher361, decrypted361, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher361, plain361, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher361, res_cipher361, structpointer361);
}
if(strncmp(res_cipher361, Iterated_100_times361, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher361, res_cipher361, structpointer361);
}
if(strncmp(res_cipher361, Iterated_1000_times361, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer361);
ite++;

unsigned char res_cipher362[16];
unsigned char res_uncipher362[16];
                      char key362[]={0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29};
NESSIEencrypt(plain362, res_cipher362, structpointer362);
if(strncmp(res_cipher362, cipher362, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher362, res_uncipher362, structpointer362);
if(strncmp(res_uncipher362, decrypted362, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher362, plain362, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher362, res_cipher362, structpointer362);
}
if(strncmp(res_cipher362, Iterated_100_times362, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher362, res_cipher362, structpointer362);
}
if(strncmp(res_cipher362, Iterated_1000_times362, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer362);
ite++;

unsigned char res_cipher363[16];
unsigned char res_uncipher363[16];
                      char key363[]={0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A,0x2A};
NESSIEencrypt(plain363, res_cipher363, structpointer363);
if(strncmp(res_cipher363, cipher363, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher363, res_uncipher363, structpointer363);
if(strncmp(res_uncipher363, decrypted363, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher363, plain363, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher363, res_cipher363, structpointer363);
}
if(strncmp(res_cipher363, Iterated_100_times363, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher363, res_cipher363, structpointer363);
}
if(strncmp(res_cipher363, Iterated_1000_times363, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer363);
ite++;

unsigned char res_cipher364[16];
unsigned char res_uncipher364[16];
                      char key364[]={0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B};
NESSIEencrypt(plain364, res_cipher364, structpointer364);
if(strncmp(res_cipher364, cipher364, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher364, res_uncipher364, structpointer364);
if(strncmp(res_uncipher364, decrypted364, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher364, plain364, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher364, res_cipher364, structpointer364);
}
if(strncmp(res_cipher364, Iterated_100_times364, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher364, res_cipher364, structpointer364);
}
if(strncmp(res_cipher364, Iterated_1000_times364, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer364);
ite++;

unsigned char res_cipher365[16];
unsigned char res_uncipher365[16];
                      char key365[]={0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C};
NESSIEencrypt(plain365, res_cipher365, structpointer365);
if(strncmp(res_cipher365, cipher365, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher365, res_uncipher365, structpointer365);
if(strncmp(res_uncipher365, decrypted365, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher365, plain365, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher365, res_cipher365, structpointer365);
}
if(strncmp(res_cipher365, Iterated_100_times365, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher365, res_cipher365, structpointer365);
}
if(strncmp(res_cipher365, Iterated_1000_times365, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer365);
ite++;

unsigned char res_cipher366[16];
unsigned char res_uncipher366[16];
                      char key366[]={0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D,0x2D};
NESSIEencrypt(plain366, res_cipher366, structpointer366);
if(strncmp(res_cipher366, cipher366, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher366, res_uncipher366, structpointer366);
if(strncmp(res_uncipher366, decrypted366, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher366, plain366, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher366, res_cipher366, structpointer366);
}
if(strncmp(res_cipher366, Iterated_100_times366, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher366, res_cipher366, structpointer366);
}
if(strncmp(res_cipher366, Iterated_1000_times366, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer366);
ite++;

unsigned char res_cipher367[16];
unsigned char res_uncipher367[16];
                      char key367[]={0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E,0x2E};
NESSIEencrypt(plain367, res_cipher367, structpointer367);
if(strncmp(res_cipher367, cipher367, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher367, res_uncipher367, structpointer367);
if(strncmp(res_uncipher367, decrypted367, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher367, plain367, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher367, res_cipher367, structpointer367);
}
if(strncmp(res_cipher367, Iterated_100_times367, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher367, res_cipher367, structpointer367);
}
if(strncmp(res_cipher367, Iterated_1000_times367, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer367);
ite++;

unsigned char res_cipher368[16];
unsigned char res_uncipher368[16];
                      char key368[]={0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F,0x2F};
NESSIEencrypt(plain368, res_cipher368, structpointer368);
if(strncmp(res_cipher368, cipher368, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher368, res_uncipher368, structpointer368);
if(strncmp(res_uncipher368, decrypted368, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher368, plain368, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher368, res_cipher368, structpointer368);
}
if(strncmp(res_cipher368, Iterated_100_times368, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher368, res_cipher368, structpointer368);
}
if(strncmp(res_cipher368, Iterated_1000_times368, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer368);
ite++;

unsigned char res_cipher369[16];
unsigned char res_uncipher369[16];
                      char key369[]={0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30};
NESSIEencrypt(plain369, res_cipher369, structpointer369);
if(strncmp(res_cipher369, cipher369, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher369, res_uncipher369, structpointer369);
if(strncmp(res_uncipher369, decrypted369, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher369, plain369, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher369, res_cipher369, structpointer369);
}
if(strncmp(res_cipher369, Iterated_100_times369, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher369, res_cipher369, structpointer369);
}
if(strncmp(res_cipher369, Iterated_1000_times369, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer369);
ite++;

unsigned char res_cipher370[16];
unsigned char res_uncipher370[16];
                      char key370[]={0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x31};
NESSIEencrypt(plain370, res_cipher370, structpointer370);
if(strncmp(res_cipher370, cipher370, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher370, res_uncipher370, structpointer370);
if(strncmp(res_uncipher370, decrypted370, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher370, plain370, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher370, res_cipher370, structpointer370);
}
if(strncmp(res_cipher370, Iterated_100_times370, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher370, res_cipher370, structpointer370);
}
if(strncmp(res_cipher370, Iterated_1000_times370, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer370);
ite++;

unsigned char res_cipher371[16];
unsigned char res_uncipher371[16];
                      char key371[]={0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32,0x32};
NESSIEencrypt(plain371, res_cipher371, structpointer371);
if(strncmp(res_cipher371, cipher371, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher371, res_uncipher371, structpointer371);
if(strncmp(res_uncipher371, decrypted371, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher371, plain371, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher371, res_cipher371, structpointer371);
}
if(strncmp(res_cipher371, Iterated_100_times371, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher371, res_cipher371, structpointer371);
}
if(strncmp(res_cipher371, Iterated_1000_times371, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer371);
ite++;

unsigned char res_cipher372[16];
unsigned char res_uncipher372[16];
                      char key372[]={0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33};
NESSIEencrypt(plain372, res_cipher372, structpointer372);
if(strncmp(res_cipher372, cipher372, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher372, res_uncipher372, structpointer372);
if(strncmp(res_uncipher372, decrypted372, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher372, plain372, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher372, res_cipher372, structpointer372);
}
if(strncmp(res_cipher372, Iterated_100_times372, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher372, res_cipher372, structpointer372);
}
if(strncmp(res_cipher372, Iterated_1000_times372, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer372);
ite++;

unsigned char res_cipher373[16];
unsigned char res_uncipher373[16];
                      char key373[]={0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34,0x34};
NESSIEencrypt(plain373, res_cipher373, structpointer373);
if(strncmp(res_cipher373, cipher373, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher373, res_uncipher373, structpointer373);
if(strncmp(res_uncipher373, decrypted373, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher373, plain373, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher373, res_cipher373, structpointer373);
}
if(strncmp(res_cipher373, Iterated_100_times373, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher373, res_cipher373, structpointer373);
}
if(strncmp(res_cipher373, Iterated_1000_times373, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer373);
ite++;

unsigned char res_cipher374[16];
unsigned char res_uncipher374[16];
                      char key374[]={0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35,0x35};
NESSIEencrypt(plain374, res_cipher374, structpointer374);
if(strncmp(res_cipher374, cipher374, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher374, res_uncipher374, structpointer374);
if(strncmp(res_uncipher374, decrypted374, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher374, plain374, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher374, res_cipher374, structpointer374);
}
if(strncmp(res_cipher374, Iterated_100_times374, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher374, res_cipher374, structpointer374);
}
if(strncmp(res_cipher374, Iterated_1000_times374, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer374);
ite++;

unsigned char res_cipher375[16];
unsigned char res_uncipher375[16];
                      char key375[]={0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36};
NESSIEencrypt(plain375, res_cipher375, structpointer375);
if(strncmp(res_cipher375, cipher375, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher375, res_uncipher375, structpointer375);
if(strncmp(res_uncipher375, decrypted375, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher375, plain375, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher375, res_cipher375, structpointer375);
}
if(strncmp(res_cipher375, Iterated_100_times375, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher375, res_cipher375, structpointer375);
}
if(strncmp(res_cipher375, Iterated_1000_times375, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer375);
ite++;

unsigned char res_cipher376[16];
unsigned char res_uncipher376[16];
                      char key376[]={0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37};
NESSIEencrypt(plain376, res_cipher376, structpointer376);
if(strncmp(res_cipher376, cipher376, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher376, res_uncipher376, structpointer376);
if(strncmp(res_uncipher376, decrypted376, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher376, plain376, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher376, res_cipher376, structpointer376);
}
if(strncmp(res_cipher376, Iterated_100_times376, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher376, res_cipher376, structpointer376);
}
if(strncmp(res_cipher376, Iterated_1000_times376, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer376);
ite++;

unsigned char res_cipher377[16];
unsigned char res_uncipher377[16];
                      char key377[]={0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38};
NESSIEencrypt(plain377, res_cipher377, structpointer377);
if(strncmp(res_cipher377, cipher377, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher377, res_uncipher377, structpointer377);
if(strncmp(res_uncipher377, decrypted377, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher377, plain377, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher377, res_cipher377, structpointer377);
}
if(strncmp(res_cipher377, Iterated_100_times377, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher377, res_cipher377, structpointer377);
}
if(strncmp(res_cipher377, Iterated_1000_times377, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer377);
ite++;

unsigned char res_cipher378[16];
unsigned char res_uncipher378[16];
                      char key378[]={0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39,0x39};
NESSIEencrypt(plain378, res_cipher378, structpointer378);
if(strncmp(res_cipher378, cipher378, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher378, res_uncipher378, structpointer378);
if(strncmp(res_uncipher378, decrypted378, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher378, plain378, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher378, res_cipher378, structpointer378);
}
if(strncmp(res_cipher378, Iterated_100_times378, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher378, res_cipher378, structpointer378);
}
if(strncmp(res_cipher378, Iterated_1000_times378, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer378);
ite++;

unsigned char res_cipher379[16];
unsigned char res_uncipher379[16];
                      char key379[]={0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A,0x3A};
NESSIEencrypt(plain379, res_cipher379, structpointer379);
if(strncmp(res_cipher379, cipher379, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher379, res_uncipher379, structpointer379);
if(strncmp(res_uncipher379, decrypted379, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher379, plain379, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher379, res_cipher379, structpointer379);
}
if(strncmp(res_cipher379, Iterated_100_times379, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher379, res_cipher379, structpointer379);
}
if(strncmp(res_cipher379, Iterated_1000_times379, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer379);
ite++;

unsigned char res_cipher380[16];
unsigned char res_uncipher380[16];
                      char key380[]={0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B,0x3B};
NESSIEencrypt(plain380, res_cipher380, structpointer380);
if(strncmp(res_cipher380, cipher380, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher380, res_uncipher380, structpointer380);
if(strncmp(res_uncipher380, decrypted380, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher380, plain380, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher380, res_cipher380, structpointer380);
}
if(strncmp(res_cipher380, Iterated_100_times380, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher380, res_cipher380, structpointer380);
}
if(strncmp(res_cipher380, Iterated_1000_times380, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer380);
ite++;

unsigned char res_cipher381[16];
unsigned char res_uncipher381[16];
                      char key381[]={0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C};
NESSIEencrypt(plain381, res_cipher381, structpointer381);
if(strncmp(res_cipher381, cipher381, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher381, res_uncipher381, structpointer381);
if(strncmp(res_uncipher381, decrypted381, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher381, plain381, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher381, res_cipher381, structpointer381);
}
if(strncmp(res_cipher381, Iterated_100_times381, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher381, res_cipher381, structpointer381);
}
if(strncmp(res_cipher381, Iterated_1000_times381, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer381);
ite++;

unsigned char res_cipher382[16];
unsigned char res_uncipher382[16];
                      char key382[]={0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D,0x3D};
NESSIEencrypt(plain382, res_cipher382, structpointer382);
if(strncmp(res_cipher382, cipher382, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher382, res_uncipher382, structpointer382);
if(strncmp(res_uncipher382, decrypted382, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher382, plain382, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher382, res_cipher382, structpointer382);
}
if(strncmp(res_cipher382, Iterated_100_times382, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher382, res_cipher382, structpointer382);
}
if(strncmp(res_cipher382, Iterated_1000_times382, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer382);
ite++;

unsigned char res_cipher383[16];
unsigned char res_uncipher383[16];
                      char key383[]={0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E,0x3E};
NESSIEencrypt(plain383, res_cipher383, structpointer383);
if(strncmp(res_cipher383, cipher383, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher383, res_uncipher383, structpointer383);
if(strncmp(res_uncipher383, decrypted383, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher383, plain383, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher383, res_cipher383, structpointer383);
}
if(strncmp(res_cipher383, Iterated_100_times383, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher383, res_cipher383, structpointer383);
}
if(strncmp(res_cipher383, Iterated_1000_times383, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer383);
ite++;

unsigned char res_cipher384[16];
unsigned char res_uncipher384[16];
                      char key384[]={0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F};
NESSIEencrypt(plain384, res_cipher384, structpointer384);
if(strncmp(res_cipher384, cipher384, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher384, res_uncipher384, structpointer384);
if(strncmp(res_uncipher384, decrypted384, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher384, plain384, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher384, res_cipher384, structpointer384);
}
if(strncmp(res_cipher384, Iterated_100_times384, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher384, res_cipher384, structpointer384);
}
if(strncmp(res_cipher384, Iterated_1000_times384, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer384);
ite++;

unsigned char res_cipher385[16];
unsigned char res_uncipher385[16];
                      char key385[]={0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40};
NESSIEencrypt(plain385, res_cipher385, structpointer385);
if(strncmp(res_cipher385, cipher385, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher385, res_uncipher385, structpointer385);
if(strncmp(res_uncipher385, decrypted385, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher385, plain385, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher385, res_cipher385, structpointer385);
}
if(strncmp(res_cipher385, Iterated_100_times385, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher385, res_cipher385, structpointer385);
}
if(strncmp(res_cipher385, Iterated_1000_times385, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer385);
ite++;

unsigned char res_cipher386[16];
unsigned char res_uncipher386[16];
                      char key386[]={0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41};
NESSIEencrypt(plain386, res_cipher386, structpointer386);
if(strncmp(res_cipher386, cipher386, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher386, res_uncipher386, structpointer386);
if(strncmp(res_uncipher386, decrypted386, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher386, plain386, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher386, res_cipher386, structpointer386);
}
if(strncmp(res_cipher386, Iterated_100_times386, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher386, res_cipher386, structpointer386);
}
if(strncmp(res_cipher386, Iterated_1000_times386, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer386);
ite++;

unsigned char res_cipher387[16];
unsigned char res_uncipher387[16];
                      char key387[]={0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42};
NESSIEencrypt(plain387, res_cipher387, structpointer387);
if(strncmp(res_cipher387, cipher387, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher387, res_uncipher387, structpointer387);
if(strncmp(res_uncipher387, decrypted387, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher387, plain387, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher387, res_cipher387, structpointer387);
}
if(strncmp(res_cipher387, Iterated_100_times387, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher387, res_cipher387, structpointer387);
}
if(strncmp(res_cipher387, Iterated_1000_times387, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer387);
ite++;

unsigned char res_cipher388[16];
unsigned char res_uncipher388[16];
                      char key388[]={0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43};
NESSIEencrypt(plain388, res_cipher388, structpointer388);
if(strncmp(res_cipher388, cipher388, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher388, res_uncipher388, structpointer388);
if(strncmp(res_uncipher388, decrypted388, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher388, plain388, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher388, res_cipher388, structpointer388);
}
if(strncmp(res_cipher388, Iterated_100_times388, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher388, res_cipher388, structpointer388);
}
if(strncmp(res_cipher388, Iterated_1000_times388, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer388);
ite++;

unsigned char res_cipher389[16];
unsigned char res_uncipher389[16];
                      char key389[]={0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44};
NESSIEencrypt(plain389, res_cipher389, structpointer389);
if(strncmp(res_cipher389, cipher389, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher389, res_uncipher389, structpointer389);
if(strncmp(res_uncipher389, decrypted389, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher389, plain389, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher389, res_cipher389, structpointer389);
}
if(strncmp(res_cipher389, Iterated_100_times389, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher389, res_cipher389, structpointer389);
}
if(strncmp(res_cipher389, Iterated_1000_times389, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer389);
ite++;

unsigned char res_cipher390[16];
unsigned char res_uncipher390[16];
                      char key390[]={0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45};
NESSIEencrypt(plain390, res_cipher390, structpointer390);
if(strncmp(res_cipher390, cipher390, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher390, res_uncipher390, structpointer390);
if(strncmp(res_uncipher390, decrypted390, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher390, plain390, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher390, res_cipher390, structpointer390);
}
if(strncmp(res_cipher390, Iterated_100_times390, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher390, res_cipher390, structpointer390);
}
if(strncmp(res_cipher390, Iterated_1000_times390, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer390);
ite++;

unsigned char res_cipher391[16];
unsigned char res_uncipher391[16];
                      char key391[]={0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46};
NESSIEencrypt(plain391, res_cipher391, structpointer391);
if(strncmp(res_cipher391, cipher391, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher391, res_uncipher391, structpointer391);
if(strncmp(res_uncipher391, decrypted391, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher391, plain391, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher391, res_cipher391, structpointer391);
}
if(strncmp(res_cipher391, Iterated_100_times391, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher391, res_cipher391, structpointer391);
}
if(strncmp(res_cipher391, Iterated_1000_times391, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer391);
ite++;

unsigned char res_cipher392[16];
unsigned char res_uncipher392[16];
                      char key392[]={0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47,0x47};
NESSIEencrypt(plain392, res_cipher392, structpointer392);
if(strncmp(res_cipher392, cipher392, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher392, res_uncipher392, structpointer392);
if(strncmp(res_uncipher392, decrypted392, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher392, plain392, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher392, res_cipher392, structpointer392);
}
if(strncmp(res_cipher392, Iterated_100_times392, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher392, res_cipher392, structpointer392);
}
if(strncmp(res_cipher392, Iterated_1000_times392, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer392);
ite++;

unsigned char res_cipher393[16];
unsigned char res_uncipher393[16];
                      char key393[]={0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48};
NESSIEencrypt(plain393, res_cipher393, structpointer393);
if(strncmp(res_cipher393, cipher393, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher393, res_uncipher393, structpointer393);
if(strncmp(res_uncipher393, decrypted393, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher393, plain393, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher393, res_cipher393, structpointer393);
}
if(strncmp(res_cipher393, Iterated_100_times393, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher393, res_cipher393, structpointer393);
}
if(strncmp(res_cipher393, Iterated_1000_times393, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer393);
ite++;

unsigned char res_cipher394[16];
unsigned char res_uncipher394[16];
                      char key394[]={0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49};
NESSIEencrypt(plain394, res_cipher394, structpointer394);
if(strncmp(res_cipher394, cipher394, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher394, res_uncipher394, structpointer394);
if(strncmp(res_uncipher394, decrypted394, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher394, plain394, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher394, res_cipher394, structpointer394);
}
if(strncmp(res_cipher394, Iterated_100_times394, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher394, res_cipher394, structpointer394);
}
if(strncmp(res_cipher394, Iterated_1000_times394, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer394);
ite++;

unsigned char res_cipher395[16];
unsigned char res_uncipher395[16];
                      char key395[]={0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A,0x4A};
NESSIEencrypt(plain395, res_cipher395, structpointer395);
if(strncmp(res_cipher395, cipher395, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher395, res_uncipher395, structpointer395);
if(strncmp(res_uncipher395, decrypted395, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher395, plain395, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher395, res_cipher395, structpointer395);
}
if(strncmp(res_cipher395, Iterated_100_times395, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher395, res_cipher395, structpointer395);
}
if(strncmp(res_cipher395, Iterated_1000_times395, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer395);
ite++;

unsigned char res_cipher396[16];
unsigned char res_uncipher396[16];
                      char key396[]={0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B,0x4B};
NESSIEencrypt(plain396, res_cipher396, structpointer396);
if(strncmp(res_cipher396, cipher396, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher396, res_uncipher396, structpointer396);
if(strncmp(res_uncipher396, decrypted396, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher396, plain396, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher396, res_cipher396, structpointer396);
}
if(strncmp(res_cipher396, Iterated_100_times396, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher396, res_cipher396, structpointer396);
}
if(strncmp(res_cipher396, Iterated_1000_times396, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer396);
ite++;

unsigned char res_cipher397[16];
unsigned char res_uncipher397[16];
                      char key397[]={0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C,0x4C};
NESSIEencrypt(plain397, res_cipher397, structpointer397);
if(strncmp(res_cipher397, cipher397, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher397, res_uncipher397, structpointer397);
if(strncmp(res_uncipher397, decrypted397, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher397, plain397, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher397, res_cipher397, structpointer397);
}
if(strncmp(res_cipher397, Iterated_100_times397, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher397, res_cipher397, structpointer397);
}
if(strncmp(res_cipher397, Iterated_1000_times397, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer397);
ite++;

unsigned char res_cipher398[16];
unsigned char res_uncipher398[16];
                      char key398[]={0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D};
NESSIEencrypt(plain398, res_cipher398, structpointer398);
if(strncmp(res_cipher398, cipher398, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher398, res_uncipher398, structpointer398);
if(strncmp(res_uncipher398, decrypted398, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher398, plain398, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher398, res_cipher398, structpointer398);
}
if(strncmp(res_cipher398, Iterated_100_times398, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher398, res_cipher398, structpointer398);
}
if(strncmp(res_cipher398, Iterated_1000_times398, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer398);
ite++;

unsigned char res_cipher399[16];
unsigned char res_uncipher399[16];
                      char key399[]={0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E,0x4E};
NESSIEencrypt(plain399, res_cipher399, structpointer399);
if(strncmp(res_cipher399, cipher399, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher399, res_uncipher399, structpointer399);
if(strncmp(res_uncipher399, decrypted399, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher399, plain399, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher399, res_cipher399, structpointer399);
}
if(strncmp(res_cipher399, Iterated_100_times399, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher399, res_cipher399, structpointer399);
}
if(strncmp(res_cipher399, Iterated_1000_times399, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer399);
ite++;

unsigned char res_cipher400[16];
unsigned char res_uncipher400[16];
                      char key400[]={0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F,0x4F};
NESSIEencrypt(plain400, res_cipher400, structpointer400);
if(strncmp(res_cipher400, cipher400, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher400, res_uncipher400, structpointer400);
if(strncmp(res_uncipher400, decrypted400, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher400, plain400, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher400, res_cipher400, structpointer400);
}
if(strncmp(res_cipher400, Iterated_100_times400, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher400, res_cipher400, structpointer400);
}
if(strncmp(res_cipher400, Iterated_1000_times400, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer400);
ite++;

unsigned char res_cipher401[16];
unsigned char res_uncipher401[16];
                      char key401[]={0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x50};
NESSIEencrypt(plain401, res_cipher401, structpointer401);
if(strncmp(res_cipher401, cipher401, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher401, res_uncipher401, structpointer401);
if(strncmp(res_uncipher401, decrypted401, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher401, plain401, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher401, res_cipher401, structpointer401);
}
if(strncmp(res_cipher401, Iterated_100_times401, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher401, res_cipher401, structpointer401);
}
if(strncmp(res_cipher401, Iterated_1000_times401, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer401);
ite++;

unsigned char res_cipher402[16];
unsigned char res_uncipher402[16];
                      char key402[]={0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0x51};
NESSIEencrypt(plain402, res_cipher402, structpointer402);
if(strncmp(res_cipher402, cipher402, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher402, res_uncipher402, structpointer402);
if(strncmp(res_uncipher402, decrypted402, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher402, plain402, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher402, res_cipher402, structpointer402);
}
if(strncmp(res_cipher402, Iterated_100_times402, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher402, res_cipher402, structpointer402);
}
if(strncmp(res_cipher402, Iterated_1000_times402, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer402);
ite++;

unsigned char res_cipher403[16];
unsigned char res_uncipher403[16];
                      char key403[]={0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52,0x52};
NESSIEencrypt(plain403, res_cipher403, structpointer403);
if(strncmp(res_cipher403, cipher403, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher403, res_uncipher403, structpointer403);
if(strncmp(res_uncipher403, decrypted403, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher403, plain403, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher403, res_cipher403, structpointer403);
}
if(strncmp(res_cipher403, Iterated_100_times403, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher403, res_cipher403, structpointer403);
}
if(strncmp(res_cipher403, Iterated_1000_times403, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer403);
ite++;

unsigned char res_cipher404[16];
unsigned char res_uncipher404[16];
                      char key404[]={0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53,0x53};
NESSIEencrypt(plain404, res_cipher404, structpointer404);
if(strncmp(res_cipher404, cipher404, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher404, res_uncipher404, structpointer404);
if(strncmp(res_uncipher404, decrypted404, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher404, plain404, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher404, res_cipher404, structpointer404);
}
if(strncmp(res_cipher404, Iterated_100_times404, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher404, res_cipher404, structpointer404);
}
if(strncmp(res_cipher404, Iterated_1000_times404, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer404);
ite++;

unsigned char res_cipher405[16];
unsigned char res_uncipher405[16];
                      char key405[]={0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54,0x54};
NESSIEencrypt(plain405, res_cipher405, structpointer405);
if(strncmp(res_cipher405, cipher405, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher405, res_uncipher405, structpointer405);
if(strncmp(res_uncipher405, decrypted405, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher405, plain405, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher405, res_cipher405, structpointer405);
}
if(strncmp(res_cipher405, Iterated_100_times405, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher405, res_cipher405, structpointer405);
}
if(strncmp(res_cipher405, Iterated_1000_times405, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer405);
ite++;

unsigned char res_cipher406[16];
unsigned char res_uncipher406[16];
                      char key406[]={0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55};
NESSIEencrypt(plain406, res_cipher406, structpointer406);
if(strncmp(res_cipher406, cipher406, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher406, res_uncipher406, structpointer406);
if(strncmp(res_uncipher406, decrypted406, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher406, plain406, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher406, res_cipher406, structpointer406);
}
if(strncmp(res_cipher406, Iterated_100_times406, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher406, res_cipher406, structpointer406);
}
if(strncmp(res_cipher406, Iterated_1000_times406, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer406);
ite++;

unsigned char res_cipher407[16];
unsigned char res_uncipher407[16];
                      char key407[]={0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56,0x56};
NESSIEencrypt(plain407, res_cipher407, structpointer407);
if(strncmp(res_cipher407, cipher407, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher407, res_uncipher407, structpointer407);
if(strncmp(res_uncipher407, decrypted407, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher407, plain407, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher407, res_cipher407, structpointer407);
}
if(strncmp(res_cipher407, Iterated_100_times407, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher407, res_cipher407, structpointer407);
}
if(strncmp(res_cipher407, Iterated_1000_times407, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer407);
ite++;

unsigned char res_cipher408[16];
unsigned char res_uncipher408[16];
                      char key408[]={0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57,0x57};
NESSIEencrypt(plain408, res_cipher408, structpointer408);
if(strncmp(res_cipher408, cipher408, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher408, res_uncipher408, structpointer408);
if(strncmp(res_uncipher408, decrypted408, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher408, plain408, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher408, res_cipher408, structpointer408);
}
if(strncmp(res_cipher408, Iterated_100_times408, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher408, res_cipher408, structpointer408);
}
if(strncmp(res_cipher408, Iterated_1000_times408, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer408);
ite++;

unsigned char res_cipher409[16];
unsigned char res_uncipher409[16];
                      char key409[]={0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58,0x58};
NESSIEencrypt(plain409, res_cipher409, structpointer409);
if(strncmp(res_cipher409, cipher409, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher409, res_uncipher409, structpointer409);
if(strncmp(res_uncipher409, decrypted409, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher409, plain409, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher409, res_cipher409, structpointer409);
}
if(strncmp(res_cipher409, Iterated_100_times409, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher409, res_cipher409, structpointer409);
}
if(strncmp(res_cipher409, Iterated_1000_times409, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer409);
ite++;

unsigned char res_cipher410[16];
unsigned char res_uncipher410[16];
                      char key410[]={0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59,0x59};
NESSIEencrypt(plain410, res_cipher410, structpointer410);
if(strncmp(res_cipher410, cipher410, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher410, res_uncipher410, structpointer410);
if(strncmp(res_uncipher410, decrypted410, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher410, plain410, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher410, res_cipher410, structpointer410);
}
if(strncmp(res_cipher410, Iterated_100_times410, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher410, res_cipher410, structpointer410);
}
if(strncmp(res_cipher410, Iterated_1000_times410, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer410);
ite++;

unsigned char res_cipher411[16];
unsigned char res_uncipher411[16];
                      char key411[]={0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A,0x5A};
NESSIEencrypt(plain411, res_cipher411, structpointer411);
if(strncmp(res_cipher411, cipher411, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher411, res_uncipher411, structpointer411);
if(strncmp(res_uncipher411, decrypted411, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher411, plain411, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher411, res_cipher411, structpointer411);
}
if(strncmp(res_cipher411, Iterated_100_times411, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher411, res_cipher411, structpointer411);
}
if(strncmp(res_cipher411, Iterated_1000_times411, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer411);
ite++;

unsigned char res_cipher412[16];
unsigned char res_uncipher412[16];
                      char key412[]={0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B,0x5B};
NESSIEencrypt(plain412, res_cipher412, structpointer412);
if(strncmp(res_cipher412, cipher412, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher412, res_uncipher412, structpointer412);
if(strncmp(res_uncipher412, decrypted412, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher412, plain412, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher412, res_cipher412, structpointer412);
}
if(strncmp(res_cipher412, Iterated_100_times412, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher412, res_cipher412, structpointer412);
}
if(strncmp(res_cipher412, Iterated_1000_times412, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer412);
ite++;

unsigned char res_cipher413[16];
unsigned char res_uncipher413[16];
                      char key413[]={0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C,0x5C};
NESSIEencrypt(plain413, res_cipher413, structpointer413);
if(strncmp(res_cipher413, cipher413, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher413, res_uncipher413, structpointer413);
if(strncmp(res_uncipher413, decrypted413, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher413, plain413, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher413, res_cipher413, structpointer413);
}
if(strncmp(res_cipher413, Iterated_100_times413, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher413, res_cipher413, structpointer413);
}
if(strncmp(res_cipher413, Iterated_1000_times413, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer413);
ite++;

unsigned char res_cipher414[16];
unsigned char res_uncipher414[16];
                      char key414[]={0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D};
NESSIEencrypt(plain414, res_cipher414, structpointer414);
if(strncmp(res_cipher414, cipher414, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher414, res_uncipher414, structpointer414);
if(strncmp(res_uncipher414, decrypted414, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher414, plain414, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher414, res_cipher414, structpointer414);
}
if(strncmp(res_cipher414, Iterated_100_times414, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher414, res_cipher414, structpointer414);
}
if(strncmp(res_cipher414, Iterated_1000_times414, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer414);
ite++;

unsigned char res_cipher415[16];
unsigned char res_uncipher415[16];
                      char key415[]={0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E,0x5E};
NESSIEencrypt(plain415, res_cipher415, structpointer415);
if(strncmp(res_cipher415, cipher415, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher415, res_uncipher415, structpointer415);
if(strncmp(res_uncipher415, decrypted415, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher415, plain415, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher415, res_cipher415, structpointer415);
}
if(strncmp(res_cipher415, Iterated_100_times415, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher415, res_cipher415, structpointer415);
}
if(strncmp(res_cipher415, Iterated_1000_times415, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer415);
ite++;

unsigned char res_cipher416[16];
unsigned char res_uncipher416[16];
                      char key416[]={0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F,0x5F};
NESSIEencrypt(plain416, res_cipher416, structpointer416);
if(strncmp(res_cipher416, cipher416, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher416, res_uncipher416, structpointer416);
if(strncmp(res_uncipher416, decrypted416, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher416, plain416, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher416, res_cipher416, structpointer416);
}
if(strncmp(res_cipher416, Iterated_100_times416, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher416, res_cipher416, structpointer416);
}
if(strncmp(res_cipher416, Iterated_1000_times416, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer416);
ite++;

unsigned char res_cipher417[16];
unsigned char res_uncipher417[16];
                      char key417[]={0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60};
NESSIEencrypt(plain417, res_cipher417, structpointer417);
if(strncmp(res_cipher417, cipher417, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher417, res_uncipher417, structpointer417);
if(strncmp(res_uncipher417, decrypted417, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher417, plain417, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher417, res_cipher417, structpointer417);
}
if(strncmp(res_cipher417, Iterated_100_times417, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher417, res_cipher417, structpointer417);
}
if(strncmp(res_cipher417, Iterated_1000_times417, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer417);
ite++;

unsigned char res_cipher418[16];
unsigned char res_uncipher418[16];
                      char key418[]={0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61,0x61};
NESSIEencrypt(plain418, res_cipher418, structpointer418);
if(strncmp(res_cipher418, cipher418, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher418, res_uncipher418, structpointer418);
if(strncmp(res_uncipher418, decrypted418, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher418, plain418, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher418, res_cipher418, structpointer418);
}
if(strncmp(res_cipher418, Iterated_100_times418, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher418, res_cipher418, structpointer418);
}
if(strncmp(res_cipher418, Iterated_1000_times418, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer418);
ite++;

unsigned char res_cipher419[16];
unsigned char res_uncipher419[16];
                      char key419[]={0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62,0x62};
NESSIEencrypt(plain419, res_cipher419, structpointer419);
if(strncmp(res_cipher419, cipher419, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher419, res_uncipher419, structpointer419);
if(strncmp(res_uncipher419, decrypted419, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher419, plain419, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher419, res_cipher419, structpointer419);
}
if(strncmp(res_cipher419, Iterated_100_times419, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher419, res_cipher419, structpointer419);
}
if(strncmp(res_cipher419, Iterated_1000_times419, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer419);
ite++;

unsigned char res_cipher420[16];
unsigned char res_uncipher420[16];
                      char key420[]={0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63};
NESSIEencrypt(plain420, res_cipher420, structpointer420);
if(strncmp(res_cipher420, cipher420, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher420, res_uncipher420, structpointer420);
if(strncmp(res_uncipher420, decrypted420, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher420, plain420, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher420, res_cipher420, structpointer420);
}
if(strncmp(res_cipher420, Iterated_100_times420, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher420, res_cipher420, structpointer420);
}
if(strncmp(res_cipher420, Iterated_1000_times420, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer420);
ite++;

unsigned char res_cipher421[16];
unsigned char res_uncipher421[16];
                      char key421[]={0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64,0x64};
NESSIEencrypt(plain421, res_cipher421, structpointer421);
if(strncmp(res_cipher421, cipher421, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher421, res_uncipher421, structpointer421);
if(strncmp(res_uncipher421, decrypted421, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher421, plain421, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher421, res_cipher421, structpointer421);
}
if(strncmp(res_cipher421, Iterated_100_times421, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher421, res_cipher421, structpointer421);
}
if(strncmp(res_cipher421, Iterated_1000_times421, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer421);
ite++;

unsigned char res_cipher422[16];
unsigned char res_uncipher422[16];
                      char key422[]={0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65,0x65};
NESSIEencrypt(plain422, res_cipher422, structpointer422);
if(strncmp(res_cipher422, cipher422, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher422, res_uncipher422, structpointer422);
if(strncmp(res_uncipher422, decrypted422, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher422, plain422, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher422, res_cipher422, structpointer422);
}
if(strncmp(res_cipher422, Iterated_100_times422, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher422, res_cipher422, structpointer422);
}
if(strncmp(res_cipher422, Iterated_1000_times422, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer422);
ite++;

unsigned char res_cipher423[16];
unsigned char res_uncipher423[16];
                      char key423[]={0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66};
NESSIEencrypt(plain423, res_cipher423, structpointer423);
if(strncmp(res_cipher423, cipher423, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher423, res_uncipher423, structpointer423);
if(strncmp(res_uncipher423, decrypted423, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher423, plain423, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher423, res_cipher423, structpointer423);
}
if(strncmp(res_cipher423, Iterated_100_times423, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher423, res_cipher423, structpointer423);
}
if(strncmp(res_cipher423, Iterated_1000_times423, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer423);
ite++;

unsigned char res_cipher424[16];
unsigned char res_uncipher424[16];
                      char key424[]={0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67,0x67};
NESSIEencrypt(plain424, res_cipher424, structpointer424);
if(strncmp(res_cipher424, cipher424, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher424, res_uncipher424, structpointer424);
if(strncmp(res_uncipher424, decrypted424, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher424, plain424, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher424, res_cipher424, structpointer424);
}
if(strncmp(res_cipher424, Iterated_100_times424, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher424, res_cipher424, structpointer424);
}
if(strncmp(res_cipher424, Iterated_1000_times424, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer424);
ite++;

unsigned char res_cipher425[16];
unsigned char res_uncipher425[16];
                      char key425[]={0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68,0x68};
NESSIEencrypt(plain425, res_cipher425, structpointer425);
if(strncmp(res_cipher425, cipher425, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher425, res_uncipher425, structpointer425);
if(strncmp(res_uncipher425, decrypted425, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher425, plain425, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher425, res_cipher425, structpointer425);
}
if(strncmp(res_cipher425, Iterated_100_times425, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher425, res_cipher425, structpointer425);
}
if(strncmp(res_cipher425, Iterated_1000_times425, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer425);
ite++;

unsigned char res_cipher426[16];
unsigned char res_uncipher426[16];
                      char key426[]={0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69};
NESSIEencrypt(plain426, res_cipher426, structpointer426);
if(strncmp(res_cipher426, cipher426, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher426, res_uncipher426, structpointer426);
if(strncmp(res_uncipher426, decrypted426, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher426, plain426, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher426, res_cipher426, structpointer426);
}
if(strncmp(res_cipher426, Iterated_100_times426, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher426, res_cipher426, structpointer426);
}
if(strncmp(res_cipher426, Iterated_1000_times426, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer426);
ite++;

unsigned char res_cipher427[16];
unsigned char res_uncipher427[16];
                      char key427[]={0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A,0x6A};
NESSIEencrypt(plain427, res_cipher427, structpointer427);
if(strncmp(res_cipher427, cipher427, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher427, res_uncipher427, structpointer427);
if(strncmp(res_uncipher427, decrypted427, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher427, plain427, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher427, res_cipher427, structpointer427);
}
if(strncmp(res_cipher427, Iterated_100_times427, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher427, res_cipher427, structpointer427);
}
if(strncmp(res_cipher427, Iterated_1000_times427, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer427);
ite++;

unsigned char res_cipher428[16];
unsigned char res_uncipher428[16];
                      char key428[]={0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B,0x6B};
NESSIEencrypt(plain428, res_cipher428, structpointer428);
if(strncmp(res_cipher428, cipher428, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher428, res_uncipher428, structpointer428);
if(strncmp(res_uncipher428, decrypted428, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher428, plain428, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher428, res_cipher428, structpointer428);
}
if(strncmp(res_cipher428, Iterated_100_times428, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher428, res_cipher428, structpointer428);
}
if(strncmp(res_cipher428, Iterated_1000_times428, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer428);
ite++;

unsigned char res_cipher429[16];
unsigned char res_uncipher429[16];
                      char key429[]={0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C};
NESSIEencrypt(plain429, res_cipher429, structpointer429);
if(strncmp(res_cipher429, cipher429, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher429, res_uncipher429, structpointer429);
if(strncmp(res_uncipher429, decrypted429, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher429, plain429, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher429, res_cipher429, structpointer429);
}
if(strncmp(res_cipher429, Iterated_100_times429, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher429, res_cipher429, structpointer429);
}
if(strncmp(res_cipher429, Iterated_1000_times429, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer429);
ite++;

unsigned char res_cipher430[16];
unsigned char res_uncipher430[16];
                      char key430[]={0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D,0x6D};
NESSIEencrypt(plain430, res_cipher430, structpointer430);
if(strncmp(res_cipher430, cipher430, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher430, res_uncipher430, structpointer430);
if(strncmp(res_uncipher430, decrypted430, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher430, plain430, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher430, res_cipher430, structpointer430);
}
if(strncmp(res_cipher430, Iterated_100_times430, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher430, res_cipher430, structpointer430);
}
if(strncmp(res_cipher430, Iterated_1000_times430, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer430);
ite++;

unsigned char res_cipher431[16];
unsigned char res_uncipher431[16];
                      char key431[]={0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E,0x6E};
NESSIEencrypt(plain431, res_cipher431, structpointer431);
if(strncmp(res_cipher431, cipher431, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher431, res_uncipher431, structpointer431);
if(strncmp(res_uncipher431, decrypted431, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher431, plain431, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher431, res_cipher431, structpointer431);
}
if(strncmp(res_cipher431, Iterated_100_times431, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher431, res_cipher431, structpointer431);
}
if(strncmp(res_cipher431, Iterated_1000_times431, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer431);
ite++;

unsigned char res_cipher432[16];
unsigned char res_uncipher432[16];
                      char key432[]={0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F,0x6F};
NESSIEencrypt(plain432, res_cipher432, structpointer432);
if(strncmp(res_cipher432, cipher432, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher432, res_uncipher432, structpointer432);
if(strncmp(res_uncipher432, decrypted432, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher432, plain432, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher432, res_cipher432, structpointer432);
}
if(strncmp(res_cipher432, Iterated_100_times432, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher432, res_cipher432, structpointer432);
}
if(strncmp(res_cipher432, Iterated_1000_times432, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer432);
ite++;

unsigned char res_cipher433[16];
unsigned char res_uncipher433[16];
                      char key433[]={0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70,0x70};
NESSIEencrypt(plain433, res_cipher433, structpointer433);
if(strncmp(res_cipher433, cipher433, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher433, res_uncipher433, structpointer433);
if(strncmp(res_uncipher433, decrypted433, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher433, plain433, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher433, res_cipher433, structpointer433);
}
if(strncmp(res_cipher433, Iterated_100_times433, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher433, res_cipher433, structpointer433);
}
if(strncmp(res_cipher433, Iterated_1000_times433, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer433);
ite++;

unsigned char res_cipher434[16];
unsigned char res_uncipher434[16];
                      char key434[]={0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71};
NESSIEencrypt(plain434, res_cipher434, structpointer434);
if(strncmp(res_cipher434, cipher434, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher434, res_uncipher434, structpointer434);
if(strncmp(res_uncipher434, decrypted434, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher434, plain434, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher434, res_cipher434, structpointer434);
}
if(strncmp(res_cipher434, Iterated_100_times434, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher434, res_cipher434, structpointer434);
}
if(strncmp(res_cipher434, Iterated_1000_times434, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer434);
ite++;

unsigned char res_cipher435[16];
unsigned char res_uncipher435[16];
                      char key435[]={0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72,0x72};
NESSIEencrypt(plain435, res_cipher435, structpointer435);
if(strncmp(res_cipher435, cipher435, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher435, res_uncipher435, structpointer435);
if(strncmp(res_uncipher435, decrypted435, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher435, plain435, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher435, res_cipher435, structpointer435);
}
if(strncmp(res_cipher435, Iterated_100_times435, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher435, res_cipher435, structpointer435);
}
if(strncmp(res_cipher435, Iterated_1000_times435, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer435);
ite++;

unsigned char res_cipher436[16];
unsigned char res_uncipher436[16];
                      char key436[]={0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73,0x73};
NESSIEencrypt(plain436, res_cipher436, structpointer436);
if(strncmp(res_cipher436, cipher436, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher436, res_uncipher436, structpointer436);
if(strncmp(res_uncipher436, decrypted436, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher436, plain436, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher436, res_cipher436, structpointer436);
}
if(strncmp(res_cipher436, Iterated_100_times436, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher436, res_cipher436, structpointer436);
}
if(strncmp(res_cipher436, Iterated_1000_times436, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer436);
ite++;

unsigned char res_cipher437[16];
unsigned char res_uncipher437[16];
                      char key437[]={0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74,0x74};
NESSIEencrypt(plain437, res_cipher437, structpointer437);
if(strncmp(res_cipher437, cipher437, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher437, res_uncipher437, structpointer437);
if(strncmp(res_uncipher437, decrypted437, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher437, plain437, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher437, res_cipher437, structpointer437);
}
if(strncmp(res_cipher437, Iterated_100_times437, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher437, res_cipher437, structpointer437);
}
if(strncmp(res_cipher437, Iterated_1000_times437, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer437);
ite++;

unsigned char res_cipher438[16];
unsigned char res_uncipher438[16];
                      char key438[]={0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75,0x75};
NESSIEencrypt(plain438, res_cipher438, structpointer438);
if(strncmp(res_cipher438, cipher438, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher438, res_uncipher438, structpointer438);
if(strncmp(res_uncipher438, decrypted438, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher438, plain438, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher438, res_cipher438, structpointer438);
}
if(strncmp(res_cipher438, Iterated_100_times438, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher438, res_cipher438, structpointer438);
}
if(strncmp(res_cipher438, Iterated_1000_times438, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer438);
ite++;

unsigned char res_cipher439[16];
unsigned char res_uncipher439[16];
                      char key439[]={0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76};
NESSIEencrypt(plain439, res_cipher439, structpointer439);
if(strncmp(res_cipher439, cipher439, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher439, res_uncipher439, structpointer439);
if(strncmp(res_uncipher439, decrypted439, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher439, plain439, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher439, res_cipher439, structpointer439);
}
if(strncmp(res_cipher439, Iterated_100_times439, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher439, res_cipher439, structpointer439);
}
if(strncmp(res_cipher439, Iterated_1000_times439, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer439);
ite++;

unsigned char res_cipher440[16];
unsigned char res_uncipher440[16];
                      char key440[]={0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77};
NESSIEencrypt(plain440, res_cipher440, structpointer440);
if(strncmp(res_cipher440, cipher440, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher440, res_uncipher440, structpointer440);
if(strncmp(res_uncipher440, decrypted440, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher440, plain440, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher440, res_cipher440, structpointer440);
}
if(strncmp(res_cipher440, Iterated_100_times440, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher440, res_cipher440, structpointer440);
}
if(strncmp(res_cipher440, Iterated_1000_times440, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer440);
ite++;

unsigned char res_cipher441[16];
unsigned char res_uncipher441[16];
                      char key441[]={0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78};
NESSIEencrypt(plain441, res_cipher441, structpointer441);
if(strncmp(res_cipher441, cipher441, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher441, res_uncipher441, structpointer441);
if(strncmp(res_uncipher441, decrypted441, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher441, plain441, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher441, res_cipher441, structpointer441);
}
if(strncmp(res_cipher441, Iterated_100_times441, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher441, res_cipher441, structpointer441);
}
if(strncmp(res_cipher441, Iterated_1000_times441, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer441);
ite++;

unsigned char res_cipher442[16];
unsigned char res_uncipher442[16];
                      char key442[]={0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79,0x79};
NESSIEencrypt(plain442, res_cipher442, structpointer442);
if(strncmp(res_cipher442, cipher442, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher442, res_uncipher442, structpointer442);
if(strncmp(res_uncipher442, decrypted442, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher442, plain442, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher442, res_cipher442, structpointer442);
}
if(strncmp(res_cipher442, Iterated_100_times442, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher442, res_cipher442, structpointer442);
}
if(strncmp(res_cipher442, Iterated_1000_times442, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer442);
ite++;

unsigned char res_cipher443[16];
unsigned char res_uncipher443[16];
                      char key443[]={0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A,0x7A};
NESSIEencrypt(plain443, res_cipher443, structpointer443);
if(strncmp(res_cipher443, cipher443, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher443, res_uncipher443, structpointer443);
if(strncmp(res_uncipher443, decrypted443, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher443, plain443, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher443, res_cipher443, structpointer443);
}
if(strncmp(res_cipher443, Iterated_100_times443, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher443, res_cipher443, structpointer443);
}
if(strncmp(res_cipher443, Iterated_1000_times443, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer443);
ite++;

unsigned char res_cipher444[16];
unsigned char res_uncipher444[16];
                      char key444[]={0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B,0x7B};
NESSIEencrypt(plain444, res_cipher444, structpointer444);
if(strncmp(res_cipher444, cipher444, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher444, res_uncipher444, structpointer444);
if(strncmp(res_uncipher444, decrypted444, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher444, plain444, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher444, res_cipher444, structpointer444);
}
if(strncmp(res_cipher444, Iterated_100_times444, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher444, res_cipher444, structpointer444);
}
if(strncmp(res_cipher444, Iterated_1000_times444, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer444);
ite++;

unsigned char res_cipher445[16];
unsigned char res_uncipher445[16];
                      char key445[]={0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C};
NESSIEencrypt(plain445, res_cipher445, structpointer445);
if(strncmp(res_cipher445, cipher445, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher445, res_uncipher445, structpointer445);
if(strncmp(res_uncipher445, decrypted445, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher445, plain445, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher445, res_cipher445, structpointer445);
}
if(strncmp(res_cipher445, Iterated_100_times445, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher445, res_cipher445, structpointer445);
}
if(strncmp(res_cipher445, Iterated_1000_times445, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer445);
ite++;

unsigned char res_cipher446[16];
unsigned char res_uncipher446[16];
                      char key446[]={0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D,0x7D};
NESSIEencrypt(plain446, res_cipher446, structpointer446);
if(strncmp(res_cipher446, cipher446, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher446, res_uncipher446, structpointer446);
if(strncmp(res_uncipher446, decrypted446, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher446, plain446, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher446, res_cipher446, structpointer446);
}
if(strncmp(res_cipher446, Iterated_100_times446, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher446, res_cipher446, structpointer446);
}
if(strncmp(res_cipher446, Iterated_1000_times446, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer446);
ite++;

unsigned char res_cipher447[16];
unsigned char res_uncipher447[16];
                      char key447[]={0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E};
NESSIEencrypt(plain447, res_cipher447, structpointer447);
if(strncmp(res_cipher447, cipher447, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher447, res_uncipher447, structpointer447);
if(strncmp(res_uncipher447, decrypted447, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher447, plain447, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher447, res_cipher447, structpointer447);
}
if(strncmp(res_cipher447, Iterated_100_times447, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher447, res_cipher447, structpointer447);
}
if(strncmp(res_cipher447, Iterated_1000_times447, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer447);
ite++;

unsigned char res_cipher448[16];
unsigned char res_uncipher448[16];
                      char key448[]={0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F};
NESSIEencrypt(plain448, res_cipher448, structpointer448);
if(strncmp(res_cipher448, cipher448, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher448, res_uncipher448, structpointer448);
if(strncmp(res_uncipher448, decrypted448, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher448, plain448, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher448, res_cipher448, structpointer448);
}
if(strncmp(res_cipher448, Iterated_100_times448, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher448, res_cipher448, structpointer448);
}
if(strncmp(res_cipher448, Iterated_1000_times448, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer448);
ite++;

unsigned char res_cipher449[16];
unsigned char res_uncipher449[16];
                      char key449[]={0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80};
NESSIEencrypt(plain449, res_cipher449, structpointer449);
if(strncmp(res_cipher449, cipher449, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher449, res_uncipher449, structpointer449);
if(strncmp(res_uncipher449, decrypted449, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher449, plain449, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher449, res_cipher449, structpointer449);
}
if(strncmp(res_cipher449, Iterated_100_times449, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher449, res_cipher449, structpointer449);
}
if(strncmp(res_cipher449, Iterated_1000_times449, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer449);
ite++;

unsigned char res_cipher450[16];
unsigned char res_uncipher450[16];
                      char key450[]={0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81};
NESSIEencrypt(plain450, res_cipher450, structpointer450);
if(strncmp(res_cipher450, cipher450, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher450, res_uncipher450, structpointer450);
if(strncmp(res_uncipher450, decrypted450, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher450, plain450, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher450, res_cipher450, structpointer450);
}
if(strncmp(res_cipher450, Iterated_100_times450, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher450, res_cipher450, structpointer450);
}
if(strncmp(res_cipher450, Iterated_1000_times450, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer450);
ite++;

unsigned char res_cipher451[16];
unsigned char res_uncipher451[16];
                      char key451[]={0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82};
NESSIEencrypt(plain451, res_cipher451, structpointer451);
if(strncmp(res_cipher451, cipher451, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher451, res_uncipher451, structpointer451);
if(strncmp(res_uncipher451, decrypted451, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher451, plain451, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher451, res_cipher451, structpointer451);
}
if(strncmp(res_cipher451, Iterated_100_times451, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher451, res_cipher451, structpointer451);
}
if(strncmp(res_cipher451, Iterated_1000_times451, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer451);
ite++;

unsigned char res_cipher452[16];
unsigned char res_uncipher452[16];
                      char key452[]={0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x83};
NESSIEencrypt(plain452, res_cipher452, structpointer452);
if(strncmp(res_cipher452, cipher452, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher452, res_uncipher452, structpointer452);
if(strncmp(res_uncipher452, decrypted452, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher452, plain452, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher452, res_cipher452, structpointer452);
}
if(strncmp(res_cipher452, Iterated_100_times452, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher452, res_cipher452, structpointer452);
}
if(strncmp(res_cipher452, Iterated_1000_times452, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer452);
ite++;

unsigned char res_cipher453[16];
unsigned char res_uncipher453[16];
                      char key453[]={0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84};
NESSIEencrypt(plain453, res_cipher453, structpointer453);
if(strncmp(res_cipher453, cipher453, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher453, res_uncipher453, structpointer453);
if(strncmp(res_uncipher453, decrypted453, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher453, plain453, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher453, res_cipher453, structpointer453);
}
if(strncmp(res_cipher453, Iterated_100_times453, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher453, res_cipher453, structpointer453);
}
if(strncmp(res_cipher453, Iterated_1000_times453, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer453);
ite++;

unsigned char res_cipher454[16];
unsigned char res_uncipher454[16];
                      char key454[]={0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85,0x85};
NESSIEencrypt(plain454, res_cipher454, structpointer454);
if(strncmp(res_cipher454, cipher454, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher454, res_uncipher454, structpointer454);
if(strncmp(res_uncipher454, decrypted454, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher454, plain454, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher454, res_cipher454, structpointer454);
}
if(strncmp(res_cipher454, Iterated_100_times454, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher454, res_cipher454, structpointer454);
}
if(strncmp(res_cipher454, Iterated_1000_times454, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer454);
ite++;

unsigned char res_cipher455[16];
unsigned char res_uncipher455[16];
                      char key455[]={0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86,0x86};
NESSIEencrypt(plain455, res_cipher455, structpointer455);
if(strncmp(res_cipher455, cipher455, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher455, res_uncipher455, structpointer455);
if(strncmp(res_uncipher455, decrypted455, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher455, plain455, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher455, res_cipher455, structpointer455);
}
if(strncmp(res_cipher455, Iterated_100_times455, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher455, res_cipher455, structpointer455);
}
if(strncmp(res_cipher455, Iterated_1000_times455, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer455);
ite++;

unsigned char res_cipher456[16];
unsigned char res_uncipher456[16];
                      char key456[]={0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87,0x87};
NESSIEencrypt(plain456, res_cipher456, structpointer456);
if(strncmp(res_cipher456, cipher456, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher456, res_uncipher456, structpointer456);
if(strncmp(res_uncipher456, decrypted456, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher456, plain456, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher456, res_cipher456, structpointer456);
}
if(strncmp(res_cipher456, Iterated_100_times456, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher456, res_cipher456, structpointer456);
}
if(strncmp(res_cipher456, Iterated_1000_times456, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer456);
ite++;

unsigned char res_cipher457[16];
unsigned char res_uncipher457[16];
                      char key457[]={0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88};
NESSIEencrypt(plain457, res_cipher457, structpointer457);
if(strncmp(res_cipher457, cipher457, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher457, res_uncipher457, structpointer457);
if(strncmp(res_uncipher457, decrypted457, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher457, plain457, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher457, res_cipher457, structpointer457);
}
if(strncmp(res_cipher457, Iterated_100_times457, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher457, res_cipher457, structpointer457);
}
if(strncmp(res_cipher457, Iterated_1000_times457, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer457);
ite++;

unsigned char res_cipher458[16];
unsigned char res_uncipher458[16];
                      char key458[]={0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89,0x89};
NESSIEencrypt(plain458, res_cipher458, structpointer458);
if(strncmp(res_cipher458, cipher458, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher458, res_uncipher458, structpointer458);
if(strncmp(res_uncipher458, decrypted458, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher458, plain458, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher458, res_cipher458, structpointer458);
}
if(strncmp(res_cipher458, Iterated_100_times458, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher458, res_cipher458, structpointer458);
}
if(strncmp(res_cipher458, Iterated_1000_times458, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer458);
ite++;

unsigned char res_cipher459[16];
unsigned char res_uncipher459[16];
                      char key459[]={0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A,0x8A};
NESSIEencrypt(plain459, res_cipher459, structpointer459);
if(strncmp(res_cipher459, cipher459, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher459, res_uncipher459, structpointer459);
if(strncmp(res_uncipher459, decrypted459, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher459, plain459, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher459, res_cipher459, structpointer459);
}
if(strncmp(res_cipher459, Iterated_100_times459, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher459, res_cipher459, structpointer459);
}
if(strncmp(res_cipher459, Iterated_1000_times459, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer459);
ite++;

unsigned char res_cipher460[16];
unsigned char res_uncipher460[16];
                      char key460[]={0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B,0x8B};
NESSIEencrypt(plain460, res_cipher460, structpointer460);
if(strncmp(res_cipher460, cipher460, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher460, res_uncipher460, structpointer460);
if(strncmp(res_uncipher460, decrypted460, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher460, plain460, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher460, res_cipher460, structpointer460);
}
if(strncmp(res_cipher460, Iterated_100_times460, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher460, res_cipher460, structpointer460);
}
if(strncmp(res_cipher460, Iterated_1000_times460, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer460);
ite++;

unsigned char res_cipher461[16];
unsigned char res_uncipher461[16];
                      char key461[]={0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C};
NESSIEencrypt(plain461, res_cipher461, structpointer461);
if(strncmp(res_cipher461, cipher461, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher461, res_uncipher461, structpointer461);
if(strncmp(res_uncipher461, decrypted461, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher461, plain461, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher461, res_cipher461, structpointer461);
}
if(strncmp(res_cipher461, Iterated_100_times461, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher461, res_cipher461, structpointer461);
}
if(strncmp(res_cipher461, Iterated_1000_times461, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer461);
ite++;

unsigned char res_cipher462[16];
unsigned char res_uncipher462[16];
                      char key462[]={0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D,0x8D};
NESSIEencrypt(plain462, res_cipher462, structpointer462);
if(strncmp(res_cipher462, cipher462, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher462, res_uncipher462, structpointer462);
if(strncmp(res_uncipher462, decrypted462, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher462, plain462, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher462, res_cipher462, structpointer462);
}
if(strncmp(res_cipher462, Iterated_100_times462, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher462, res_cipher462, structpointer462);
}
if(strncmp(res_cipher462, Iterated_1000_times462, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer462);
ite++;

unsigned char res_cipher463[16];
unsigned char res_uncipher463[16];
                      char key463[]={0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E,0x8E};
NESSIEencrypt(plain463, res_cipher463, structpointer463);
if(strncmp(res_cipher463, cipher463, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher463, res_uncipher463, structpointer463);
if(strncmp(res_uncipher463, decrypted463, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher463, plain463, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher463, res_cipher463, structpointer463);
}
if(strncmp(res_cipher463, Iterated_100_times463, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher463, res_cipher463, structpointer463);
}
if(strncmp(res_cipher463, Iterated_1000_times463, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer463);
ite++;

unsigned char res_cipher464[16];
unsigned char res_uncipher464[16];
                      char key464[]={0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F};
NESSIEencrypt(plain464, res_cipher464, structpointer464);
if(strncmp(res_cipher464, cipher464, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher464, res_uncipher464, structpointer464);
if(strncmp(res_uncipher464, decrypted464, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher464, plain464, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher464, res_cipher464, structpointer464);
}
if(strncmp(res_cipher464, Iterated_100_times464, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher464, res_cipher464, structpointer464);
}
if(strncmp(res_cipher464, Iterated_1000_times464, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer464);
ite++;

unsigned char res_cipher465[16];
unsigned char res_uncipher465[16];
                      char key465[]={0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90};
NESSIEencrypt(plain465, res_cipher465, structpointer465);
if(strncmp(res_cipher465, cipher465, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher465, res_uncipher465, structpointer465);
if(strncmp(res_uncipher465, decrypted465, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher465, plain465, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher465, res_cipher465, structpointer465);
}
if(strncmp(res_cipher465, Iterated_100_times465, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher465, res_cipher465, structpointer465);
}
if(strncmp(res_cipher465, Iterated_1000_times465, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer465);
ite++;

unsigned char res_cipher466[16];
unsigned char res_uncipher466[16];
                      char key466[]={0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91,0x91};
NESSIEencrypt(plain466, res_cipher466, structpointer466);
if(strncmp(res_cipher466, cipher466, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher466, res_uncipher466, structpointer466);
if(strncmp(res_uncipher466, decrypted466, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher466, plain466, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher466, res_cipher466, structpointer466);
}
if(strncmp(res_cipher466, Iterated_100_times466, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher466, res_cipher466, structpointer466);
}
if(strncmp(res_cipher466, Iterated_1000_times466, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer466);
ite++;

unsigned char res_cipher467[16];
unsigned char res_uncipher467[16];
                      char key467[]={0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92};
NESSIEencrypt(plain467, res_cipher467, structpointer467);
if(strncmp(res_cipher467, cipher467, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher467, res_uncipher467, structpointer467);
if(strncmp(res_uncipher467, decrypted467, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher467, plain467, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher467, res_cipher467, structpointer467);
}
if(strncmp(res_cipher467, Iterated_100_times467, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher467, res_cipher467, structpointer467);
}
if(strncmp(res_cipher467, Iterated_1000_times467, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer467);
ite++;

unsigned char res_cipher468[16];
unsigned char res_uncipher468[16];
                      char key468[]={0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93,0x93};
NESSIEencrypt(plain468, res_cipher468, structpointer468);
if(strncmp(res_cipher468, cipher468, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher468, res_uncipher468, structpointer468);
if(strncmp(res_uncipher468, decrypted468, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher468, plain468, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher468, res_cipher468, structpointer468);
}
if(strncmp(res_cipher468, Iterated_100_times468, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher468, res_cipher468, structpointer468);
}
if(strncmp(res_cipher468, Iterated_1000_times468, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer468);
ite++;

unsigned char res_cipher469[16];
unsigned char res_uncipher469[16];
                      char key469[]={0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94,0x94};
NESSIEencrypt(plain469, res_cipher469, structpointer469);
if(strncmp(res_cipher469, cipher469, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher469, res_uncipher469, structpointer469);
if(strncmp(res_uncipher469, decrypted469, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher469, plain469, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher469, res_cipher469, structpointer469);
}
if(strncmp(res_cipher469, Iterated_100_times469, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher469, res_cipher469, structpointer469);
}
if(strncmp(res_cipher469, Iterated_1000_times469, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer469);
ite++;

unsigned char res_cipher470[16];
unsigned char res_uncipher470[16];
                      char key470[]={0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95,0x95};
NESSIEencrypt(plain470, res_cipher470, structpointer470);
if(strncmp(res_cipher470, cipher470, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher470, res_uncipher470, structpointer470);
if(strncmp(res_uncipher470, decrypted470, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher470, plain470, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher470, res_cipher470, structpointer470);
}
if(strncmp(res_cipher470, Iterated_100_times470, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher470, res_cipher470, structpointer470);
}
if(strncmp(res_cipher470, Iterated_1000_times470, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer470);
ite++;

unsigned char res_cipher471[16];
unsigned char res_uncipher471[16];
                      char key471[]={0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96,0x96};
NESSIEencrypt(plain471, res_cipher471, structpointer471);
if(strncmp(res_cipher471, cipher471, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher471, res_uncipher471, structpointer471);
if(strncmp(res_uncipher471, decrypted471, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher471, plain471, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher471, res_cipher471, structpointer471);
}
if(strncmp(res_cipher471, Iterated_100_times471, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher471, res_cipher471, structpointer471);
}
if(strncmp(res_cipher471, Iterated_1000_times471, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer471);
ite++;

unsigned char res_cipher472[16];
unsigned char res_uncipher472[16];
                      char key472[]={0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97,0x97};
NESSIEencrypt(plain472, res_cipher472, structpointer472);
if(strncmp(res_cipher472, cipher472, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher472, res_uncipher472, structpointer472);
if(strncmp(res_uncipher472, decrypted472, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher472, plain472, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher472, res_cipher472, structpointer472);
}
if(strncmp(res_cipher472, Iterated_100_times472, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher472, res_cipher472, structpointer472);
}
if(strncmp(res_cipher472, Iterated_1000_times472, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer472);
ite++;

unsigned char res_cipher473[16];
unsigned char res_uncipher473[16];
                      char key473[]={0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98,0x98};
NESSIEencrypt(plain473, res_cipher473, structpointer473);
if(strncmp(res_cipher473, cipher473, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher473, res_uncipher473, structpointer473);
if(strncmp(res_uncipher473, decrypted473, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher473, plain473, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher473, res_cipher473, structpointer473);
}
if(strncmp(res_cipher473, Iterated_100_times473, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher473, res_cipher473, structpointer473);
}
if(strncmp(res_cipher473, Iterated_1000_times473, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer473);
ite++;

unsigned char res_cipher474[16];
unsigned char res_uncipher474[16];
                      char key474[]={0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99};
NESSIEencrypt(plain474, res_cipher474, structpointer474);
if(strncmp(res_cipher474, cipher474, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher474, res_uncipher474, structpointer474);
if(strncmp(res_uncipher474, decrypted474, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher474, plain474, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher474, res_cipher474, structpointer474);
}
if(strncmp(res_cipher474, Iterated_100_times474, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher474, res_cipher474, structpointer474);
}
if(strncmp(res_cipher474, Iterated_1000_times474, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer474);
ite++;

unsigned char res_cipher475[16];
unsigned char res_uncipher475[16];
                      char key475[]={0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A,0x9A};
NESSIEencrypt(plain475, res_cipher475, structpointer475);
if(strncmp(res_cipher475, cipher475, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher475, res_uncipher475, structpointer475);
if(strncmp(res_uncipher475, decrypted475, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher475, plain475, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher475, res_cipher475, structpointer475);
}
if(strncmp(res_cipher475, Iterated_100_times475, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher475, res_cipher475, structpointer475);
}
if(strncmp(res_cipher475, Iterated_1000_times475, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer475);
ite++;

unsigned char res_cipher476[16];
unsigned char res_uncipher476[16];
                      char key476[]={0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B,0x9B};
NESSIEencrypt(plain476, res_cipher476, structpointer476);
if(strncmp(res_cipher476, cipher476, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher476, res_uncipher476, structpointer476);
if(strncmp(res_uncipher476, decrypted476, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher476, plain476, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher476, res_cipher476, structpointer476);
}
if(strncmp(res_cipher476, Iterated_100_times476, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher476, res_cipher476, structpointer476);
}
if(strncmp(res_cipher476, Iterated_1000_times476, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer476);
ite++;

unsigned char res_cipher477[16];
unsigned char res_uncipher477[16];
                      char key477[]={0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C,0x9C};
NESSIEencrypt(plain477, res_cipher477, structpointer477);
if(strncmp(res_cipher477, cipher477, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher477, res_uncipher477, structpointer477);
if(strncmp(res_uncipher477, decrypted477, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher477, plain477, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher477, res_cipher477, structpointer477);
}
if(strncmp(res_cipher477, Iterated_100_times477, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher477, res_cipher477, structpointer477);
}
if(strncmp(res_cipher477, Iterated_1000_times477, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer477);
ite++;

unsigned char res_cipher478[16];
unsigned char res_uncipher478[16];
                      char key478[]={0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D,0x9D};
NESSIEencrypt(plain478, res_cipher478, structpointer478);
if(strncmp(res_cipher478, cipher478, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher478, res_uncipher478, structpointer478);
if(strncmp(res_uncipher478, decrypted478, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher478, plain478, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher478, res_cipher478, structpointer478);
}
if(strncmp(res_cipher478, Iterated_100_times478, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher478, res_cipher478, structpointer478);
}
if(strncmp(res_cipher478, Iterated_1000_times478, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer478);
ite++;

unsigned char res_cipher479[16];
unsigned char res_uncipher479[16];
                      char key479[]={0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E,0x9E};
NESSIEencrypt(plain479, res_cipher479, structpointer479);
if(strncmp(res_cipher479, cipher479, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher479, res_uncipher479, structpointer479);
if(strncmp(res_uncipher479, decrypted479, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher479, plain479, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher479, res_cipher479, structpointer479);
}
if(strncmp(res_cipher479, Iterated_100_times479, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher479, res_cipher479, structpointer479);
}
if(strncmp(res_cipher479, Iterated_1000_times479, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer479);
ite++;

unsigned char res_cipher480[16];
unsigned char res_uncipher480[16];
                      char key480[]={0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F,0x9F};
NESSIEencrypt(plain480, res_cipher480, structpointer480);
if(strncmp(res_cipher480, cipher480, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher480, res_uncipher480, structpointer480);
if(strncmp(res_uncipher480, decrypted480, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher480, plain480, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher480, res_cipher480, structpointer480);
}
if(strncmp(res_cipher480, Iterated_100_times480, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher480, res_cipher480, structpointer480);
}
if(strncmp(res_cipher480, Iterated_1000_times480, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer480);
ite++;

unsigned char res_cipher481[16];
unsigned char res_uncipher481[16];
                      char key481[]={0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0};
NESSIEencrypt(plain481, res_cipher481, structpointer481);
if(strncmp(res_cipher481, cipher481, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher481, res_uncipher481, structpointer481);
if(strncmp(res_uncipher481, decrypted481, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher481, plain481, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher481, res_cipher481, structpointer481);
}
if(strncmp(res_cipher481, Iterated_100_times481, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher481, res_cipher481, structpointer481);
}
if(strncmp(res_cipher481, Iterated_1000_times481, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer481);
ite++;

unsigned char res_cipher482[16];
unsigned char res_uncipher482[16];
                      char key482[]={0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1,0xA1};
NESSIEencrypt(plain482, res_cipher482, structpointer482);
if(strncmp(res_cipher482, cipher482, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher482, res_uncipher482, structpointer482);
if(strncmp(res_uncipher482, decrypted482, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher482, plain482, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher482, res_cipher482, structpointer482);
}
if(strncmp(res_cipher482, Iterated_100_times482, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher482, res_cipher482, structpointer482);
}
if(strncmp(res_cipher482, Iterated_1000_times482, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer482);
ite++;

unsigned char res_cipher483[16];
unsigned char res_uncipher483[16];
                      char key483[]={0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2};
NESSIEencrypt(plain483, res_cipher483, structpointer483);
if(strncmp(res_cipher483, cipher483, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher483, res_uncipher483, structpointer483);
if(strncmp(res_uncipher483, decrypted483, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher483, plain483, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher483, res_cipher483, structpointer483);
}
if(strncmp(res_cipher483, Iterated_100_times483, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher483, res_cipher483, structpointer483);
}
if(strncmp(res_cipher483, Iterated_1000_times483, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer483);
ite++;

unsigned char res_cipher484[16];
unsigned char res_uncipher484[16];
                      char key484[]={0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3,0xA3};
NESSIEencrypt(plain484, res_cipher484, structpointer484);
if(strncmp(res_cipher484, cipher484, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher484, res_uncipher484, structpointer484);
if(strncmp(res_uncipher484, decrypted484, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher484, plain484, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher484, res_cipher484, structpointer484);
}
if(strncmp(res_cipher484, Iterated_100_times484, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher484, res_cipher484, structpointer484);
}
if(strncmp(res_cipher484, Iterated_1000_times484, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer484);
ite++;

unsigned char res_cipher485[16];
unsigned char res_uncipher485[16];
                      char key485[]={0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4,0xA4};
NESSIEencrypt(plain485, res_cipher485, structpointer485);
if(strncmp(res_cipher485, cipher485, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher485, res_uncipher485, structpointer485);
if(strncmp(res_uncipher485, decrypted485, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher485, plain485, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher485, res_cipher485, structpointer485);
}
if(strncmp(res_cipher485, Iterated_100_times485, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher485, res_cipher485, structpointer485);
}
if(strncmp(res_cipher485, Iterated_1000_times485, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer485);
ite++;

unsigned char res_cipher486[16];
unsigned char res_uncipher486[16];
                      char key486[]={0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5,0xA5};
NESSIEencrypt(plain486, res_cipher486, structpointer486);
if(strncmp(res_cipher486, cipher486, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher486, res_uncipher486, structpointer486);
if(strncmp(res_uncipher486, decrypted486, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher486, plain486, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher486, res_cipher486, structpointer486);
}
if(strncmp(res_cipher486, Iterated_100_times486, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher486, res_cipher486, structpointer486);
}
if(strncmp(res_cipher486, Iterated_1000_times486, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer486);
ite++;

unsigned char res_cipher487[16];
unsigned char res_uncipher487[16];
                      char key487[]={0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6,0xA6};
NESSIEencrypt(plain487, res_cipher487, structpointer487);
if(strncmp(res_cipher487, cipher487, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher487, res_uncipher487, structpointer487);
if(strncmp(res_uncipher487, decrypted487, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher487, plain487, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher487, res_cipher487, structpointer487);
}
if(strncmp(res_cipher487, Iterated_100_times487, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher487, res_cipher487, structpointer487);
}
if(strncmp(res_cipher487, Iterated_1000_times487, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer487);
ite++;

unsigned char res_cipher488[16];
unsigned char res_uncipher488[16];
                      char key488[]={0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7,0xA7};
NESSIEencrypt(plain488, res_cipher488, structpointer488);
if(strncmp(res_cipher488, cipher488, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher488, res_uncipher488, structpointer488);
if(strncmp(res_uncipher488, decrypted488, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher488, plain488, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher488, res_cipher488, structpointer488);
}
if(strncmp(res_cipher488, Iterated_100_times488, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher488, res_cipher488, structpointer488);
}
if(strncmp(res_cipher488, Iterated_1000_times488, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer488);
ite++;

unsigned char res_cipher489[16];
unsigned char res_uncipher489[16];
                      char key489[]={0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8};
NESSIEencrypt(plain489, res_cipher489, structpointer489);
if(strncmp(res_cipher489, cipher489, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher489, res_uncipher489, structpointer489);
if(strncmp(res_uncipher489, decrypted489, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher489, plain489, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher489, res_cipher489, structpointer489);
}
if(strncmp(res_cipher489, Iterated_100_times489, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher489, res_cipher489, structpointer489);
}
if(strncmp(res_cipher489, Iterated_1000_times489, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer489);
ite++;

unsigned char res_cipher490[16];
unsigned char res_uncipher490[16];
                      char key490[]={0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9,0xA9};
NESSIEencrypt(plain490, res_cipher490, structpointer490);
if(strncmp(res_cipher490, cipher490, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher490, res_uncipher490, structpointer490);
if(strncmp(res_uncipher490, decrypted490, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher490, plain490, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher490, res_cipher490, structpointer490);
}
if(strncmp(res_cipher490, Iterated_100_times490, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher490, res_cipher490, structpointer490);
}
if(strncmp(res_cipher490, Iterated_1000_times490, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer490);
ite++;

unsigned char res_cipher491[16];
unsigned char res_uncipher491[16];
                      char key491[]={0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA};
NESSIEencrypt(plain491, res_cipher491, structpointer491);
if(strncmp(res_cipher491, cipher491, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher491, res_uncipher491, structpointer491);
if(strncmp(res_uncipher491, decrypted491, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher491, plain491, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher491, res_cipher491, structpointer491);
}
if(strncmp(res_cipher491, Iterated_100_times491, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher491, res_cipher491, structpointer491);
}
if(strncmp(res_cipher491, Iterated_1000_times491, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer491);
ite++;

unsigned char res_cipher492[16];
unsigned char res_uncipher492[16];
                      char key492[]={0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB,0xAB};
NESSIEencrypt(plain492, res_cipher492, structpointer492);
if(strncmp(res_cipher492, cipher492, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher492, res_uncipher492, structpointer492);
if(strncmp(res_uncipher492, decrypted492, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher492, plain492, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher492, res_cipher492, structpointer492);
}
if(strncmp(res_cipher492, Iterated_100_times492, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher492, res_cipher492, structpointer492);
}
if(strncmp(res_cipher492, Iterated_1000_times492, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer492);
ite++;

unsigned char res_cipher493[16];
unsigned char res_uncipher493[16];
                      char key493[]={0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC,0xAC};
NESSIEencrypt(plain493, res_cipher493, structpointer493);
if(strncmp(res_cipher493, cipher493, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher493, res_uncipher493, structpointer493);
if(strncmp(res_uncipher493, decrypted493, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher493, plain493, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher493, res_cipher493, structpointer493);
}
if(strncmp(res_cipher493, Iterated_100_times493, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher493, res_cipher493, structpointer493);
}
if(strncmp(res_cipher493, Iterated_1000_times493, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer493);
ite++;

unsigned char res_cipher494[16];
unsigned char res_uncipher494[16];
                      char key494[]={0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD,0xAD};
NESSIEencrypt(plain494, res_cipher494, structpointer494);
if(strncmp(res_cipher494, cipher494, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher494, res_uncipher494, structpointer494);
if(strncmp(res_uncipher494, decrypted494, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher494, plain494, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher494, res_cipher494, structpointer494);
}
if(strncmp(res_cipher494, Iterated_100_times494, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher494, res_cipher494, structpointer494);
}
if(strncmp(res_cipher494, Iterated_1000_times494, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer494);
ite++;

unsigned char res_cipher495[16];
unsigned char res_uncipher495[16];
                      char key495[]={0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE,0xAE};
NESSIEencrypt(plain495, res_cipher495, structpointer495);
if(strncmp(res_cipher495, cipher495, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher495, res_uncipher495, structpointer495);
if(strncmp(res_uncipher495, decrypted495, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher495, plain495, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher495, res_cipher495, structpointer495);
}
if(strncmp(res_cipher495, Iterated_100_times495, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher495, res_cipher495, structpointer495);
}
if(strncmp(res_cipher495, Iterated_1000_times495, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer495);
ite++;

unsigned char res_cipher496[16];
unsigned char res_uncipher496[16];
                      char key496[]={0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF,0xAF};
NESSIEencrypt(plain496, res_cipher496, structpointer496);
if(strncmp(res_cipher496, cipher496, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher496, res_uncipher496, structpointer496);
if(strncmp(res_uncipher496, decrypted496, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher496, plain496, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher496, res_cipher496, structpointer496);
}
if(strncmp(res_cipher496, Iterated_100_times496, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher496, res_cipher496, structpointer496);
}
if(strncmp(res_cipher496, Iterated_1000_times496, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer496);
ite++;

unsigned char res_cipher497[16];
unsigned char res_uncipher497[16];
                      char key497[]={0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0,0xB0};
NESSIEencrypt(plain497, res_cipher497, structpointer497);
if(strncmp(res_cipher497, cipher497, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher497, res_uncipher497, structpointer497);
if(strncmp(res_uncipher497, decrypted497, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher497, plain497, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher497, res_cipher497, structpointer497);
}
if(strncmp(res_cipher497, Iterated_100_times497, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher497, res_cipher497, structpointer497);
}
if(strncmp(res_cipher497, Iterated_1000_times497, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer497);
ite++;

unsigned char res_cipher498[16];
unsigned char res_uncipher498[16];
                      char key498[]={0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1,0xB1};
NESSIEencrypt(plain498, res_cipher498, structpointer498);
if(strncmp(res_cipher498, cipher498, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher498, res_uncipher498, structpointer498);
if(strncmp(res_uncipher498, decrypted498, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher498, plain498, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher498, res_cipher498, structpointer498);
}
if(strncmp(res_cipher498, Iterated_100_times498, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher498, res_cipher498, structpointer498);
}
if(strncmp(res_cipher498, Iterated_1000_times498, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer498);
ite++;

unsigned char res_cipher499[16];
unsigned char res_uncipher499[16];
                      char key499[]={0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2,0xB2};
NESSIEencrypt(plain499, res_cipher499, structpointer499);
if(strncmp(res_cipher499, cipher499, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher499, res_uncipher499, structpointer499);
if(strncmp(res_uncipher499, decrypted499, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher499, plain499, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher499, res_cipher499, structpointer499);
}
if(strncmp(res_cipher499, Iterated_100_times499, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher499, res_cipher499, structpointer499);
}
if(strncmp(res_cipher499, Iterated_1000_times499, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer499);
ite++;

unsigned char res_cipher500[16];
unsigned char res_uncipher500[16];
                      char key500[]={0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3};
NESSIEencrypt(plain500, res_cipher500, structpointer500);
if(strncmp(res_cipher500, cipher500, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher500, res_uncipher500, structpointer500);
if(strncmp(res_uncipher500, decrypted500, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher500, plain500, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher500, res_cipher500, structpointer500);
}
if(strncmp(res_cipher500, Iterated_100_times500, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher500, res_cipher500, structpointer500);
}
if(strncmp(res_cipher500, Iterated_1000_times500, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer500);
ite++;

unsigned char res_cipher501[16];
unsigned char res_uncipher501[16];
                      char key501[]={0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4,0xB4};
NESSIEencrypt(plain501, res_cipher501, structpointer501);
if(strncmp(res_cipher501, cipher501, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher501, res_uncipher501, structpointer501);
if(strncmp(res_uncipher501, decrypted501, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher501, plain501, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher501, res_cipher501, structpointer501);
}
if(strncmp(res_cipher501, Iterated_100_times501, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher501, res_cipher501, structpointer501);
}
if(strncmp(res_cipher501, Iterated_1000_times501, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer501);
ite++;

unsigned char res_cipher502[16];
unsigned char res_uncipher502[16];
                      char key502[]={0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5,0xB5};
NESSIEencrypt(plain502, res_cipher502, structpointer502);
if(strncmp(res_cipher502, cipher502, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher502, res_uncipher502, structpointer502);
if(strncmp(res_uncipher502, decrypted502, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher502, plain502, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher502, res_cipher502, structpointer502);
}
if(strncmp(res_cipher502, Iterated_100_times502, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher502, res_cipher502, structpointer502);
}
if(strncmp(res_cipher502, Iterated_1000_times502, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer502);
ite++;

unsigned char res_cipher503[16];
unsigned char res_uncipher503[16];
                      char key503[]={0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6,0xB6};
NESSIEencrypt(plain503, res_cipher503, structpointer503);
if(strncmp(res_cipher503, cipher503, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher503, res_uncipher503, structpointer503);
if(strncmp(res_uncipher503, decrypted503, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher503, plain503, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher503, res_cipher503, structpointer503);
}
if(strncmp(res_cipher503, Iterated_100_times503, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher503, res_cipher503, structpointer503);
}
if(strncmp(res_cipher503, Iterated_1000_times503, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer503);
ite++;

unsigned char res_cipher504[16];
unsigned char res_uncipher504[16];
                      char key504[]={0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7,0xB7};
NESSIEencrypt(plain504, res_cipher504, structpointer504);
if(strncmp(res_cipher504, cipher504, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher504, res_uncipher504, structpointer504);
if(strncmp(res_uncipher504, decrypted504, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher504, plain504, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher504, res_cipher504, structpointer504);
}
if(strncmp(res_cipher504, Iterated_100_times504, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher504, res_cipher504, structpointer504);
}
if(strncmp(res_cipher504, Iterated_1000_times504, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer504);
ite++;

unsigned char res_cipher505[16];
unsigned char res_uncipher505[16];
                      char key505[]={0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8,0xB8};
NESSIEencrypt(plain505, res_cipher505, structpointer505);
if(strncmp(res_cipher505, cipher505, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher505, res_uncipher505, structpointer505);
if(strncmp(res_uncipher505, decrypted505, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher505, plain505, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher505, res_cipher505, structpointer505);
}
if(strncmp(res_cipher505, Iterated_100_times505, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher505, res_cipher505, structpointer505);
}
if(strncmp(res_cipher505, Iterated_1000_times505, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer505);
ite++;

unsigned char res_cipher506[16];
unsigned char res_uncipher506[16];
                      char key506[]={0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9};
NESSIEencrypt(plain506, res_cipher506, structpointer506);
if(strncmp(res_cipher506, cipher506, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher506, res_uncipher506, structpointer506);
if(strncmp(res_uncipher506, decrypted506, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher506, plain506, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher506, res_cipher506, structpointer506);
}
if(strncmp(res_cipher506, Iterated_100_times506, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher506, res_cipher506, structpointer506);
}
if(strncmp(res_cipher506, Iterated_1000_times506, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer506);
ite++;

unsigned char res_cipher507[16];
unsigned char res_uncipher507[16];
                      char key507[]={0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA,0xBA};
NESSIEencrypt(plain507, res_cipher507, structpointer507);
if(strncmp(res_cipher507, cipher507, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher507, res_uncipher507, structpointer507);
if(strncmp(res_uncipher507, decrypted507, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher507, plain507, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher507, res_cipher507, structpointer507);
}
if(strncmp(res_cipher507, Iterated_100_times507, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher507, res_cipher507, structpointer507);
}
if(strncmp(res_cipher507, Iterated_1000_times507, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer507);
ite++;

unsigned char res_cipher508[16];
unsigned char res_uncipher508[16];
                      char key508[]={0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB};
NESSIEencrypt(plain508, res_cipher508, structpointer508);
if(strncmp(res_cipher508, cipher508, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher508, res_uncipher508, structpointer508);
if(strncmp(res_uncipher508, decrypted508, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher508, plain508, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher508, res_cipher508, structpointer508);
}
if(strncmp(res_cipher508, Iterated_100_times508, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher508, res_cipher508, structpointer508);
}
if(strncmp(res_cipher508, Iterated_1000_times508, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer508);
ite++;

unsigned char res_cipher509[16];
unsigned char res_uncipher509[16];
                      char key509[]={0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC,0xBC};
NESSIEencrypt(plain509, res_cipher509, structpointer509);
if(strncmp(res_cipher509, cipher509, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher509, res_uncipher509, structpointer509);
if(strncmp(res_uncipher509, decrypted509, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher509, plain509, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher509, res_cipher509, structpointer509);
}
if(strncmp(res_cipher509, Iterated_100_times509, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher509, res_cipher509, structpointer509);
}
if(strncmp(res_cipher509, Iterated_1000_times509, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer509);
ite++;

unsigned char res_cipher510[16];
unsigned char res_uncipher510[16];
                      char key510[]={0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD,0xBD};
NESSIEencrypt(plain510, res_cipher510, structpointer510);
if(strncmp(res_cipher510, cipher510, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher510, res_uncipher510, structpointer510);
if(strncmp(res_uncipher510, decrypted510, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher510, plain510, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher510, res_cipher510, structpointer510);
}
if(strncmp(res_cipher510, Iterated_100_times510, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher510, res_cipher510, structpointer510);
}
if(strncmp(res_cipher510, Iterated_1000_times510, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer510);
ite++;

unsigned char res_cipher511[16];
unsigned char res_uncipher511[16];
                      char key511[]={0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE,0xBE};
NESSIEencrypt(plain511, res_cipher511, structpointer511);
if(strncmp(res_cipher511, cipher511, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher511, res_uncipher511, structpointer511);
if(strncmp(res_uncipher511, decrypted511, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher511, plain511, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher511, res_cipher511, structpointer511);
}
if(strncmp(res_cipher511, Iterated_100_times511, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher511, res_cipher511, structpointer511);
}
if(strncmp(res_cipher511, Iterated_1000_times511, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer511);
ite++;

unsigned char res_cipher512[16];
unsigned char res_uncipher512[16];
                      char key512[]={0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF};
NESSIEencrypt(plain512, res_cipher512, structpointer512);
if(strncmp(res_cipher512, cipher512, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher512, res_uncipher512, structpointer512);
if(strncmp(res_uncipher512, decrypted512, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher512, plain512, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher512, res_cipher512, structpointer512);
}
if(strncmp(res_cipher512, Iterated_100_times512, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher512, res_cipher512, structpointer512);
}
if(strncmp(res_cipher512, Iterated_1000_times512, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer512);
ite++;

unsigned char res_cipher513[16];
unsigned char res_uncipher513[16];
                      char key513[]={0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0};
NESSIEencrypt(plain513, res_cipher513, structpointer513);
if(strncmp(res_cipher513, cipher513, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher513, res_uncipher513, structpointer513);
if(strncmp(res_uncipher513, decrypted513, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher513, plain513, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher513, res_cipher513, structpointer513);
}
if(strncmp(res_cipher513, Iterated_100_times513, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher513, res_cipher513, structpointer513);
}
if(strncmp(res_cipher513, Iterated_1000_times513, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer513);
ite++;

unsigned char res_cipher514[16];
unsigned char res_uncipher514[16];
                      char key514[]={0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1,0xC1};
NESSIEencrypt(plain514, res_cipher514, structpointer514);
if(strncmp(res_cipher514, cipher514, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher514, res_uncipher514, structpointer514);
if(strncmp(res_uncipher514, decrypted514, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher514, plain514, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher514, res_cipher514, structpointer514);
}
if(strncmp(res_cipher514, Iterated_100_times514, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher514, res_cipher514, structpointer514);
}
if(strncmp(res_cipher514, Iterated_1000_times514, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer514);
ite++;

unsigned char res_cipher515[16];
unsigned char res_uncipher515[16];
                      char key515[]={0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2,0xC2};
NESSIEencrypt(plain515, res_cipher515, structpointer515);
if(strncmp(res_cipher515, cipher515, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher515, res_uncipher515, structpointer515);
if(strncmp(res_uncipher515, decrypted515, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher515, plain515, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher515, res_cipher515, structpointer515);
}
if(strncmp(res_cipher515, Iterated_100_times515, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher515, res_cipher515, structpointer515);
}
if(strncmp(res_cipher515, Iterated_1000_times515, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer515);
ite++;

unsigned char res_cipher516[16];
unsigned char res_uncipher516[16];
                      char key516[]={0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3,0xC3};
NESSIEencrypt(plain516, res_cipher516, structpointer516);
if(strncmp(res_cipher516, cipher516, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher516, res_uncipher516, structpointer516);
if(strncmp(res_uncipher516, decrypted516, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher516, plain516, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher516, res_cipher516, structpointer516);
}
if(strncmp(res_cipher516, Iterated_100_times516, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher516, res_cipher516, structpointer516);
}
if(strncmp(res_cipher516, Iterated_1000_times516, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer516);
ite++;

unsigned char res_cipher517[16];
unsigned char res_uncipher517[16];
                      char key517[]={0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4,0xC4};
NESSIEencrypt(plain517, res_cipher517, structpointer517);
if(strncmp(res_cipher517, cipher517, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher517, res_uncipher517, structpointer517);
if(strncmp(res_uncipher517, decrypted517, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher517, plain517, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher517, res_cipher517, structpointer517);
}
if(strncmp(res_cipher517, Iterated_100_times517, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher517, res_cipher517, structpointer517);
}
if(strncmp(res_cipher517, Iterated_1000_times517, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer517);
ite++;

unsigned char res_cipher518[16];
unsigned char res_uncipher518[16];
                      char key518[]={0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5};
NESSIEencrypt(plain518, res_cipher518, structpointer518);
if(strncmp(res_cipher518, cipher518, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher518, res_uncipher518, structpointer518);
if(strncmp(res_uncipher518, decrypted518, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher518, plain518, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher518, res_cipher518, structpointer518);
}
if(strncmp(res_cipher518, Iterated_100_times518, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher518, res_cipher518, structpointer518);
}
if(strncmp(res_cipher518, Iterated_1000_times518, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer518);
ite++;

unsigned char res_cipher519[16];
unsigned char res_uncipher519[16];
                      char key519[]={0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6};
NESSIEencrypt(plain519, res_cipher519, structpointer519);
if(strncmp(res_cipher519, cipher519, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher519, res_uncipher519, structpointer519);
if(strncmp(res_uncipher519, decrypted519, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher519, plain519, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher519, res_cipher519, structpointer519);
}
if(strncmp(res_cipher519, Iterated_100_times519, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher519, res_cipher519, structpointer519);
}
if(strncmp(res_cipher519, Iterated_1000_times519, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer519);
ite++;

unsigned char res_cipher520[16];
unsigned char res_uncipher520[16];
                      char key520[]={0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7};
NESSIEencrypt(plain520, res_cipher520, structpointer520);
if(strncmp(res_cipher520, cipher520, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher520, res_uncipher520, structpointer520);
if(strncmp(res_uncipher520, decrypted520, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher520, plain520, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher520, res_cipher520, structpointer520);
}
if(strncmp(res_cipher520, Iterated_100_times520, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher520, res_cipher520, structpointer520);
}
if(strncmp(res_cipher520, Iterated_1000_times520, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer520);
ite++;

unsigned char res_cipher521[16];
unsigned char res_uncipher521[16];
                      char key521[]={0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8,0xC8};
NESSIEencrypt(plain521, res_cipher521, structpointer521);
if(strncmp(res_cipher521, cipher521, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher521, res_uncipher521, structpointer521);
if(strncmp(res_uncipher521, decrypted521, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher521, plain521, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher521, res_cipher521, structpointer521);
}
if(strncmp(res_cipher521, Iterated_100_times521, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher521, res_cipher521, structpointer521);
}
if(strncmp(res_cipher521, Iterated_1000_times521, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer521);
ite++;

unsigned char res_cipher522[16];
unsigned char res_uncipher522[16];
                      char key522[]={0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9,0xC9};
NESSIEencrypt(plain522, res_cipher522, structpointer522);
if(strncmp(res_cipher522, cipher522, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher522, res_uncipher522, structpointer522);
if(strncmp(res_uncipher522, decrypted522, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher522, plain522, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher522, res_cipher522, structpointer522);
}
if(strncmp(res_cipher522, Iterated_100_times522, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher522, res_cipher522, structpointer522);
}
if(strncmp(res_cipher522, Iterated_1000_times522, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer522);
ite++;

unsigned char res_cipher523[16];
unsigned char res_uncipher523[16];
                      char key523[]={0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA,0xCA};
NESSIEencrypt(plain523, res_cipher523, structpointer523);
if(strncmp(res_cipher523, cipher523, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher523, res_uncipher523, structpointer523);
if(strncmp(res_uncipher523, decrypted523, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher523, plain523, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher523, res_cipher523, structpointer523);
}
if(strncmp(res_cipher523, Iterated_100_times523, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher523, res_cipher523, structpointer523);
}
if(strncmp(res_cipher523, Iterated_1000_times523, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer523);
ite++;

unsigned char res_cipher524[16];
unsigned char res_uncipher524[16];
                      char key524[]={0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB,0xCB};
NESSIEencrypt(plain524, res_cipher524, structpointer524);
if(strncmp(res_cipher524, cipher524, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher524, res_uncipher524, structpointer524);
if(strncmp(res_uncipher524, decrypted524, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher524, plain524, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher524, res_cipher524, structpointer524);
}
if(strncmp(res_cipher524, Iterated_100_times524, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher524, res_cipher524, structpointer524);
}
if(strncmp(res_cipher524, Iterated_1000_times524, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer524);
ite++;

unsigned char res_cipher525[16];
unsigned char res_uncipher525[16];
                      char key525[]={0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC};
NESSIEencrypt(plain525, res_cipher525, structpointer525);
if(strncmp(res_cipher525, cipher525, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher525, res_uncipher525, structpointer525);
if(strncmp(res_uncipher525, decrypted525, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher525, plain525, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher525, res_cipher525, structpointer525);
}
if(strncmp(res_cipher525, Iterated_100_times525, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher525, res_cipher525, structpointer525);
}
if(strncmp(res_cipher525, Iterated_1000_times525, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer525);
ite++;

unsigned char res_cipher526[16];
unsigned char res_uncipher526[16];
                      char key526[]={0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD,0xCD};
NESSIEencrypt(plain526, res_cipher526, structpointer526);
if(strncmp(res_cipher526, cipher526, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher526, res_uncipher526, structpointer526);
if(strncmp(res_uncipher526, decrypted526, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher526, plain526, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher526, res_cipher526, structpointer526);
}
if(strncmp(res_cipher526, Iterated_100_times526, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher526, res_cipher526, structpointer526);
}
if(strncmp(res_cipher526, Iterated_1000_times526, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer526);
ite++;

unsigned char res_cipher527[16];
unsigned char res_uncipher527[16];
                      char key527[]={0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE,0xCE};
NESSIEencrypt(plain527, res_cipher527, structpointer527);
if(strncmp(res_cipher527, cipher527, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher527, res_uncipher527, structpointer527);
if(strncmp(res_uncipher527, decrypted527, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher527, plain527, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher527, res_cipher527, structpointer527);
}
if(strncmp(res_cipher527, Iterated_100_times527, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher527, res_cipher527, structpointer527);
}
if(strncmp(res_cipher527, Iterated_1000_times527, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer527);
ite++;

unsigned char res_cipher528[16];
unsigned char res_uncipher528[16];
                      char key528[]={0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF,0xCF};
NESSIEencrypt(plain528, res_cipher528, structpointer528);
if(strncmp(res_cipher528, cipher528, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher528, res_uncipher528, structpointer528);
if(strncmp(res_uncipher528, decrypted528, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher528, plain528, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher528, res_cipher528, structpointer528);
}
if(strncmp(res_cipher528, Iterated_100_times528, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher528, res_cipher528, structpointer528);
}
if(strncmp(res_cipher528, Iterated_1000_times528, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer528);
ite++;

unsigned char res_cipher529[16];
unsigned char res_uncipher529[16];
                      char key529[]={0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0,0xD0};
NESSIEencrypt(plain529, res_cipher529, structpointer529);
if(strncmp(res_cipher529, cipher529, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher529, res_uncipher529, structpointer529);
if(strncmp(res_uncipher529, decrypted529, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher529, plain529, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher529, res_cipher529, structpointer529);
}
if(strncmp(res_cipher529, Iterated_100_times529, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher529, res_cipher529, structpointer529);
}
if(strncmp(res_cipher529, Iterated_1000_times529, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer529);
ite++;

unsigned char res_cipher530[16];
unsigned char res_uncipher530[16];
                      char key530[]={0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1,0xD1};
NESSIEencrypt(plain530, res_cipher530, structpointer530);
if(strncmp(res_cipher530, cipher530, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher530, res_uncipher530, structpointer530);
if(strncmp(res_uncipher530, decrypted530, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher530, plain530, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher530, res_cipher530, structpointer530);
}
if(strncmp(res_cipher530, Iterated_100_times530, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher530, res_cipher530, structpointer530);
}
if(strncmp(res_cipher530, Iterated_1000_times530, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer530);
ite++;

unsigned char res_cipher531[16];
unsigned char res_uncipher531[16];
                      char key531[]={0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2,0xD2};
NESSIEencrypt(plain531, res_cipher531, structpointer531);
if(strncmp(res_cipher531, cipher531, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher531, res_uncipher531, structpointer531);
if(strncmp(res_uncipher531, decrypted531, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher531, plain531, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher531, res_cipher531, structpointer531);
}
if(strncmp(res_cipher531, Iterated_100_times531, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher531, res_cipher531, structpointer531);
}
if(strncmp(res_cipher531, Iterated_1000_times531, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer531);
ite++;

unsigned char res_cipher532[16];
unsigned char res_uncipher532[16];
                      char key532[]={0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3,0xD3};
NESSIEencrypt(plain532, res_cipher532, structpointer532);
if(strncmp(res_cipher532, cipher532, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher532, res_uncipher532, structpointer532);
if(strncmp(res_uncipher532, decrypted532, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher532, plain532, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher532, res_cipher532, structpointer532);
}
if(strncmp(res_cipher532, Iterated_100_times532, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher532, res_cipher532, structpointer532);
}
if(strncmp(res_cipher532, Iterated_1000_times532, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer532);
ite++;

unsigned char res_cipher533[16];
unsigned char res_uncipher533[16];
                      char key533[]={0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4,0xD4};
NESSIEencrypt(plain533, res_cipher533, structpointer533);
if(strncmp(res_cipher533, cipher533, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher533, res_uncipher533, structpointer533);
if(strncmp(res_uncipher533, decrypted533, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher533, plain533, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher533, res_cipher533, structpointer533);
}
if(strncmp(res_cipher533, Iterated_100_times533, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher533, res_cipher533, structpointer533);
}
if(strncmp(res_cipher533, Iterated_1000_times533, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer533);
ite++;

unsigned char res_cipher534[16];
unsigned char res_uncipher534[16];
                      char key534[]={0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5,0xD5};
NESSIEencrypt(plain534, res_cipher534, structpointer534);
if(strncmp(res_cipher534, cipher534, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher534, res_uncipher534, structpointer534);
if(strncmp(res_uncipher534, decrypted534, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher534, plain534, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher534, res_cipher534, structpointer534);
}
if(strncmp(res_cipher534, Iterated_100_times534, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher534, res_cipher534, structpointer534);
}
if(strncmp(res_cipher534, Iterated_1000_times534, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer534);
ite++;

unsigned char res_cipher535[16];
unsigned char res_uncipher535[16];
                      char key535[]={0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6};
NESSIEencrypt(plain535, res_cipher535, structpointer535);
if(strncmp(res_cipher535, cipher535, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher535, res_uncipher535, structpointer535);
if(strncmp(res_uncipher535, decrypted535, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher535, plain535, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher535, res_cipher535, structpointer535);
}
if(strncmp(res_cipher535, Iterated_100_times535, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher535, res_cipher535, structpointer535);
}
if(strncmp(res_cipher535, Iterated_1000_times535, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer535);
ite++;

unsigned char res_cipher536[16];
unsigned char res_uncipher536[16];
                      char key536[]={0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7,0xD7};
NESSIEencrypt(plain536, res_cipher536, structpointer536);
if(strncmp(res_cipher536, cipher536, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher536, res_uncipher536, structpointer536);
if(strncmp(res_uncipher536, decrypted536, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher536, plain536, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher536, res_cipher536, structpointer536);
}
if(strncmp(res_cipher536, Iterated_100_times536, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher536, res_cipher536, structpointer536);
}
if(strncmp(res_cipher536, Iterated_1000_times536, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer536);
ite++;

unsigned char res_cipher537[16];
unsigned char res_uncipher537[16];
                      char key537[]={0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8};
NESSIEencrypt(plain537, res_cipher537, structpointer537);
if(strncmp(res_cipher537, cipher537, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher537, res_uncipher537, structpointer537);
if(strncmp(res_uncipher537, decrypted537, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher537, plain537, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher537, res_cipher537, structpointer537);
}
if(strncmp(res_cipher537, Iterated_100_times537, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher537, res_cipher537, structpointer537);
}
if(strncmp(res_cipher537, Iterated_1000_times537, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer537);
ite++;

unsigned char res_cipher538[16];
unsigned char res_uncipher538[16];
                      char key538[]={0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9};
NESSIEencrypt(plain538, res_cipher538, structpointer538);
if(strncmp(res_cipher538, cipher538, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher538, res_uncipher538, structpointer538);
if(strncmp(res_uncipher538, decrypted538, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher538, plain538, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher538, res_cipher538, structpointer538);
}
if(strncmp(res_cipher538, Iterated_100_times538, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher538, res_cipher538, structpointer538);
}
if(strncmp(res_cipher538, Iterated_1000_times538, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer538);
ite++;

unsigned char res_cipher539[16];
unsigned char res_uncipher539[16];
                      char key539[]={0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA,0xDA};
NESSIEencrypt(plain539, res_cipher539, structpointer539);
if(strncmp(res_cipher539, cipher539, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher539, res_uncipher539, structpointer539);
if(strncmp(res_uncipher539, decrypted539, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher539, plain539, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher539, res_cipher539, structpointer539);
}
if(strncmp(res_cipher539, Iterated_100_times539, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher539, res_cipher539, structpointer539);
}
if(strncmp(res_cipher539, Iterated_1000_times539, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer539);
ite++;

unsigned char res_cipher540[16];
unsigned char res_uncipher540[16];
                      char key540[]={0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB};
NESSIEencrypt(plain540, res_cipher540, structpointer540);
if(strncmp(res_cipher540, cipher540, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher540, res_uncipher540, structpointer540);
if(strncmp(res_uncipher540, decrypted540, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher540, plain540, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher540, res_cipher540, structpointer540);
}
if(strncmp(res_cipher540, Iterated_100_times540, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher540, res_cipher540, structpointer540);
}
if(strncmp(res_cipher540, Iterated_1000_times540, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer540);
ite++;

unsigned char res_cipher541[16];
unsigned char res_uncipher541[16];
                      char key541[]={0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC,0xDC};
NESSIEencrypt(plain541, res_cipher541, structpointer541);
if(strncmp(res_cipher541, cipher541, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher541, res_uncipher541, structpointer541);
if(strncmp(res_uncipher541, decrypted541, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher541, plain541, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher541, res_cipher541, structpointer541);
}
if(strncmp(res_cipher541, Iterated_100_times541, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher541, res_cipher541, structpointer541);
}
if(strncmp(res_cipher541, Iterated_1000_times541, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer541);
ite++;

unsigned char res_cipher542[16];
unsigned char res_uncipher542[16];
                      char key542[]={0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD,0xDD};
NESSIEencrypt(plain542, res_cipher542, structpointer542);
if(strncmp(res_cipher542, cipher542, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher542, res_uncipher542, structpointer542);
if(strncmp(res_uncipher542, decrypted542, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher542, plain542, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher542, res_cipher542, structpointer542);
}
if(strncmp(res_cipher542, Iterated_100_times542, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher542, res_cipher542, structpointer542);
}
if(strncmp(res_cipher542, Iterated_1000_times542, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer542);
ite++;

unsigned char res_cipher543[16];
unsigned char res_uncipher543[16];
                      char key543[]={0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE,0xDE};
NESSIEencrypt(plain543, res_cipher543, structpointer543);
if(strncmp(res_cipher543, cipher543, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher543, res_uncipher543, structpointer543);
if(strncmp(res_uncipher543, decrypted543, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher543, plain543, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher543, res_cipher543, structpointer543);
}
if(strncmp(res_cipher543, Iterated_100_times543, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher543, res_cipher543, structpointer543);
}
if(strncmp(res_cipher543, Iterated_1000_times543, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer543);
ite++;

unsigned char res_cipher544[16];
unsigned char res_uncipher544[16];
                      char key544[]={0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF,0xDF};
NESSIEencrypt(plain544, res_cipher544, structpointer544);
if(strncmp(res_cipher544, cipher544, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher544, res_uncipher544, structpointer544);
if(strncmp(res_uncipher544, decrypted544, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher544, plain544, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher544, res_cipher544, structpointer544);
}
if(strncmp(res_cipher544, Iterated_100_times544, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher544, res_cipher544, structpointer544);
}
if(strncmp(res_cipher544, Iterated_1000_times544, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer544);
ite++;

unsigned char res_cipher545[16];
unsigned char res_uncipher545[16];
                      char key545[]={0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0};
NESSIEencrypt(plain545, res_cipher545, structpointer545);
if(strncmp(res_cipher545, cipher545, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher545, res_uncipher545, structpointer545);
if(strncmp(res_uncipher545, decrypted545, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher545, plain545, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher545, res_cipher545, structpointer545);
}
if(strncmp(res_cipher545, Iterated_100_times545, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher545, res_cipher545, structpointer545);
}
if(strncmp(res_cipher545, Iterated_1000_times545, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer545);
ite++;

unsigned char res_cipher546[16];
unsigned char res_uncipher546[16];
                      char key546[]={0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1};
NESSIEencrypt(plain546, res_cipher546, structpointer546);
if(strncmp(res_cipher546, cipher546, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher546, res_uncipher546, structpointer546);
if(strncmp(res_uncipher546, decrypted546, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher546, plain546, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher546, res_cipher546, structpointer546);
}
if(strncmp(res_cipher546, Iterated_100_times546, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher546, res_cipher546, structpointer546);
}
if(strncmp(res_cipher546, Iterated_1000_times546, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer546);
ite++;

unsigned char res_cipher547[16];
unsigned char res_uncipher547[16];
                      char key547[]={0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2,0xE2};
NESSIEencrypt(plain547, res_cipher547, structpointer547);
if(strncmp(res_cipher547, cipher547, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher547, res_uncipher547, structpointer547);
if(strncmp(res_uncipher547, decrypted547, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher547, plain547, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher547, res_cipher547, structpointer547);
}
if(strncmp(res_cipher547, Iterated_100_times547, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher547, res_cipher547, structpointer547);
}
if(strncmp(res_cipher547, Iterated_1000_times547, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer547);
ite++;

unsigned char res_cipher548[16];
unsigned char res_uncipher548[16];
                      char key548[]={0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3,0xE3};
NESSIEencrypt(plain548, res_cipher548, structpointer548);
if(strncmp(res_cipher548, cipher548, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher548, res_uncipher548, structpointer548);
if(strncmp(res_uncipher548, decrypted548, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher548, plain548, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher548, res_cipher548, structpointer548);
}
if(strncmp(res_cipher548, Iterated_100_times548, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher548, res_cipher548, structpointer548);
}
if(strncmp(res_cipher548, Iterated_1000_times548, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer548);
ite++;

unsigned char res_cipher549[16];
unsigned char res_uncipher549[16];
                      char key549[]={0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4,0xE4};
NESSIEencrypt(plain549, res_cipher549, structpointer549);
if(strncmp(res_cipher549, cipher549, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher549, res_uncipher549, structpointer549);
if(strncmp(res_uncipher549, decrypted549, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher549, plain549, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher549, res_cipher549, structpointer549);
}
if(strncmp(res_cipher549, Iterated_100_times549, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher549, res_cipher549, structpointer549);
}
if(strncmp(res_cipher549, Iterated_1000_times549, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer549);
ite++;

unsigned char res_cipher550[16];
unsigned char res_uncipher550[16];
                      char key550[]={0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5,0xE5};
NESSIEencrypt(plain550, res_cipher550, structpointer550);
if(strncmp(res_cipher550, cipher550, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher550, res_uncipher550, structpointer550);
if(strncmp(res_uncipher550, decrypted550, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher550, plain550, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher550, res_cipher550, structpointer550);
}
if(strncmp(res_cipher550, Iterated_100_times550, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher550, res_cipher550, structpointer550);
}
if(strncmp(res_cipher550, Iterated_1000_times550, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer550);
ite++;

unsigned char res_cipher551[16];
unsigned char res_uncipher551[16];
                      char key551[]={0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6};
NESSIEencrypt(plain551, res_cipher551, structpointer551);
if(strncmp(res_cipher551, cipher551, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher551, res_uncipher551, structpointer551);
if(strncmp(res_uncipher551, decrypted551, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher551, plain551, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher551, res_cipher551, structpointer551);
}
if(strncmp(res_cipher551, Iterated_100_times551, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher551, res_cipher551, structpointer551);
}
if(strncmp(res_cipher551, Iterated_1000_times551, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer551);
ite++;

unsigned char res_cipher552[16];
unsigned char res_uncipher552[16];
                      char key552[]={0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7};
NESSIEencrypt(plain552, res_cipher552, structpointer552);
if(strncmp(res_cipher552, cipher552, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher552, res_uncipher552, structpointer552);
if(strncmp(res_uncipher552, decrypted552, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher552, plain552, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher552, res_cipher552, structpointer552);
}
if(strncmp(res_cipher552, Iterated_100_times552, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher552, res_cipher552, structpointer552);
}
if(strncmp(res_cipher552, Iterated_1000_times552, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer552);
ite++;

unsigned char res_cipher553[16];
unsigned char res_uncipher553[16];
                      char key553[]={0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8,0xE8};
NESSIEencrypt(plain553, res_cipher553, structpointer553);
if(strncmp(res_cipher553, cipher553, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher553, res_uncipher553, structpointer553);
if(strncmp(res_uncipher553, decrypted553, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher553, plain553, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher553, res_cipher553, structpointer553);
}
if(strncmp(res_cipher553, Iterated_100_times553, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher553, res_cipher553, structpointer553);
}
if(strncmp(res_cipher553, Iterated_1000_times553, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer553);
ite++;

unsigned char res_cipher554[16];
unsigned char res_uncipher554[16];
                      char key554[]={0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9,0xE9};
NESSIEencrypt(plain554, res_cipher554, structpointer554);
if(strncmp(res_cipher554, cipher554, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher554, res_uncipher554, structpointer554);
if(strncmp(res_uncipher554, decrypted554, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher554, plain554, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher554, res_cipher554, structpointer554);
}
if(strncmp(res_cipher554, Iterated_100_times554, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher554, res_cipher554, structpointer554);
}
if(strncmp(res_cipher554, Iterated_1000_times554, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer554);
ite++;

unsigned char res_cipher555[16];
unsigned char res_uncipher555[16];
                      char key555[]={0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA,0xEA};
NESSIEencrypt(plain555, res_cipher555, structpointer555);
if(strncmp(res_cipher555, cipher555, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher555, res_uncipher555, structpointer555);
if(strncmp(res_uncipher555, decrypted555, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher555, plain555, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher555, res_cipher555, structpointer555);
}
if(strncmp(res_cipher555, Iterated_100_times555, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher555, res_cipher555, structpointer555);
}
if(strncmp(res_cipher555, Iterated_1000_times555, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer555);
ite++;

unsigned char res_cipher556[16];
unsigned char res_uncipher556[16];
                      char key556[]={0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB,0xEB};
NESSIEencrypt(plain556, res_cipher556, structpointer556);
if(strncmp(res_cipher556, cipher556, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher556, res_uncipher556, structpointer556);
if(strncmp(res_uncipher556, decrypted556, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher556, plain556, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher556, res_cipher556, structpointer556);
}
if(strncmp(res_cipher556, Iterated_100_times556, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher556, res_cipher556, structpointer556);
}
if(strncmp(res_cipher556, Iterated_1000_times556, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer556);
ite++;

unsigned char res_cipher557[16];
unsigned char res_uncipher557[16];
                      char key557[]={0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC,0xEC};
NESSIEencrypt(plain557, res_cipher557, structpointer557);
if(strncmp(res_cipher557, cipher557, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher557, res_uncipher557, structpointer557);
if(strncmp(res_uncipher557, decrypted557, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher557, plain557, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher557, res_cipher557, structpointer557);
}
if(strncmp(res_cipher557, Iterated_100_times557, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher557, res_cipher557, structpointer557);
}
if(strncmp(res_cipher557, Iterated_1000_times557, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer557);
ite++;

unsigned char res_cipher558[16];
unsigned char res_uncipher558[16];
                      char key558[]={0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED,0xED};
NESSIEencrypt(plain558, res_cipher558, structpointer558);
if(strncmp(res_cipher558, cipher558, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher558, res_uncipher558, structpointer558);
if(strncmp(res_uncipher558, decrypted558, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher558, plain558, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher558, res_cipher558, structpointer558);
}
if(strncmp(res_cipher558, Iterated_100_times558, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher558, res_cipher558, structpointer558);
}
if(strncmp(res_cipher558, Iterated_1000_times558, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer558);
ite++;

unsigned char res_cipher559[16];
unsigned char res_uncipher559[16];
                      char key559[]={0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE,0xEE};
NESSIEencrypt(plain559, res_cipher559, structpointer559);
if(strncmp(res_cipher559, cipher559, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher559, res_uncipher559, structpointer559);
if(strncmp(res_uncipher559, decrypted559, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher559, plain559, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher559, res_cipher559, structpointer559);
}
if(strncmp(res_cipher559, Iterated_100_times559, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher559, res_cipher559, structpointer559);
}
if(strncmp(res_cipher559, Iterated_1000_times559, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer559);
ite++;

unsigned char res_cipher560[16];
unsigned char res_uncipher560[16];
                      char key560[]={0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF};
NESSIEencrypt(plain560, res_cipher560, structpointer560);
if(strncmp(res_cipher560, cipher560, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher560, res_uncipher560, structpointer560);
if(strncmp(res_uncipher560, decrypted560, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher560, plain560, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher560, res_cipher560, structpointer560);
}
if(strncmp(res_cipher560, Iterated_100_times560, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher560, res_cipher560, structpointer560);
}
if(strncmp(res_cipher560, Iterated_1000_times560, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer560);
ite++;

unsigned char res_cipher561[16];
unsigned char res_uncipher561[16];
                      char key561[]={0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0};
NESSIEencrypt(plain561, res_cipher561, structpointer561);
if(strncmp(res_cipher561, cipher561, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher561, res_uncipher561, structpointer561);
if(strncmp(res_uncipher561, decrypted561, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher561, plain561, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher561, res_cipher561, structpointer561);
}
if(strncmp(res_cipher561, Iterated_100_times561, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher561, res_cipher561, structpointer561);
}
if(strncmp(res_cipher561, Iterated_1000_times561, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer561);
ite++;

unsigned char res_cipher562[16];
unsigned char res_uncipher562[16];
                      char key562[]={0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1,0xF1};
NESSIEencrypt(plain562, res_cipher562, structpointer562);
if(strncmp(res_cipher562, cipher562, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher562, res_uncipher562, structpointer562);
if(strncmp(res_uncipher562, decrypted562, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher562, plain562, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher562, res_cipher562, structpointer562);
}
if(strncmp(res_cipher562, Iterated_100_times562, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher562, res_cipher562, structpointer562);
}
if(strncmp(res_cipher562, Iterated_1000_times562, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer562);
ite++;

unsigned char res_cipher563[16];
unsigned char res_uncipher563[16];
                      char key563[]={0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2,0xF2};
NESSIEencrypt(plain563, res_cipher563, structpointer563);
if(strncmp(res_cipher563, cipher563, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher563, res_uncipher563, structpointer563);
if(strncmp(res_uncipher563, decrypted563, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher563, plain563, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher563, res_cipher563, structpointer563);
}
if(strncmp(res_cipher563, Iterated_100_times563, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher563, res_cipher563, structpointer563);
}
if(strncmp(res_cipher563, Iterated_1000_times563, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer563);
ite++;

unsigned char res_cipher564[16];
unsigned char res_uncipher564[16];
                      char key564[]={0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3,0xF3};
NESSIEencrypt(plain564, res_cipher564, structpointer564);
if(strncmp(res_cipher564, cipher564, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher564, res_uncipher564, structpointer564);
if(strncmp(res_uncipher564, decrypted564, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher564, plain564, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher564, res_cipher564, structpointer564);
}
if(strncmp(res_cipher564, Iterated_100_times564, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher564, res_cipher564, structpointer564);
}
if(strncmp(res_cipher564, Iterated_1000_times564, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer564);
ite++;

unsigned char res_cipher565[16];
unsigned char res_uncipher565[16];
                      char key565[]={0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4,0xF4};
NESSIEencrypt(plain565, res_cipher565, structpointer565);
if(strncmp(res_cipher565, cipher565, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher565, res_uncipher565, structpointer565);
if(strncmp(res_uncipher565, decrypted565, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher565, plain565, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher565, res_cipher565, structpointer565);
}
if(strncmp(res_cipher565, Iterated_100_times565, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher565, res_cipher565, structpointer565);
}
if(strncmp(res_cipher565, Iterated_1000_times565, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer565);
ite++;

unsigned char res_cipher566[16];
unsigned char res_uncipher566[16];
                      char key566[]={0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5,0xF5};
NESSIEencrypt(plain566, res_cipher566, structpointer566);
if(strncmp(res_cipher566, cipher566, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher566, res_uncipher566, structpointer566);
if(strncmp(res_uncipher566, decrypted566, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher566, plain566, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher566, res_cipher566, structpointer566);
}
if(strncmp(res_cipher566, Iterated_100_times566, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher566, res_cipher566, structpointer566);
}
if(strncmp(res_cipher566, Iterated_1000_times566, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer566);
ite++;

unsigned char res_cipher567[16];
unsigned char res_uncipher567[16];
                      char key567[]={0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6,0xF6};
NESSIEencrypt(plain567, res_cipher567, structpointer567);
if(strncmp(res_cipher567, cipher567, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher567, res_uncipher567, structpointer567);
if(strncmp(res_uncipher567, decrypted567, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher567, plain567, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher567, res_cipher567, structpointer567);
}
if(strncmp(res_cipher567, Iterated_100_times567, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher567, res_cipher567, structpointer567);
}
if(strncmp(res_cipher567, Iterated_1000_times567, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer567);
ite++;

unsigned char res_cipher568[16];
unsigned char res_uncipher568[16];
                      char key568[]={0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7,0xF7};
NESSIEencrypt(plain568, res_cipher568, structpointer568);
if(strncmp(res_cipher568, cipher568, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher568, res_uncipher568, structpointer568);
if(strncmp(res_uncipher568, decrypted568, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher568, plain568, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher568, res_cipher568, structpointer568);
}
if(strncmp(res_cipher568, Iterated_100_times568, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher568, res_cipher568, structpointer568);
}
if(strncmp(res_cipher568, Iterated_1000_times568, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer568);
ite++;

unsigned char res_cipher569[16];
unsigned char res_uncipher569[16];
                      char key569[]={0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8};
NESSIEencrypt(plain569, res_cipher569, structpointer569);
if(strncmp(res_cipher569, cipher569, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher569, res_uncipher569, structpointer569);
if(strncmp(res_uncipher569, decrypted569, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher569, plain569, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher569, res_cipher569, structpointer569);
}
if(strncmp(res_cipher569, Iterated_100_times569, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher569, res_cipher569, structpointer569);
}
if(strncmp(res_cipher569, Iterated_1000_times569, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer569);
ite++;

unsigned char res_cipher570[16];
unsigned char res_uncipher570[16];
                      char key570[]={0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9,0xF9};
NESSIEencrypt(plain570, res_cipher570, structpointer570);
if(strncmp(res_cipher570, cipher570, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher570, res_uncipher570, structpointer570);
if(strncmp(res_uncipher570, decrypted570, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher570, plain570, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher570, res_cipher570, structpointer570);
}
if(strncmp(res_cipher570, Iterated_100_times570, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher570, res_cipher570, structpointer570);
}
if(strncmp(res_cipher570, Iterated_1000_times570, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer570);
ite++;

unsigned char res_cipher571[16];
unsigned char res_uncipher571[16];
                      char key571[]={0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA,0xFA};
NESSIEencrypt(plain571, res_cipher571, structpointer571);
if(strncmp(res_cipher571, cipher571, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher571, res_uncipher571, structpointer571);
if(strncmp(res_uncipher571, decrypted571, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher571, plain571, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher571, res_cipher571, structpointer571);
}
if(strncmp(res_cipher571, Iterated_100_times571, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher571, res_cipher571, structpointer571);
}
if(strncmp(res_cipher571, Iterated_1000_times571, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer571);
ite++;

unsigned char res_cipher572[16];
unsigned char res_uncipher572[16];
                      char key572[]={0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB,0xFB};
NESSIEencrypt(plain572, res_cipher572, structpointer572);
if(strncmp(res_cipher572, cipher572, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher572, res_uncipher572, structpointer572);
if(strncmp(res_uncipher572, decrypted572, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher572, plain572, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher572, res_cipher572, structpointer572);
}
if(strncmp(res_cipher572, Iterated_100_times572, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher572, res_cipher572, structpointer572);
}
if(strncmp(res_cipher572, Iterated_1000_times572, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer572);
ite++;

unsigned char res_cipher573[16];
unsigned char res_uncipher573[16];
                      char key573[]={0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC};
NESSIEencrypt(plain573, res_cipher573, structpointer573);
if(strncmp(res_cipher573, cipher573, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher573, res_uncipher573, structpointer573);
if(strncmp(res_uncipher573, decrypted573, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher573, plain573, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher573, res_cipher573, structpointer573);
}
if(strncmp(res_cipher573, Iterated_100_times573, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher573, res_cipher573, structpointer573);
}
if(strncmp(res_cipher573, Iterated_1000_times573, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer573);
ite++;

unsigned char res_cipher574[16];
unsigned char res_uncipher574[16];
                      char key574[]={0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD};
NESSIEencrypt(plain574, res_cipher574, structpointer574);
if(strncmp(res_cipher574, cipher574, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher574, res_uncipher574, structpointer574);
if(strncmp(res_uncipher574, decrypted574, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher574, plain574, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher574, res_cipher574, structpointer574);
}
if(strncmp(res_cipher574, Iterated_100_times574, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher574, res_cipher574, structpointer574);
}
if(strncmp(res_cipher574, Iterated_1000_times574, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer574);
ite++;

unsigned char res_cipher575[16];
unsigned char res_uncipher575[16];
                      char key575[]={0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE};
NESSIEencrypt(plain575, res_cipher575, structpointer575);
if(strncmp(res_cipher575, cipher575, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher575, res_uncipher575, structpointer575);
if(strncmp(res_uncipher575, decrypted575, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher575, plain575, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher575, res_cipher575, structpointer575);
}
if(strncmp(res_cipher575, Iterated_100_times575, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher575, res_cipher575, structpointer575);
}
if(strncmp(res_cipher575, Iterated_1000_times575, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer575);
ite++;

unsigned char res_cipher576[16];
unsigned char res_uncipher576[16];
                      char key576[]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
NESSIEencrypt(plain576, res_cipher576, structpointer576);
if(strncmp(res_cipher576, cipher576, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
NESSIEdecrypt( cipher576, res_uncipher576, structpointer576);
if(strncmp(res_uncipher576, decrypted576, 16) != 0){ 
	 printf("Error : %d * ", ite);
	 return -1;
}
memcpy(res_cipher576, plain576, 16);
for(j=0; j<100; j++){ 
	NESSIEencrypt(res_cipher576, res_cipher576, structpointer576);
}
if(strncmp(res_cipher576, Iterated_100_times576, 16) != 0){ 
	 printf("Error : %d * 100", ite);
	 return -1;
}
for(j=0; j<1000 - 100; j++){ 
	NESSIEencrypt(res_cipher576, res_cipher576, structpointer576);
}
if(strncmp(res_cipher576, Iterated_1000_times576, 16) != 0){ 
	 printf("Error : %d * 1000", ite);
	 return -1;
}
free(structpointer576);
ite++;

}