select customers.name, orders.id
from customers
    inner join orders
    on customers.id = orders.id_customers
where date_part('month', orders.orders_date) between 1 and 6;