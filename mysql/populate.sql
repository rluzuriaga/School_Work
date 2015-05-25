USE dunder_mifflin;


INSERT INTO items VALUES ('1','Copy Paper','20-lb 500 sheets per ream; 10 reams per carton',1,50.00);
INSERT INTO items VALUES ('2','Yellow Paper','Perforated college-ruled sheets 12 pads per pack',1,8.00);
INSERT INTO items VALUES ('3','Sticky Squares','3" x 3" , 100 sheets per pad',2,3.00);
INSERT INTO items VALUES ('4','Fine-Tip Markers','1.0 mm Tip for Fine BOLD Marking Pack of 12, Black Sharpie Markers',3,2.00);
INSERT INTO items VALUES ('5','Storage Boxes','350lb. stacking weight, Holds letter/legal-size files',4,1.00);

INSERT INTO categories (catname) VALUES ('Paper');
INSERT INTO categories (catname) VALUES ('Squares');
INSERT INTO categories (catname) VALUES ('Markers');
INSERT INTO categories (catname) VALUES ('Boxes');

INSERT INTO admin VALUES ('admin', sha1('admin'));
