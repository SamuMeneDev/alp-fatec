// Converta os números decimais em binários
programa {
  inteiro varNumero, varQuociente = 0
  cadeia varBinario = ""
  funcao inicio() {
    escreva("Digite o numero decimal a ser convertido: ")
    leia(varNumero)

    varQuociente = varNumero
    faca {
      varBinario = (varQuociente % 2) + varBinario
      varQuociente = varQuociente / 2
    } enquanto(varQuociente >= 2)

    se (varQuociente != 0) { // Não adiciona zero à esquerda do quociente
      varBinario = varQuociente + varBinario
    }

    escreva(varBinario)
  }
}
