# def convertPlainTextToDiagraphs (plainText):
#     # append X if Two letters are being repeated
#     for s in range(0,len(plainText)+1,2):
#         if s<len(plainText)-1:
#             if plainText[s]==plainText[s+1]:
#                 plainText=plainText[:s+1]+'X'+plainText[s+1:]

#     # append X if the total letters are odd, to make plaintext even
#     if len(plainText)%2 != 0:
#         plainText = plainText[:]+'X'

#     return plainText

# def main():
#     diagraphs=convertPlainTextToDiagraphs("HelloKushal")
#     for i in range (0, len(diagraphs)):
#         print(diagraphs[i],end="")
#         if i%2!=0:
#             print(" ",end="")
# if __name__=='__main__':
#     main()

def Diagraph(text):
    Diagraph = []
    group = 0
    for i in range(2, len(text), 2):
        Diagraph.append(text[group:i])
 
        group = i
    Diagraph.append(text[group:])
    return Diagraph

print(Diagraph("hello"))