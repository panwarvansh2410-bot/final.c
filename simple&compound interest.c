 // step 3

            # include <stdio.h>
            # include <math.h>
            int main () {
            
                int p = 7800;
                int r =5;
                int t = 3 ;

                float si = (p*r*t)/100.0;
                printf("%f\n", si);

                float A  =  p * pow(1+ r/100.0 ,t) ;
                printf("%f\n", A);

                float ci = (A - p) ;
                printf("%f", ci);

                return 0 ;
            }    


            // step 4 

            # include <stdio.h>
            # include <math.h>
            int main () {
            
                int principle = 7800;
                int rate =5;
                int time = 3 ;

                float simple  = (principle*rate*time)/100.0;
                printf("%f\n", simple );

                float Amount  =  principle * pow(1+ rate/100.0 ,time) ;
                printf("%f\n", Amount);

                float compound  = (Amount - principle) ;
                printf("%f\n", compound);

                return 0 ;
            }     


                  // step 5 

                  # include <stdio.h>
            # include <math.h>
            int main () {
            
                int principle ;
                printf("enter the principle amount : ");
                scanf("%d" , &principle );

                int rate ;
                printf("enter the rate :");
                scanf("%d", &rate);

                int time ;
                printf("enter the time :");
                scanf("%d", &time);

                float simple  = (principle*rate*time)/100.0;
                printf("%f\n", simple );

                float Amount  =  principle * pow(1+ rate/100.0 ,time) ;
                printf("%f\n", Amount);

                float compound  = (Amount - principle) ;
                printf("%f\n", compound);

                return 0 ;
            }     


                // step 6 

                # include <stdio.h>
            # include <math.h>
            int main () {
            
                int principle,rate,time ;
                printf("enter the principle amount : ");
                scanf("%d" , &principle );

                
                printf("enter the rate :");
                scanf("%d", &rate);

            
                printf("enter the time :");
                scanf("%d", &time);

                float simple  = (principle*rate*time)/100.0;
                printf("%f\n", simple );

                float Amount  =  principle * pow(1+ rate/100.0 ,time) ;
                printf("%f\n", Amount);

                float compound  = (Amount - principle) ;
                printf("%f\n", compound);

                return 0 ;
            }     