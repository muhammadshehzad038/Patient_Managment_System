#include<iostream>
#include<string>

using namespace std;
struct Patient{
	string name;
	string disease;
	int id_no;
	int contact_no;
};
void makePatientmanual(Patient pts[], int& NOPatients){
	for(int i=0;i<NOPatients;i++){
		cout<<"\n\tEnter name of patient"<<i+1<<": ";
		cin>>pts[i].name;
		cout<<"\n\tEnter disease of patient"<<i+1<<": ";
		cin>>pts[i].disease;
		cout<<"\n\tEnter id of patient"<<i+1<<": ";
		cin>>pts[i].id_no;
		cout<<"\n\tEnter contact number of patient"<<i+1<<": ";
		cin>>pts[i].contact_no;
	}
}
void addpatient(Patient pts[],int& Nopatients){
	if(Nopatients==0){
		cout<<"Alert!No patient found please first add patient manual"<<endl;
		
	}else{
		int i=0;
		cout<<"\tEnter name of patient"<<i+1<<":";
		cin>>pts[Nopatients].name;
		cout<<"\tenter disease of patient"<<i+1<<":";
		cin>>pts[Nopatients].disease;
		cout<<"\tenter id of patient"<<i+1<<":";
		cin>>pts[Nopatients].id_no;
		cout<<"\tenter contact number of patient"<<i+1<<":";
		cin>>pts[Nopatients].contact_no;
	}	Nopatients++;
}
void deletePatient (Patient pts[],int& NOPatients,int id_no,int cho){
	if(NOPatients==0){
		cout<<"Alert!NO patient found first you want to add patient first"<<endl;
		
	}else{
		cout<<"\n\t 1) for delete patient"<<endl;
		cout<<"\n\t 2) for delete a specific patient"<<endl;
		cout<<"\t\tEnter number of choice:";
		cin>>cho;
		switch(cho){
			case 1:
				NOPatients=0;
				cout<<"\t patients has been sucessfully removed from manual"<<endl;
				break;
			case 2:
				cout<<"\t Enter no of patient id you want to delete:";
				cin>>id_no;
				for(int i=0;i<NOPatients;i++){
					if(id_no==pts[i].id_no){
						for(int j=i;j<NOPatients;j++){
							pts[j].name=pts[j+1].name;
							pts[j].disease=pts[j+1].disease;
							pts[j].id_no=pts[j+1].id_no;
				  			pts[j].contact_no=pts[j+1].contact_no;
						}
						NOPatients--;
						cout<<"\n\t*****************************************************"<<endl;
						cout<<"\t your entered patient are sucessfully deleted!"<<endl;
						cout<<"\n\t******************************************************"<<endl;
					}
				}
		}
		
		
	}
}

void updatePatient(Patient pts[], int& NOPatients,int rolno){
	if(NOPatients==0){
		cout<<"\n\t there is np patient exist which you want to update"<<endl;
	}else{
		cout<<"\n\t Enter id of patient for which you want to update:";
		cin>> rolno;
		for(int i=0;i< NOPatients;i++){
			if(rolno==pts[i].id_no){
			   cout<<"\n\n\t\t************************previous information of patient*************************"<<endl;
			   cout<<"\n\tName of Patient "<<i+1<<": "<<pts[i].name<<endl;
			   cout<<"\n\tDisease of Patient "<<i+1<<": "<<pts[i].disease <<endl;
			   cout<<"\n\tID of Patient "<<i+1<<": "<<pts[i].id_no<<endl;
			   cout<<"\n\tcontact number of Patient "<<i+1<<":"<<pts[i].contact_no;
			   cout<<endl;
			
			   cout<<"\n\t please enter new name of patient"<<i+1<<": ";
			   cin>>pts[i].name;
			   cout<<"\n\t please enter new disease of patient"<<i+1<<": ";
			   cin>>pts[i].disease;
			   cout<<"\n\t please enter new id of patient"<<i+1<<": ";
			   cin>>pts[i].id_no;
			   cout<<"\n\t please enter new contact of patient"<<i+1<<": ";
			   cin>>pts[i].contact_no;
		}
	
	}
	}
	cout<<"\n\t**************************************************************"<<endl;
	cout<<"\n\n\t\t your record has been sucessfully updated!"<<endl;
	cout<<"\n\t**************************************************************"<<endl;
}	

void searchPatient(Patient pts[], int& NOPatients,int id_no){
	int count=0;
	cout<<"\n\t Enter id of patient for which you want to search:";
	cin>>id_no;
	for(int i=0;i<NOPatients;i++){
		count=0;
		if(id_no==pts[i].id_no){
			cout<<"\n\t\t*************Information of patient*******************************"<<endl;
			cout<<"\n\t Name of Patient is "<<pts[i].name<<endl;
			cout<<"\n\t Disease of Patient is "<<pts[i].disease <<endl;
			cout<<"\n\t ID of Patient is "<<pts[i].id_no<<endl;
			cout<<"\n\t contact number of Patient is "<<pts[i].contact_no;
			cout<<"\n\t\t*******************************************************************"<<endl;
		}else{
			count++;
		}
		
}
  if(count>0){
  	cout<<"\n\t\tPatient id number does not match! please select again"<<endl;
  }
}

void display(Patient pts[],int& NOPatients){
	if(NOPatients==0){
		cout<<"Alert! no patient in the list first you want to add patient"<<endl;
	}else{
		cout<<"\t\t**********************patient record************************ "<<endl;
		for(int i=0;i<NOPatients;i++){
			cout<<"\n\tName of patient"<<i+1<<" is :"<<pts[i].name<<endl;
			cout<<"\n\tDisease of patient"<<i+1<<" is :"<<pts[i].disease<<endl;
			cout<<"\n\tId of patient"<<i+1<<" is :"<<pts[i].id_no<<endl;
			cout<<"\n\tContact number of patient"<<i+1<<" is :"<<pts[i].contact_no<<endl;
		}
		cout<<"\n\n\t\t************************************************************"<<endl;
	}
}
int main(){
	Patient pts[50];
	int NOPatients = 0;
	int id_no=0,cho=0;
	int choice;
	int rolno=0;
	do{
		cout<<"\n\n\n\t\t********************Welcome to patient record system*******************************"<<endl;
		cout<<"\n\t 1)Enter the manual of patient"<<endl;
		cout<<"\n\t 2)Enter a record of new patient you want to add"<<endl;
		cout<<"\n\t 3)To delete the patient record"<<endl;
		cout<<"\n\t 4)To update the patient record"<<endl;
		cout<<"\n\t 5)To Search the patient record"<<endl;
		cout<<"\n\t 6)To Display the patient record"<<endl;
		cout<<"\n\t 7)Exit the system"<<endl;
		cout<<endl;
		cout<<"\n Enter your choice:";
		cin>>choice;
		
		switch(choice){
			case 1:
			cout << "\n\n\t\tPlease enter no of Patient you want to add in manual(Max 50):";
			cin >> NOPatients;
			if (NOPatients > 30)
			{
				cout << "You can enter maximum 50 Patient data, Plzz enter value again" << endl;
			}
			else {
				makePatientmanual( pts , NOPatients);
			}
			break;
			case 2:
				addpatient(pts, NOPatients);
				break;
			case 3:
			    deletePatient(pts,NOPatients,id_no,cho);
			     break;
			case 4:
			    updatePatient(pts,NOPatients,rolno);
			     break;
		    case 5:
		    	searchPatient(pts,NOPatients,id_no);
		    	break;
		    case 6:
		        display(pts,NOPatients);
		    	break;
		    case 7:
		    	exit(0);
		    	break;
		    default:
		    	cout<<"Oops!you Entered wrong number please select number again.";
		    	break;
		}
	}while(choice!=-1);
	return 0;
}
