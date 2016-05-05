#pragma once
#define MAX_SIZE 258
#include "Treatment.h"
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
	char NHSNumber[MAX_SIZE];
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
private:
	void returnPatientName(char*);
	void returnPatientAddress(char*);
	bool changePatientAddress(char*, char*, char*);
	bool changePatientName(char*);
	void returnIntTreatmentStrat(char*);
	bool saveConsentForm(char*);
	void returnNHSNumber(char*);
	void returnPatientEmail(char*);
};

