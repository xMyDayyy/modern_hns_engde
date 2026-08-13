#ifndef GUARD_HOENN_LICENSES_H
#define GUARD_HOENN_LICENSES_H

#include "constants/hoenn_licenses.h"

// VM-Lizenzen fuer Hoenn. Der Spieler beherrscht die Feldattacken laengst
// (Johto-Champion), darf sie in Hoenn aber erst nach behoerdlicher Erlaubnis
// einsetzen. Gesperrt sind nur die Attacken, die den Fortschritt steuern --
// Fliegen und Blitz bleiben frei.

bool32 HasHoennLicense(u32 index);
bool32 HoennLicensesApply(void);   // TRUE, wenn der Spieler gerade in Hoenn steht
void SetHoennLicense(void);        // Special: Index in gSpecialVar_0x8004
void HasHoennLicenseSpecial(void); // Special: Ergebnis nach gSpecialVar_Result

#endif // GUARD_HOENN_LICENSES_H
