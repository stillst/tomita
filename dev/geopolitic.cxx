#encoding "utf-8"


Polit -> Noun<kwtype="гео_полит"> | Noun<kwtype="интро_полит">;

Country -> Noun<kwtype="страна"> interp (GeoPolitic.Name);
Country -> Polit<gnc-agr[1]> Word<h-reg1, gnc-agr[1]> interp (GeoPolitic.Name);

//Парламент Великобритании
PolitStruct  -> Noun<kwtype="интро_полит"> Word<kwtype="страна"> ;
//Австралийский парламент (не работает)
PolitStruct  -> Word<kwtype="страна"> Noun<kwtype="интро_полит">;
Country -> PolitStruct interp (GeoPolitic.Name);