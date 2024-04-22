SET @Entry := 190011;

DELETE FROM creature_template WHERE entry IN (@Entry);
DELETE FROM npc_text WHERE id IN (50401,50402,50403);
DELETE FROM creature WHERE id IN (@Entry);
