#pragma once
#include "Treatment.h"
#define MAX_SIZE 258
class Patient
{
private:
	int PatientID;
	char PatientName[MAX_SIZE];
	char Address1stLine[MAX_SIZE];
	char Address2ndLine[MAX_SIZE];
	char Address3rdLine[MAX_SIZE];
	char City[MAX_SIZE];
	char Postcode[MAX_SIZE];
	char Email[MAX_SIZE];
	char TelNo[MAX_SIZE];
	char DOB[11];
	int NHSNumber;
	bool Gender;
	char PatientDoctor[MAX_SIZE];
	char SurgeryName[MAX_SIZE];
	char StoredConsentForm[4048];
	char MedicalHistory[MAX_SIZE][4048];
	char SurgicalHistory[MAX_SIZE][4048];
	char FamilyHistory[MAX_SIZE][4048];
	char SocialHistory[MAX_SIZE][4048];
	char MedicationGiven[MAX_SIZE][4048];
	char Allergies[MAX_SIZE][4048];
	char SignificatanceMHistory[MAX_SIZE];
	char InitialTreatStrategy[MAX_SIZE];
	Treatment** PreviousTreatments;
	char BillingInfo[MAX_SIZE];

public:
	Patient();
	~Patient();
	void returnPatientName(char*);
	void returnPatientAddress(char*);
	bool changePatientAddress(char*, char*, char*);
	bool changePatientName(char*);
	void returnIntTreatmentStrat(char*);
	bool saveConsentForm(char*);
	void returnConsentForm(char*);
	int returnNHSNumber();
	void setNHSNumber(int);
	void returnPatientEmail(char*);
	bool getGender();
	void setGender(bool);
	void setEmail(char*);
	void setIntTreatmentStrat(char*);
	void setDOB(char*);
	void getDOB(char*);
	void setCity(char*);
	void getCity(char*);
	void getPostcode(char*);
	void setPostcode(char*);
	int returnPatientId();
	void setPatientId(int);
	void returnMedicalHistory(char**);
	void setMedicalHistory(char**);
};


