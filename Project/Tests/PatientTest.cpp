#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Project/Patient.h"
#include <exception>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{		
	TEST_CLASS(PatientTest)
	{
	public:
		
		TEST_METHOD(SetPatientName)
		{
			Patient *p = new Patient();
			
			char buffer[MAX_SIZE];
			strcpy(buffer, "bob");
			
			Assert::IsTrue(p->changePatientName(buffer));
		}
		TEST_METHOD(GetPatientName)
		{
			Patient *p = new Patient();

			char buffer[MAX_SIZE];
			strcpy(buffer, "bob");
			p->changePatientName(buffer);
			char buffer2[MAX_SIZE];
			p->returnPatientName(buffer2);
			Assert::AreEqual("bob", buffer2);

		}

		TEST_METHOD(SetGender)
		{
			Patient *p = new Patient();
			p->setGender(true);

			Assert::AreEqual(true,p->getGender());
		}

		TEST_METHOD(GetGender)
		{
			Patient *p = new Patient();
			p->setGender(false);

			Assert::IsFalse(p->getGender());
		}
		TEST_METHOD(ReturnNHSnumber)
		{
			Patient *p = new Patient();
			p->setNHSNumber(500000000);
			Assert::AreEqual<int>(500000000, p->returnNHSNumber());
			
		}
		TEST_METHOD(SetNHSnumber)
		{
			Patient *p = new Patient();
			p->setNHSNumber(500000000);
			Assert::AreEqual<int>(500000000, p->returnNHSNumber());
		}
		TEST_METHOD(setIntTreatmentStrat)
		{
			Patient *p = new Patient();
			char buffer[] = "Patient Must Take Telcomine?";
			p->setIntTreatmentStrat(buffer);
			char buffer2[4048];
			p->returnIntTreatmentStrat(buffer2);
			Assert::AreEqual(buffer, buffer2);
		}
		TEST_METHOD(getIntTreatmentStrat)
		{
			Patient *p = new Patient();
			char buffer[] = "Patient Must Take Telcomine?";
			p->setIntTreatmentStrat(buffer);
			char buffer2[4048];
			p->returnIntTreatmentStrat(buffer2);
			Assert::AreEqual(buffer, buffer2);
		}
		TEST_METHOD(setConsentForm)
		{
			Patient *p = new Patient();
			char buffer[] = "test";
			p->saveConsentForm(buffer);
			char buffer2[4048];
			p->returnConsentForm(buffer2);
			Assert::AreEqual(buffer2, buffer);
		}
		TEST_METHOD(getConsentForm)
		{
			Patient *p = new Patient();
			char buffer[] = "test";
			p->saveConsentForm(buffer);
			char buffer2[4048];
			p->returnConsentForm(buffer2);
			
			Assert::AreEqual("test", buffer2);

		}


	};
}