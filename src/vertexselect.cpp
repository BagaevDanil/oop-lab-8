#include "vertexselect.h"

const QColor TVertexSelect::COMMON_COLOR = TVertex::COLOR;
const QColor TVertexSelect::SELECTED_COLOR = QColor(204, 0, 0);

TVertexSelect::TVertexSelect(QString name, bool isSelected, QObject *parent)
    : TVertex(name, parent)
    , _IsSelected(isSelected)
{
    _Color = COMMON_COLOR;
    if (isSelected) {
        _Color = SELECTED_COLOR;
    }
}

void TVertexSelect::SetSelected(bool isSelected)
{
    _IsSelected = isSelected;
    if (isSelected) {
        _Color = SELECTED_COLOR;
    }
    else {
        _Color = COMMON_COLOR;
    }
}

void TVertexSelect::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
    if (event->buttons() != Qt::RightButton) {
        return;
    }
    SetSelected(!_IsSelected);
    TVertex::mousePressEvent(event);
}
