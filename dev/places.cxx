#encoding "utf-8"
PlaceWord -> Noun<kwtype="место">;
PlaceWord_ -> Noun<kwtype="место_">;
Country -> Noun<kwtype="страна">;

Place -> PlaceWord<gnc-agr[1]> Word<gnc-agr[1], h-reg1> | Word<gnc-agr[1], h-reg1> PlaceWord_<gnc-agr[1]> | Country;

Placeinfo -> Place interp (Place.Name);