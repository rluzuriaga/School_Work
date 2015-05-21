<?php
$to = 'you@yours.com';
$subject = 'New order';

$content = $_POST;
$email_message = '';

$firstname = 'first_name';
$lastname = 'last_name';
$email_from = 'email';
$phone = 'phone';
$comments = 'comments';
$address = 'address';
$start_date = 'start_date';
$end_date = 'end_date';
$selectie = 'selectie';

$body .= '=================================='."\n";
$body .= "First Name: ".$content[$firstname]."\n";
$body .= "Last Name: ".$content[$lastname]."\n";
$body .= "Email: ".$content[$email_from]."\n";
$body .= "Phone: ".$content[$phone]."\n";
$body .= "Address: ".$content[$address]."\n";
$body .= 'Has placed the folowing order:'."\n";
$body .= "\n";
$body .= '=================================='."\n";

for($i=1; $i < $content['itemCount'] + 1; $i++) {
$name = 'item_name_'.$i;
$quantity = 'item_quantity_'.$i;
$price = 'item_price_'.$i;
$total = $content[$quantity]*$content[$price];
$grandTotal += $total;
$body .= 'Order #'.$i.': '.$content[$name]."\n".'Qty x '.$content[$quantity].' --- Piece Price $'.number_format($content[$price], 2, '.', '')."\n".'Subtotal $'.number_format($total, 2, '.', '')."\n"; 
$body .= '=================================='."\n";
}

$body .= 'Order Total: $'.number_format($grandTotal, 2, '.', '')."\n";
$body .= '=================================='."\n";
$body .= "\n";
$body .= "Comment: ".$content[$comments]."\n";

$headers = 'From: '.$email_from."\r\n".
'Reply-To: '.$email_from."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($to, $subject, $body, $email_message, $headers);

Header('Location: success.html');
?>
