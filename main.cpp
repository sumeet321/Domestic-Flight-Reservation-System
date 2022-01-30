#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Layout()
{
  cout << "1. Book a Flight" << endl;
  cout << "2. Cancel Flight" << endl;
  cout << "3. Check Flight Status" << endl;
  cout << "4. Quit" << endl << endl;
  cout << "**************************";
}

int main()
{
  cout << endl;
  cout << "*****WELCOME TO U.S. DOMESTIC TRAVEL BOOKINGS!*****" << endl << endl;
  int choice;
  string destinationAir;
  string departingAir;
  string departDate;
  string returnDate;
  string name;
  int timing; //assigned to numbers 1-8
  string atime; // displays the departing time
  int referenceNum;
  fstream file;

  do
  {
  Layout();
  cout << endl << endl;

  cout << "Choice: ";
  cin >> choice;
  cout << endl;

  switch(choice)
  {
  case 1:
    system("clear");
    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, name);
    cout << endl;
    cout << "Please choose departure time" << endl << endl << "1. 12:00 A.M." << endl << "2. 3:00 A.M." << endl << "3. 6:00 A.M." << endl << "4. 9:00 A.M." << endl << "5. 12:00 P.M." << endl << "6. 3:00 P.M." << endl << "7. 6:00 P.M." << endl << "8. 9:00 P.M." << endl << endl << "Choice: ";
    cin >> timing;
    cout << endl;
    if (timing == 1)
    {
      atime = "12:00 A.M.";
    }
    else if (timing == 2)
    {
      atime = "3:00 A.M.";
    }
    else if (timing == 3)
    {
      atime = "6:00 A.M.";
    }
    else if (timing == 4)
    {
      atime = "9:00 A.M.";
    }
    else if (timing == 5)
    {
      atime = "12:00 P.M.";
    }
    else if (timing == 6)
    {
      atime = "3:00 P.M.";
    }
    else if (timing == 7)
    {
      atime = "6:00 P.M.";
    }
    else if (timing == 8)
    {
      atime = "9:00 P.M.";
    }
    else
    {
      cout << "Invalid choice!";
      main();
    }
    system("clear");
    cout << "Which airport are you departing from? (3 uppercase Letters): ";
    cin >> departingAir;
    cout << endl;
    if ((departingAir == "DHN") || (departingAir == "HSV") || (departingAir == "MOB") || (departingAir == "MGM") || (departingAir == "ANC") || (departingAir == "FAI") || (departingAir == "JNU") || (departingAir == "FLG") || (departingAir == "PHX") || (departingAir == "TUS") || (departingAir == "YUM") || (departingAir == "FYV") || (departingAir == "LIT") || (departingAir == "XNA") || (departingAir == "BUR") || (departingAir == "FAT") || (departingAir == "LGB") || (departingAir == "LAX") || (departingAir == "OAK") || (departingAir == "ONT") || (departingAir == "PSP") || (departingAir == "SMF") || (departingAir == "SAN") || (departingAir == "SFO") || (departingAir == "SJC") || (departingAir == "SNA") || (departingAir == "ASE") || (departingAir == "COS") || (departingAir == "DEN") || (departingAir == "GJT") || (departingAir == "PUB") || (departingAir == "BDL") || (departingAir == "HVN") || (departingAir == "IAD") || (departingAir == "DCA") || (departingAir == "DAB") || (departingAir == "FLL") || (departingAir == "RSW") || (departingAir == "JAX") || (departingAir == "EYW") || (departingAir == "MIA") || (departingAir == "MCO") || (departingAir == "PNS") || (departingAir == "PIE") || (departingAir == "SRQ") || (departingAir == "TPA") || (departingAir == "PBI") || (departingAir == "PFN") || (departingAir == "ATL") || (departingAir == "AGS") || (departingAir == "SAV") || (departingAir == "ITO") || (departingAir == "HNL") || (departingAir == "OGG") || (departingAir == "KOA") || (departingAir == "LIH") || (departingAir == "BOI") || (departingAir == "MDW") || (departingAir == "ORD") || (departingAir == "MLI") || (departingAir == "PIA") || (departingAir == "EVV") || (departingAir == "FWA") || (departingAir == "IND") || (departingAir == "SBN") || (departingAir == "CID") || (departingAir == "DSM") || (departingAir == "ICT") || (departingAir == "LEX") || (departingAir == "SDF") || (departingAir == "BTR") || (departingAir == "MSY") || (departingAir == "SHV") || (departingAir == "AUG") || (departingAir == "BGR") || (departingAir == "PWM") || (departingAir == "BWI") || (departingAir == "BOS") || (departingAir == "HYA") || (departingAir == "ACK") || (departingAir == "ORH") || (departingAir == "BTL") || (departingAir == "DTW") || (departingAir == "DET") || (departingAir == "FNT") || (departingAir == "GRR") || (departingAir == "AZO") || (departingAir == "LAN") || (departingAir == "MBS") || (departingAir == "DLH") || (departingAir == "MSP") || (departingAir == "RST") || (departingAir == "GPT") || (departingAir == "JAN") || (departingAir == "MCI") || (departingAir == "STL") || (departingAir == "SGF") || (departingAir == "BIL") || (departingAir == "LNK") || (departingAir == "OMA") || (departingAir == "LAS") || (departingAir == "RNO") || (departingAir == "MHT") || (departingAir == "ACY") || (departingAir == "EWR") || (departingAir == "TTN") || (departingAir == "ABQ") || (departingAir == "ALM") || (departingAir == "ALB") || (departingAir == "BUF") || (departingAir == "ISP") || (departingAir == "JFK") || (departingAir == "LGA") || (departingAir == "SWF") || (departingAir == "ROC") || (departingAir == "SYR") || (departingAir == "HPN") || (departingAir == "AVL") || (departingAir == "CLT") || (departingAir == "FAY") || (departingAir == "GSO") || (departingAir == "RDU") || (departingAir == "INT") || (departingAir == "BIS") || (departingAir == "FAR") || (departingAir == "CAK") || (departingAir == "CVG") || (departingAir == "CLE") || (departingAir == "CMH") || (departingAir == "DAY") || (departingAir == "TOL") || (departingAir == "OKC") || (departingAir == "TUL") || (departingAir == "EUG") || (departingAir == "PDX") || (departingAir == "HIO") || (departingAir == "SLE") || (departingAir == "ABE") || (departingAir == "ERI") || (departingAir == "MDT") || (departingAir == "PHL") || (departingAir == "PIT") || (departingAir == "AVP") || (departingAir == "PVD") || (departingAir == "CHS") || (departingAir == "CAE") || (departingAir == "GSP") || (departingAir == "MYR") || (departingAir == "PIR") || (departingAir == "RAP") || (departingAir == "FSD") || (departingAir == "TRI") || (departingAir == "CHA") || (departingAir == "TYS") || (departingAir == "MEM") || (departingAir == "BNA") || (departingAir == "AMA") || (departingAir == "AUS") || (departingAir == "CRP") || (departingAir == "DAL") || (departingAir == "DFW") || (departingAir == "ELP") || (departingAir == "HOU") || (departingAir == "IAH") || (departingAir == "LBB") || (departingAir == "MAF") || (departingAir == "SAT") || (departingAir == "SLC") || (departingAir == "BTV") || (departingAir == "MPV") || (departingAir == "RUT") || (departingAir == "IAD") || (departingAir == "PHF") || (departingAir == "ORF") || (departingAir == "RIC") || (departingAir == "ROA") || (departingAir == "PSC") || (departingAir == "SEA") || (departingAir == "GEG") || (departingAir == "CRW") || (departingAir == "CKB") || (departingAir == "HTS") || (departingAir == "GRB") || (departingAir == "MSN") || (departingAir == "MKE") || (departingAir == "CPR") || (departingAir == "CYS") || (departingAir == "JAC") || (departingAir == "RKS"))
    {
      cout << "Enter destination airport (3 Uppercase Letters): ";
      cin >> destinationAir;
      cout << endl;
      if ((destinationAir == "DHN") || (destinationAir == "HSV") || (destinationAir == "MOB") || (destinationAir == "MGM") || (destinationAir == "ANC") || (destinationAir == "FAI") || (destinationAir == "JNU") || (destinationAir == "FLG") || (destinationAir == "PHX") || (destinationAir == "TUS") || (destinationAir == "YUM") || (destinationAir == "FYV") || (destinationAir == "LIT") || (destinationAir == "XNA") || (destinationAir == "BUR") || (destinationAir == "FAT") || (destinationAir == "LGB") || (destinationAir == "LAX") || (destinationAir == "OAK") || (destinationAir == "ONT") || (destinationAir == "PSP") || (destinationAir == "SMF") || (destinationAir == "SAN") || (destinationAir == "SFO") || (destinationAir == "SJC") || (destinationAir == "SNA") || (destinationAir == "ASE") || (destinationAir == "COS") || (destinationAir == "DEN") || (destinationAir == "GJT") || (destinationAir == "PUB") || (destinationAir == "BDL") || (destinationAir == "HVN") || (destinationAir == "IAD") || (destinationAir == "DCA") || (destinationAir == "DAB") || (destinationAir == "FLL") || (destinationAir == "RSW") || (destinationAir == "JAX") || (destinationAir == "EYW") || (destinationAir == "MIA") || (destinationAir == "MCO") || (destinationAir == "PNS") || (destinationAir == "PIE") || (destinationAir == "SRQ") || (destinationAir == "TPA") || (destinationAir == "PBI") || (destinationAir == "PFN") || (destinationAir == "ATL") || (destinationAir == "AGS") || (destinationAir == "SAV") || (destinationAir == "ITO") || (destinationAir == "HNL") || (destinationAir == "OGG") || (destinationAir == "KOA") || (destinationAir == "LIH") || (destinationAir == "BOI") || (destinationAir == "MDW") || (destinationAir == "ORD") || (destinationAir == "MLI") || (destinationAir == "PIA") || (destinationAir == "EVV") || (destinationAir == "FWA") || (destinationAir == "IND") || (destinationAir == "SBN") || (destinationAir == "CID") || (destinationAir == "DSM") || (destinationAir == "ICT") || (destinationAir == "LEX") || (destinationAir == "SDF") || (destinationAir == "BTR") || (destinationAir == "MSY") || (destinationAir == "SHV") || (destinationAir == "AUG") || (destinationAir == "BGR") || (destinationAir == "PWM") || (destinationAir == "BWI") || (destinationAir == "BOS") || (destinationAir == "HYA") || (destinationAir == "ACK") || (destinationAir == "ORH") || (destinationAir == "BTL") || (destinationAir == "DTW") || (destinationAir == "DET") || (destinationAir == "FNT") || (destinationAir == "GRR") || (destinationAir == "AZO") || (destinationAir == "LAN") || (destinationAir == "MBS") || (destinationAir == "DLH") || (destinationAir == "MSP") || (destinationAir == "RST") || (destinationAir == "GPT") || (destinationAir == "JAN") || (destinationAir == "MCI") || (destinationAir == "STL") || (destinationAir == "SGF") || (destinationAir == "BIL") || (destinationAir == "LNK") || (destinationAir == "OMA") || (destinationAir == "LAS") || (destinationAir == "RNO") || (destinationAir == "MHT") || (destinationAir == "ACY") || (destinationAir == "EWR") || (destinationAir == "TTN") || (destinationAir == "ABQ") || (destinationAir == "ALM") || (destinationAir == "ALB") || (destinationAir == "BUF") || (destinationAir == "ISP") || (destinationAir == "JFK") || (destinationAir == "LGA") || (destinationAir == "SWF") || (destinationAir == "ROC") || (destinationAir == "SYR") || (destinationAir == "HPN") || (destinationAir == "AVL") || (destinationAir == "CLT") || (destinationAir == "FAY") || (destinationAir == "GSO") || (destinationAir == "RDU") || (destinationAir == "INT") || (destinationAir == "BIS") || (destinationAir == "FAR") || (destinationAir == "CAK") || (destinationAir == "CVG") || (destinationAir == "CLE") || (destinationAir == "CMH") || (destinationAir == "DAY") || (destinationAir == "TOL") || (destinationAir == "OKC") || (destinationAir == "TUL") || (destinationAir == "EUG") || (destinationAir == "PDX") || (destinationAir == "HIO") || (destinationAir == "SLE") || (destinationAir == "ABE") || (destinationAir == "ERI") || (destinationAir == "MDT") || (destinationAir == "PHL") || (destinationAir == "PIT") || (destinationAir == "AVP") || (destinationAir == "PVD") || (destinationAir == "CHS") || (destinationAir == "CAE") || (destinationAir == "GSP") || (destinationAir == "MYR") || (destinationAir == "PIR") || (destinationAir == "RAP") || (destinationAir == "FSD") || (destinationAir == "TRI") || (destinationAir == "CHA") || (destinationAir == "TYS") || (destinationAir == "MEM") || (destinationAir == "BNA") || (destinationAir == "AMA") || (destinationAir == "AUS") || (destinationAir == "CRP") || (destinationAir == "DAL") || (destinationAir == "DFW") || (destinationAir == "ELP") || (destinationAir == "HOU") || (destinationAir == "IAH") || (destinationAir == "LBB") || (destinationAir == "MAF") || (destinationAir == "SAT") || (destinationAir == "SLC") || (destinationAir == "BTV") || (destinationAir == "MPV") || (destinationAir == "RUT") || (destinationAir == "IAD") || (destinationAir == "PHF") || (destinationAir == "ORF") || (destinationAir == "RIC") || (destinationAir == "ROA") || (destinationAir == "PSC") || (destinationAir == "SEA") || (destinationAir == "GEG") || (destinationAir == "CRW") || (destinationAir == "CKB") || (destinationAir == "HTS") || (destinationAir == "GRB") || (destinationAir == "MSN") || (destinationAir == "MKE") || (destinationAir == "CPR") || (destinationAir == "CYS") || (destinationAir == "JAC") || (destinationAir == "RKS"))
      {
      do
      {
      cout << "Enter departing date to destination(mm/dd/yy): ";
      cin >> departDate;
      } while (departDate.size() != 8); // forces user to enter exactly 8 characters
      do
      {
      cout << "Enter return date from destination(mm/dd/yy): ";
      cin >> returnDate;
      } while (returnDate.size() != 8);
      cout << endl;
      cout << "Flight is successfully booked!" << endl;
      cout << endl << endl;
      

      srand(time(0)); // generates random numbers every time
      referenceNum = rand() % 1000000;
      cout << "Flight reference number is " << referenceNum << endl << endl;

      ofstream(name + ".txt");
      file << name << endl << referenceNum << endl << atime << endl << departDate << " to " << returnDate << endl << departingAir << " (-->) " << destinationAir;
      file.close();
      }
      else
      {
        cout << "Invalid U.S. Destination Airport" << endl << endl;
      }
    }
    else
    {
      cout << "Invalid U.S. Departing Airport" << endl << endl;
    }
    break;

  case 2:
    int cancelNum;
    cout << "Enter Reference Number: ";
    cin >> cancelNum;
    cout << endl;
    if(cancelNum != referenceNum)
    {
      cout << "Flight does not exist!" << endl << endl;
    }
    else
    {
      name.erase();
      atime.erase();
      departDate.erase();
      returnDate.erase();
      departingAir.erase();
      destinationAir.erase();
      cout << "Flight #" << referenceNum << " is canceled.";
      cout << endl << endl;
    }
    break;
    
  case 3:
    int num;
    cout << "Enter reference number: ";
    cin >> num;
    cout << endl;
    if(num != referenceNum)
    {
      cout << "Flight does not exist!" << endl << endl;
    }
    else 
    {
      if (name.size() == 0)
      {
        cout << "Flight does not exist!" << endl << endl;
      }
      else
      {
      cout << "Hello, " << name << "! Flight #" << referenceNum << " is booked " << "at " << atime << " from " << departDate << " to " << returnDate << " " << "(" << departingAir << " --> " << destinationAir << ")"; 
      cout << endl << endl;
    }}
  break;
  }
  } while (choice != 4);
  return 0;
}