#include <stdio.h>
int main(){
    
    int price=[1100,900,200,100];
    int gst=[18,12,28,0];
    int quantity=[1,4,3,2];
   int total=[1100,3600,600,200];
   int total_gst=[198,432,120,0]
   for(i=1;i<5;i++){
      if(total[i]>500){
         total[i]=(5*100)/total[i];
      }
   }
   for(i=1;i<5;i++){
     int total_amount=max(total[1]+totla[2]+total[3]+total[4]);
   }
   for(i=0;i<5;i++){
      int max_gst=max(total_gst[i]);
   }
   return total_amount;
   return max_gst;
   };
