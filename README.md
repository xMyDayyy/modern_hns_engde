# Pokémon Origin Jade

<!-- Logo hier einfügen -->

**Pokémon Origin Jade** ist ein deutschsprachiger Romhack auf Basis von
[`hns_de`](https://github.com/helikoptermann843/hns_de) und
[`pokeemerald-expansion`](https://github.com/rh-hideout/pokeemerald-expansion).

Die Idee: **eine durchgehende Reise durch drei Regionen.** Nach Johto und Kanto
führt der Weg weiter nach **Hoenn** — nicht als neues Spiel, sondern als
Fortsetzung derselben Geschichte, mit demselben Team und demselben Spielstand.

<!-- Titelbildschirm hier einfügen -->

---

## Der Ausgangspunkt

Du kommst als **Champion des Festlands** in Hoenn an, eingeladen von Troy Trumm.
Das verändert alles gegenüber der Smaragd-Vorlage: Niemand erklärt dir, wie man
ein Pokémon fängt. Niemand hält dich für einen Anfänger. Wer dich kennt, weiß,
wen er vor sich hat — und wer dich nicht kennt, hat höchstens Gerüchte gehört.

Die gesamte Anfangsstrecke wurde daraufhin umgebaut: kein Umzug, keine
Starterwahl, keine Tutorials.

---

## Was anders ist

### Feldattacken hängen an den Orden

Deine VMs bringst du aus Johto und Kanto mit — einsetzen darfst du sie in Hoenn
aber erst mit dem passenden Orden.

| Orden | Arena | schaltet frei |
|---|---|---|
| Steinorden | Metarost City | Zerschneider |
| Dynamo-Orden | Malvenfroh City | Zertrümmerer |
| Hitzeorden | Bad Lavastadt | Stärke |
| Balanceorden | Blütenburg City | Surfer |
| Mentalorden | Moosbach City | Taucher |
| Schauerorden | Xeneroville | Kaskade |

**Blitz und Fliegen** brauchen keine Erlaubnis.

### Ein Schwierigkeitsgrad, der zur Spielzeit passt

Hoenn ist Endspiel-Inhalt, und das merkt man. Alle acht Arenaleiter treten mit
**sechs Pokémon** an — in jedem Rückkampf ebenso —, tragen sechs Halteitems und
haben Top-Genesungen dabei. Die Arenen sind typenrein. Wilde Pokémon und
Trainer skalieren mit deinem Fortschritt.

### Figuren mit Vorgeschichte

**Troy** hat dich nach Hoenn geholt. Was er dort treibt, sagt er nicht.
**Maike** nimmt dich als Messlatte und wird über fünf Begegnungen hinweg
spürbar stärker — von drei Pokémon bis zum vollen Team. **Norman** ist
Arenaleiter, nicht dein Vater, und meldet sich erst, wenn seine Arena
wiedereröffnet.

### Deutsch, durchgehend

Alle Texte folgen belegten offiziellen Übersetzungen. Terminologie aus den
Generationen 1 bis 7, Titelform statt Großbuchstaben, und jede Zeile auf die
Pixelbreite des GBA-Zeichensatzes geprüft.

---

## Bauen

```bash
make jade
```

Das Ergebnis heißt `Pokemon_Origin_Jade.gba`.

Voraussetzungen und Einrichtung stehen in [`INSTALL.md`](INSTALL.md). Wer die
reine HnS-Fassung ohne Hoenn bauen will, benutzt weiterhin `make hns`.

> ❗ Bitte **nicht** die „Download ZIP"-Schaltfläche von GitHub verwenden — der
> Verlauf fehlt dann, und Aktualisierungen lassen sich nicht mehr einspielen.

---

## Stand der Dinge

Hoenn ist spielbar und wird gerade durchgetestet. Was fertig ist und was noch
aussteht, steht im [Änderungsverzeichnis](CHANGELOG.md); eine ausführliche
Fassung für Testerinnen und Tester liegt unter
[`CHANGELOG-ausfuehrlich.md`](CHANGELOG-ausfuehrlich.md).

**In Planung:** Der Weg soll künftig in **Kanto** beginnen, in der Fassung der
ersten Generation, und von dort über Johto nach Hoenn führen — eine Reise im
Sinne des Anime. Die Vorarbeiten dazu stehen in
[`PLANUNG-Gesamt.md`](PLANUNG-Gesamt.md).

---

## Danksagung

Dieses Projekt wäre ohne die Vorarbeit anderer nicht möglich:

- **[Pokémon HnS](https://github.com/PokemonHnS-Development/pokehns-expansion)**
  — die Johto- und Kanto-Grundlage, auf der alles aufbaut
- **[`hns_de`](https://github.com/helikoptermann843/hns_de)** — die deutsche
  Lokalisierung von HnS
- **[RHH's `pokeemerald-expansion`](https://github.com/rh-hideout/pokeemerald-expansion)**
  — die Engine mit ihren hunderten Funktionen
- **[pret's `pokeemerald`](https://github.com/pret/pokeemerald)** — das
  Decompilation-Projekt, das den Anfang gemacht hat

```
Based off RHH's pokeemerald-expansion https://github.com/rh-hideout/pokeemerald-expansion/
```

Alle Mitwirkenden der Engine sind in [`CREDITS.md`](CREDITS.md) aufgeführt.

---

## Rechtliches

Pokémon ist eine eingetragene Marke von Nintendo, Game Freak und The Pokémon
Company. Dieses Projekt ist ein nichtkommerzielles Fanprojekt und steht in
keiner Verbindung zu den Rechteinhabern. Es wird **kein Spielabbild
verbreitet** — zum Spielen wird der Quelltext selbst gebaut.
