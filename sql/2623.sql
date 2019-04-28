select products.name, categories.name
from products
    inner join categories
    on products.id_categories = categories.id
where products.amount > 100