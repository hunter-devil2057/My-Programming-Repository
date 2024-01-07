let $books := doc("books.xml")/books/book
where $books/price > 3000
return $books
