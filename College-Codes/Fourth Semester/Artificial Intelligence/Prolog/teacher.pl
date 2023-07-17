studies(manish, artificialIntelligence).
studies(sijan, artificialIntelligence).
studies(nishan, computerNetworking).
studies(sanjay, operatingSystem).
teaches(santoshSir, artificialIntelligence).
teaches(bhimSir, computerNetworking).
teaches(bipinSir, operatingSystem).
teaches(sujitaMam, databaseManagementSystem).
professor(X, Y) :- teaches(X, C), studies(Y, C).