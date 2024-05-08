#include<stdio.h>
#define max 50
void bubblesort(int dizi[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(dizi[j]<dizi[j-1]){
				int temp=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=temp;
			}
		}
	}
}
int main(){
	int dizi[max],n;
	printf("kac sayi girilcek");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&dizi[i]);
	}
	bubblesort(dizi,n);
	for(int i=0;i<n;i++){
		printf("%d-",dizi[i]);
	}
}
