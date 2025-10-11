import os
from PIL import Image

FRAME_WIDTH = 16
FRAME_HEIGHT = 32
OUTPUT_DIR = 'output'

def convert_horizontal_to_vertical(image_path):
    img = Image.open(image_path)
    img_name = os.path.basename(image_path)

    # Número de frames
    frames = img.width // FRAME_WIDTH

    # Nova imagem no mesmo modo e paleta
    new_img = Image.new(img.mode, (FRAME_WIDTH, FRAME_HEIGHT * frames))
    new_img.putpalette(img.getpalette())  # Copia paleta

    for i in range(frames):
        frame = img.crop((
            i * FRAME_WIDTH, 0,
            (i + 1) * FRAME_WIDTH, FRAME_HEIGHT
        ))
        new_img.paste(frame, (0, i * FRAME_HEIGHT))

    output_path = os.path.join(OUTPUT_DIR, img_name)
    new_img.save(output_path)
    print(f"Convertido com paleta: {img_name} → {output_path}")

def main():
    if not os.path.exists(OUTPUT_DIR):
        os.makedirs(OUTPUT_DIR)

    for file in os.listdir('.'):
        if file.lower().endswith('.png'):
            convert_horizontal_to_vertical(file)

if __name__ == '__main__':
    main()
