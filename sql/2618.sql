select p1.name, p2.name, c.name
from providers p2
    join products p1 on p2.id = p1.id_providers
    join categories c on c.id = p1.id_categories
where p2.name like 'Sansul SA' and c.name like 'Imported';
