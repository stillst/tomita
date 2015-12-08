#encoding "utf-8"

Born -> Verb<kwtype=born>;
City -> Noun<kwtype=city>;
Person -> AnyWord<gram="имя">|AnyWord<gram="фам">;

S -> Person interp(BornFact.Person) Born "в" City interp(BornFact.Place);

