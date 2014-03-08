bool checkWin()
{
     //PLAYER
     //horizontal
     if (screenVar::t1 == 1 and screenVar::t2 == 1 and screenVar::t3 == 1) { return true; }
     if (screenVar::t4 == 1 and screenVar::t5 == 1 and screenVar::t6 == 1) { return true; }
     if (screenVar::t7 == 1 and screenVar::t8 == 2 and screenVar::t9 == 1) { return true; }
     
     //vertical
     if (screenVar::t1 == 1 and screenVar::t4 == 1 and screenVar::t7 == 1) { return true; }
     if (screenVar::t2 == 1 and screenVar::t5 == 1 and screenVar::t8 == 1) { return true; }
     if (screenVar::t3 == 1 and screenVar::t6 == 1 and screenVar::t9 == 1) { return true; }
     
     //diagonal
     if (screenVar::t1 == 1 and screenVar::t5 == 1 and screenVar::t9 == 1) { return true; }
     if (screenVar::t3 == 1 and screenVar::t5 == 1 and screenVar::t7 == 1) { return true; }
     else { return false; }
}

bool checkWinComp()
{
   //COMPUTER
     if (screenVar::t1 == 2 and screenVar::t2 == 2 and screenVar::t3 == 2) { return true; }
     if (screenVar::t4 == 2 and screenVar::t5 == 2 and screenVar::t6 == 2) { return true; }
     if (screenVar::t7 == 2 and screenVar::t8 == 2 and screenVar::t9 == 2) { return true; }
     
     //vertical
     if (screenVar::t1 == 2 and screenVar::t4 == 2 and screenVar::t7 == 2) { return true; }
     if (screenVar::t2 == 2 and screenVar::t5 == 2 and screenVar::t8 == 2) { return true; }
     if (screenVar::t3 == 2 and screenVar::t6 == 2 and screenVar::t9 == 2) { return true; }
     
     //diagonal
     if (screenVar::t1 == 2 and screenVar::t5 == 2 and screenVar::t9 == 2) { return true; }
     if (screenVar::t3 == 2 and screenVar::t5 == 2 and screenVar::t7 == 2) { return true; }
     else { return false; }      
}
