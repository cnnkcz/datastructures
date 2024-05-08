#include<stdio.h>
#define max 50
void selectionsort(int dizi[],int n){
	int i,j,min,temp;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(dizi[j]<dizi[min]){
				min=j;
			}
		}
		temp=dizi[i];
		dizi[i]=dizi[min];
		dizi[min]=temp;
	}
}
int main(){
	int dizi[max];
	int n;
	printf("kac elemanli");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&dizi[i]);
	}
	selectionsort(dizi,n);
	for(int i=0;i<n;i++){
		printf("%d-",dizi[i]);
	}
	
	
	
	return 0;
}

