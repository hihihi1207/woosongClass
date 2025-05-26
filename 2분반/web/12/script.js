const input = document.getElementById('todoInput');
const addButton = document.getElementById('addBtn');
const List = document.getElementById('todoList');

addButton.addEventListener('click', function() {
    const text = input.value.trim();
    if (text === '') {
        alert('할 일을 입력하세요.');
        return;
    }

    const li = document.createElement('li');
    li.textContent = text;

    const deleteButton = document.createElement('button');
    deleteButton.textContent = '삭제';
    deleteButton.addEventListener('click', function() {
        List.removeChild(li);
    });

    li.appendChild(deleteButton);
    List.appendChild(li);
    input.value = '';
});