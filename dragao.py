import turtle

pen = turtle.Pen()

def dragao (tamanho, qtd, direcao):
	if qtd == 0:
		pen.forward(tamanho)
		return

	dragao (tamanho, qtd - 1, 1)
	
	pen.right(90 * direcao)

	dragao (tamanho, qtd - 1, -1)

dragao (10, 10, 1)