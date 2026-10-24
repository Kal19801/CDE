// decompiled by BatchDecomp @ 0067ebd0 name=GetAbsorptionCrossSection_m2 conv=__thiscall body=119

/* public: double __thiscall Material::GetAbsorptionCrossSection_m2(double)const  */

double __thiscall Material::GetAbsorptionCrossSection_m2(Material *this,double param_1)

{
  RefractiveIndexSpectrum *this_00;
  IndexOfRefraction *pIVar1;
  undefined4 unaff_ESI;
  double dVar2;
  IndexOfRefraction local_1c;
  double local_c;
  
  this_00 = *(RefractiveIndexSpectrum **)((int)&this->ExternalAngularSensitivity__m_radians + 4);
  if (this_00 == (RefractiveIndexSpectrum *)0x0) {
    local_c = 0.0;
  }
  else {
    pIVar1 = RefractiveIndexSpectrum::GetIndexOfRefraction
                       (this_00,&local_1c,
                        (double)CONCAT44(unaff_ESI,(int)((ulonglong)param_1 >> 0x20)));
    local_c = pIVar1->ExtinctionCoefficient;
  }
  dVar2 = GetMolarMass_kg__mol(this);
  return (dVar2 * (((local_c * __real_402921fb54442d18) / (param_1 * __real_3e112e0be826d695)) /
                  this->Density_kg__m3)) / Physics::AvogadroConstant__mol;
}

