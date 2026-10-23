/* declarations of converted functions */
#pragma once


_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2);


int __cdecl atexit(_func_4879 *param_1);


int __cdecl initialize_legacy_wide_specifiers(void);


int __cdecl post_pgo_initialization(void);


int __cdecl sscanf(char *_Src,char *_Format,...);


int __cdecl vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args);

AmmoExplosion * __cdecl
CompositeAmmoExplosions
          (AmmoExplosion *__return_storage_ptr__,AmmoExplosion *param_1,AmmoExplosion *param_2);

ArmorShader * __cdecl GetArmorShader(void);

BlastLauncherShader * __cdecl GetBlastLauncherShader(void);

Campaign * __cdecl GetCurrentCampaign(DataParser *param_1);

Campaign * __cdecl GetDefaultCampaign(DataParser *param_1);

Campaign ** __cdecl GetCurrentCampaignEditable(DataParser *param_1);

CustomTexture * __cdecl GetBlackbodyTexture(void);

CustomTexture * __cdecl GetSpectraTexture(void);

DamagedArmorShader * __cdecl GetDamagedArmorShader(void);

Darray_L_class_util__Reflectable_P_G_ * __cdecl GetAllShaders(void);

GameManager * __cdecl GetGameManager(void);

GeneralModuleShader * __cdecl GetGeneralModuleShader(void);

IndexedShape * __cdecl
TessellateSphereFaces
          (IndexedShape *__return_storage_ptr__,IndexedShape *param_1,Maybe_L_double_G_ param_2);

IndexedShape * __cdecl SetupIcosahedron(IndexedShape *__return_storage_ptr__);

PropellantTankShader * __cdecl GetPropellantTankShader(void);

RadiatorShader * __cdecl GetRadiatorShader(void);

Range_L_double_G_ * __cdecl
GetDefaultNearFarPlanes_km(Range_L_double_G_ *__return_storage_ptr__,double param_1);

RocketEngineShader * __cdecl GetRocketEngineShader(void);

Shader * __cdecl NewShader(Shader *param_1);

Str_L_char_G_ * __cdecl
ConvertInfoBoxesToString(Str_L_char_G_ *__return_storage_ptr__,Darray_L_struct_InfoBox_G_ *param_1);

Str_L_char_G_ * __cdecl
PrintTimeName(Str_L_char_G_ *__return_storage_ptr__,Type param_1,int param_2,bool param_3);

Str_L_char_G_ * __cdecl GetGameVersion(Str_L_char_G_ *__return_storage_ptr__);

Str_L_char_G_ * __cdecl GetKeyComboName(Str_L_char_G_ *__return_storage_ptr__,KeyCombination param_1);

Str_L_char_G_ * __cdecl GetLegacySaveDataPath(Str_L_char_G_ *__return_storage_ptr__);

Str_L_char_G_ * __cdecl GetModsPath(Str_L_char_G_ *__return_storage_ptr__);

Str_L_char_G_ * __cdecl GetSaveDataPath(Str_L_char_G_ *__return_storage_ptr__);

Str_L_char_G_ * __cdecl GetUnitsOfType(Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1);

Str_L_char_G_ * __cdecl PrintBigInteger(Str_L_char_G_ *__return_storage_ptr__,double param_1);

Str_L_char_G_ * __cdecl PrintEpoch(Str_L_char_G_ *__return_storage_ptr__,double param_1);

Str_L_char_G_ * __cdecl PrintNameOfTypeOnly(Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1);

Str_L_char_G_ * __cdecl PrintPercent(Str_L_char_G_ *__return_storage_ptr__,double param_1);

Str_L_char_G_ * __cdecl PrintSigFigures(Str_L_char_G_ *__return_storage_ptr__,double param_1,int param_2);

Str_L_char_G_ * __cdecl PrintWavelengthName(Str_L_char_G_ *__return_storage_ptr__,double param_1);

Str_L_char_G_ * __cdecl ScientificPrettyPrint(Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1);

Vec2_L_double_G_ * __cdecl GetWindowToFramebufferScale(Vec2_L_double_G_ *__return_storage_ptr__);

Vec2_L_int_G_ __cdecl ForceSizeToPowerOfTwo(Vec2_L_int_G_ param_1);

Vec3_L_double_G_ * __cdecl GetFlowTemperatureColor(Vec3_L_double_G_ *__return_storage_ptr__,double param_1);

Vertex * __cdecl
SetupVertex(Vertex *__return_storage_ptr__,Vec3_L_double_G_ param_1,Vec3_L_double_G_ param_2,
           Vec3_L_double_G_ param_3);

bool __cdecl AreGraphicsReady(void);

bool __cdecl InitializeFontLibrary(void);

bool __cdecl IsCurrentCampaignTheDefault(DataParser *param_1);

bool __cdecl SaveBoundTexture(Str_L_char_G_ *param_1,Vec2_L_int_G_ param_2,int param_3,bool param_4);

bool __cdecl SavePreviewFile(Str_L_char_G_ *param_1,Vec2_L_int_G_ param_2,Vec2_L_int_G_ param_3,uint param_4);

bool __cdecl SetupShaders(PreferencesBase *param_1);

bool __cdecl glCheckFramebufferError(void);

double __cdecl GetBlackbodyTexturePeakTemperature_K(void);

double __cdecl GetExplosionFalloffRange_km(double param_1);

double __cdecl GetListBoxHeightMultiplier(void);

double __cdecl GetMinimumResolutionScalingFactor(void);

double __cdecl GetOrbitLineScale(double param_1);

double __cdecl b_to_m2(double param_1);

double __cdecl eV_to_J(double param_1);

float10 __cdecl ceil(double param_1);

float10 __cdecl floor(double param_1);

int __cdecl
GetVertexFromEdgeLookup
          (HashMap_L_struct_util__tuple2_L_int_Cint_G__Cint_G_ *param_1,Darray_L_struct_Vertex_G_ *param_2,
          tuple2_L_int_Cint_G_ param_3,Maybe_L_double_G_ param_4);

int __cdecl GetBytesPerPixel(TextureInitOptions *param_1);

int __cdecl GetMinimumRadialSegmentation(void);

int __cdecl GetPrimaryListRowHeight(void);

int __cdecl GetSystemSize(void);

int __cdecl GetUniversalRadialSegmentation(double param_1);

int __cdecl mainCRTStartup(void);

int __cdecl query_DXT_capability(void);

int glewInit(void);

tuple4_L_int_Cint_Cint_Cdouble_G_ * __cdecl
SecondsToDaysHoursMinutesSeconds(tuple4_L_int_Cint_Cint_Cdouble_G_ *__return_storage_ptr__,double param_1);

uint __cdecl GetTextureTargetFromType(Type param_1);

extern undefined * glewGetErrorString();

extern void RebuildWindow(bool);

void ResizeFramebufferCallback(GLFWwindow *param_1,int param_2,int param_3);

void __cdecl
BuildTexture(void *param_1,undefined4 param_2,char param_3,Maybe_L_util__Vec2_L_int_G___G_ param_4,
            undefined4 param_5,void *param_6);

void __cdecl
DeferredLightingRender
          (Vec2_L_int_G_ param_1,Darray_L_struct_GlobalLight_G_ *param_2,Darray_L_struct_WorldLight_G_ *param_3,
          double param_4);

extern void __cdecl DrawAntialiasedArc();

void __cdecl
DrawAntialiasedArrow
          (Vec2_L_double_G_ param_1,Vec2_L_double_G_ param_2,double param_3,double param_4,
          Maybe_L_double_G_ param_5);

extern void __cdecl DrawAntialiasedArrowhead();

extern void __cdecl DrawAntialiasedCircle(double param_1,int param_2,bool param_3,double param_4,double param_5);

void __cdecl
DrawAntialiasedEllipse
          (double param_1,double param_2,int param_3,bool param_4,double param_5,double param_6);

extern void __cdecl DrawAntialiasedLineStrip(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,bool param_2,double param_3);

void __cdecl
DrawAntialiasedLineStripPoint
          (undefined4 param_1,undefined4 param_2_00,undefined4 param_3_00,undefined4 param_4_00,
          double param_5,undefined4 param_2,undefined4 param_7,undefined4 param_8,undefined4 param_9
          ,undefined8 param_10,double param_3,double param_4,double param_13,double param_14);

void __cdecl
DrawAntialiasedRectAt
          (Vec2_L_double_G_ param_1,Vec2_L_double_G_ param_2,double param_3,double param_4,bool param_5);

void __cdecl
DrawCompressibleFlowTube
          (Vec2_L_int_G_ param_1,Vec2_L_int_G_ param_2,CompressibleFlowPoint *param_3,double param_4);

void __cdecl
DrawSingleFlowTube(Vec2_L_int_G_ param_1,Vec2_L_int_G_ param_2,double param_3,Vec3_L_double_G_ param_4,
                  Str_L_char_G_ *param_5);

void __cdecl
DrawThickLine(undefined4 param_1,undefined4 param_2,undefined4 param_3_00,undefined4 param_4,
             double param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,double param_10);

void __cdecl
FillChamferedCylinder
          (double param_1,double param_2,double param_3,int param_4,VertexBufferObject *param_5);

void __cdecl
FillChamferedEllipticalCylinder
          (double param_1,double param_2,double param_3,double param_4,int param_5,
          VertexBufferObject *param_6);

void __cdecl
FillCustomRectangularPrism
          (Darray_L_struct_util__Vec3_L_double_G___G_ *param_1,Maybe_L_int_G_ param_2,
          VertexBufferObject *param_3);

void __cdecl
FillCylinder(double param_1,double param_2,int param_3,bool param_4,VertexBufferObject *param_5);

void __cdecl
FillEllipticalArc(double param_1,double param_2,double param_3,double param_4,int param_5,
                 double param_6,double param_7,bool param_8);

void __cdecl
FillOblateSpheroid(double param_1,double param_2,int param_3,VertexBufferObject *param_4);

void __cdecl
FillRectangularPrism(Vec3_L_double_G_ param_1,Maybe_L_int_G_ param_2,VertexBufferObject *param_3);

void __cdecl
FillTessellatedPerturbedSphere
          (Vec3_L_double_G_ param_1,double param_2,int param_3,VertexBufferObject *param_4);

void __cdecl
FillThickTube(double param_1,double param_2,double param_3,int param_4,VertexBufferObject *param_5);

void __cdecl
FillTruncatedSphere(double param_1,int param_2,double param_3,bool param_4,
                   VertexBufferObject *param_5);

void __cdecl
GetCraftBlueprintsExcludingItemsDependingOnDatum
          (DataParser *param_1,Reflectable *param_2,bool param_3,bool param_4);

void __cdecl
GetListingOfEditorReflectables
          (Darray_L_class_util__Reflectable_P_G_ *param_1,Maybe_L_class_util__LocStr_G_ *param_2);

extern void * GetModuleListings();

void __cdecl
GetModulesOfSupercategory
          (Darray_L_class_util__Reflectable_P_G_ *param_1,SimpleSerializationManager *param_2,
          undefined4 param_3,undefined4 param_4,undefined4 param_5);

void __cdecl
GetSplineLoopsBeforeAndAfterRange(Darray_L_struct_CraftSplinePoint_G_ *param_1,Range_L_double_G_ param_2);

void __cdecl
OutlineAntialiasedSpline(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,int param_2,double param_3);

void __cdecl
ProcessIndexedShape(IndexedShape *param_1,VertexBufferObject *param_2,Darray_L_struct_Vertex_G_ *param_3
                   );

void __cdecl
RenderCapsule(double param_1,double param_2,double param_3,int param_4,VertexBufferObject *param_5);

extern void __cdecl RenderSpline(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,int param_2,bool param_3,bool param_4, VertexBufferObject *param_5);

void __cdecl ConvertInfoBoxesToUI(Manager *param_1,Darray_L_struct_InfoBox_G_ *param_2);

void __cdecl DestroyAllShaders(void);

extern void __cdecl DrawAntialiasedLine();

void __cdecl DrawAntialiasedSelectorRectangle(Vec2_L_double_G_ param_1,double param_2,double param_3);

void __cdecl DrawCircle(double param_1,int param_2,bool param_3,double param_4);

void __cdecl DrawCylinder(Cylinder_L_double_G_ param_1,int param_2);

void __cdecl DrawEllipse(double param_1,double param_2,int param_3,bool param_4,double param_5);

void __cdecl DrawFlowTube(Vec2_L_int_G_ param_1,Vec2_L_int_G_ param_2,double param_3);

void __cdecl DrawRect(Vec2_L_double_G_ param_1,Vec2_L_double_G_ param_2,bool param_3,double param_4);

void __cdecl DrawRectAt(Vec2_L_double_G_ param_1,Vec2_L_double_G_ param_2,bool param_3,double param_4);

void __cdecl DrawRectangularPrism(Vec3_L_double_G_ param_1);

void __cdecl DrawSphere(double param_1,int param_2);

void __cdecl EngineBegin(void);

void __cdecl EngineCoreLoop(void);

void __cdecl EngineEnd(void);

void __cdecl EngineMain(int param_1,char **param_2);

void __cdecl ErrorCallback(int param_1,char *param_2);

void __cdecl FillCircularSegment(double param_1,int param_2,double param_3,double param_4);

void __cdecl FillSphere(double param_1,int param_2,VertexBufferObject *param_3);

void __cdecl FillTessellatedSphere(double param_1,int param_2,VertexBufferObject *param_3);

void __cdecl GetAllModuleHeaders(void);

extern void * GetMaterials(DataParser *param_1,int param_2,bool param_3);

void __cdecl GetModuleSupercategories(void);

void __cdecl GetSubModulesOfDatum(Reflectable *param_1);

void __cdecl InitGL(PreferencesBase *param_1);

void __cdecl InitializeGameShaders(PreferencesBase *param_1);

void __cdecl InstantiateBlackbodyTexture(CustomTexture *param_1);

void __cdecl KeyCallback(GLFWwindow *param_1,int param_2,int param_3,int param_4,int param_5);

void __cdecl MouseMoveCallback(GLFWwindow *param_1,double param_2,double param_3);

void __cdecl PreFrameSetup(CameraManager *param_1);

void __cdecl ProgramEndDestroyShaders(void);

void __cdecl RenderBlackScreen(GameManager *param_1);

void __cdecl RenderCroppedQuad(Vec2_L_int_G_ param_1,Vec2_L_int_G_ param_2,bool param_3);

void __cdecl RenderDebugInfo(GameManager *param_1);

void __cdecl RenderFullscreenQuad(Vec2_L_int_G_ param_1);

void __cdecl RenderGame(GameManager *param_1);

void __cdecl RenderVertex(Vertex *param_1,uint param_2,uint param_3);

void __cdecl ResizeWindowCallback(GLFWwindow *param_1,int param_2,int param_3);

void __cdecl ResolveTextureInitOptions(TextureInitOptions *param_1,Type param_2);

void __cdecl ScrollCallback(GLFWwindow *param_1,double param_2,double param_3);

void __cdecl SetCursorIcon(void);

void __cdecl SetGameStringInfo(Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3);

void __cdecl SetPrintFunction(_func_Str_L_char_G__double_Str_L_char_G_ *param_1);

void __cdecl SetWindowAsRenderTarget(void);

void __cdecl SetWindowCursorVisibility(bool param_1);

void __cdecl TextCallback(GLFWwindow *param_1,uint param_2);

void __cdecl alCheckErrorInternal(Str_L_char_G_ *param_1);

void __cdecl c_exit(void);

int __cdecl callnewh(size_t param_1);

void __cdecl cexit(void);

void __cdecl configthreadlocale(int param_1);

void __cdecl configure_narrow_argv(void);

int __cdecl controlfp_s(uint *param_1,uint param_2,uint param_3);

int __cdecl crt_atexit(void);

void __cdecl except1(void);

int __cdecl except_handler4_common(void *param_1,void *param_2,void *param_3,void *param_4,void *param_5,void *param_6);

void __cdecl exit(int param_1);

void __cdecl get_initial_narrow_environment(void);

void __cdecl glCheckErrorInternal(char *param_1,int param_2);

extern void __cdecl glColor();

void __cdecl glColorAlpha(Preset param_1,float param_2,float param_3);

void __cdecl glColorLuminance(Vec3_L_float_G_ param_1,float param_2);

void __cdecl glColorVec(Vec3_L_float_G_ param_1);

void __cdecl glScaleAlpha(float param_1);

void __cdecl glScaleColor(float param_1);

void __cdecl initialize_narrow_environment(void);

int __cdecl initialize_onexit_table(void);

void __cdecl initterm(void);

int __cdecl initterm_e(void);

void __cdecl libm_sse2_acos_precise(void);

void __cdecl libm_sse2_asin_precise(void);

void __cdecl libm_sse2_atan_precise(void);

void __cdecl libm_sse2_cos_precise(void);

void __cdecl libm_sse2_exp_precise(void);

void __cdecl libm_sse2_log10_precise(void);

void __cdecl libm_sse2_log_precise(void);

void __cdecl libm_sse2_pow_precise(void);

void __cdecl libm_sse2_sin_precise(void);

void __cdecl libm_sse2_sqrt_precise(void);

void __cdecl libm_sse2_tan_precise(void);

void __cdecl malloc(size_t param_1);

void __cdecl memcpy(void *param_1,void *param_2,size_t param_3);

void __cdecl memmove(void *param_1,void *param_2,size_t param_3);

void __cdecl memset(void *param_1,int param_2,size_t param_3);

void __cdecl purecall(void);

int __cdecl register_onexit_function(void);

void __cdecl register_thread_local_exe_atexit_callback(void);

void __cdecl seh_filter_exe(void);

void __cdecl set_app_type(void);

void __cdecl set_fmode(int param_1);

void __cdecl set_new_mode(void);

void __cdecl set_purecall_handler(_purecall_handler param_1);

void __cdecl sf_close(void);

void __cdecl sf_command(void);

void __cdecl sf_open(void);

void __cdecl sf_read_float(void);

void __cdecl sf_read_short(void);

void __cdecl sf_strerror(void);

void __cdecl stbi_jpeg_load_from_file(undefined4 param_1,undefined4 param_2,undefined4 param_3);

long __cdecl terminate(void);