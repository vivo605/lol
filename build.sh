#!/bin/bash
BUILD_DIR="./build"

mkdir -p "$BUILD_DIR" # Создаем директории, если они не существуют

# Поиск всех .cpp файлов в директории src
find src -name "*.cpp" | while read -r src_file; do
    # Удаляем префикс 'src/' из пути
    relative_path="${src_file#src/}"
    
    # Преобразование пути в объектный файл с заменой "/" на "__"
    obj_file="$BUILD_DIR/$(echo "$relative_path" | sed 's/\//__/g' | sed 's/\.cpp$/.o/')"

    # Если объектный файл не существует или исходник новее объектного файла
    if [[ ! -f "$obj_file" || "$src_file" -nt "$obj_file" ]]; then
        # echo "Компилируем $src_file"
        g++ -c -o "$obj_file" "$src_file"
    fi
done

# Удаление объектных файлов, которые не имеют соответствующих исходных файлов
find "$BUILD_DIR" -name "*.o" | while read -r obj_file; do
    # Преобразуем путь объектного файла обратно в путь исходного файла
    relative_obj_file="${obj_file#$BUILD_DIR/}"
    src_file="src/$(echo "$relative_obj_file" | sed 's/__/\//g' | sed 's/\.o$/.cpp/')"
    
    # Проверяем, существует ли соответствующий исходный файл
    if [[ ! -f "$src_file" ]]; then
        # echo "Удаляем устаревший файл $obj_file, соответствующий отсутствующему src/$src_file"
        rm "$obj_file"
    fi
done

# Линковка объектных файлов для создания исполняемого файла
# echo "Собираем проект..."

g++ -o ./script $(find "$BUILD_DIR" -name "*.o")
