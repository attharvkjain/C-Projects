//Project: Quiz Application
//RANDOMIZER => number corresponds to a specific question => question with ans defined => if matches ans switch case
#include <stdio.h>
#include <stdlib.h>

int question_bank(int r);
int main()
{
    int r, input, count=0;
    srand((unsigned)time(NULL));   //dont understand time_t and srand just yet
    printf("Seed: %d\n", time(0));
    printf("\t\t\t\t\t\t    TIME FOR A QUIZ!\n\t\t\t\t\t\t  ====================\n");
    
    for(int i=0; i<5; ++i)
    {
    r = rand()%10 + 1;   //rand alone will always give the same number evertime you run, need srand
    int ans = question_bank(r);
    printf("Ans: ");
    scanf("%d", &input);
    if(input==ans)
    {
        printf("CORRECT!\n--------\n");
        count++;
    }
    else
    {
    printf("WRONG!\n------\n");
    }
    }
    printf("=================\n");
    printf("You got %d/5 right\n", count);
    
    if(count<4)
    printf("Better luck next time:)");
    else if(count==4)
    printf("Great job!");
    else
    printf("CONGRATULATIONS!!");
    // while(i<5)
    // {
    // for(i=0; i<5; ++i)
    // {
    //     for(a=0; a<5; a++)
    // {
    //     if(i==a)
    //     continue;
    // if(randArray[i]==randArray[a])
    // {
    //   randArray[i] = rand()%10 + 1; 
    // }
    // }
    // printf("%d", randArray[a]);
    // }
    // }
    return 0;
}
int question_bank(int r)
{
    if(r==1)
    {
        printf("Q.Who is the current president of India(2023)?\n1)Ram Nath Kovind\n2)Droupadi Murmu\n3)Narendra Modi\n4)Pranab Mukherjee\n");
        int ans=2;
        return ans;
    }
    if(r==2)
    {
        printf("Q.What is the fear of deep water called?\n1)Trypophobia\n2)Pyrophobia\n3)Thalassophobia\n4)Ornithophobia\n");
        int ans=3;
        return ans;
    }
    if(r==3)
    {
        printf("Q.What is the name of the French author who wrote the book Around the World in Eighty Days?\n1)Jules Verne\n2)Dan Brown\n3)Ernest Hemingway\n4)J.K.Rowling\n");
        int ans=1;
        return ans;
    }
    if(r==4)
    {
        printf("Q.What is the current(2023) largest star known to humans?\n1)Rigel\n2)VY Canis Majoris\n3)Betelgeuse\n4)UY Scuti\n");
        int ans=4;
        return ans;
    }
    if(r==5)
    {
        printf("Q.Which animals among these is extint(2023)?\n1)Bengal tiger\n2)Red panda\n3)Tasmanian tiger\n4)Kashmir stag\n");
        int ans=3;
        return ans;
    }
    if(r==6)
    {
        printf("Q.Which planet spins backward relative to the others?\n1)Uranus\n2)Saturn\n3)Mercury\n4)Venus\n");
        int ans=4;
        return ans;
    }
    if(r==7)
    {
        printf("Q.How much wood would a woodchuck chuck, if a woodchuck could chuck wood?\n1)Sev Puri\n2)14\n3)As much wood as a woodchuck could chuck, if a woodchuck could chuck wood.\n4)huh?\n");
        int ans=3;
        return ans;
    }
    if(r==8)
    {
        printf("Q.Where were the first Olympics held?\n1)Paris, France\n2)Athens, Greece\n3)Berlin, Germany\n4)Antwerp, Belgium\n");
        int ans=2;
        return ans;
    }
    if(r==9)
    {
        printf("Q.What is the island group of India that separates the Bay of Bengal from the Andaman Sea?\n1)Andaman and Nicobar Islands\n2)Lakshadweep Islands\n3)Sri Lanka\n4)Caribbean Islands\n");
        int ans=1;
        return ans;
    }
    if(r==10)
    {
        printf("Q.Which country has the most pyramids in the world?\n1)Sudan\n2)Egypt\n3)Nigeria\n4)Indonesia\n");
        int ans=1;
        return ans;
    }
    else
    printf("ERROR");
    return 0;
}



