#include <iostream>
#include <string>
#include <iomanip>
#include<conio.h>
using namespace std;


class Person;
class Patient;
class Doctor;
class Staff;

class Person {
protected:
	string name;
	int age;
	char gender;

public:
	void setName(string name) {
		this->name = name;
	}

	void setAge(int age) {
		this->age = age;
	}

	void setGender(char gender) {
		this->gender = gender;
	}

	string getName() {
		return this->name;
	}

	int getAge() {
		return this->age;
	}

	char getGender() {
		return this->gender;
	}

	void showInfo() {
		cout << "Name: " << this->name << endl;
		cout << "Age: " << this->age << endl;
		cout << "Gender: " << this->gender << endl;
	}
};


class Patient : public Person {
private:
	int patientID;
	string phoneNo;
	string disease;
	string treatment;
	Doctor* doctor;

public:
	Patient() {
		patientID = 0;
		doctor = NULL;
	}

	Patient(int patientID) {
		this->patientID = patientID;
		doctor = NULL;
	}

	Patient(int patientID, string name, int age, char gender) {
		this->patientID = patientID;
		this->name = name;
		this->age = age;
		this->gender = gender;
		doctor = NULL;
	}

	Patient(int patientID, Doctor* doctor) {
		this->patientID = patientID;
		this->doctor = doctor;
	}

	Patient(int patientID, string name, int age, char gender, string disease) {
		this->patientID = patientID;
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->disease = disease;
		doctor = NULL;
	}

	void setID(int patientID) {
		this->patientID = patientID;
	}

	void setDoctor(Doctor* d) {
		doctor = d;
	}

	int getID() {
		return patientID;
	}

	Doctor* getDoctor() {
		return doctor;
	}

	void setDisease(string disease) {
		this->disease = disease;
	}

	string getDisease() {
		return this->disease;
	}

	void setTreatment(string treatment) {
		this->treatment = treatment;
	}

	string getTreatment() {
		return this->treatment;
	}
};

class Doctor : public Person {
private:
	int uniqueID;
	string specialization;
	int numberOfPatients;
	Patient* listOfPatients;

public:
	Doctor(){}
	Doctor(int uniqueID) {
		this->uniqueID = uniqueID;
		this->specialization = "";
		this->numberOfPatients = 0;
		this->listOfPatients = new Patient[10];
	}

	Doctor(int uniqueID, string name, int age, char gender, string specialization) {
		this->uniqueID = uniqueID;
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->specialization = specialization;
		this->numberOfPatients = 0;
		this->listOfPatients = new Patient[10];
	}

	int getID() {
		return uniqueID;
	}

	string getSpecialization() {
		return specialization;
	}

	void addPatient(Patient* patient) {
		listOfPatients[numberOfPatients++] = *patient;
	}

	void showPatients() {
		cout << "All patients of Doctor "<<name<<" are:" << endl << endl;
		cout << left
			<< setw(5) << "ID"
			<< setw(20) << "Name"
			<< setw(5) << "Age"
			<< setw(8) << "Gender"
			<< setw(20) << "Disease"
			<< endl;
		for (int i = 0; i < this->numberOfPatients; i++)
			cout <<
				 setw(5) << this->listOfPatients[i].getID()
				<< setw(10) << this->listOfPatients[i].getName()
				<< setw(5) << this->listOfPatients[i].getAge()
				<< setw(8) << this->listOfPatients[i].getGender()
				<< setw(20) << this->listOfPatients[i].getDisease();
	}
};


class Staff : public Person {
private:
	int staffID;
public:
	Staff(){}
	Staff(int staffID, string name, int age, char gender) {
		this->staffID = staffID;
		this->name = name;
		this->age = age;
		this->gender = gender;
	}

	int getID() {
		return this->staffID;
	}
};

class Room {
protected:
	int roomID;
	int numberOfBeds;
	int numberOfPatients;
	Patient* patients;
public:
	Room() {
		this->roomID = 0;
		this->numberOfBeds = 0;
		this->numberOfPatients = 0;
		this->patients = new Patient[numberOfBeds];
	}

	Room(int roomID, int numberOfBeds) {
		if (numberOfBeds < 0)
			numberOfBeds = 1;
		this->roomID = roomID;
		this->numberOfBeds = numberOfBeds;
		this->numberOfPatients = 0;
		this->patients = new Patient[numberOfBeds];
	}

	int getID() {
		return roomID;
	}

	void addPatient(Patient* patient) {
		if (numberOfPatients >= numberOfBeds) {
			cout << "This Room is Full..." << endl;
			return;
		}
		patients[numberOfPatients++] = *patient;
	}

	void showPatients() {
		cout << "All patients in this room are:" << endl << endl;
		cout<< setw(5) << "ID"
			<< setw(20) << "Name"
			<< setw(5) << "Age"
			<< setw(8) << "Gender"
			<< setw(20) <<"Disease"
			<< "Doctor"
			<< endl;
		for (int i = 0; i < this->numberOfPatients; i++) {
			cout << left
				<< setw(5) << this->patients[i].getID()
				<< setw(20) << this->patients[i].getName()
				<< setw(5) << this->patients[i].getAge()
				<< setw(8) << this->patients[i].getGender()
				<< setw(20) << this->patients[i].getDisease();
			if (this->patients[i].getDoctor())
				cout << this->patients[i].getDoctor()->getName() << endl;
			else
				cout << "Not Assigned" << endl;
		}
	}
};

class OperationTheatre : public Room {
public:
	OperationTheatre(){}
	OperationTheatre(int roomID, int numberOfBeds): Room(roomID, numberOfBeds) {}

	void showPatients() {
		cout << "All patients in this Operation Theatre room are:" << endl << endl;
		cout<< setw(5) << "ID"
			<< setw(20) << "Name"
			<< setw(5) << "Age"
			<< setw(8) << "Gender"
			<< setw(20) << "Disease"
			<< "Doctor"
			<< endl;
		for (int i = 0; i < this->numberOfPatients; i++) {
			cout << left
				<< setw(5) << this->patients[i].getID()
				<< setw(20) << this->patients[i].getName()
				<< setw(5) << this->patients[i].getAge()
				<< setw(8) << this->patients[i].getGender()
				<< setw(20) << this->patients[i].getDisease();
			if (this->patients[i].getDoctor())
				cout << this->patients[i].getDoctor()->getName() << endl;
			else
				cout << "Not Assigned" << endl;
		}
	}
};

class ICU : public Room {
public:
	ICU(){}
	ICU(int roomID, int numberOfBeds) : Room(roomID, numberOfBeds) {}

	void showPatients() {
		cout << "All patients in this ICU room are:" << endl << endl;
		cout<< setw(5) << "ID"
			<< setw(20) << "Name"
			<< setw(5) << "Age"
			<< setw(8) << "Gender"
			<< setw(20) << "Disease"
			<< "Doctor"
			<< endl;
		for (int i = 0; i < this->numberOfPatients; i++) {
			cout << left
				<< setw(5) << this->patients[i].getID()
				<< setw(20) << this->patients[i].getName()
				<< setw(5) << this->patients[i].getAge()
				<< setw(8) << this->patients[i].getGender()
				<< setw(20) << this->patients[i].getDisease();
			if (this->patients[i].getDoctor())
				cout << this->patients[i].getDoctor()->getName() << endl;
			else
				cout << "Not Assigned"<<endl;
		}
	}
};

class Hospital {
private:
	int numberOfDoctors;
	Doctor* listOfDoctors;
	int numberOfStaff;
	Staff* listOfStaff;
	int numberOfRooms;
	int numberOfOT;
	int numberOfICU;
	OperationTheatre* listOfOperationTheatres;
	ICU* listOfICU;

public:
	Hospital(int numberOfRooms) {
		if (numberOfRooms < 0)
			numberOfRooms = 1;
		this->numberOfRooms = numberOfRooms;
		this->numberOfICU = 0;
		this->numberOfOT = 0;
		this->numberOfStaff = 0;
		listOfOperationTheatres = new OperationTheatre[numberOfRooms/2];
		listOfICU = new ICU[numberOfRooms/2];
		this->numberOfDoctors = 0;
		listOfDoctors = new Doctor[50];
		this->numberOfStaff = 0;
		listOfStaff = new Staff[50];
	}

	Hospital(int numberOfOperationTheatre, int numberOfICU) {
		listOfOperationTheatres = new OperationTheatre[numberOfOperationTheatre];
		listOfICU = new ICU[numberOfICU];
		this->numberOfICU = 0;
		this->numberOfOT = 0;
		this->numberOfRooms = numberOfICU + numberOfOperationTheatre;
		this->numberOfDoctors = 0;
		listOfDoctors = new Doctor[10];
		this->numberOfStaff = 0;
		listOfStaff = new Staff[50];
	}

	int getNumberOfRooms() {
		return numberOfRooms;
	}

	int getNumberOfDoctors() {
		return numberOfDoctors;
	}

	void addICURoom(ICU* room) {
		int id = room->getID();
		for (int i = 0; i < numberOfICU; i++) {
			if (listOfICU[i].getID() == id) {
				cout << "A room with ID "<<id<<" already exists"<<endl;
				return;
			}
		}
		listOfICU[numberOfICU++] = *room;
	}

	void addOTRoom(OperationTheatre* room) {
		int id = room->getID();
		for (int i = 0; i < numberOfOT; i++) {
			if (listOfOperationTheatres[i].getID() == id) {
				cout << "A room with ID " << id << " already exists" << endl;
				return;
			}
		}
		listOfOperationTheatres[numberOfOT++] = *room;
	}

	Room* getRoom(int id) {
		Room* requiredRoom = NULL;
		for (int i = 0; i < numberOfRooms; i++) {
			if (id == this->listOfOperationTheatres[i].getID())
				requiredRoom = &listOfOperationTheatres[i];
			if (id == this->listOfICU[i].getID())
				requiredRoom = &listOfICU[i];
		}
		return requiredRoom;
	}

	void addDoctor(Doctor* doctor) {
		listOfDoctors[numberOfDoctors++] = *doctor;
	}

	Doctor* getDoctor(int id) {
		Doctor* doctor = NULL;
		for (int i = 0; i < numberOfDoctors; i++)
			if (id == listOfDoctors[i].getID())
				doctor = &listOfDoctors[i];
		return doctor;
	}

	void addStaff(Staff* staff) {
		listOfStaff[numberOfStaff++] = *staff;
	}

	void showAllDoctors() {
		cout << left
			<< setw(5) << "ID"
			<< setw(20) << "Name"
			<< setw(5) << "Age"
			<< setw(8) << "Gender"
			<< "Specialization"
			<< endl;
		for (int i = 0; i < numberOfDoctors; i++)
			cout << left
			<< setw(5) << listOfDoctors[i].getID()
			<< setw(20) << listOfDoctors[i].getName()
			<< setw(5) << listOfDoctors[i].getAge()
			<< setw(8) << listOfDoctors[i].getGender()
			<< listOfDoctors[i].getSpecialization()
			<< endl;
	}

	void showAllStaff() {
		cout<< setw(5) << "ID"
			<< setw(20) << "Name"
			<< setw(5) << "Age"
			<< setw(8) << "Gender"
			<< endl;
		for (int i = 0; i < numberOfStaff; i++)
			cout
			<< setw(5) << listOfStaff[i].getID()
			<< setw(20) << listOfStaff[i].getName()
			<< setw(5) << listOfStaff[i].getAge()
			<< setw(8) << listOfStaff[i].getGender()
			<< endl;
	}
};

//global stuff
Patient* listOfPatients[50];
int numberOfPatients = 0;

void addPatient() {
	int patient_id, patient_age;
	string patient_name, disease;
	char patient_gender;
	cout << "\nEnter Patient Details\n";
	cout << "Patient ID: ";
	cin >> patient_id;
	cout << "Patient Name: ";
	cin.ignore();
	getline(cin, patient_name);
	cout << "Patient Age: ";
	cin >> patient_age;
	cout << "Patient gender (M/F): ";
	cin >> patient_gender;
	cout << "Patient disease: ";
	cin.ignore();
	getline(cin, disease);

	Patient* newPatient = new Patient(patient_id, patient_name, patient_age, patient_gender, disease);

	listOfPatients[numberOfPatients++] = newPatient;
}

Doctor* createDoctor() {
	int doctor_id, doctor_age;
	string doctor_name, doctor_specialization;
	char doctor_gender;

	cout << "Enter doctor ID: ";
	cin >> doctor_id;
	cout << "Enter doctor name: ";
	cin.ignore();
	getline(cin, doctor_name);
	cout << "Enter doctor age: ";
	cin >> doctor_age;
	cout << "Enter doctor gender: ";
	doctor_gender = _getche();
	cout << "\nEnter doctor's specialization: ";
	cin.ignore();
	getline(cin,doctor_specialization);

	Doctor* newDoctor = new Doctor(doctor_id, doctor_name, doctor_age, doctor_gender, doctor_specialization);
	return newDoctor;
}

Staff* createStaff() {
	int staff_id, staff_age;
	string staff_name;
	char staff_gender;

	cout << "Enter staff ID: ";
	cin >> staff_id;
	cout << "Enter staff age: ";
	cin >> staff_age;
	cout << "Enter staff name: ";
	cin.ignore();
	getline(cin,staff_name);
	cout << "\nEnter staff gender: ";
	staff_gender = _getche();

	Staff* newStaff = new Staff(staff_id, staff_name, staff_age, staff_gender);
	return newStaff;
}

void showAllPatients() {
	cout << left << setw(5) << "ID" << setw(20) << "Name" <<setw(5) << "Age"<<setw(8) << "Gender" << setw(20) << "Disease" << "doctor" << endl;
	for (int i = 0; i < numberOfPatients; i++) {
		cout << setw(5) << listOfPatients[i]->getID()
			<< setw(20) << listOfPatients[i]->getName()
			<< setw(5) << listOfPatients[i]->getAge()
			<< setw(8) << listOfPatients[i]->getGender()
			<< setw(20) << listOfPatients[i]->getDisease();
		if (listOfPatients[i]->getDoctor())
			cout << listOfPatients[i]->getDoctor()->getName() << endl;
		else
			cout << "Not Assigned"<<endl;
	}
}

void admitPatient(Hospital* H) {
	bool patientFound = false;
	bool roomFound = false;
	Patient* patientToAdmit = NULL;
	Room* roomToAdmit;
	int patient_id;
	int room_id;
	cout << "Enter ID of patient to admit : ";
	cin >> patient_id;

	for (int i = 0; i < numberOfPatients; i++)
		if (patient_id == listOfPatients[i]->getID()) {
			patientFound = true;
			patientToAdmit = listOfPatients[i];
		}

	if (!patientFound) {
		cout << "Patient of id " << patient_id << " not found!" << endl;
		return;
	}

	cout << "Enter ID of room in which patient needs to be admitted in : ";
	cin >> room_id;

	roomToAdmit =  H->getRoom(room_id);

	if (!roomToAdmit) {
		cout << "Room of id " << room_id << " not found!" << endl;
		return;
	}

	roomToAdmit->addPatient(patientToAdmit);
}

void assignDoctorToPatient(Hospital* H) {
	bool patientFound = false, doctorFound = false;
	int doctor_id, patient_id;
	Patient* patient = NULL;
	Doctor* doctor = NULL;
	cout << "Enter unique id of patient: ";
	cin >> patient_id;
	int i = 0;

	for (i = 0; i < numberOfPatients; i++)
		if (patient_id == listOfPatients[i]->getID()) {
			patientFound = true;
			patient = listOfPatients[i];
			break;
		}

	if (!patientFound) {
		cout << "Patient of id " << patient_id << " not found!" << endl;
		return;
	}

	cout << "Enter unique id of doctor: ";
	cin >> doctor_id;

	doctor = H->getDoctor(doctor_id);

	if (!doctor) {
		cout << "Doctor of id " << doctor_id << " not found!" << endl;
		return;
	}

	doctor->addPatient(patient);
	patient->setDoctor(doctor);

	cout << patient->getName() << " assigned to doctor " << doctor->getName() << endl;
}

void showPatientsInRoom(Hospital* H) {
	Room* room = NULL;
	int room_id;
	cout << "Enter id of room you would like to view patients in: ";
	cin >> room_id;

	room = H->getRoom(room_id);
	if (!room) {
		cout << "Room of id " << room_id << " not found!" << endl;
		return;
	}

	room->showPatients();
}

int menu() {
	int option;
	cout << " 1). Add Patient Record\n" <<
		" 2). Add Doctor Record\n" <<
		" 3). Add Staff Members\n" <<
		" 4). Display Patients Record\n" <<
		" 5). Admit Patient (OT/ICU)\n" <<
		" 6). Display Available Doctors\n" <<
		" 7). Assign Doctor to a patient\n" <<
		" 8). Show all patients in a room\n" <<
		" 9). Show all staff members in hospital\n"
		"10). Exit the Program";
	cout << "\n Please Select any Option (1-10): ";
	cin >> option;

	if (option < 1 || option > 10) {
		cout << "Wrong Selection, Please Select among the available options!" << endl <<endl;
		menu();
	}
	else {
		cout << endl << endl;
		return option;
	}
	return 0;
}

void showTitle() {
	cout<<"\n\n\n\n";
	cout << setw(70) << "...MAJU Hospital Management...";
	_getch();
	system("CLS");
}

int main()
{

	showTitle();

	Hospital* H1 = new Hospital(3,3);					//this hospital H1 has 3 ICU and 3 operation theatre room
	ICU* ICU1 = new ICU(1, 30);							//this ICU room has ID of 1 and has 30 beds
	ICU* ICU2 = new ICU(2, 30);							//this ICU room has ID of 2 and has 30 beds
	ICU* ICU3 = new ICU(3, 20);							//this ICU room has ID of 3 and has 20 beds
	OperationTheatre* OT1 = new OperationTheatre(4, 20); //this OT  room has ID of 4 and has 20 beds
	OperationTheatre* OT2 = new OperationTheatre(5, 30); //this OT  room has ID of 5 and has 30 beds
	OperationTheatre* OT3 = new OperationTheatre(6, 10); //this OT  room has ID of 6 and has 10 beds
	Doctor* doctor1 = new Doctor(1, "Touseef", 46, 'M', "Bones Specialist");
	Doctor* doctor2 = new Doctor(2, "Ahmed", 32, 'M', "Skin Specialist");
	Doctor* doctor3 = new Doctor(3, "Sara", 51, 'F', "Ear Specialist");
	Patient* patient1 = new Patient(1, "Tanveer", 19, 'M', "Hyperthermia");		listOfPatients[numberOfPatients++] = patient1;
	Patient* patient2 = new Patient(2, "Jalil", 32, 'M', "Stomach Ache");	listOfPatients[numberOfPatients++] = patient2;
	Patient* patient3 = new Patient(3, "William", 24, 'M', "Arthiritis");	listOfPatients[numberOfPatients++] = patient3;

	H1->addICURoom(ICU1);
	H1->addICURoom(ICU2);
	H1->addICURoom(ICU3);
	H1->addOTRoom(OT1);
	H1->addOTRoom(OT2);
	H1->addOTRoom(OT3);
	H1->addDoctor(doctor1);
	H1->addDoctor(doctor2);
	H1->addDoctor(doctor3);
	H1->getRoom(1)->addPatient(patient1);
	H1->getRoom(1)->addPatient(patient2);
	H1->getRoom(4)->addPatient(patient3);

	while (true) {

		switch (menu())
		{
			case 1: {
				addPatient();
				cout << "Patient added successfully!"<<endl;
				break;
			}
			case 2: {
				H1->addDoctor(createDoctor());
				cout << "Doctor added successfully" << endl;
				break;
			}
			case 3: {
				H1->addStaff(createStaff());
				cout << "Staff member added successfully" << endl;
				break;
			}
			case 4: {
				showAllPatients();
				//
				break;
			}

			case 5: {
				admitPatient(H1);
				cout << "Patient admitted to room successfully" << endl;
				break;
			}

			case 6: {
				H1->showAllDoctors();
				break;
			}

			case 7: {
				assignDoctorToPatient(H1);
				break;
			}

			case 8: {
				showPatientsInRoom(H1);
				break;
			}

			case 9: {
				H1->showAllStaff();
				break;
			}
			case 10: {
				cout << "Exiting Program" << endl;
				exit(0);
				break;
			}
			default: {
				break;
			}
		}

		cout << endl << endl;
	}
}
