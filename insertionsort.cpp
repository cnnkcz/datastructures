#include<stdio.h>
#define max 50

void insertionsort(int dizi[],int n){
	int i,j,mevcut;
	for(i=1;i<n;i++){
		mevcut=dizi[i];
		j=i;
		while(j>0&&mevcut<dizi[j-1]){
			dizi[j]=dizi[j-1];
			j--;
		}
		dizi[j]=mevcut;
	}
}



int main(){
	int dizi[max],n;
	printf("kac sayi girilcek");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&dizi[i]);
	}
	insertionsort(dizi,n);
	for(int i=0;i<n;i++){
		printf("%d-",dizi[i]);
	}
	
	return 0;
}
