#pragma once

// Copia este archivo a config.h. config.h no se sube a GitHub.
constexpr const char* WIFI_SSID = "akakori";
constexpr const char* WIFI_PASSWORD = "desde2802";
// Dirección del computador/servidor que ejecuta Uvicorn. No es el host de MySQL.
constexpr const char* ECORED_API_URL = "http://IP_DEL_SERVIDOR:8000/api/measurements/lora";
constexpr const char* ECORED_API_KEY = "e_SohjQueIrUZbhFa85Bp0-jC0gWfR7tWxHARhstk4c";
constexpr const char* ECORED_STATION_ID = "EST-001";
// Si usas HTTPS, pega aquí el certificado PEM de la CA del servidor.
// Nunca se desactiva la verificación de certificados.
constexpr const char* ECORED_ROOT_CA = nullptr;
