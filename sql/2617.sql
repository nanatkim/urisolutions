select p1.name, p2.name
from products p1
    join providers p2 on p2.id = p1.id_providers and p2.name like 'Ajax SA';