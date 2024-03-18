texte= input("Entrez le texte à analyser : ")

#J"initialise le nombre de paragraphes à 1
paragraphe=texte.count("\n")+texte.count("\t")+1

#Selon le programme , il y a autant de phrases que de . ! et ?
phrase = texte.count(".") + texte.count("?") + texte.count("!")

mot=len(texte.split())

# Le programme compte le nombre de caracteres sans tenir compte des espaces et des ponctuations
caractere = len(texte.replace(" " , ""))

print("Votre texte comporte",paragraphe,"paragraphe(s),",phrase,"phrase(s),",mot,"mot(s)et",caractere,"caractère(s)")
