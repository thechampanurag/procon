#include <string>
void test(std::string input, std::string expect);
void testloader(){ //insert test cases here
/*0*/ test( "802b1200/01400c20", "53c40cfc" );
/*1*/ test( "28301068/84080504", "d64fef94" );
/*2*/ test( "100a4010/80010004", "e241850c" );
/*3*/ test( "81020400/000000fc", "0e3cfbfc" );
/*4*/ test( "80225020/7e082080", "7fdd24d0" );
/*5*/ test( "01201200/40102008", "fe1861fc" );
/*6*/ test( "00201000/01000200", "43c48f08" );
/*7*/ test( "00891220/81020408", "ff060c1c" );
/*8*/ test( "410033c0/0c300000", "3cf0c000" );
/*9*/ test( "00000000/01400a00", "7bf7bf78" );
/*10*/ test( "00000000/20000a00", "fca2bf28" );
/*11*/ test( "00000000/00000000", "00000000" );
/*12*/ test( "00cafe00/00000000", "00000000" );
/*13*/ test( "aaabaaaa/50000000", "51441040" );
/*14*/ test( "a95a95a8/56a56a54", "56a56a54" );
/*15*/ test( "104fc820/80201010", "ea30345c" );
/*16*/ test( "4a940214/05000008", "05000008" );
/*17*/ test( "00908000/05000200", "ff043f48" );
/*18*/ test( "00c48c00/fe1861fc", "ff3873fc" );
/*19*/ test( "00000004/81020400", "fffffff0" );
/*20*/ test( "111028b0/40021100", "e08fd744" );
/*21*/ test( "6808490c/01959000", "17f7b650" );
/*22*/ test( "30821004/81014040", "c75de5f8" );
/*23*/ test( "0004c810/10003100", "fe4937c4" );
/*24*/ test( "12022020/88200000", "edf08208" );
/*25*/ test( "2aa92098/01160000", "45165964" );
/*26*/ test( "00242940/10010004", "fc43c43c" );
/*27*/ test( "483c2120/11004c00", "33c3de10" );
/*28*/ test( "10140140/44004a04", "eda3fe3c" );
/*29*/ test( "0c901d38/72602200", "f36da280" );
}