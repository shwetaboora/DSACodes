// precedence -> firstly -> (),^,*or/,+or-

// Infix ->   <operand><operator><operand>

// Prefix(polish notation) -> <operator><operand><operand>
// Infix -> 4*2+3 = ((4*2)+3) = (*<-(42)+3) = +-<(*(42)3) = +*423 -> Prefix
// Infix -> 5-6/3 = (5-(6/3)) = (5-/<-(63)) = -<-(5/(63)) = -5/63 -> Prefix

// Postfix(reverse polish notation) -> <operand><operand><operator>
// Infix -> 4*2+3 = ((4*2)+3) = ((42)->*+3) = ((42)->*3)->+ = 42*3+ -> Postfix