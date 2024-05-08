#include<stdio.h>
#define max 50
int partition(int dizi[],int altindis,int ustindis){
	int i,j,pivotdegeri,pivotindisi;
    pivotdegeri=dizi[altindis];
	j=altindis;
	for(i=altindis+1;i<=ustindis;i++){
		if(dizi[i]<pivotdegeri){
			j++;
			int temp=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=temp;
		}
	}
	pivotindisi=j;
	int temp2=dizi[altindis];
	dizi[altindis]=dizi[pivotindisi];
	dizi[pivotindisi]=temp2;
	return pivotindisi;
}

void quicksort(int dizi[],int alt,int ust){
	int pivotindisi;
	if(ust>alt){
		pivotindisi=partition(dizi,alt,ust);
		quicksort(dizi,alt,pivotindisi-1);
		quicksort(dizi,pivotindisi+1,ust);
	}
}

int main(){
	int n;
	printf("kac sayi girilcek");
	scanf("%d",&n);
	int dizi[max];
	for(int i=0;i<n;i++){
		scanf("%d",&dizi[i]);
	}
	quicksort(dizi,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d-",dizi[i]);
	}
	return 0;
}
