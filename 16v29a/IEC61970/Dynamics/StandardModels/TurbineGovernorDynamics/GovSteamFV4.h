///////////////////////////////////////////////////////////
//  GovSteamFV4.h
//  Implementation of the Class GovSteamFV4
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef GOVSTEAMFV4_H
#define GOVSTEAMFV4_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/TurbineGovernorDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineGovernorDynamics
			{
				/**
				 * Detailed electro-hydraulic governor for steam unit.
				 */
				class GovSteamFV4 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovSteamFV4();
					virtual ~GovSteamFV4();
					/**
					 * Minimum value of pressure regulator output (Cpsmn).  Typical Value = -1.
					 */
					IEC61970::Base::Domain::PU cpsmn;
					/**
					 * Maximum value of pressure regulator output (Cpsmx).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU cpsmx;
					/**
					 * Minimum value of regulator set-point (Crmn).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU crmn;
					/**
					 * Maximum value of regulator set-point (Crmx).  Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::PU crmx;
					/**
					 * Derivative gain of pressure regulator (Kdc).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kdc;
					/**
					 * Frequency bias (reciprocal of droop) (Kf1).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::PU kf1;
					/**
					 * Frequency control (reciprocal of droop) (Kf3).  Typical Value = 20.
					 */
					IEC61970::Base::Domain::PU kf3;
					/**
					 * Fraction  of total turbine output generated by HP part (Khp).  Typical Value =
					 * 0.35.
					 */
					IEC61970::Base::Domain::PU khp;
					/**
					 * Integral gain of pressure regulator (Kic).  Typical Value = 0.0033.
					 */
					IEC61970::Base::Domain::PU kic;
					/**
					 * Integral gain of pressure feedback regulator (Kip).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU kip;
					/**
					 * Integral gain of electro-hydraulic regulator (Kit).  Typical Value = 0.04.
					 */
					IEC61970::Base::Domain::PU kit;
					/**
					 * First gain coefficient of  intercept valves characteristic (Kmp1).  Typical
					 * Value = 0.5.
					 */
					IEC61970::Base::Domain::PU kmp1;
					/**
					 * Second gain coefficient of intercept valves characteristic (Kmp2).  Typical
					 * Value = 3.5.
					 */
					IEC61970::Base::Domain::PU kmp2;
					/**
					 * Proportional gain of pressure regulator (Kpc).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU kpc;
					/**
					 * Proportional gain of pressure feedback regulator (Kpp).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kpp;
					/**
					 * Proportional gain of electro-hydraulic regulator (Kpt).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::PU kpt;
					/**
					 * Maximum variation of fuel flow (Krc).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU krc;
					/**
					 * Pressure loss due to flow friction in the boiler tubes (Ksh).  Typical Value =
					 * 0.08.
					 */
					IEC61970::Base::Domain::PU ksh;
					/**
					 * Maximum negative power error (Lpi).  Typical Value = -0.15.
					 */
					IEC61970::Base::Domain::PU lpi;
					/**
					 * Maximum positive power error (Lps).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::PU lps;
					/**
					 * Lower limit for frequency correction (MN<sub>EF</sub>).  Typical Value = -0.05.
					 */
					IEC61970::Base::Domain::PU mnef;
					/**
					 * Upper limit for frequency correction (MX<sub>EF</sub>).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU mxef;
					/**
					 * First value of pressure set point static characteristic (Pr1).  Typical Value =
					 * 0.2.
					 */
					IEC61970::Base::Domain::PU pr1;
					/**
					 * Second value of pressure set point static characteristic, corresponding to Ps0
					 * = 1.0 PU (Pr2).  Typical Value = 0.75.
					 */
					IEC61970::Base::Domain::PU pr2;
					/**
					 * Minimum value of pressure set point static characteristic (Psmn).  Typical
					 * Value = 1.
					 */
					IEC61970::Base::Domain::PU psmn;
					/**
					 * Minimum value of integral regulator (Rsmimn).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU rsmimn;
					/**
					 * Maximum value of integral regulator (Rsmimx).  Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU rsmimx;
					/**
					 * Minimum value of integral regulator (Rvgmn).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU rvgmn;
					/**
					 * Maximum value of integral regulator (Rvgmx).  Typical Value = 1.2.
					 */
					IEC61970::Base::Domain::PU rvgmx;
					/**
					 * Minimum valve opening (Srmn).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU srmn;
					/**
					 * Maximum valve opening (Srmx).  Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU srmx;
					/**
					 * Intercept valves characteristic discontinuity point (Srsmp).  Typical Value = 0.
					 * 43.
					 */
					IEC61970::Base::Domain::PU srsmp;
					/**
					 * Maximum regulator gate closing velocity (Svmn).  Typical Value = -0.0333.
					 */
					IEC61970::Base::Domain::Float svmn;
					/**
					 * Maximum regulator gate opening velocity (Svmx).  Typical Value = 0.0333.
					 */
					IEC61970::Base::Domain::Float svmx;
					/**
					 * Control valves rate opening time (Ta).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Intercept valves rate opening time (Tam).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Seconds tam;
					/**
					 * Control valves rate closing time (Tc).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Intercept valves rate closing time (Tcm).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds tcm;
					/**
					 * Derivative time constant of pressure regulator (Tdc).  Typical Value = 90.
					 */
					IEC61970::Base::Domain::Seconds tdc;
					/**
					 * Time constant of fuel regulation (Tf1).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tf1;
					/**
					 * Time constant of steam chest (Tf2).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tf2;
					/**
					 * High pressure (HP) time constant of the turbine (Thp).  Typical Value = 0.15.
					 */
					IEC61970::Base::Domain::Seconds thp;
					/**
					 * Low pressure (LP) time constant of the turbine (Tmp).  Typical Value = 0.4.
					 */
					IEC61970::Base::Domain::Seconds tmp;
					/**
					 * Reheater  time constant of the turbine (Trh).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds trh;
					/**
					 * Boiler time constant (Tv).  Typical Value = 60.
					 */
					IEC61970::Base::Domain::Seconds tv;
					/**
					 * Control valves servo time constant (Ty).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds ty;
					/**
					 * Coefficient of linearized equations of turbine (Stodola formulation) (Y).
					 * Typical Value = 0.13.
					 */
					IEC61970::Base::Domain::PU y;
					/**
					 * Minimum control valve position (Yhpmn).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU yhpmn;
					/**
					 * Maximum control valve position (Yhpmx).  Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU yhpmx;
					/**
					 * Minimum intercept valve position (Ympmn).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ympmn;
					/**
					 * Maximum intercept valve position (Ympmx).  Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU ympmx;

				};

			}

		}

	}

}
#endif // GOVSTEAMFV4_H
