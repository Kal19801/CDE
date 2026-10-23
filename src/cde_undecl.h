/* cde_undecl.h - error-driven symbol resolution (fix_undecl.py) */
#pragma once
#define Info__V s_Info
#define FaceType__Left__V 0
extern void *GetCurrentNotificationLifetime_s_Clear();
extern void *GetArmorPlateCount_Clear();
extern void *GetAllLayersOuterPlateSegments_m_Clear();
extern void *GetArmorPlatesPerSegment_Clear();
extern void *GetArmorPlateHeights_m_Clear();
extern void *GetArmorRadiiAndHeightPerPlatePerLayer_m_Clear();
extern void *GetCrossSectionPoints_Clear();
extern void *GetInnerArmorSegments_m_Clear();
extern void *GetInnerArmorSpline_m_Clear();
extern void *GetMomentOfInertiaTensor_kg_m2_Clear();
extern void *GetOuterArmorSegmentsByLayer_m_Clear();
extern void *GetOuterArmorSpline_m_Clear();
extern void *GetUnrolledDimensionsOfAllLayers_m_Clear();
extern void *GetArmorCylinders_Clear();
extern void *GetCrossSectionTrueAngles_radians_Clear();
extern void *GetCrossSectionLines_Clear();
extern void *HasFullArmor_Clear();
extern void *FUN_008e90f0();
extern void *LoadModelMatrixLocation();
extern void *LoadInverseModelMatrixLocation();
extern void *LoadTotalTransformMatrixLocation();
extern void *LoadNormalMatrixLocation();
extern void *LoadNearPlaneLocation();
extern void *LoadFarPlaneLocation();
extern void *CanMove_Clear();
extern void *CanRoll_Clear();
extern void *CanTurn_Clear();
extern void *GetEstimatedTurnTorque_N_m_Clear();
extern void *GetAllCompartmentBoundaryPoints_km_Clear();
extern void *GetAllCompartmentIntersections_Clear();
extern void *GetAllCompartmentOffsets_m_Clear();
extern void *GetAllCompartmentOperationals_Clear();
extern void *GetAllCompartmentOrientations_Clear();
extern void *GetAllCompartmentSelfIntersections_Clear();
extern void *GetAllMainEnginePropellantsUsed_Clear();
extern void *GetMainEngineModules_Clear();
extern void *GetAllRadiatorUnworkableInterreflections_Clear();
extern void *GetAmmoExplosion_Clear();
extern void *GetApproximateComposition_Clear();
extern void *GetCrossSection_m2_Clear();
extern void *GetBoundingCylinder_m_Clear();
extern void *GetStagingWetMass_kg_Clear();
extern void *GetComposition_Clear();
extern void *GetCoreAndEndModuleSpline_m_Clear();
extern void *GetSpinalAndEndModuleSpline_m_Clear();
extern void *GetCostChartData_Clear();
extern void *GetTotalCost_c_Clear();
extern void *GetCrewRequired_Clear();
extern void *GetTotalCrewSupplied_Clear();
extern void *GetTotalCrewRequired_Clear();
extern void *GetUnstagedDryMass_kg_Clear();
extern void *GetUnstagedReactionMass_kg_Clear();
extern void *GetStagingDryMass_kg_Clear();
extern void *GetStagingReactionMass_kg_Clear();
extern void *GetPowerableMainEngineModules_Clear();
extern void *GetEstimatedRollTorque_N_m_Clear();
extern void *GetForwardDirection_Clear();
extern void *GetUpDirection_Clear();
extern void *GetRightDirection_Clear();
extern void *GetInverseMomentOfInertiaTensor_kg_m2_Clear();
extern void *GetHalfRotationTurnTime_s_Clear();
extern void *GetHeatSignatureChartData_Clear();
extern void *GetLength_m_Clear();
extern void *GetMassChartData_Clear();
extern void *GetMassCondensedChartData_Clear();
#define ShipClass__Payload__V 4
extern void *GetModuleLocationHeights_m_Clear();
extern void *GetModuleSegments_m_Clear();
extern void *GetModuleSpline_m_Clear();
extern void *GetCenterOfMass_km_Clear();
extern void *GetPowerUseChartData_Clear();
extern void *GetTotalPowerGeneration_W_Clear();
extern void *GetRadiationAtAllModules_Sv__JY_Clear();
extern void *GetRadius_km_Clear();
extern void *GetShipClass_Clear();
extern void *IsAWarship_Clear();
extern void *IsACivilianShip_Clear();
extern void *GetSortedSpinalModules_Clear();
extern void *GetSpinalModuleSpline_m_Clear();
extern void *GetStackedHeatSignatureChartData_Clear();
extern void *GetStackedPowerUseChartData_Clear();
extern void *GetUnstagedWetMass_kg_Clear();
extern void *IsOperational_Clear();
extern void *HasWarnings_Clear();
extern void *HasAnyGunTurrets_Clear();
extern void *IsACapitalShip_Clear();
extern void *IsThrustingCraft_Clear();
extern void *IsADrone_Clear();
extern void *IsAFlagship_Clear();
extern void *IsAFlare_Clear();
extern void *IsAMissile_Clear();
extern void *IsAPayload_Clear();
extern void *IsAStation_Clear();
extern void *IsShooterCraft_Clear();
extern void *FUN_008e98c0();
extern void *Warning();
/* p34: Disabled__V was enum-constant (per-enum values), NOT the s_Disabled string.
   Blob-verified: DepthMode.ReadWrite=0 Read=1 Disabled=2; CullMode.Disabled=2;
   BlendMode.Disabled=5 Sum=1 (push-immediate ground truth) */
enum { DepthMode__ReadWrite = 0, DepthMode__Read = 1, DepthMode__Disabled = 2 };
/* p36 blob-verified (push-immediate/dispatch-chain ground truth):
   DrawMode (LoadDrawMode dispatch 0x845866 case1/case2; RenderGame World/UI alternation
   0x86b7fe..0x86b9b8 matches source order; ApplyTransformation cmp chain 0x843cbf: 1,3,4
   + jumptable; case Custom|World=5 -> ShadowProjection): World=1, UI=2, Shadow=3, Custom=4.
   DesignMessage msgtype: Info=0 (push 0 @0x544bdd/0x4d863d/0x4e54f3/0x564e57).
   BlendState: Custom=4 (BlendStack ctor @0x8423f1 mov dword[ebp-0x1c],4 before Push).
   DepthMode/CullMode/BlendMode receiver confirmations: DepthStack(0)=ReadWrite,
   DepthStack(1)=Read, DepthStack(2)=Disabled, BlendStack(5)=Disabled, CullStack(2)=Disabled. */
enum { DrawMode__World = 1, DrawMode__UI = 2, DrawMode__Shadow = 3, DrawMode__Custom = 4 };
enum { DesignMsg__Info = 0 };
enum { BlendState__Custom = 4 };
enum { CullMode__Disabled = 2 };
enum { BlendMode__Disabled = 5, BlendMode__Sum = 1 };
extern void *LoadTextureLocation();
extern void *SetTextureDefault();
#define FaceType__Top__V 5
extern void *FUN_008ec810();
extern void *CalculatePropellants_Clear();
extern void *FUN_008ee7b0();
extern void *GetTotalPowerUsage_W_Clear();
extern void *FUN_008f04d0();
extern void *StaticFactory();
extern void *GetHeatPipesPerPanel_Clear();
extern void *FUN_008f23e0();
extern void *GetTotalThickness_m_Clear();
extern void *GetPanelAndFinishMasses_kg_Clear();
extern void *GetHeatPipeSpacing_m_Clear();
extern void *FUN_008f5b90();
extern void *GetAmmoMass_kg_Clear();
extern void *GetGasExpansionPlume_Clear();
extern void *GetCachedBoundingBox_m_Clear();
extern void *GetExitVelocity_km__s_Clear();
extern void *GetTotalFiringCharacteristics_Clear();
extern void *GetHeatingRate_W_Clear();
extern void *GetFiringTemperatureJump_K_Clear();
extern void *GetFiringCharacteristics_Clear();
extern void *GetHeatGeneratedPerShot_J_Clear();
extern void *GetAccuracyAngle_radians_Clear();
extern void *GetFiringSpeed_km__s_Clear();
extern void *FUN_008fb7d0();
extern void *FUN_008fc4c0();
extern void *GetAdiabaticFlameTemperature_K_Clear();
extern void *GetEnergyDensity_J__kg_Clear();
extern void *GetTotalEnthalpyOfReaction_J__mol_Clear();
extern void *FUN_008fcd30();
extern void *GetDecompositionReaction_Clear();
extern void *IsFusile_Clear();
extern void *GetCost_c__kg_Clear();
extern void *GetReflectanceColor_Clear();
extern void *GetEmissiveColors_Clear();
extern void *GetHeatCapacityRatio_Clear();
extern void *GetSaturationMagnetization_A__m_Clear();
#define _param_3 param_3
typedef uint8_t undefined7;
static undefined8 unique0x100009eb;
static undefined8 unique0x100009ef;
typedef int8_t int7;
#define RGBA GL_RGBA
static undefined8 unique0x00005280;
static undefined8 unique0x0000aa00;
#define _param_2 param_2
#define ClampToEdge 0x812F
#define RG 0x8227
#define _param_1 param_1
static undefined8 _uStack_c;
static undefined8 this;
static undefined8 __return_storage_ptr__;
static undefined8 unique0x10000d94;
typedef uint8_t uint7;
static undefined8 unique0x10000429;
static undefined8 unique0x1000042d;
typedef uint8_t uint5;
static undefined8 uStack_10;
#define _param_4 param_4
static undefined8 unique0x10000151;
static undefined8 unique0x10000155;
static undefined8 unique0x0000a400;
static undefined8 unique0x10000c15;
static undefined8 unique0x100009c3;
static undefined8 _uStack_24;
static undefined8 _uStack_14;
static undefined8 unique0x10000e01;
static undefined8 unique0x10000a5d;
static undefined8 unique0x100003a4;
static undefined8 _uStack_10;
static undefined8 unique0x1000042b;
static undefined8 unique0x10000293;
static undefined8 _uStack_1c;
static undefined8 unique0x100010ef;
static undefined8 unique0x100002fe;
static undefined8 unique0x10000626;
static undefined8 unique0x10000d48;
static undefined8 unique0x1000034a;
static undefined8 unique0x1000025a;
extern void *GetUnenrichedMaterial_Clear();
extern void *GetCategory_Clear();
extern void *GetClasses_Clear();
extern void *GetEmissivePowers_W_Clear();
extern void *FUN_008fcfe0();
extern void *FUN_008fd2d0();
extern void *FUN_008fd2f0();
extern void *FUN_008fd410();
extern void *IsModuleARadiator_Clear();
extern void *IsModuleCoolable_Clear();
extern void *Remove();
extern void *Add();
extern void *_get_startup_commit_mode();
static undefined8 unique0x100002de;
static undefined8 unique0x1000055c;
static undefined8 unique0x1000039e;
static undefined8 unique0x100003a2;
static undefined8 unique0x100003da;
static undefined8 unique0x100003e2;
extern void *GetLuminosity_W_Clear();
extern void *FUN_009021f0();
extern void *FUN_00902230();
static undefined8 _uStack_20;
extern void *GetHumanHabitabilityScore_Clear();
extern void *GetStabilityRegionRadius_km_Clear();
extern void *IsInHydrostaticEquilibrium_Clear();
#define RGB GL_RGB
extern void *FUN_00903810();
extern void *_guard_check_icall_nop();
extern void *LoadEmbossedLocation();
extern void *SetEmbossedDefault();
extern void *LoadGradientAmountLocation();
extern void *SetGradientAmountDefault();
extern void *LoadUISizeLocation();
extern void *SetUISizeDefault();
extern void *LoadRadialLocation();
extern void *SetRadialDefault();
extern void *LoadBordersLocation();
extern void *SetBordersDefault();
extern void *OutOfPower();
extern void *Disarmed();

extern void *FUN_0090ff10();
extern void *WindowsExceptionHandler();
extern void *PurecallHandler();
extern void *InvalidParameterHandler();
extern void *FUN_0090fff0();

extern void *FUN_009100b0();
extern void *FUN_00910110();
extern void *TearDownState();
extern void *FUN_009104b0();
extern void *FUN_00910470();
extern void *FUN_00910490();
extern void *FUN_009104d0();
extern void *FUN_009104f0();
extern void *MouseCallback();
extern void *ResizeFramebufferCallback();
extern void *FUN_009108d0();
extern void *FUN_00910910();
extern void *FUN_00910890();
extern void *LoadGaussianBlurLocation();
extern void *LoadBlurSizeMaxLocation();
extern void *LoadTextureLookupOffsetLocation();
extern void *LoadBlurFilterLocation();
extern void *LoadBrightnessLocation();
extern void *LoadAdditionalTextureLocation();
extern void *SetAdditionalTextureDefault();
extern void *LoadLuminanceMultiplierLocation();
extern void *LoadSourceTextureCoordinateScalarLocation();
extern void *LoadTimeLocation();
static undefined8 unique0x1000091d;
static undefined8 unique0x1000142d;
static undefined8 unique0x1000067f;
static undefined8 unique0x100015f5;
static undefined8 unique0x10000112;
extern void *FUN_00911450();
extern void *FUN_00911710();
extern void *FUN_00911720();
#define FaceType__Bottom__V 4
#define FaceType__Right__V 1
extern void *CalculateDesiredHeight_Clear();
extern void *CalculateDesiredWidth_Clear();
extern void *PrettyPrintStructName();
extern void *PrimitivePropertyToString();
extern void *GetChildOffsets_Clear();
extern void *GetCachedChildWidths_Clear();
extern void *GetCachedChildHeights_Clear();
extern void *GetCachedDesiredWidth_Clear();
extern void *GetCachedDesiredHeight_Clear();
#define Buffer__First__V 0
extern void *FUN_009123c0();
extern void *FUN_009123d0();
typedef uint64_t uint72_t;
extern void *OnWorkshopItemSubmitted();
extern void *GetTruePosition_Clear();
#define __scrt_module_type__dll__V 0
extern void *__scrt_uninitialize_thread_safe_statics();
extern void *__scrt_unhandled_exception_filter();
extern void *__security_check_cookie();

/* session-g appends */
extern Vec2_L_int_G_ * __thiscall UIWidget__GetTrueSize(UIWidget *this,Vec2_L_int_G_ *__return_storage_ptr__);
#define Graphics__GlobalState (*(struct Graphics *)0x00989890u)
#define Material__DefaultMaterial (*(struct Material **)0x0097a600u)
#define _vftable__exref ((void *)0)

/* session-h dat aliases */
#define DAT_00961c5c _DAT_00961c5c
#define DAT_00961c60 _DAT_00961c60
#define DAT_00961c64 _DAT_00961c64
#define DAT_00961c74 _DAT_00961c74
#define DAT_00962324 _DAT_00962324
#define DAT_00962328 _DAT_00962328
#define DAT_0096232c _DAT_0096232c
#define DAT_0096233c _DAT_0096233c
#define DAT_00962924 _DAT_00962924
#define DAT_00962928 _DAT_00962928
#define DAT_0096292c _DAT_0096292c
#define DAT_0096293c _DAT_0096293c
#define DAT_009659bc _DAT_009659bc
#define DAT_009659c0 _DAT_009659c0
#define DAT_009659c4 _DAT_009659c4
#define DAT_009659d4 _DAT_009659d4
#define DAT_009664bc _DAT_009664bc
#define DAT_009664c0 _DAT_009664c0
#define DAT_009664c4 _DAT_009664c4
#define DAT_009664d4 _DAT_009664d4
#define DAT_0096729c _DAT_0096729c
#define DAT_009672a0 _DAT_009672a0
#define DAT_009672a4 _DAT_009672a4
#define DAT_009672b4 _DAT_009672b4
#define DAT_00967504 _DAT_00967504
#define DAT_00967508 _DAT_00967508
#define DAT_0096750c _DAT_0096750c
#define DAT_0096751c _DAT_0096751c
#define DAT_009676f4 _DAT_009676f4
#define DAT_009676f8 _DAT_009676f8
#define DAT_009676fc _DAT_009676fc
#define DAT_0096770c _DAT_0096770c
#define DAT_00967894 _DAT_00967894
#define DAT_00967898 _DAT_00967898
#define DAT_0096789c _DAT_0096789c
#define DAT_009678ac _DAT_009678ac
#define DAT_009680a4 _DAT_009680a4
#define DAT_009680a8 _DAT_009680a8
#define DAT_009680ac _DAT_009680ac
#define DAT_009680bc _DAT_009680bc
#define DAT_0096871c _DAT_0096871c
#define DAT_00968720 _DAT_00968720
#define DAT_00968724 _DAT_00968724
#define DAT_00968734 _DAT_00968734
#define DAT_00969b8c _DAT_00969b8c
#define DAT_00969b90 _DAT_00969b90
#define DAT_00969b94 _DAT_00969b94
#define DAT_00969ba4 _DAT_00969ba4
#define DAT_0096c01c _DAT_0096c01c
#define DAT_0096c020 _DAT_0096c020
#define DAT_0096c024 _DAT_0096c024
#define DAT_0096c034 _DAT_0096c034
#define DAT_0096c194 _DAT_0096c194
#define DAT_0096c198 _DAT_0096c198
#define DAT_0096c19c _DAT_0096c19c
#define DAT_0096c1ac _DAT_0096c1ac
#define DAT_0096c45c _DAT_0096c45c
#define DAT_0096c460 _DAT_0096c460
#define DAT_0096c464 _DAT_0096c464
#define DAT_0096c474 _DAT_0096c474
#define DAT_0096cbfc _DAT_0096cbfc
#define DAT_0096cc00 _DAT_0096cc00
#define DAT_0096cc04 _DAT_0096cc04
#define DAT_0096cc14 _DAT_0096cc14
#define DAT_0096cdc4 _DAT_0096cdc4
#define DAT_0096cdc8 _DAT_0096cdc8
#define DAT_0096cdcc _DAT_0096cdcc
#define DAT_0096cddc _DAT_0096cddc
#define DAT_0096cfdc _DAT_0096cfdc
#define DAT_0096cfe0 _DAT_0096cfe0
#define DAT_0096cfe4 _DAT_0096cfe4
#define DAT_0096cff4 _DAT_0096cff4
#define DAT_0097c16c _DAT_0097c16c
#define DAT_0097c170 _DAT_0097c170
#define DAT_0097c174 _DAT_0097c174
#define DAT_0097c184 _DAT_0097c184
#define DAT_0097c30c _DAT_0097c30c
#define DAT_0097c310 _DAT_0097c310
#define DAT_0097c314 _DAT_0097c314
#define DAT_0097c324 _DAT_0097c324
#define DAT_0097c5ec _DAT_0097c5ec
#define DAT_0097c5f0 _DAT_0097c5f0
#define DAT_0097c5f4 _DAT_0097c5f4
#define DAT_0097c604 _DAT_0097c604
#define DAT_0097c994 _DAT_0097c994
#define DAT_0097c998 _DAT_0097c998
#define DAT_0097c99c _DAT_0097c99c
#define DAT_0097c9ac _DAT_0097c9ac
#define DAT_0097cbd4 _DAT_0097cbd4
#define DAT_0097cbd8 _DAT_0097cbd8
#define DAT_0097cbdc _DAT_0097cbdc
#define DAT_0097cbec _DAT_0097cbec
#define DAT_0097cd24 _DAT_0097cd24
#define DAT_0097cd28 _DAT_0097cd28
#define DAT_0097cd2c _DAT_0097cd2c
#define DAT_0097cd3c _DAT_0097cd3c
#define DAT_0097d00c _DAT_0097d00c
#define DAT_0097d010 _DAT_0097d010
#define DAT_0097d014 _DAT_0097d014
#define DAT_0097d024 _DAT_0097d024
#define DAT_0097d1ac _DAT_0097d1ac
#define DAT_0097d1b0 _DAT_0097d1b0
#define DAT_0097d1b4 _DAT_0097d1b4
#define DAT_0097d1c4 _DAT_0097d1c4
#define DAT_0097d3c4 _DAT_0097d3c4
#define DAT_0097d3c8 _DAT_0097d3c8
#define DAT_0097d3cc _DAT_0097d3cc
#define DAT_0097d3dc _DAT_0097d3dc
#define DAT_0097d5dc _DAT_0097d5dc
#define DAT_0097d5e0 _DAT_0097d5e0
#define DAT_0097d5e4 _DAT_0097d5e4
#define DAT_0097d5f4 _DAT_0097d5f4
#define DAT_0097df64 _DAT_0097df64
#define DAT_0097df68 _DAT_0097df68
#define DAT_0097df6c _DAT_0097df6c
#define DAT_0097df7c _DAT_0097df7c
#define DAT_0097e2bc _DAT_0097e2bc
#define DAT_0097e2c0 _DAT_0097e2c0
#define DAT_0097e2c4 _DAT_0097e2c4
#define DAT_0097e2d4 _DAT_0097e2d4
#define DAT_00988cf8 _DAT_00988cf8
#define DAT_00989520 _DAT_00989520
#define DAT_0098d120 _DAT_0098d120
#define DAT_0098d128 _DAT_0098d128
#define DAT_00992824 _DAT_00992824
#define DAT_00992828 _DAT_00992828
#define DAT_0099282c _DAT_0099282c
#define DAT_0099283c _DAT_0099283c

/* session-h dat aliases */
#define DAT_00961c5c _DAT_00961c5c
#define DAT_00961c60 _DAT_00961c60
#define DAT_00961c64 _DAT_00961c64
#define DAT_00961c74 _DAT_00961c74
#define DAT_00962324 _DAT_00962324
#define DAT_00962328 _DAT_00962328
#define DAT_0096232c _DAT_0096232c
#define DAT_0096233c _DAT_0096233c
#define DAT_00962924 _DAT_00962924
#define DAT_00962928 _DAT_00962928
#define DAT_0096292c _DAT_0096292c
#define DAT_0096293c _DAT_0096293c
#define DAT_009659bc _DAT_009659bc
#define DAT_009659c0 _DAT_009659c0
#define DAT_009659c4 _DAT_009659c4
#define DAT_009659d4 _DAT_009659d4
#define DAT_009664bc _DAT_009664bc
#define DAT_009664c0 _DAT_009664c0
#define DAT_009664c4 _DAT_009664c4
#define DAT_009664d4 _DAT_009664d4
#define DAT_0096729c _DAT_0096729c
#define DAT_009672a0 _DAT_009672a0
#define DAT_009672a4 _DAT_009672a4
#define DAT_009672b4 _DAT_009672b4
#define DAT_00967504 _DAT_00967504
#define DAT_00967508 _DAT_00967508
#define DAT_0096750c _DAT_0096750c
#define DAT_0096751c _DAT_0096751c
#define DAT_009676f4 _DAT_009676f4
#define DAT_009676f8 _DAT_009676f8
#define DAT_009676fc _DAT_009676fc
#define DAT_0096770c _DAT_0096770c
#define DAT_00967894 _DAT_00967894
#define DAT_00967898 _DAT_00967898
#define DAT_0096789c _DAT_0096789c
#define DAT_009678ac _DAT_009678ac
#define DAT_009680a4 _DAT_009680a4
#define DAT_009680a8 _DAT_009680a8
#define DAT_009680ac _DAT_009680ac
#define DAT_009680bc _DAT_009680bc
#define DAT_0096871c _DAT_0096871c
#define DAT_00968720 _DAT_00968720
#define DAT_00968724 _DAT_00968724
#define DAT_00968734 _DAT_00968734
#define DAT_00969b8c _DAT_00969b8c
#define DAT_00969b90 _DAT_00969b90
#define DAT_00969b94 _DAT_00969b94
#define DAT_00969ba4 _DAT_00969ba4
#define DAT_0096c01c _DAT_0096c01c
#define DAT_0096c020 _DAT_0096c020
#define DAT_0096c024 _DAT_0096c024
#define DAT_0096c034 _DAT_0096c034
#define DAT_0096c194 _DAT_0096c194
#define DAT_0096c198 _DAT_0096c198
#define DAT_0096c19c _DAT_0096c19c
#define DAT_0096c1ac _DAT_0096c1ac
#define DAT_0096c45c _DAT_0096c45c
#define DAT_0096c460 _DAT_0096c460
#define DAT_0096c464 _DAT_0096c464
#define DAT_0096c474 _DAT_0096c474
#define DAT_0096cbfc _DAT_0096cbfc
#define DAT_0096cc00 _DAT_0096cc00
#define DAT_0096cc04 _DAT_0096cc04
#define DAT_0096cc14 _DAT_0096cc14
#define DAT_0096cdc4 _DAT_0096cdc4
#define DAT_0096cdc8 _DAT_0096cdc8
#define DAT_0096cdcc _DAT_0096cdcc
#define DAT_0096cddc _DAT_0096cddc
#define DAT_0096cfdc _DAT_0096cfdc
#define DAT_0096cfe0 _DAT_0096cfe0
#define DAT_0096cfe4 _DAT_0096cfe4
#define DAT_0096cff4 _DAT_0096cff4
#define DAT_0097c16c _DAT_0097c16c
#define DAT_0097c170 _DAT_0097c170
#define DAT_0097c174 _DAT_0097c174
#define DAT_0097c184 _DAT_0097c184
#define DAT_0097c30c _DAT_0097c30c
#define DAT_0097c310 _DAT_0097c310
#define DAT_0097c314 _DAT_0097c314
#define DAT_0097c324 _DAT_0097c324
#define DAT_0097c5ec _DAT_0097c5ec
#define DAT_0097c5f0 _DAT_0097c5f0
#define DAT_0097c5f4 _DAT_0097c5f4
#define DAT_0097c604 _DAT_0097c604
#define DAT_0097c994 _DAT_0097c994
#define DAT_0097c998 _DAT_0097c998
#define DAT_0097c99c _DAT_0097c99c
#define DAT_0097c9ac _DAT_0097c9ac
#define DAT_0097cbd4 _DAT_0097cbd4
#define DAT_0097cbd8 _DAT_0097cbd8
#define DAT_0097cbdc _DAT_0097cbdc
#define DAT_0097cbec _DAT_0097cbec
#define DAT_0097cd24 _DAT_0097cd24
#define DAT_0097cd28 _DAT_0097cd28
#define DAT_0097cd2c _DAT_0097cd2c
#define DAT_0097cd3c _DAT_0097cd3c
#define DAT_0097d00c _DAT_0097d00c
#define DAT_0097d010 _DAT_0097d010
#define DAT_0097d014 _DAT_0097d014
#define DAT_0097d024 _DAT_0097d024
#define DAT_0097d1ac _DAT_0097d1ac
#define DAT_0097d1b0 _DAT_0097d1b0
#define DAT_0097d1b4 _DAT_0097d1b4
#define DAT_0097d1c4 _DAT_0097d1c4
#define DAT_0097d3c4 _DAT_0097d3c4
#define DAT_0097d3c8 _DAT_0097d3c8
#define DAT_0097d3cc _DAT_0097d3cc
#define DAT_0097d3dc _DAT_0097d3dc
#define DAT_0097d5dc _DAT_0097d5dc
#define DAT_0097d5e0 _DAT_0097d5e0
#define DAT_0097d5e4 _DAT_0097d5e4
#define DAT_0097d5f4 _DAT_0097d5f4
#define DAT_0097df64 _DAT_0097df64
#define DAT_0097df68 _DAT_0097df68
#define DAT_0097df6c _DAT_0097df6c
#define DAT_0097df7c _DAT_0097df7c
#define DAT_0097e2bc _DAT_0097e2bc
#define DAT_0097e2c0 _DAT_0097e2c0
#define DAT_0097e2c4 _DAT_0097e2c4
#define DAT_0097e2d4 _DAT_0097e2d4
#define DAT_00988cf8 _DAT_00988cf8
#define DAT_00989520 _DAT_00989520
#define DAT_0098d120 _DAT_0098d120
#define DAT_0098d128 _DAT_0098d128
#define DAT_00992824 _DAT_00992824
#define DAT_00992828 _DAT_00992828
#define DAT_0099282c _DAT_0099282c
#define DAT_0099283c _DAT_0099283c

/* session-k zone externs */
extern void *Darray_L_bool_G___DefaultArrayAllocator;
extern void *Darray_L_bool_G___DefaultDataClearer;
extern void *Darray_L_bool_G___DefaultDataCopier;
extern void *Darray_L_class_util__LocStr_G___DefaultArrayAllocator;
extern void *Darray_L_class_util__LocStr_G___DefaultArrayDestroyer;
extern void *Darray_L_class_util__LocStr_G___DefaultDataClearer;
extern void *Darray_L_class_util__LocStr_G___DefaultDataCopier;
extern void *Darray_L_class_util__Str_L_char_G___G___DefaultArrayAllocator;
extern void *Darray_L_class_util__Str_L_char_G___G___DefaultArrayDestroyer;
extern void *Darray_L_class_util__Str_L_char_G___G___DefaultDataClearer;
extern void *Darray_L_class_util__Str_L_char_G___G___DefaultDataCopier;
extern void *Darray_L_double_G___DefaultArrayAllocator;
extern void *Darray_L_double_G___DefaultDataClearer;
extern void *Darray_L_double_G___DefaultDataCopier;
typedef struct Darray_L_util__WeakPtr_L_GameModel_G___G_ Darray_L_util__WeakPtr_L_GameModel_G___G_, *PDarray_L_util__WeakPtr_L_GameModel_G___G_;
extern void *Darray_L_void_P_G___DefaultArrayAllocator;
extern void *Darray_L_void_P_G___DefaultDataClearer;
extern void *Darray_L_void_P_G___DefaultDataCopier;
extern double Physics__DefaultShipOperationalTime_s;
extern void *___WGLEW_3DFX_multisample;
extern void *___WGLEW_3DL_stereo_control;
extern void *___WGLEW_AMD_gpu_association;
extern void *___WGLEW_ARB_buffer_region;
extern void *___WGLEW_ARB_context_flush_control;
extern void *___WGLEW_ARB_create_context;
extern void *___WGLEW_ARB_create_context_profile;
extern void *___WGLEW_ARB_create_context_robustness;
extern void *___WGLEW_ARB_extensions_string;
extern void *___WGLEW_ARB_framebuffer_sRGB;
extern void *___WGLEW_ARB_make_current_read;
extern void *___WGLEW_ARB_multisample;
extern void *___WGLEW_ARB_pbuffer;
extern void *___WGLEW_ARB_pixel_format;
extern void *___WGLEW_ARB_pixel_format_float;
extern void *___WGLEW_ARB_render_texture;
extern void *___WGLEW_ARB_robustness_application_isolation;
extern void *___WGLEW_ARB_robustness_share_group_isolation;
extern void *___WGLEW_ATI_pixel_format_float;
extern void *___WGLEW_ATI_render_texture_rectangle;
extern void *___WGLEW_EXT_create_context_es2_profile;
extern void *___WGLEW_EXT_create_context_es_profile;
extern void *___WGLEW_EXT_depth_float;
extern void *___WGLEW_EXT_display_color_table;
extern void *___WGLEW_EXT_extensions_string;
extern void *___WGLEW_EXT_framebuffer_sRGB;
extern void *___WGLEW_EXT_make_current_read;
extern void *___WGLEW_EXT_multisample;
extern void *___WGLEW_EXT_pbuffer;
extern void *___WGLEW_EXT_pixel_format;
extern void *___WGLEW_EXT_pixel_format_packed_float;
extern void *___WGLEW_EXT_swap_control;
extern void *___WGLEW_EXT_swap_control_tear;
extern void *___WGLEW_I3D_digital_video_control;
extern void *___WGLEW_I3D_gamma;
extern void *___WGLEW_I3D_genlock;
extern void *___WGLEW_I3D_image_buffer;
extern void *___WGLEW_I3D_swap_frame_lock;
extern void *___WGLEW_I3D_swap_frame_usage;
extern void *___WGLEW_NV_DX_interop;
extern void *___WGLEW_NV_DX_interop2;
extern void *___WGLEW_NV_copy_image;
extern void *___WGLEW_NV_delay_before_swap;
extern void *___WGLEW_NV_float_buffer;
extern void *___WGLEW_NV_gpu_affinity;
extern void *___WGLEW_NV_multisample_coverage;
extern void *___WGLEW_NV_present_video;
extern void *___WGLEW_NV_render_depth_texture;
extern void *___WGLEW_NV_render_texture_rectangle;
extern void *___WGLEW_NV_swap_group;
extern void *___WGLEW_NV_vertex_array_range;
extern void *___WGLEW_NV_video_capture;
extern void *___WGLEW_NV_video_output;
extern void *___WGLEW_OML_sync_control;

/* auto-generated missing _func___cdecl typedefs (K&R no-prototype) */
typedef int _func___cdecl_int();

/* extern fallback (undeclared, no dym) */
extern Range_L_int_G_ BasicPhysicalMetrics__HumanReadingSpeedWordsPerMinute;
extern char CrewModule__Coolant[16];
extern char Icons__Selection[16];
extern char MethodCallerConst_L__private__void___thiscall_MainManager__RenderHeroShot_void_const__G_[16];
extern char MethodCallerConst_L__private__void___thiscall_MainManager__RenderTitle_void_const__G_[16];
extern char MethodCaller_L__private__void___thiscall_BriefingsHandler__BuildBriefingMenu_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_BriefingsHandler__BuildLevelsScreen_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_BriefingsHandler__DestroyViewer_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_BriefingsHandler__OnCampaignChanged_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_BriefingsHandler__TearDownScreen_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_LevelEditor__AddFleet_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_LevelEditor__CreateNewBody_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_LevelEditor__DeleteSelectedObject_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_LevelEditor__RebuildLevelAttributes_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_LevelEditor__RefreshLevelAttributes_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_MainManager__BuildOptionsMenu_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_ModuleDesignManager__BuildModuleList_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_ModuleDesignManager__BuildModuleMenu_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_ModuleDesignManager__DestroyViewer_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_ModuleDesignManager__OnComparisonModuleChanged_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_ModuleDesignManager__PreRename_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_ModuleDesignManager__RefreshAndRename_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_ModuleDesignManager__ToggleAnimation_void__G_[16];
extern char MethodCaller_L__private__void___thiscall_ScenarioEditor__DeleteObject_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_BriefingsHandler__AttemptPlaySelectedLevel_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_BriefingsHandler__OpenBriefingMenu_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_BriefingsHandler__PlaySelectedLevel_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_BriefingsHandler__WatchEnding_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_ModuleDesignManager__DestroySelectedModule_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_ModuleDesignManager__DuplicateSelectedModule_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_ModuleDesignManager__FullyRefreshCurrentModule_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_ModuleDesignManager__LoadSelectedModuleAndStore_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_ModuleDesignManager__RefreshCurrentModule_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_ModuleDesignManager__RequestDeleteModule_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_ModuleDesignManager__SaveAndBack_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_ModuleDesignManager__SaveAsCopyAndBack_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_PauseMenuHandler__Back_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_PauseMenuHandler__Clear_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_StandaloneOptionsButton__Clear_void__G_[16];
extern char MethodCaller_L__public__void___thiscall_StandaloneOptionsButton__OnChangedPreferences_void__G_[16];
extern char _Facetptr_L_std__codecvt_L_char_Cchar_C_Mbstatet_G___G____Psave[16];
extern char __Stinit[16];
extern char __TI2_AVbad_alloc_std__[16];
extern char __TI2_AVbad_cast_std__[16];
extern char __TI3_AVbad_array_new_length_std__[16];
extern char ___xmm_00000001000000010000000100000001[16];
extern char ___xmm_408f400000000000408f400000000000[16];
extern char __ehhandler___1_Fac_node_std__QAE_XZ[16];
extern char _func_void_Vec2_L_int_G__Darray_L_struct_GlobalLight_G__ptr_Darray_L_struct_WorldLight_G__ptr_double[16];
extern char exception__vftable[16];

/* extern fallback pass2 */
extern void * ArcLampPumpSubModule__ElectrodeComposition;
typedef struct AssocArray_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cutil__ReflectionRegistry__TupleTypedFunctions_G___G_ AssocArray_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cutil__ReflectionRegistry__TupleTypedFunctions_G___G_, *PAssocArray_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cutil__ReflectionRegistry__TupleTypedFunctions_G___G_;
typedef struct Attribute_L_util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_BriefingSubject__Type_G___G___G___G_ Attribute_L_util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_BriefingSubject__Type_G___G___G___G_, *PAttribute_L_util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_BriefingSubject__Type_G___G___G___G_;
extern void * BVar2;
extern void * CargoModule__Cargo;
extern void * CrewModule__Food;
extern void * CrewModule__Human;
extern void * CrewModule__Nitrogen;
extern void * CrewModule__Oxygen;
extern void * CrewModule__Water;
extern undefined4 DAT_00962e7c;
extern undefined4 DAT_00962e80;
extern undefined4 DAT_00962e84;
extern undefined4 DAT_00962e94;
extern undefined4 DAT_0096306c;
extern undefined4 DAT_00963070;
extern undefined4 DAT_00963074;
extern undefined4 DAT_00963084;
extern undefined4 DAT_009633c4;
extern undefined4 DAT_009633c8;
extern undefined4 DAT_009633cc;
extern undefined4 DAT_009633dc;
extern undefined4 DAT_00963eec;
extern undefined4 DAT_00963ef0;
extern undefined4 DAT_00963ef4;
extern undefined4 DAT_00963f04;
extern undefined4 DAT_0096d57c;
extern undefined4 DAT_0096d580;
extern undefined4 DAT_0096d584;
extern undefined4 DAT_0096d594;
extern undefined4 DAT_0096d994;
extern undefined4 DAT_0096d998;
extern undefined4 DAT_0096d99c;
extern undefined4 DAT_0096d9ac;
extern undefined4 DAT_0096e254;
extern undefined4 DAT_0096e258;
extern undefined4 DAT_0096e25c;
extern undefined4 DAT_0096e26c;
extern undefined4 DAT_0096e4ac;
extern undefined4 DAT_0096e4b0;
extern undefined4 DAT_0096e4b4;
extern undefined4 DAT_0096e4c4;
extern undefined4 DAT_0096e64c;
extern undefined4 DAT_0096e650;
extern undefined4 DAT_0096e654;
extern undefined4 DAT_0096e664;
extern undefined4 DAT_00972814;
extern undefined4 DAT_00972818;
extern undefined4 DAT_0097281c;
extern undefined4 DAT_0097282c;
extern undefined4 DAT_00972dac;
extern undefined4 DAT_00972db0;
extern undefined4 DAT_00972db4;
extern undefined4 DAT_00972dc4;
extern undefined4 DAT_0097b86c;
extern undefined4 DAT_0097b870;
extern undefined4 DAT_0097b874;
extern undefined4 DAT_0097b884;
extern undefined4 DAT_0097bcfc;
extern undefined4 DAT_0097bd00;
extern undefined4 DAT_0097bd04;
extern undefined4 DAT_0097bd14;
extern undefined4 DAT_0097e62c;
extern undefined4 DAT_0097e630;
extern undefined4 DAT_0097e634;
extern undefined4 DAT_0097e644;
extern undefined4 DAT_0097eac4;
extern undefined4 DAT_0097eac8;
extern undefined4 DAT_0097eacc;
extern undefined4 DAT_0097eadc;
extern undefined4 DAT_0097eebc;
extern undefined4 DAT_0097eec0;
extern undefined4 DAT_0097eec4;
extern undefined4 DAT_0097eed4;
extern undefined4 DAT_0097f0fc;
extern undefined4 DAT_0097f100;
extern undefined4 DAT_0097f104;
extern undefined4 DAT_0097f114;
extern undefined4 DAT_0097f4fc;
extern undefined4 DAT_0097f500;
extern undefined4 DAT_0097f504;
extern undefined4 DAT_0097f514;
extern undefined4 DAT_0097f904;
extern undefined4 DAT_0097f908;
extern undefined4 DAT_0097f90c;
extern undefined4 DAT_0097f91c;
typedef struct Darray_L_util__LocStr_G_ Darray_L_util__LocStr_G_, *PDarray_L_util__LocStr_G_;
typedef struct Darray_L_util__tuple2_L_BriefingSubject__Type_Cutil__Str_L_char_G___G___G_ Darray_L_util__tuple2_L_BriefingSubject__Type_Cutil__Str_L_char_G___G___G_, *PDarray_L_util__tuple2_L_BriefingSubject__Type_Cutil__Str_L_char_G___G___G_;
typedef struct Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_ Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_, *PDarray_L_util__tuple2_L_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_;
extern long long int DelegateFactory_L_BriefingsHandler_Cbool_G___MethodCallerConst_L__private__bool___thiscall_BriefingsHandler__CanOpenBriefing_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cbool_G___MethodCallerConst_L__private__bool___thiscall_BriefingsHandler__CanStartMission_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cbool_G___MethodCallerConst_L__private__bool___thiscall_BriefingsHandler__CanWatchEnding_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cbool_G___MethodCallerConst_L__private__bool___thiscall_BriefingsHandler__GetInitialRecordsVisibility_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cbool_G___MethodCallerConst_L__private__bool___thiscall_BriefingsHandler__GetSelectedLevelVisibility_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G____thiscall_BriefingsHandler__GetCampaignChoices_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Reflectable_P___thiscall_BriefingsHandler__GetSelectedLevel_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cutil__Reflectable_P_P_G___MethodCallerConst_L__private__class_util__Reflectable_P_P___thiscall_BriefingsHandler__GetCurrentCampaignDatum_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetOpenBriefingTooltip_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetSelectedLevelName_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetSelectedLevelShortDescription_void_const__G_();
extern long long int DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetStartMissionTooltip_void_const__G_();
extern long long int DelegateFactory_L_LevelEditor_Cbool_G___MethodCallerConst_L__private__bool___thiscall_LevelEditor__CanAddFleet_void_const__G_();
extern long long int DelegateFactory_L_LevelEditor_Cbool_G___MethodCallerConst_L__private__bool___thiscall_LevelEditor__CanAddNewBody_void_const__G_();
extern long long int DelegateFactory_L_LevelEditor_Cbool_G___MethodCallerConst_L__private__bool___thiscall_LevelEditor__CanModifySelection_void_const__G_();
extern long long int DelegateFactory_L_LevelEditor_Cbool_G___MethodCallerConst_L__private__bool___thiscall_LevelEditor__IsAFleetSelected_void_const__G_();
extern long long int DelegateFactory_L_LevelEditor_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G____thiscall_LevelEditor__GetSelectedFleetAllianceChoices_void_const__G_();
extern long long int DelegateFactory_L_LevelEditor_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G____thiscall_LevelEditor__GetSelectedFleetStartBodyChoices_void_const__G_();
extern long long int DelegateFactory_L_LevelEditor_Cvoid_Cutil__Reflectable_P_G___MethodCaller_L__private__void___thiscall_LevelEditor__AddChildBody_class_util__Reflectable_P__G_();
extern long long int DelegateFactory_L_MainManager_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__private__struct_util__Vec2_L_int_G____thiscall_MainManager__GetOptionsSize_void_const__G_();
extern long long int DelegateFactory_L_MainManager_Cvoid_G___MethodCaller_L__public__void___thiscall_MainManager__Back_void__G_();
extern long long int DelegateFactory_L_ModuleDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ModuleDesignManager__BuildModuleList_void__G_();
extern long long int DelegateFactory_L_ModuleDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ModuleDesignManager__DestroyViewer_void__G_();
extern long long int DelegateFactory_L_ScenarioEditor_Cutil__Str_L_char_G__Cdouble_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_ScenarioEditor__GetDecimalPrinting_double_Cclass_util__Str_L_char_G__const__G_();
extern long long int DelegateFactory_L_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__RebuildCurrentLevel_void__G_();
extern long long int DelegateFactory_L_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__RefreshCurrentLevel_void__G_();
extern long long int DelegateFactory_L_ScenarioEditor_Cvoid_G___MethodCaller_L__public__void___thiscall_ScenarioEditor__SaveAndBack_void__G_();
extern long long int DelegateFactory_L_ShipDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ShipDesignManager__BuildCraftList_void__G_();
extern long long int DelegateFactory_L_ShipDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ShipDesignManager__DestroyViewer_void__G_();
extern long long int DelegateFactory_L_StandaloneOptionsButton_Cvoid_G___MethodCaller_L__public__void___thiscall_StandaloneOptionsButton__OnChangedPreferences_void__G_();
extern long long int DelegateFactory_L_UIDataDropButton_Cutil__Str_L_char_G__Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIDataDropButton__GetNameLabel_class_util__Reflectable_P_const__G_();
extern long long int DelegateFactory_L_UIDataListBox_Cint_Cutil__Reflectable_P_G___MethodCallerConst_L__private__int___thiscall_UIDataListBox__GetRowHeight_class_util__Reflectable_P_const__G_();
extern long long int DelegateFactory_L_class_LevelEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_LevelEditor__BuildLevelEditorScreen_void__G_();
extern long long int DelegateFactory_L_class_ModuleDesignManager_Cbool_G___MethodCallerConst_L__private__bool___thiscall_ModuleDesignManager__CanModifySelectedModule_void_const__G_();
extern long long int DelegateFactory_L_class_ModuleDesignManager_Cbool_G___MethodCallerConst_L__private__bool___thiscall_ModuleDesignManager__ShouldShowOriginalModuleStats_void_const__G_();
extern long long int DelegateFactory_L_class_ModuleDesignManager_Cclass_util__Str_L_char_G__Cdouble_Cclass_util__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_ModuleDesignManager__GetDecimalPrinting_double_Cclass_util__Str_L_char_G__const__G_();
extern long long int DelegateFactory_L_class_ModuleDesignManager_Cclass_util__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_ModuleDesignManager__GetLockedWarningText_void_const__G_();
extern long long int DelegateFactory_L_class_ModuleDesignManager_Cclass_util__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_ModuleDesignManager__GetModuleDescription_void_const__G_();
extern long long int DelegateFactory_L_class_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__BuildScenarioEditorScreen_void__G_();
extern long long int DelegateFactory_L_class_ShipDesignManager_Cbool_G___MethodCallerConst_L__private__bool___thiscall_ShipDesignManager__CanAccessLevelEditor_void_const__G_();
extern long long int DelegateFactory_L_class_ShipDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ShipDesignManager__BuildCraftList_void__G_();
extern long long int Delegate_L_util__Reflectable_P_G___MethodCallerConst_L_UIDropdown_L_util__Reflectable_P_G__C_public__class_util__Reflectable_P___thiscall_UIDropdown_L_class_util__Reflectable_P_G___GetSelectedData_void_const__G_();
extern long long int Delegate_L_void_Cutil__Reflectable_P_G___MethodCaller_L_UIDropdown_L_util__Reflectable_P_G__C_public__void___thiscall_UIDropdown_L_class_util__Reflectable_P_G___OnSelect_class_util__Reflectable_P__G_();
extern long long int Delegate_L_void_G___MethodCaller_L_UIDropButton_L_util__Reflectable_P_G__C_public__void___thiscall_UIDropButton_L_class_util__Reflectable_P_G___OnClick_void__G_();
extern undefined4 Icons__Cost;
extern undefined4 Icons__CustomFleetsBadge;
void __cdecl Icons__Explosion(Darray_L_enum_util__SampleColor__Preset_G_ *param_1);
extern undefined4 Icons__Eye;
extern undefined4 Icons__EyeCancel;
extern undefined4 Icons__FiringArc;
extern undefined4 Icons__Lock;
extern undefined4 Icons__Payload;
extern undefined4 Icons__Propulsion;
extern undefined4 Icons__RadiationHazard;
extern undefined4 Icons__RadiationShield;
extern undefined4 Icons__Railgun;
extern undefined4 Icons__RemoteControl;
extern undefined4 Icons__Reorient;
extern undefined4 Icons__RocketEngine;
extern undefined4 Icons__Roll;
void __cdecl Icons__Target(void);
extern undefined4 Icons__Unlock;
extern undefined4 Icons__Wrench;
extern undefined4 LocalizationLibrary__CurrentLanguage;
extern void * NuclearReactorSubModule__NuclearWaste;
extern undefined4 Physics__BohrMagneton_J__T;
extern undefined4 Physics__BoltzmannConstant_J__K;
extern Range_L_int_G_ Physics__HumanReadingSpeedWordsPerMinute;
extern void * RefuelerModule__HoseComposition;
extern undefined4 __ehhandler____scrt_initialize_thread_safe_statics_platform_specific__YAXXZ;
extern undefined4 _crt_argv_mode___crt_argv_unexpanded_arguments;
typedef struct basic_istream_L_char_Cstruct_std__char_traits_L_char_G___G_ basic_istream_L_char_Cstruct_std__char_traits_L_char_G___G_, *Pbasic_istream_L_char_Cstruct_std__char_traits_L_char_G___G_;
typedef struct basic_ostream_L_char_Cstruct_std__char_traits_L_char_G___G_ basic_ostream_L_char_Cstruct_std__char_traits_L_char_G___G_, *Pbasic_ostream_L_char_Cstruct_std__char_traits_L_char_G___G_;
extern undefined4 iVar3;
extern undefined4 local_20;
extern undefined4 local_30;
extern void * pCVar3;
extern void * pLVar1;
extern void * pRVar8;
extern void * puVar6;
extern undefined4 std__basic_ifstream_L_char_Cstruct_std__char_traits_L_char_G___G____vbtable_;
extern undefined4 std__basic_ofstream_L_char_Cstd__char_traits_L_char_G___G____vbtable_;
extern undefined4 std__basic_ofstream_L_char_Cstruct_std__char_traits_L_char_G___G____vbtable_;
extern _Bool util__DelegateFactory_L_BalloonPopup_Cbool_G___MethodCallerConst_L__private__bool___thiscall_BalloonPopup__ShouldShow_void_const__G_(void *param_1);
extern double util__DelegateFactory_L_BalloonPopup_Cdouble_G___MethodCallerConst_L__private__double___thiscall_BalloonPopup__GetScreenDepthResult_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_BalloonPopup_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BalloonPopup__GetText_void_const__G_();
extern Vec2_L_int_G_ util__DelegateFactory_L_BalloonPopup_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__private__struct_util__Vec2_L_int_G____thiscall_BalloonPopup__GetScreenPositionResult_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_BalloonPopup_Cvoid_G___MethodCaller_L__private__void___thiscall_BalloonPopup__Action_void__G_();
extern long long int util__DelegateFactory_L_BalloonPopup_Cvoid_G___MethodCaller_L__private__void___thiscall_BalloonPopup__Close_void__G_();
extern Vec2_L_int_G_ util__DelegateFactory_L_BarGraph_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__public__struct_util__Vec2_L_int_G____thiscall_BarGraph__GetChartDesiredSize_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_BlackBoxWeaponModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_BlackBoxWeaponModule__GetLaserChartXRanges_void_const__C0__G_();
extern long long int util__DelegateFactory_L_BlackBoxWeaponModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_BlackBoxWeaponModule__GetLaserChartYRanges_void_const__C0__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cbool_G___MethodCallerConst_L__private__bool___thiscall_BriefingsHandler__GetExtraButtonsVisible_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cbool_G___MethodCallerConst_L__private__bool___thiscall_BriefingsHandler__GetSelectedLevelVisibility_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cint_CBriefingSubject__Type_G___MethodCallerConst_L__private__int___thiscall_BriefingsHandler__GetBriefingTopLevelRowHeight_enum_BriefingSubject__Type_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cint_Cutil__Reflectable_P_G___MethodCallerConst_L__private__int___thiscall_BriefingsHandler__GetCustomSublevelRowHeight_class_util__Reflectable_P_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_BriefingSubject__Type_G___G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_enum_BriefingSubject__Type_G___G___G____thiscall_BriefingsHandler__GetSelectableSubjects_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G____thiscall_BriefingsHandler__GetCampaignChoices_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Reflectable_P___thiscall_BriefingsHandler__GetCustomSublevelSelected_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Reflectable_P___thiscall_BriefingsHandler__GetDataViewSelection_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Reflectable_P___thiscall_BriefingsHandler__GetSelectedLevel_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Reflectable_P_P_G___MethodCallerConst_L__private__class_util__Reflectable_P_P___thiscall_BriefingsHandler__GetCurrentCampaignDatum_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G__CBriefingSubject__Type_G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetBriefingTopLevelLabel_enum_BriefingSubject__Type_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G__Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetBriefingSublevelTooltip_class_util__Reflectable_P_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G__Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetCustomSublevelLabel_class_util__Reflectable_P_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetOpenBriefingTooltip_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetSelectedLevelName_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetSelectedLevelShortDescription_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_BriefingsHandler__GetStartMissionTooltip_void_const__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cvoid_CBriefingSubject__Type_G___MethodCaller_L__private__void___thiscall_BriefingsHandler__GetBriefingTopLevelOnSelected_enum_BriefingSubject__Type__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cvoid_Cutil__Reflectable_P_G___MethodCaller_L__private__void___thiscall_BriefingsHandler__GetCustomSublevelOnSelected_class_util__Reflectable_P__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cvoid_G___MethodCaller_L__public__void___thiscall_BriefingsHandler__PlaySelectedLevel_void__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cvoid_G___MethodCaller_L__public__void___thiscall_BriefingsHandler__WatchEnding_void__G_();
extern long long int util__DelegateFactory_L_BriefingsHandler_Cvoid____cdecl_P__void__Cutil__Reflectable_P_G___MethodCallerConst_L__private__void____cdecl_P__thiscall_BriefingsHandler__GetBriefingSublevelIcon_class_util__Reflectable_P_const__void__G_();
extern Vec2_L_int_G_ util__DelegateFactory_L_ChartLegend_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__public__struct_util__Vec2_L_int_G____thiscall_ChartLegend__GetSizeOfChart_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_CrewInfoUI_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_CrewInfoUI__GetCrewInfo_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_CrewInfoUI_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_CrewInfoUI__GetDeptTotalString_void_const__G_();
extern _Bool util__DelegateFactory_L_ErrorMessageUI_Cbool_G___MethodCallerConst_L__public__bool___thiscall_ErrorMessageUI__HasAnyChildren_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_ExportButton_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_ExportButton__GetTooltipInfo_void_const__G_();
extern long long int util__DelegateFactory_L_FleetCustomizationReadout_Cbool_G___MethodCallerConst_L__public__bool___thiscall_FleetCustomizationReadout__HasLimits_void_const__G_();
extern Range_L_double_G_ util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_FleetCustomizationReadout__GetCostBarRanges_void_const__G_(void *param_1);
extern Range_L_double_G_ util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_FleetCustomizationReadout__GetMassBarRanges_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_FleetCustomizationReadout__GetCostBarInfo_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_FleetCustomizationReadout__GetCostExtraInfo_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_FleetCustomizationReadout__GetCostHeader_void_const__G_();
extern Str_L_char_G_ util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_FleetCustomizationReadout__GetMassBarInfo_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_FleetCustomizationReadout__GetMassExtraInfo_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_FleetCustomizationReadout__GetMassHeader_void_const__G_();
extern long long int util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_FleetCustomizationReadout__GetStatsHeader_void_const__G_();
extern long long int util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_FleetCustomizationReadout__GetTextInfo_void_const__G_();
extern long long int util__DelegateFactory_L_FleetCustomizationReadout_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__public__struct_util__Vec2_L_int_G____thiscall_FleetCustomizationReadout__GetBarSize_void_const__G_();
extern long long int util__DelegateFactory_L_InfolinksManager_Cint_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__int___thiscall_InfolinksManager__GetInfolinksTopLevelRowHeight_class_util__Str_L_char_G__const__G_();
extern long long int util__DelegateFactory_L_InfolinksManager_Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Reflectable_P___thiscall_InfolinksManager__GetInfolinksSublevelSelection_void_const__G_();
extern long long int util__DelegateFactory_L_InfolinksManager_Cutil__Str_L_char_G__Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_InfolinksManager__GetInfolinksTopLevelLabel_class_util__Str_L_char_G__const__G_();
extern long long int util__DelegateFactory_L_InfolinksManager_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_InfolinksManager__GetInfolinksSublevelHeader_void_const__G_();
extern long long int util__DelegateFactory_L_InfolinksManager_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_InfolinksManager__GetInfolinksTopLevelSelection_void_const__G_();
extern long long int util__DelegateFactory_L_InfolinksManager_Cvoid_Cutil__Reflectable_P_G___MethodCaller_L__private__void___thiscall_InfolinksManager__GetInfolinksSublevelOnSelected_class_util__Reflectable_P__G_();
extern long long int util__DelegateFactory_L_InfolinksManager_Cvoid_Cutil__Str_L_char_G___G___MethodCaller_L__public__void___thiscall_InfolinksManager__GetInfolinksTopLevelOnSelected_class_util__Str_L_char_G___G_();
extern long long int util__DelegateFactory_L_LevelRecordSlotUI_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_LevelRecordSlotUI__GetRecordInfo_void_const__G_();
extern _Bool util__DelegateFactory_L_LevelRecordsUI_Cbool_G___MethodCallerConst_L__public__bool___thiscall_LevelRecordsUI__GetRecordsVisibility_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_LevelRecordsUI_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_LevelRecordsUI__GetRatingTooltip_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_LevelRecordsUI_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_LevelRecordsUI__GetRatingVerboseTooltip_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_LevelRecordsUI_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_LevelRecordsUI__GetUnlockInfo_void_const__G_();
extern long long int util__DelegateFactory_L_LineGraph_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_LineGraph__GetXAxisText_void_const__G_();
extern long long int util__DelegateFactory_L_LineGraph_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_LineGraph__GetYAxisText_void_const__G_();
extern _Bool util__DelegateFactory_L_ModuleDesignManager_Cbool_G___MethodCallerConst_L__private__bool___thiscall_ModuleDesignManager__CanModifySelectedModule_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_NotificationWidget_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_NotificationWidget__GetNotificationTitle_void_const__G_();
extern long long int util__DelegateFactory_L_NotificationWidget_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_NotificationWidget__GetNotificationsText_void_const__G_();
extern long long int util__DelegateFactory_L_NotificationWidget_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__public__struct_util__Vec2_L_int_G____thiscall_NotificationWidget__GetNotificationsSize_void_const__G_();
extern long long int util__DelegateFactory_L_PauseMenuHandler_Cvoid_G___MethodCaller_L__public__void___thiscall_PauseMenuHandler__Open_void__G_();
extern long long int util__DelegateFactory_L_PieChart_Cutil__Darray_L_util__Str_L_char_G___G___G___MethodCallerConst_L__public__class_util__Darray_L_class_util__Str_L_char_G___G____thiscall_PieChart__GetLabels_void_const__G_();
extern Vec2_L_int_G_ util__DelegateFactory_L_PieChart_Cutil__Vec2_L_int_G___G___MethodCallerConst_L__public__struct_util__Vec2_L_int_G____thiscall_PieChart__GetChartSize_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_PropertyEditor_Cbool_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__bool___thiscall_PropertyEditor__ValidateName_class_util__Str_L_char_G__const__G_();
extern long long int util__DelegateFactory_L_PropertyEditor_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_PropertyEditor__GetHeaderNameBox_void_const__G_();
extern long long int util__DelegateFactory_L_PropertyEditor_Cvoid_Cutil__Str_L_char_G___G___MethodCaller_L__private__void___thiscall_PropertyEditor__SaveHeaderNameBox_class_util__Str_L_char_G___G_();
extern long long int util__DelegateFactory_L_PropertyWidgetData_Cdouble_G___MethodCallerConst_L__public__double___thiscall_PropertyWidgetData__GetDecimalTextMultiplier_void_const__G_();
extern long long int util__DelegateFactory_L_PropertyWidgetData_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_int_G___G___G___G___MethodCallerConst_L__public__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_int_G___G___G____thiscall_PropertyWidgetData__GetEnumChoices_void_const__G_();
extern long long int util__DelegateFactory_L_PropertyWidgetData_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G___G___MethodCallerConst_L__public__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G____thiscall_PropertyWidgetData__GetValidPointerChoices_void_const__G_();
extern long long int util__DelegateFactory_L_PropertyWidgetData_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_PropertyWidgetData__GetDecimalBounds_void_const__G_();
extern long long int util__DelegateFactory_L_PropertyWidgetData_Cutil__Range_L_int_G___G___MethodCallerConst_L__public__struct_util__Range_L_int_G____thiscall_PropertyWidgetData__GetIntegerBounds_void_const__G_();
extern long long int util__DelegateFactory_L_PropertyWidgetData_Cutil__Str_L_char_G__Cdouble_G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_PropertyWidgetData__GetDecimalPrint_double_const__G_();
extern long long int util__DelegateFactory_L_PropertyWidgetData_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_PropertyWidgetData__GetLocStringAsString_void_const__G_();
extern Str_L_char_G_ util__DelegateFactory_L_PropertyWidgetData_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_PropertyWidgetData__GetName_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_PropertyWidgetData_Cvoid_Cutil__Str_L_char_G___G___MethodCaller_L__public__void___thiscall_PropertyWidgetData__OnSaveLocString_class_util__Str_L_char_G___G_();
extern long long int util__DelegateFactory_L_ScenarioEditor_Cutil__Str_L_char_G__Cdouble_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_ScenarioEditor__GetDecimalPrinting_double_Cclass_util__Str_L_char_G__const__G_();
extern long long int util__DelegateFactory_L_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__RebuildCurrentLevel_void__G_();
extern long long int util__DelegateFactory_L_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__RefreshCurrentLevel_void__G_();
extern _Bool util__DelegateFactory_L_ShipDesignManager_Cbool_G___MethodCallerConst_L__public__bool___thiscall_ShipDesignManager__CanModifySelectedCraft_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_ShipDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ShipDesignManager__BuildCraftList_void__G_();
extern long long int util__DelegateFactory_L_SortableList_Cint_Cutil__Reflectable_P_G___MethodCallerConst_L__private__int___thiscall_SortableList__GetRowHeight_class_util__Reflectable_P_const__G_();
extern long long int util__DelegateFactory_L_SortableList_Cint_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__int___thiscall_SortableList__GetHeaderFilterHeight_class_util__Str_L_char_G__const__G_();
extern long long int util__DelegateFactory_L_SortableList_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G____thiscall_SortableList__GetSortedChoices_void_const__G_();
extern long long int util__DelegateFactory_L_SortableList_Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Reflectable_P___thiscall_SortableList__GetSelectedData_void_const__G_();
extern long long int util__DelegateFactory_L_SortableList_Cutil__Str_L_char_G__Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_SortableList__GetLabel_class_util__Reflectable_P_const__G_();
extern long long int util__DelegateFactory_L_SortableList_Cutil__Str_L_char_G__Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_SortableList__GetHeaderFilterLabel_class_util__Str_L_char_G__const__G_();
extern long long int util__DelegateFactory_L_SortableList_Cvoid_Cutil__Reflectable_P_G___MethodCaller_L__private__void___thiscall_SortableList__OnSelect_class_util__Reflectable_P__G_();
extern long long int util__DelegateFactory_L_SortableList_Cvoid_Cutil__Str_L_char_G___G___MethodCaller_L__public__void___thiscall_SortableList__OnSelectHeaderFilter_class_util__Str_L_char_G___G_();
extern long long int util__DelegateFactory_L_SortableList_Cvoid____cdecl_P__void__Cutil__Str_L_char_G___G___MethodCallerConst_L__private__void____cdecl_P__thiscall_SortableList__GetHeaderFilterIcon_class_util__Str_L_char_G__const__void__G_();
extern _Bool util__DelegateFactory_L_UIAddRemoveShipButton_Cbool_G___MethodCallerConst_L__public__bool___thiscall_UIAddRemoveShipButton__GetButtonEnabled_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_UIAddRemoveShipButton_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_UIAddRemoveShipButton__GetButtonTooltip_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_UIArmorLayerPanel_CUIWidget_P_Cutil__Vec2_L_int_G__Cutil__Vec2_L_int_G__Cutil__Attribute_L_util__Reflectable_P_P_G__Cutil__Attribute_L_util__Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G___G__Cutil__Str_L_char_G___G___MethodCallerConst_L__public__struct_UIWidget_P___thiscall_UIArmorLayerPanel__GetCustomMaterialDropdown_struct_util__Vec2_L_int_G__Cstruct_util__Vec2_L_int_G__Cstruct_util__Attribute_L_class_util__Reflectable_P_P_G__Cstruct_util__Attribute_L_class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G___G___G__Cclass_util__Str_L_char_G__const__G_();
extern _Bool util__DelegateFactory_L_UIArmorLayerPanel_Cbool_G___MethodCallerConst_L__private__bool___thiscall_UIArmorLayerPanel__HasLayerToEdit_void_const__G_(void *param_1);
extern _Bool util__DelegateFactory_L_UIArmorLayerPanel_Cbool_G___MethodCallerConst_L__public__bool___thiscall_UIArmorLayerPanel__IsSelected_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_UIArmorLayerPanel_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_UIArmorLayerPanel__GetEndArmorRangeAllowed_void_const__G_();
extern long long int util__DelegateFactory_L_UIArmorLayerPanel_Cutil__Str_L_char_G__Cdouble_G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_UIArmorLayerPanel__PrintPercentage_double_const__G_();
extern long long int util__DelegateFactory_L_UIArmorLayerPanel_Cutil__Str_L_char_G__Cdouble_G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_UIArmorLayerPanel__PrintThicknessOrSpacing_double_const__G_();
extern long long int util__DelegateFactory_L_UIArmorLayerPanel_Cutil__Str_L_char_G__Cutil__Reflectable_P_G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_UIArmorLayerPanel__GetDataTooltip_class_util__Reflectable_P_const__G_();
extern long long int util__DelegateFactory_L_UIArmorLayerPanel_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_UIArmorLayerPanel__GetLayerName_void_const__G_();
extern void util__DelegateFactory_L_UIArmorLayerPanel_Cvoid_G___MethodCaller_L__public__void___thiscall_UIArmorLayerPanel__OnChanged_void__G_(void *param_1);
extern long long int util__DelegateFactory_L_UIDataListBox_Cint_Cutil__Reflectable_P_G___MethodCallerConst_L__private__int___thiscall_UIDataListBox__GetRowHeight_class_util__Reflectable_P_const__G_();
extern long long int util__DelegateFactory_L_UIDataListBox_Cutil__Str_L_char_G__Cutil__Reflectable_P_G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIDataListBox__GetNameLabel_class_util__Reflectable_P_const__G_();
extern long long int util__DelegateFactory_L_UIEnumDropdown_Cutil__Str_L_char_G__Cint_G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIEnumDropdown__GetNameLabel_int_const__G_();
extern Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ util__DelegateFactory_L_UIModuleInfo_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G____thiscall_UIModuleInfo__GetCostChartData_void_const__G_(void *param_1);
extern Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ util__DelegateFactory_L_UIModuleInfo_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G____thiscall_UIModuleInfo__GetMassChartData_void_const__G_(void *param_1);
extern Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ util__DelegateFactory_L_UIModuleInfo_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G____thiscall_UIModuleInfo__GetPowerUseData_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_UIModuleInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIModuleInfo__GetAdvancedInfo_void_const__G_();
extern Str_L_char_G_ util__DelegateFactory_L_UIModuleInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIModuleInfo__GetCostChartTitle_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_UIModuleInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIModuleInfo__GetMassChartTitle_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_UIModuleInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIModuleInfo__GetPowerUseTitle_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_UIShipInfo_Cbool_G___MethodCallerConst_L__private__bool___thiscall_UIShipInfo__GetCrewInfoVisible_void_const__G_();
extern _Bool util__DelegateFactory_L_UIShipInfo_Cbool_G___MethodCallerConst_L__public__bool___thiscall_UIShipInfo__HasShip_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_UIShipInfo_Cdouble_G___MethodCallerConst_L__private__double___thiscall_UIShipInfo__GetMaxHeatSignature_W_void_const__G_();
extern Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ util__DelegateFactory_L_UIShipInfo_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G____thiscall_UIShipInfo__GetCostChartData_void_const__G_(void *param_1);
extern Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ util__DelegateFactory_L_UIShipInfo_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G____thiscall_UIShipInfo__GetHeatSignatureData_void_const__G_(void *param_1);
extern Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ util__DelegateFactory_L_UIShipInfo_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G____thiscall_UIShipInfo__GetMassChartData_void_const__G_(void *param_1);
extern Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G_ util__DelegateFactory_L_UIShipInfo_Cutil__Darray_L_util__tuple2_L_util__Str_L_char_G__Cdouble_G___G___G___MethodCallerConst_L__private__class_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G____thiscall_UIShipInfo__GetPowerUseData_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_UIShipInfo_Cutil__Str_L_char_G__Cdouble_G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIShipInfo__GetPowerOrHeatTooltipPrint_double_const__G_();
extern Str_L_char_G_ util__DelegateFactory_L_UIShipInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIShipInfo__GetCostChartTitle_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_UIShipInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIShipInfo__GetCrewInfoString_void_const__G_();
extern Str_L_char_G_ util__DelegateFactory_L_UIShipInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIShipInfo__GetHeatSignatureTitle_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_UIShipInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIShipInfo__GetMassChartTitle_void_const__G_(void *param_1);
extern Str_L_char_G_ util__DelegateFactory_L_UIShipInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIShipInfo__GetPowerUseTitle_void_const__G_(void *param_1);
extern long long int util__DelegateFactory_L_UIShipInfo_Cutil__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_UIShipInfo__GetShipName_void_const__G_();
extern long long int util__DelegateFactory_L_UIShipInfo_Cvoid_G___MethodCaller_L__private__void___thiscall_UIShipInfo__UpdateInfo_void__G_();
extern long long int util__DelegateFactory_L_UISlider_Cutil__Str_L_char_G___G___MethodCallerConst_L___thunk_____thiscall_UISlider___vcall__204_C_flat_______G_();
extern long long int util__DelegateFactory_L_UISlider_Cvoid_Cutil__Str_L_char_G___G___MethodCaller_L___thunk_____thiscall_UISlider___vcall__240_C_flat_______G_();
extern long long int util__DelegateFactory_L_UploadToSteamWorkshopButton_Cutil__Str_L_char_G___G___MethodCallerConst_L__public__class_util__Str_L_char_G____thiscall_UploadToSteamWorkshopButton__GetTooltipInfo_void_const__G_();
extern long long int util__DelegateFactory_L_WeaponModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_WeaponModule__GetChartXRanges_void_const__C0__G_();
extern long long int util__DelegateFactory_L_WeaponModule_Cutil__Range_L_double_G___G___MethodCallerConst_L__public__struct_util__Range_L_double_G____thiscall_WeaponModule__GetChartYRanges_void_const__C0__G_();
extern long long int util__DelegateFactory_L_class_BriefingsHandler_Cvoid_G___MethodCaller_L__public__void___thiscall_BriefingsHandler__PlaySelectedLevel_void__G_();
extern long long int util__DelegateFactory_L_class_ModuleDesignManager_Cclass_util__Str_L_char_G__Cdouble_Cclass_util__Str_L_char_G___G___MethodCallerConst_L__private__class_util__Str_L_char_G____thiscall_ModuleDesignManager__GetDecimalPrinting_double_Cclass_util__Str_L_char_G__const__G_();
extern long long int util__DelegateFactory_L_class_ModuleDesignManager_Cvoid_Cclass_util__Reflectable_P_G___MethodCaller_L__private__void___thiscall_ModuleDesignManager__RefreshReflectable_class_util__Reflectable_P__G_();
extern long long int util__DelegateFactory_L_class_ModuleDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ModuleDesignManager__RefreshAndRename_void__G_();
extern long long int util__DelegateFactory_L_class_ModuleDesignManager_Cvoid_G___MethodCaller_L__public__void___thiscall_ModuleDesignManager__RefreshCurrentModule_void__G_();
extern long long int util__DelegateFactory_L_class_ScenarioEditor_Cvoid_G___MethodCaller_L__private__void___thiscall_ScenarioEditor__BuildScenarioEditorScreen_void__G_();
extern long long int util__DelegateFactory_L_class_ShipDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ShipDesignManager__BuildCraftList_void__G_();
extern long long int util__DelegateFactory_L_struct_UIArmorLayerPanel_Cvoid_G___MethodCaller_L__public__void___thiscall_UIArmorLayerPanel__OnChanged_void__G_();
extern Color * util__Delegate_struct_util__Color___MethodCallerConst_struct_UIListBox_struct_ItineraryNode___private__struct_util__Color___thiscall_UIListBox_struct_ItineraryNode___GetListBoxTextColor_void_const();
extern long long int util__Delegate_L_util__Reflectable_P_G___MethodCallerConst_L_UIDropdown_L_util__Reflectable_P_G__C_public__class_util__Reflectable_P___thiscall_UIDropdown_L_class_util__Reflectable_P_G___GetSelectedData_void_const__G_();
extern long long int util__Delegate_L_void_Cutil__Reflectable_P_G___MethodCaller_L_UIDropdown_L_util__Reflectable_P_G__C_public__void___thiscall_UIDropdown_L_class_util__Reflectable_P_G___OnSelect_class_util__Reflectable_P__G_();
extern long long int util__Delegate_L_void_G___MethodCaller_L_UIDropButton_L_util__Str_L_char_G___G__C_public__void___thiscall_UIDropButton_L_class_util__Str_L_char_G___G___OnClick_void__G_();
extern long long int util__Delegate_L_void_G___MethodCaller_L_UIListBox_L_util__Reflectable_P_G___ListButton_C_public__void___thiscall_UIListBox_L_class_util__Reflectable_P_G___ListButton__OnClick_void__G_();
extern long long int util__Delegate_L_void_G___MethodCaller_L_UIListBox_L_util__SharedPtr_L_ModuleCategory_G___G___ListButton_C_public__void___thiscall_UIListBox_L_class_util__SharedPtr_L_struct_ModuleCategory_G___G___ListButton__OnClick_void__G_();
extern long long int util__Delegate_L_void_G___MethodCaller_L_UIListBox_L_util__Str_L_char_G___G___ListButton_C_public__void___thiscall_UIListBox_L_class_util__Str_L_char_G___G___ListButton__OnClick_void__G_();
extern void * util__SimpleSerializationManager__PrettyPrintStructNameHook;
extern void * util__SimpleSerializationManager__PrimitivePropertyToStringHook;

/* Win32 GDI SetTextColor (distinct from UIAttributes__SetTextColor) */
extern undefined4 cde_gdi_SetTextColor(undefined4 hdc, undefined4 color);
typedef int Darray_L_CrewDepartment__Type_G_;
typedef Attribute_L_util__Str_L_char_G___G_ Attribute_L_util__Str_L_char_G__G_;

/* p69-h2c: undeclared sweep (Coolant macro removed p73: poisoned 41 .Coolant member sites) */
extern void util__DelegateFactory_L_ShipDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ShipDesignManager__DestroyViewer_void__G_(void);
typedef void *_func_PreferencesBase_ptr(void);
typedef _func_PreferencesBase_ptr *Demangler___anon_funcs___func_PreferencesBase_ptr;
extern void util__DelegateFactory_L_ModuleDesignManager_Cvoid_G___MethodCaller_L__private__void___thiscall_ModuleDesignManager__DestroyViewer_void__G_(void);
extern void util__DelegateFactory_L_MainManager_Cvoid_G___MethodCaller_L__private__void___thiscall_MainManager__BuildMainMenu_void__G_(void);
extern void util__DelegateFactory_L_EngineModule_Cdouble_G___MethodCallerConst_L___thunk_____thiscall_EngineModule___vcall__364_C_flat_______C0__G_(void);
extern void util__DelegateFactory_L_WeaponModule_Cbool_G___MethodCallerConst_L___thunk_____thiscall_WeaponModule___vcall__360_C_flat_______C0__G_(void);
extern void Body__IsAlive_Clear(void);
extern void DelegateFactory_L_class_LogisticManager_Cvoid_G___MethodCaller_L__public__void___thiscall_LogisticManager__DeselectAll_void__G_(void);
void __cdecl
MethodCaller_L__public__void___thiscall_ShipDesignManager__SaveAndBack_void__G_(void *param_1);
void __cdecl
MethodCaller_L__public__void___thiscall_ShipDesignManager__SaveAsCopyAndBack_void__G_(void *param_1);
void __cdecl
MethodCaller_L__public__void___thiscall_ShipDesignManager__PreRename_void__G_(void *param_1);
void __cdecl
MethodCaller_L__public__void___thiscall_ShipDesignManager__RefreshAndRename_void__G_(void *param_1);
void __cdecl
MethodCaller_L__public__void___thiscall_ShipDesignManager__DeleteSelectedCraft_void__G_(void *param_1);
extern undefined1 Icons__PerspectiveOrbit[64];
void __cdecl Icons__Join(double);
extern undefined1 Icons__Undo[64];
extern undefined1 Icons__RawShipSquare[64];
extern undefined1 Icons__RawShipSmallSquare[64];
typedef int tuple2_L_util__Darray_L_util__TupleProperty_G__Cutil__ReflectionRegistry__TupleTypedFunctions_G_;
extern undefined1 Icons__NormalIcons[64];
extern undefined1 Icons__BigIcons[64];
extern void Background__HasBackground(void);

/* p69-h1e2 name-on-own-line renames */
extern void __thiscall PostProcessCopyShader__SetTotalTransformMatrix__o2(PostProcessCopyShader *this,Matrix4x4_L_double_G_ *param_1);
extern AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ * __thiscall util__AssocArray_struct_ModulePlacer_const__bool___AssocArray_struct_ModulePlacer_const__bool__o2(AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *this, AssocArray_L_struct_ModulePlacer_const_P_Cbool_G_ *param_1);
extern HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ * __thiscall util__HashMap_class_util__WeakPtr_class_Fleet__double___HashMap_class_util__WeakPtr_class_Fleet__double__o2(HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *this, HashMap_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *param_1);
extern Darray_L_struct_PendingBattle_G_ * __thiscall util__Darray_struct_PendingBattle___Darray_struct_PendingBattle__o2(Darray_L_struct_PendingBattle_G_ *this,int param_1);
extern HashMap_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G_ * __thiscall util__HashMap_class_util__Str_char__class_util__Reflectable____HashMap_class_util__Str_char__class_util__Reflectable__o2(HashMap_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G_ *this, HashMap_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G_ *param_1);
extern HashMap_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G_ * __thiscall util__HashMap_class_util__Str_char__struct_util__Range_double_____HashMap_class_util__Str_char__struct_util__Range_double__o2(HashMap_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G_ *this, HashMap_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G_ *param_1);

/* p69-h1g overload renames phase-2 */
extern Color * __thiscall util__Color__Color__o5(Color *this, float param_1, float param_2, float param_3, float param_4);
extern UIToggleButton * __thiscall UIToggleButton__UIToggleButton__o2(UIToggleButton *this, UIAttributes param_1, Attribute_L_util__Str_L_char_G___G_ *param_2, bool *param_3, Delegate_L_void_G_ param_4, KeyCombination param_5, Delegate_L_void_Cbool_Cbool_Cbool_G_ param_6);
extern UIToggleButton * __thiscall UIToggleButton__UIToggleButton__o3(UIToggleButton *this, UIAttributes param_1, Attribute_L_util__Str_L_char_G___G_ *param_2, Delegate_L_void_G_ param_3, Delegate_L_bool_G_ param_4, KeyCombination param_5, Delegate_L_void_Cbool_Cbool_Cbool_G_ param_6);
extern void __thiscall NotificationManager__AddBacklogMessage__o3(NotificationManager *this, SpeakerMessage *param_1);
extern Darray_L_struct_util__Line2_L_double_G___G_ * __thiscall util__Darray_struct_util__Line2_double_____Darray_struct_util__Line2_double__o2(Darray_L_struct_util__Line2_L_double_G___G_ *this, int param_1);
extern Darray_L_struct_ArmorCollisionShell_G_ * __thiscall util__Darray_struct_ArmorCollisionShell___Darray_struct_ArmorCollisionShell__o2(Darray_L_struct_ArmorCollisionShell_G_ *this, int param_1);
extern Darray_L_struct_CraftSplinePoint_G_ * __thiscall util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint__o2(Darray_L_struct_CraftSplinePoint_G_ *this, int param_1);
extern Darray_L_class_util__Darray_L_struct_util__Line2_L_double_G___G___G_ * __thiscall util__Darray_class_util__Darray_struct_util__Line2_double_______Darray_class_util__Darray_struct_util__Line2_double__o2(Darray_L_class_util__Darray_L_struct_util__Line2_L_double_G___G___G_ *this, int param_1);
extern Darray_L_class_util__Darray_L_struct_util__Vec2_L_double_G___G___G_ * __thiscall util__Darray_class_util__Darray_struct_util__Vec2_double_______Darray_class_util__Darray_struct_util__Vec2_double__o2(Darray_L_class_util__Darray_L_struct_util__Vec2_L_double_G___G___G_ *this, int param_1);
extern AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ * __thiscall util__AssocArray_struct_ModulePlacer_const__double___AssocArray_struct_ModulePlacer_const__double__o2(AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ *this, AssocArray_L_struct_ModulePlacer_const_P_Cdouble_G_ *param_1);
extern void __thiscall UICompartmentButtonManager__ScrollToModule__o2(UICompartmentButtonManager *this, WeakPtr_L_UIWidget_G_ param_1);
extern Darray_L_class_util__SharedPtr_L_class_Body_G___G_ * __thiscall util__Darray_class_util__SharedPtr_class_Body_____Darray_class_util__SharedPtr_class_Body__o2(Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *this, int param_1);
extern UIColumnLayout * __thiscall UIColumnLayout__UIColumnLayout__o2(UIColumnLayout *this, UIAttributes param_1, LayoutAttributes param_2, Data *param_3);
extern UIRowLayout * __thiscall UIRowLayout__UIRowLayout__o2(UIRowLayout *this, UIAttributes param_1, LayoutAttributes param_2, Data *param_3);

/* p69-h1h ovN missing protos */
extern Args * __thiscall UIEditTextBox__Args__Args__o3(Args *this);
extern AmmoInfo * __thiscall AmmoInfo__AmmoInfo__o3(AmmoInfo *this);
extern DataParser * GetMaterials__o3(DataParser *param_1,bool param_2);
extern void Graphics__Vertex__o7(Vec4_L_double_G_ param_1);
extern Color * __thiscall util__Color__Color__o7(Color *this);
extern void Graphics_Translate(Vec3_L_double_G_ param_1);

/* p69-z2 UIListBox Generate_* protos */
extern SharedPtr_L_UIRowLayout_G_ UIListBox_class_util_Reflectable_Generate(void *param_1,void *param_2);
extern SharedPtr_L_UIRowLayout_G_ UIListBox_class_util_SharedPtr_struct_ModuleCategory_Generate(void *param_1,void *param_2);
extern SharedPtr_L_UIRowLayout_G_ UIListBox_int_Generate(void *param_1,void *param_2);
extern SharedPtr_L_UIRowLayout_G_ UIListBox_class_util_Str_char_Generate(void *param_1,void *param_2);

/* TextureType__Type members (disasm-verified: GetTextureTargetFromType 0x83b860 -> cmp 2=CubeMap, cmp 1=OneDimensional; game_007 24205 mov imm 3 = CubeMap|OneDimensional) */
enum { TextureType__TwoDimensional = 0, TextureType__OneDimensional = 1, TextureType__CubeMap = 2 };

/* DesignStatus members (disasm-verified: CheckError 0x564e20 pushes status=2, sibling CheckWarning pushes 0) */
enum { DesignStatus__Warning = 0, DesignStatus__Error = 2 };

/* p70-d4: anonymous string symbols (Ghidra &s__) */
extern char s__[];
extern char s___[];
/* p73-c1: bare Generate (UIWidget/UIListBox family) — sret rv-alias, disasm 0x4e1aa0/0x6abb40 */
extern void *Generate();
/* p73-c1: WeakPtr-by-value getters (sret stubs, defs in cde_stubs.c) */
extern WeakPtr_L_Minimap_G_ HUDTactical__GetMinimapUI(void);
/* p73-c2: Vec-by-value getters (sret stubs) */
extern Vec3_L_int_G_ GetIndicesFromParametricLocation();
extern Vec2_L_int_G_ ProcGenTextureManager__GetRandomIntegralOffset();
extern Vec4_L_int_G_ OrbitDirectionArrow__GetArrowApproximateSize();
/* p73-t7: protos for implicit-decl-then-def conflicts */
extern void __cdecl GetModuleListings__o4();
extern DataParser * __cdecl GetModuleListings__o5();
extern Args * __thiscall LineGraph__Args__Args__o3(Args *this);
extern bool __thiscall util__Darray_class_DesignStatusMessage___CheckSize(Darray_L_DesignStatusMessage_G_ *this,int param_1);
extern WeakPtr_L_CustomTexture_G_ CraftBlueprintArmor__GetDamagedArmorTexture(void);

/* --- session-r D1: overload/extern decls --- */
extern void __thiscall util__Darray_L_struct_util__Vec2_L_double_G___G___Darray_L_struct_util__Vec2_L_double_G___G___o2(Darray_L_struct_util__Vec2_L_double_G___G_ *this,Darray_L_struct_util__Vec2_L_double_G___G_ *param_1);
extern Maybe_L_float_G_ * __cdecl Sqrt(Maybe_L_float_G_ *param_rv,float *param_1);
extern DesignStatusMessage * __thiscall DesignStatusMessage__DesignStatusMessage__o2(DesignStatusMessage *this,DesignStatusMessage *param_1);
extern void __cdecl DrawAntialiasedCircle__ov2(Vec4_L_double_G_ param_1,Quaternion_L_double_G_ param_2,double param_3,int param_4,bool param_5,double param_6,Vec4_L_double_G_ param_7,Maybe_L_util__Range_L_double_G___G_ param_8,double param_9);
extern void __cdecl DrawAntialiasedLineStrip__ov3(void *param_1,bool param_2,double param_3,Vec3_L_double_G_ param_4,Maybe_L_util__Range_L_double_G___G_ param_5);
extern void __thiscall util__Darray_L_class_util__Str_L_char_G___G___Darray_L_class_util__Str_L_char_G___G___o2(Darray_L_class_util__Str_L_char_G___G_ *this,Darray_L_class_util__Str_L_char_G___G_ *param_1);

/* --- session-r D5 dtors --- */
extern void __thiscall tuple2_L_class_util__Str_L_char_G__Cclass_util__WeakPtr_L_struct_UIWidget_G___G___dtor(void *this);
extern void __thiscall tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___dtor(void *this);
extern void __thiscall tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple3_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__Cbool_G___G___G___dtor(void *this);
