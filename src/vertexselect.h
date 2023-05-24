#ifndef TVERTEXSELECT_H
#define TVERTEXSELECT_H

#include "vertex.h"

class TVertexSelect : public TVertex
{
public:
    static const QColor COMMON_COLOR;
    static const QColor SELECTED_COLOR;

public:
    TVertexSelect(QString name, bool isSelected = false, QObject *parent = nullptr);
    void SetSelected(bool isSelected);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:
    bool _IsSelected;
};

#endif // TVERTEXSELECT_H
