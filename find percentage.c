// step 3
                     

# include <stdio.h>

int main() {

    int p = 82;
    int c = 94;
    int m = 76;
    int e = 77;
    int h = 83;

    int sum  = p + c + m + e + h;
    float per = (sum )/500.0 * 100;
    printf("%f" , per);
}    



// step 4 


# include <stdio.h>

int main() {

    int physics  = 82;
    int chemistry  = 94;
    int mathematics = 76;
    int english = 77;
    int hindi = 83;

    int sum= physics + chemistry + mathematics + english + hindi;
    float percentage = (sum)/500.0 *100;
    printf("percentage : %f", percentage);
}  


// step 5

     
# include <stdio.h>

int main() {

    int physics ;
    printf("enter the marks of physics :");
    scanf("%d", &physics);

    int mathematics;
    printf("enter the marks of mathematics :");
    scanf("%d", &mathematics);

    int chemistry ;
    printf("enter the marks of chemistry :");
    scanf("%d", &chemistry);

    int hindi ;
    printf("enter the marks of hindi:");
    scanf("%d", &hindi);

    int english ;
    printf("enter the marks of english :");
    scanf("%d", &english);

    int sum = physics + chemistry + mathematics + english + hindi;
    float percentage = (sum)/500.0 *100;
    printf("percentage of student is : %f", percentage);
     
}
   
  
   
   // step 6
               
   # include <stdio.h>

int main() {

    int physics , chemistry , mathematics , hindi , english, sum;


    printf("enter the marks of physics :");
    scanf("%d", &physics);

    printf("enter the marks of mathematics :");
    scanf("%d", &mathematics);

    printf("enter the marks of chemistry :");
    scanf("%d", &chemistry);

    printf("enter the marks of hindi:");
    scanf("%d", &hindi);

    printf("enter the marks of english :");
    scanf("%d", &english);

    sum = physics + chemistry + mathematics + english + hindi;

    float percentage = (sum)/500.0 *100;
    printf("percentage of student is : %f", percentage);
 
}            

