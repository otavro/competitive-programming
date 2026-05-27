select concat(
    substring(n.cpf, 1, 3), '.',
    substring(n.cpf, 4, 3), '.',
    substring(n.cpf, 7, 3), '-',
    substring(n.cpf, 10, 2)) as CPF
from customers as c
inner join natural_person as n on n.id_customers = c.id
