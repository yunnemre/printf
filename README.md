
# ft_printf

Kendi `printf` fonksiyonumu (42 projesi kapsamında) yeniden yazdım. Bu proje, formatlı çıktının içini anlamak için `libft`'teki yardımcı fonksiyonları kullanarak sıfırdan tamamlandı.

## 🔍 Özellikler

- Desteklenen format belirteçleri:
  - %c, %s, %p, %d, %i, %u, %x, %X, %%
- Alan genişliği, sıfır/düz boşluk doldurma, hizalama (`-`, `0`) flag’leri, precision (`.`) gibi cilalı printf davranışları destekleniyor.
- Tüm format tipi işlemleri kendi fonksiyonlarına ayrıldı:
  - `ft_printf_utils.c` ve devamı; string, sayı, pointer gibi yardımcı işlevler barındırır.
- `libft`'ten `ft_strlen`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strlcpy` gibi fonksiyonlarla tamamlandı.

## 🧠 Nasıl Çalışır?

1. Format string içindeki `%` karakterleri taranır.
2. `va_list` ile argümanlar okunur.
3. Tip, flag, field width, precision çözümlenir.
4. Uygun yardımcı (`print_spec_*`) fonksiyonları çağrılır ve `write` ile yazılır.
5. Yazılan karakter sayısı `int` olarak döner.

## ⚙️ Kullanım

```c
#include "ft_printf.h"

int main(void)
{
    int ret;

    ret = ft_printf("Hello %s! Number: %05d, Hex: %#x\n", "42", 42, 255);
    // Çıktı: Hello 42! Number: 00042, Hex: 0xff
    return (ret);
}
```

## 🛠️ Derleme

```bash
make
```

Bu işlem `libft` ile birlikte kendi kaynak dosyalarınızı da derleyip `ft_printf`'i oluşturur.

---

### ✅ Gerekiyorsa

- `libft` kodları `Makefile` aracılığıyla entegre edilmiştir.
- Kullanılan tüm fonksiyonlar `Norminette` uyumlu yazıldı.
- Memory leak ve edge-case davranışları test edildi.

## 👨‍💻 Yazar

- **Yunus Emre Dinler** – [GitHub @yunnemre](https://github.com/yunnemre)

Projeyi beğendiysen ⭐ atmayı unutma!
