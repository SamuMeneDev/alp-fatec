programa {
  real varPeso, varAltura, varImc

  funcao inicio() {
    escreva("Insira seu peso em kg: ")
    leia(varPeso)

    escreva("Insira sua altura: ")
    leia(varAltura)

    varImc = varPeso / (varAltura * varAltura)

    se (varImc < 18.5) {
      escreva("Abaixo do peso")
    } senao se (varImc < 25) {
      escreva("Peso normal")
    } senao se (varImc < 30) {
      escreva("Acima do peso")
    } senao se (varImc < 35) {
      escreva("Obesidade Grau I")
    } senao se (varImc < 40) {
      escreva("Obesidade Grau II")
    } senao {
      escreva("Obesidade Grau III")
    }
  }
}
