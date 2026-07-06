#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001503E0
// Address: 0x1503e0 - 0x150570
void sub_001503E0_0x1503e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001503E0_0x1503e0");
#endif

    switch (ctx->pc) {
        case 0x150404u: goto label_150404;
        default: break;
    }

    ctx->pc = 0x1503e0u;

    // 0x1503e0: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1503e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1503e4: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x1503e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x1503e8: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x1503e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x1503ec: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1503ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1503f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1503f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503f4: 0x24e7e4c0  addiu       $a3, $a3, -0x1B40
    ctx->pc = 0x1503f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960320));
    // 0x1503f8: 0x24c6ee90  addiu       $a2, $a2, -0x1170
    ctx->pc = 0x1503f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962832));
    // 0x1503fc: 0x24a5edf0  addiu       $a1, $a1, -0x1210
    ctx->pc = 0x1503fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962672));
    // 0x150400: 0x2484ed50  addiu       $a0, $a0, -0x12B0
    ctx->pc = 0x150400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962512));
label_150404:
    // 0x150404: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x150404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150408: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x150408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x15040c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x15040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150410: 0x2903000a  slti        $v1, $t0, 0xA
    ctx->pc = 0x150410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x150414: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x150414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150418: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x150418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x15041c: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x15041cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x150420: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x150420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x150424: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x150424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x150428: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x150428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x15042c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x15042cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x150430: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x150430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150434: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x150434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x150438: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x150438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x15043c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x15043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x150440: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x150440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150444: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x150444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x150448: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x150448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x15044c: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x15044cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x150450: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x150450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150454: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x150454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x150458: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x150458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x15045c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x15045cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x150460: 0xc4e20018  lwc1        $f2, 0x18($a3)
    ctx->pc = 0x150460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150464: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x150464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x150468: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x150468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x15046c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x15046cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x150470: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x150470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150474: 0xe4c20018  swc1        $f2, 0x18($a2)
    ctx->pc = 0x150474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x150478: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x150478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x15047c: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x15047cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x150480: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x150480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150484: 0xe4c1001c  swc1        $f1, 0x1C($a2)
    ctx->pc = 0x150484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x150488: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x150488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x15048c: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x15048cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x150490: 0xc4e20024  lwc1        $f2, 0x24($a3)
    ctx->pc = 0x150490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150494: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x150494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x150498: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x150498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x15049c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x15049cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1504a0: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x1504a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1504a4: 0xe4c20024  swc1        $f2, 0x24($a2)
    ctx->pc = 0x1504a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x1504a8: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x1504a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x1504ac: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1504acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1504b0: 0xc4e0002c  lwc1        $f0, 0x2C($a3)
    ctx->pc = 0x1504b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1504b4: 0xe4c10028  swc1        $f1, 0x28($a2)
    ctx->pc = 0x1504b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x1504b8: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x1504b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x1504bc: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1504bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1504c0: 0xc4e20030  lwc1        $f2, 0x30($a3)
    ctx->pc = 0x1504c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1504c4: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x1504c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x1504c8: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x1504c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x1504cc: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1504ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1504d0: 0xc4e10034  lwc1        $f1, 0x34($a3)
    ctx->pc = 0x1504d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1504d4: 0xe4c20030  swc1        $f2, 0x30($a2)
    ctx->pc = 0x1504d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x1504d8: 0xe4a20030  swc1        $f2, 0x30($a1)
    ctx->pc = 0x1504d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x1504dc: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x1504dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1504e0: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x1504e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1504e4: 0xe4c10034  swc1        $f1, 0x34($a2)
    ctx->pc = 0x1504e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x1504e8: 0xe4a10034  swc1        $f1, 0x34($a1)
    ctx->pc = 0x1504e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x1504ec: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x1504ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1504f0: 0xc4e2003c  lwc1        $f2, 0x3C($a3)
    ctx->pc = 0x1504f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1504f4: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x1504f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x1504f8: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x1504f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x1504fc: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1504fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x150500: 0xc4e10040  lwc1        $f1, 0x40($a3)
    ctx->pc = 0x150500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150504: 0xe4c2003c  swc1        $f2, 0x3C($a2)
    ctx->pc = 0x150504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x150508: 0xe4a2003c  swc1        $f2, 0x3C($a1)
    ctx->pc = 0x150508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x15050c: 0xe482003c  swc1        $f2, 0x3C($a0)
    ctx->pc = 0x15050cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x150510: 0xc4e00044  lwc1        $f0, 0x44($a3)
    ctx->pc = 0x150510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150514: 0xe4c10040  swc1        $f1, 0x40($a2)
    ctx->pc = 0x150514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x150518: 0xe4a10040  swc1        $f1, 0x40($a1)
    ctx->pc = 0x150518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x15051c: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x15051cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x150520: 0xe4c00044  swc1        $f0, 0x44($a2)
    ctx->pc = 0x150520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x150524: 0xc4e10048  lwc1        $f1, 0x48($a3)
    ctx->pc = 0x150524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150528: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x150528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x15052c: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x15052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x150530: 0xc4e0004c  lwc1        $f0, 0x4C($a3)
    ctx->pc = 0x150530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150534: 0xe4c10048  swc1        $f1, 0x48($a2)
    ctx->pc = 0x150534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x150538: 0xe4a10048  swc1        $f1, 0x48($a1)
    ctx->pc = 0x150538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x15053c: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x15053cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x150540: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x150540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x150544: 0xe4c0004c  swc1        $f0, 0x4C($a2)
    ctx->pc = 0x150544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x150548: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x150548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x15054c: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x15054cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x150550: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x150550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x150554: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x150554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x150558: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x150558u;
    {
        const bool branch_taken_0x150558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150558u;
        // 0x15055c: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150558) {
            ctx->pc = 0x150404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150404;
        }
    }
    ctx->pc = 0x150560u;
    // 0x150560: 0x3e00008  jr          $ra
    ctx->pc = 0x150560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150568u;
    // 0x150568: 0x0  nop
    ctx->pc = 0x150568u;
    // NOP
    // 0x15056c: 0x0  nop
    ctx->pc = 0x15056cu;
    // NOP
}
