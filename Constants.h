const Int_t numMult = 12; // 10 // number of multiplicity sub-intervals
// 22m_pass4_Train79153 -> numMult = 4
// 22o_pass4_Train89684
const Int_t numPart = 9; // number of particles
const Int_t numFiles = 8;
const Int_t numTopoVar = 17;
const Int_t numChoice = 7;    // mean, sigma, purity, yield, significance, efficiency, yieldCorr
const Int_t numParticles = 3; // part, apart, sum
const Int_t numfittipo = 6;

TString nameFit[numfittipo] = {"m_{T}-exponential", "Boltzmann", "Fermi-Dirac", "Levi", "Bose-Einstein", "Blast wave"};
TString nameFitFile[numfittipo] = {"mTexpo", "Boltzmann", "FermiDirac", "Levi", "BoseEinstein", "BW"};
Int_t ColorFit[] = {634, 797, 815, 429, 867, 601};

Int_t ColorModel[] = {kBlue +1, kGreen +2};

TString EventType[3] = {"INEL", "INELgt0", "INELgt1"};

Float_t MinBinPt[numPart] = {0, 0, 0, 0.4, 0.4, 0.4, 0.8, 0.8, 1.0};
Float_t MaxBinPt[numPart] = {10, 10, 10, 8, 8, 8, 8, 8, 8};
Float_t AdjustFactordNdeta = 1.81;
// Int_t MultiplicityPerc[numMult + 1] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 60, 100};
// Int_t MultiplicityPerc[numMult + 1] = {0, 10, 20, 30, 40, 100}; 22m_pass4_Train79153
// Float_t MultiplicityPerc[numMult + 1] = {0, 0.1, 0.5, 1, 5, 10, 15, 20, 25, 30, 35, 40, 50, 70, 100}; //22o_pass4_medium_Train89684
Float_t MultiplicityPerc[numMult + 1] = {0, 1, 5, 10, 15, 20, 25, 30, 35, 40, 50, 70, 100};            // 22o_pass4_medium_Train89684
Float_t dNdEtaRun2[numMult] = {26.02, 20.02, 16.17, 13.77, 12.04, 11.5, 9.5, 8.5, 7, 6.32, 4.5, 2.55}; // 22o_pass4_medium_Train89684
Float_t dNdEtaRun2MB = 6.94;
Float_t dNdEtaRun2ErrorL[numMult] = {0.29, 0.22, 0.18, 0.16, 0.14, 0.11, 0.11, 0.09, 0.09, 0.07, 0.05, 0.03}; // 22o_pass4_medium_Train89684
Float_t dNdEtaRun2MBErrorL = 0.08;
Float_t dNdEtaRun2ErrorR[numMult] = {0.35, 0.27, 0.22, 0.19, 0.17, 0.14, 0.14, 0.11, 0.11, 0.09, 0.07, 0.04}; // 22o_pass4_medium_Train89684
Float_t dNdEtaRun2MBErrorR = 0.1;
Float_t dNdEtaRun3[numMult] = {31.5, 26.85, 23.15, 20.67, 18.81, 17.28, 15.98, 14.82, 13.78, 12.40, 10.13, 7.37}; // Nicolò values
//Float_t dNdEtaRun3[numMult] = {20.31, 26.85, 23.15, 20.67, 18.81, 17.28, 15.98, 14.82, 13.78, 12.40, 10.13, 3.55}; // official values
Float_t dNdEtaRun3MB = 13.09;
Float_t dNdEtaRun3ErrorL[numMult] = {0.29, 0.22, 0.18, 0.16, 0.14, 0.11, 0.11, 0.09, 0.09, 0.07, 0.05, 0.03}; // Run2 values
Float_t dNdEtaRun3MBErrorL = 0.08;
Float_t dNdEtaRun3ErrorR[numMult] = {0.35, 0.27, 0.22, 0.19, 0.17, 0.14, 0.14, 0.11, 0.11, 0.09, 0.07, 0.04}; // Run2 values
Float_t dNdEtaRun3MBErrorR = 0.1;
Int_t ColorMult[] = {634, 628, 807, kOrange - 4, 797, 815, 418, 429, 867, 856, 601, kViolet, kPink + 9, kPink + 1, 1};
Float_t SizeMult[] = {2, 2, 2.8, 2.5, 2.8, 2, 2, 2.8, 2.5, 2.8, 2, 2, 2.8, 2.5, 2.8};
Float_t SizeMultRatio[] = {1, 1, 1.8, 1.5, 1.8, 1, 1, 1.8, 1.5, 1.8, 1, 1, 1.8, 1.5, 1.8};
// Int_t MarkerMult[] = {20, 21, 33, 34, 29, 24, 27, 28, 25, 25, 25, 20, 21, 33};
Int_t MarkerMult[] = {20, 21, 33, 34, 29, 20, 21, 33, 34, 29, 20, 21, 33, 34, 29};
Float_t ScaleFactor[] = {16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
Int_t ColorMB = 1;
Float_t SizeMB = 2;
Int_t MarkerMB = 24;
Float_t ScaleFactorMB = pow(2, 19);

Int_t Color[] = {634, 628, 797, 815, 418, 429, 867, 601, 1};
Int_t ColorPt[] = {634, 628, 807, kOrange - 4, 797, 815, 418, 429, 867, 856, 601, kViolet, kPink + 9, kPink + 1, 1};
Int_t ColorPart[] = {634, kBlue + 2};

TString SMultType[] = {"", "FT0M", "FV0A"};

const Float_t massParticle[numPart] = {0.497611, 1.115683, 1.115683, 1.32171, 1.32171, 1.32171, 1.67245, 1.67245, 1.67245};
TString Spart[numPart] = {"K0s", "Lambda", "AntiLambda", "XiNeg", "XiPos", "Xi", "OmegaNeg", "OmegaPos", "Omega"};
TString SpartType[numPart] = {"K0s", "Lambda", "Lambda", "Xi", "Xi", "Xi", "Omega", "Omega", "Omega"};
TString NamePart[numPart] = {"K^{0}_{S}", "#Lambda", "#bar{#Lambda}", "#Xi^{-}", "#Xi^{+}", "#Xi^{#pm}", "#Omega^{-}", "#Omega^{+}", "#Omega^{#pm}"};

TString IsOneOrTwoGauss[2] = {"_OneGaussFit", ""};

TString SIsBkgParab[2] = {"_BkgRetta", "_BkgParab"};

TString TypeHisto[numChoice] = {"Mean", "Sigma", "Purity", "Yield", "Significance", "Efficiency", "YieldCorr"};
TString TitleY[numChoice] = {"Mean (GeV/#it{c}^{2})", "Sigma (GeV/#it{c}^{2})", "S/(S+B)", "1/#it{N}_{evt} d#it{N}/d#it{p}_{T} (GeV/#it{c})^{-1}", "Yield/#sigma_{Yield}", "Efficiency x acceptance", "1/#it{N}_{evt} d#it{N}/d#it{p}_{T} (GeV/#it{c})^{-1}"};

TString TopoVar[numTopoVar] = {"casccospa", "dcacascdau", "dcabachtopv", "dcapostopv", "dcanegtopv", "lambdamasswin", "rejcomp", "nsigmatpcKa", "cascradius", "v0radius", "dcav0dau", "v0cospa", "casclifetime", "cosbachbar", "dcabachbar", "dcav0topv"};
TString TopoVarSigned[numTopoVar] = {"casccospa > ", "dcacascdau < ", "dcabachtopv > ", "dcapostopv > ", "dcanegtopv > ", "|mV0 - mLambda| < ", "|mCasc-mXi| > ", "|n#sigma_{Ka}^{TPC}| < ", "rXi > ", "rV0 > ", "dcav0dau < ", "v0cospa > ", "c#tau < ", "cosbachbar < ", "dcabachbar > ", "dcav0topv > "};

TString TitleXPt = "#it{p}_{T} (GeV/#it{c})";
TString TitleYYield = "1/#it{N}_{evt} d#it{N}/d#it{p}_{T} (GeV/#it{c})^{-1}";
TString TitleYYieldPtInt = "1/#it{N}_{evt} d#it{N}/d#it{y}";
TString TitleYYieldPtIntToMB = "(1/#it{N}_{evt} d#it{N}/d#it{y}) / (1/#it{N}_{evt} d#it{N}/d#it{y})_{MB}";
TString TitleXMult = "#LTd#it{N}_{ch}/d#it{#eta}#GT_{|#it{#eta}|<0.5}";
TString TitleXMultToMB = "#LTd#it{N}_{ch}/d#it{#eta}#GT_{|#it{#eta}|<0.5} / #LTd#it{N}_{ch}/d#it{#eta}#GT^{MB}_{|#it{#eta}|<0.5}";

Float_t YieldOmegaMB13TeV = 0.002407;
Float_t YieldOmegaMB13TeVErrStat = 0.000063;
Float_t YieldOmegaMB13TeVErrSist = 0.000227;

Float_t YieldXiMB13TeV = 0.027356;
Float_t YieldXiMB13TeVErrStat = 0.00019;
Float_t YieldXiMB13TeVErrSist = 0.00192;

TString SSysSigExtr[] = {"", "", "_narrower1", "_wider1"};

Float_t RelSystYieldTopoSel = 0.138;
