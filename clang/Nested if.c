 #include <stdio.h> 
/*
if (cond 1) {
      if (cond 2){
          // block 
    }
}
*/
  main (){
       int maths, phy, chem, subtotal, total;
         printf("\n Enter the maths,phy,chem marks");
         scanf("%d %d %d", &maths,&phy,&chem);
         
         if(maths>=65 && phy>=55 && chem >=50){
            subtotal= maths+phy;
            total = maths+phy+chem;
         if(subtotal>=140 || total>=190){
         	printf("\n Eligible ");
		 }
		  else{
		  	printf("\n inner not eligible ");
		  }

		  } else{
		  	printf("\n not eligible ");
		  }
	      
}
