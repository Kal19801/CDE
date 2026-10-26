// decompiled by BatchDecomp @ 00682bf0 name=GetDissociationFraction conv=__thiscall body=65

/* public: double __thiscall Material::GetDissociationFraction(double,double)const  */

double __thiscall Material::GetDissociationFraction(Material *this,double param_1,double param_2)

{
  undefined4 unaff_EDI;
  double dVar1;
  
  if (*(char *)&this->ExternalAngularSensitivity__m_radians != '\0') {
    dVar1 = DissociationReaction::GetDissociationFraction
                      ((DissociationReaction *)&(this->Dissociation).Data.Products,this,
                       (double)CONCAT44(SUB84(param_2,0),(int)((ulonglong)param_1 >> 0x20)),
                       (double)CONCAT44(unaff_EDI,(int)((ulonglong)param_2 >> 0x20)));
    return dVar1;
  }
  return 0.0;
}

