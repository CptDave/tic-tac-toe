
//create our table variables
namespace screenVar
{
   int t1, t2, t3, t4, t5, t6, t7, t8, t9;     
}

bool runAIFinish()
{
     //horizontal
     if (screenVar::t1 == 2 and screenVar::t2 == 2 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else if (screenVar::t1 == 2 and screenVar::t3 == 2 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     else if (screenVar::t2 == 2 and screenVar::t3 == 2 and screenVar::t1 == 0) { screenVar::t2 = 2;
     return true; }
     
     else if (screenVar::t4 == 2 and screenVar::t5 == 2 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t4 == 2 and screenVar::t6 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 2 and screenVar::t6 == 2 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     
     else if (screenVar::t7 == 2 and screenVar::t8 == 2 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t7 == 2 and screenVar::t9 == 2 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t8 == 2 and screenVar::t9 == 2 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     
     //vertical
     else if (screenVar::t1 == 2 and screenVar::t4 == 2 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t1 == 2 and screenVar::t7 == 2 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     else if (screenVar::t4 == 2 and screenVar::t7 == 2 and screenVar::t1 == 0) { screenVar::t2 = 2;
     return true; }
     
     else if (screenVar::t2 == 2 and screenVar::t5 == 2 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t2 == 2 and screenVar::t8 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 2 and screenVar::t8 == 2 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     
     else if (screenVar::t3 == 2 and screenVar::t6 == 2 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t3 == 2 and screenVar::t9 == 2 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t6 == 2 and screenVar::t9 == 2 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     
     //diagonal
     else if (screenVar::t1 == 2 and screenVar::t5 == 2 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t1 == 2 and screenVar::t9 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 2 and screenVar::t9 == 2 and screenVar::t1 == 0) { screenVar::t2 = 2;
     return true; }
     
     else if (screenVar::t3 == 2 and screenVar::t5 == 2 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t3 == 2 and screenVar::t7 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 2 and screenVar::t7 == 2 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else { return false; }
}

bool runAIProtect()
{
     //horizontal
     if (screenVar::t1 == 1 and screenVar::t2 == 1 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else if (screenVar::t1 == 1 and screenVar::t3 == 1 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     else if (screenVar::t2 == 1 and screenVar::t3 == 1 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t4 == 1 and screenVar::t5 == 1 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t4 == 1 and screenVar::t6 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t6 == 1 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     
     else if (screenVar::t7 == 1 and screenVar::t8 == 1 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t7 == 1 and screenVar::t9 == 1 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t8 == 1 and screenVar::t9 == 1 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     
     //vertical
     else if (screenVar::t1 == 1 and screenVar::t4 == 1 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t1 == 1 and screenVar::t7 == 1 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     else if (screenVar::t4 == 1 and screenVar::t7 == 1 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t2 == 1 and screenVar::t5 == 1 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t2 == 1 and screenVar::t8 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t8 == 1 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     
     else if (screenVar::t3 == 1 and screenVar::t6 == 1 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t3 == 1 and screenVar::t9 == 1 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t6 == 1 and screenVar::t9 == 1 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     
     //diagonal
     else if (screenVar::t1 == 1 and screenVar::t5 == 1 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t1 == 1 and screenVar::t9 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t9 == 1 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t3 == 1 and screenVar::t5 == 1 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t3 == 1 and screenVar::t7 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t7 == 1 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else { return false; }
}

bool finish()
{
     //horizontal
     if (screenVar::t1 == 2 and screenVar::t2 == 2 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else if (screenVar::t1 == 2 and screenVar::t3 == 2 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     else if (screenVar::t2 == 2 and screenVar::t3 == 2 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t4 == 1 and screenVar::t5 == 1 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t5 == 1 and screenVar::t6 == 1 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     else if (screenVar::t4 == 1 and screenVar::t6 == 1 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     
     else if (screenVar::t7 == 1 and screenVar::t8 == 2 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t7 == 1 and screenVar::t9 == 2 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t8 == 1 and screenVar::t9 == 2 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     
     //vertical
     else if (screenVar::t1 == 2 and screenVar::t4 == 2 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t1 == 2 and screenVar::t7 == 2 and screenVar::t4 == 0) { screenVar::t4 = 2;
     return true; }
     else if (screenVar::t4 == 2 and screenVar::t7 == 2 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t2 == 2 and screenVar::t5 == 2 and screenVar::t8 == 0) { screenVar::t8 = 2;
     return true; }
     else if (screenVar::t2 == 2 and screenVar::t8 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 2 and screenVar::t8 == 2 and screenVar::t2 == 0) { screenVar::t2 = 2;
     return true; }
     
     else if (screenVar::t3 == 2 and screenVar::t6 == 2 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t3 == 2 and screenVar::t9 == 2 and screenVar::t6 == 0) { screenVar::t6 = 2;
     return true; }
     else if (screenVar::t6 == 2 and screenVar::t9 == 2 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     
     
     //diagonal
     else if (screenVar::t1 == 2 and screenVar::t5 == 2 and screenVar::t9 == 0) { screenVar::t9 = 2;
     return true; }
     else if (screenVar::t1 == 2 and screenVar::t9 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t5 == 2 and screenVar::t9 == 2 and screenVar::t1 == 0) { screenVar::t1 = 2;
     return true; }
     
     else if (screenVar::t3 == 2 and screenVar::t5 == 2 and screenVar::t7 == 0) { screenVar::t7 = 2;
     return true; }
     else if (screenVar::t3 == 2 and screenVar::t7 == 2 and screenVar::t5 == 0) { screenVar::t5 = 2;
     return true; }
     else if (screenVar::t7 == 2 and screenVar::t5 == 2 and screenVar::t3 == 0) { screenVar::t3 = 2;
     return true; }
     else { return false; }
}

void runAIAttack()
{
     if (!finish())
     {
           if (screenVar::t1 == 0) { screenVar::t1 = 2; }
           else if (screenVar::t3 == 0) { screenVar::t3 = 2; }
           else if (screenVar::t9 == 0) { screenVar::t9 = 2; }
           else if (screenVar::t7 == 0) { screenVar::t7 = 2; }
         
           //the win
           else if (screenVar::t2 == 0) { screenVar::t2 = 2; }
           else if (screenVar::t6 == 0) { screenVar::t6 = 2; }
           else if (screenVar::t8 == 0) { screenVar::t8 = 2; }
           else if (screenVar::t4 == 0) { screenVar::t4 = 2; }
           else if (screenVar::t5 == 0) { screenVar::t5 = 2; }     
     }
}
