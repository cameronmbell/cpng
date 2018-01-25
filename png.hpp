#ifndef _PNG_H
#define _PNG_H

#include <string>
#include <memory>

class png {
public:
    png(const std::string& fname);
    png(const png&);
    png();

    png& operator=(png);

    ~png();

    void read(const std::string& fname);

    inline bool is_valid() {
		return m_val;
	}

protected:
	static void chnk_ihdr(uint32_t len, std::shared_ptr<char> data);
	static void chnk_plte(uint32_t len, std::shared_ptr<char> data);
	static void chnk_idat(uint32_t len, std::shared_ptr<char> data);

private:

    bool m_val;
    unsigned m_w, m_h;
	std::unique_ptr<char> m_data;
};

#endif // _PNG_H
