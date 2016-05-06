#include "stdafx.h"
#include "Patient.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

Patient::Patient()
{
}


Patient::~Patient()
{
}

void Patient::returnPatientName(char* buffer)
{
	strcpy(buffer, this->PatientName);
}

void Patient::returnPatientAddress(char* buffer)
{
	strcat(buffer, this->Address1stLine);
	strcat(buffer, this->Address2ndLine);
	strcat(buffer, this->Address3rdLine);
}

bool Patient::changePatientAddress(char *buffer, char *buffer2, char *buffer3)
{
	strncpy(this->Address1stLine, buffer, MAX_SIZE - 1);
	strncpy(this->Address2ndLine, buffer2, MAX_SIZE - 1);
	strncpy(this->Address3rdLine, buffer3, MAX_SIZE - 1);
	return true;
}

bool Patient::changePatientName(char* buffer)
{
	bool success;
	strncpy(this->PatientName, buffer, MAX_SIZE - 1);
	if (strcmp(this->PatientName, buffer) == 0)
	{
		success = true;
	}
	else
	{
		success = false;
	}
	return success;
}

void Patient::returnIntTreatmentStrat(char *buffer)
{
	strncpy(buffer, this->InitialTreatStrategy, strlen(this->InitialTreatStrategy)+ 1);
}

bool Patient::saveConsentForm(char *buffer)
{
	strncpy(this->StoredConsentForm, buffer,strlen(this->StoredConsentForm));
	return true;
}

void Patient::returnConsentForm(char *buffer)
{
	strncpy(buffer, this->StoredConsentForm, 4048);
}

int Patient::returnNHSNumber()
{
	return this->NHSNumber;
}

void Patient::setNHSNumber(int value)
{
	this->NHSNumber = value;
}

void Patient::returnPatientEmail(char *buffer)
{
	strcpy(buffer, this->Email);
}

bool Patient::getGender()
{
	return this->Gender;
}

void Patient::setGender(bool value)
{
	this->Gender = value;
}

void Patient::setEmail(char *buffer)
{
	strcpy(this->Email, buffer);
}

void Patient::setIntTreatmentStrat(char *buffer)
{
	strncpy(this->InitialTreatStrategy, buffer,strlen(buffer)+1);
}

void Patient::setDOB(char *buffer)
{
	strcpy(this->DOB, buffer);
}

void Patient::getDOB(char *buffer)
{
	strcpy(buffer, this->DOB);
}

void Patient::setCity(char *buffer)
{
	strncpy(this->City, buffer, MAX_SIZE - 1);
}

void Patient::getCity(char *buffer)
{
	strcpy(buffer, this->City);
}

void Patient::getPostcode(char *buffer)
{
	strcpy(buffer, this->Postcode);
}

void Patient::setPostcode(char *buffer)
{
	strncpy(this->Postcode, buffer, MAX_SIZE - 1);
}

int Patient::returnPatientId()
{
	return this->PatientID;
}

void Patient::setPatientId(int value)
{
	this->PatientID = value;
}

void Patient::returnMedicalHistory(char **buffer)
{
	for (int x = 0; x < MAX_SIZE; x++)
	{
		if (this->MedicalHistory[x] != NULL)
		{
			buffer[x] = this->MedicalHistory[x];
		}
	}
}

void Patient::setMedicalHistory(char **buffer)
{
	for (int x = 0; x < MAX_SIZE; x++)
	{
		if (this->MedicalHistory[x] != NULL)
		{
			this->MedicalHistory[x] = buffer[x];
		}
	}
}
