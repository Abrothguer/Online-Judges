#include <bits/stdc++.h>

using namespace std;

int main(){
   string pais;
   ios::sync_with_stdio(false);
   while(cin >> pais){
      if(pais == "brasil" || pais == "portugal") cout << "Feliz Natal!" << endl;
      else if(pais == "alemanha") cout << "Frohliche Weihnachten!" << endl;
      else if(pais == "austria") cout << "Frohe Weihnacht!" << endl;
      else if(pais == "coreia") cout << "Chuk Sung Tan!" << endl;
      else if(pais == "grecia") cout << "Kala Christougena!" << endl;
      else if(pais == "espanha" || pais == "argentina" || pais == "mexico" || pais == "chile") cout << "Feliz Navidad!" << endl;
      else if(pais == "estados-unidos" || pais == "inglaterra" || pais == "australia" || pais == "antardida" || pais == "canada") cout << "Merry Christmas!" << endl;
      else if(pais == "suecia") cout << "God Jul!" << endl;
      else if(pais == "turquia") cout << "Mutlu Noeller" << endl;
      else if(pais == "irlanda") cout << "Nollaig Shona Dhuit!" << endl;
      else if(pais == "belgica") cout << "Zalig Kerstfeest!" << endl;
      else if(pais == "italia" || pais == "libia") cout << "Buon Natale!" << endl;
      else if(pais == "siria" || pais == "marrocos") cout << "Milad Mubarak!" << endl;
      else if(pais == "japao") cout << "Merii Kurisumasu!" << endl;
      else cout << "--- NOT FOUND ---" << endl;

   }
   return 0;
}
