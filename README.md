# oop-lab-8
## Обновления
Класс TVertexSelect, который найследуется от уже существующего класса вершин TVertex и обладает новой дополнительной логикой для возможности выделения вершин.
На диаграмме классов можно показать, что он наследуется от TVertex, также TGraph теперь везде использует TVertexSelect

## Методы и поля TVertexSelect
* static const QColor COMMON_COLOR - Константа для цвета по умолчанию у всех вершин класса
* static const QColor SELECTED_COLOR - Константа для цвета при выделении у всех вершин класса
* TVertexSelect(QString name, bool isSelected, QObject *parent) - Конструктор для создания выделяющейся вершины
* void SetSelected(bool isSelected) - Метод для изменения статуса выделенности
* void mousePressEvent(QGraphicsSceneMouseEvent *event) - Обработчик нажатия, для выделения вершины при нажатии правой кнопкой мыши
* bool _IsSelected - Флаг для определения текущего статуса выделенности
