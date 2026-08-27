programa {
  funcao inicio() {
    real varNum,  varValorReal = 0, varValorAproximado = 0
    inteiro varMultiplo

    escreva("Digite o valor que se deseja converter em Bytes: ")
    leia(varNum)


    escreva("Escolha o multiplo da operação: 1- Byte | 2- KiloByte | 3- MegaByte | 4- GibaBytes | 5- TeraBytes | 6- PetaBytes: ")
    leia(varMultiplo)

    se(varMultiplo==1) {
      varValorAproximado = varNum * 1
      varValorReal = varNum * 1024
    } senao se (varMultiplo==2) {
      varValorAproximado = varNum * 1000
      varValorReal = varNum * 1024
    } senao se (varMultiplo==3) {
      varValorAproximado = varNum * 1000000
      varValorReal = varNum * (1024 * 1024)
    } senao se (varMultiplo==4) {
      varValorAproximado = varNum * 1000000000
      varValorReal = varNum * (1024 * 1024 * 1024)
    } senao se (varMultiplo==5) {
      varValorAproximado = varNum * 1000000000000
      varValorReal = varNum * (1024 * 1024 * 1024 * 1024)
    } senao se (varMultiplo==6) {
      varValorAproximado =  varNum * 10000000000000000
      varValorReal = varNum * (1024 * 1024 * 1024 * 1024 * 1024)
    } senao {
      escreva("Operação Inválida")
    }

    escreva("O Valor Real convertido em bytes é: "+varValorReal)
    escreva("O Valor Aproximado é: "+varValorAproximado)

  }
}
