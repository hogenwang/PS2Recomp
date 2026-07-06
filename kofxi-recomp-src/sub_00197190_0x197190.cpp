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

// Function: sub_00197190
// Address: 0x197190 - 0x197230
void sub_00197190_0x197190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197190_0x197190");
#endif

    ctx->pc = 0x197190u;

    // 0x197190: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x197190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197194: 0x8c43d0f0  lw          $v1, -0x2F10($v0)
    ctx->pc = 0x197194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955248)));
    // 0x197198: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19719c: 0x34428f00  ori         $v0, $v0, 0x8F00
    ctx->pc = 0x19719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36608);
    // 0x1971a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1971a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1971a4: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1971A4u;
    {
        const bool branch_taken_0x1971a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1971a4) {
            ctx->pc = 0x1971A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1971A4u;
            // 0x1971a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197228u;
            goto label_197228;
        }
    }
    ctx->pc = 0x1971ACu;
    // 0x1971ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1971acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1971b0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x1971b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x1971b4: 0x8c48d0f8  lw          $t0, -0x2F08($v0)
    ctx->pc = 0x1971b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955256)));
    // 0x1971b8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1971b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1971bc: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1971bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1971c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1971c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1971c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1971c8: 0xace8d180  sw          $t0, -0x2E80($a3)
    ctx->pc = 0x1971c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294955392), GPR_U32(ctx, 8));
    // 0x1971cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1971ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1971d0: 0x25070314  addiu       $a3, $t0, 0x314
    ctx->pc = 0x1971d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 788));
    // 0x1971d4: 0xacc8d0c0  sw          $t0, -0x2F40($a2)
    ctx->pc = 0x1971d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955200), GPR_U32(ctx, 8));
    // 0x1971d8: 0xac47d0c8  sw          $a3, -0x2F38($v0)
    ctx->pc = 0x1971d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955208), GPR_U32(ctx, 7));
    // 0x1971dc: 0x9106008c  lbu         $a2, 0x8C($t0)
    ctx->pc = 0x1971dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x1971e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1971e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1971e4: 0xa0a6d0e8  sb          $a2, -0x2F18($a1)
    ctx->pc = 0x1971e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294955240), (uint8_t)GPR_U32(ctx, 6));
    // 0x1971e8: 0xc5000090  lwc1        $f0, 0x90($t0)
    ctx->pc = 0x1971e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1971ec: 0xe480d0d8  swc1        $f0, -0x2F28($a0)
    ctx->pc = 0x1971ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294955224), bits); }
    // 0x1971f0: 0xc5000094  lwc1        $f0, 0x94($t0)
    ctx->pc = 0x1971f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1971f4: 0xe460d0d0  swc1        $f0, -0x2F30($v1)
    ctx->pc = 0x1971f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955216), bits); }
    // 0x1971f8: 0x950300ea  lhu         $v1, 0xEA($t0)
    ctx->pc = 0x1971f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 234)));
    // 0x1971fc: 0xa443d0e0  sh          $v1, -0x2F20($v0)
    ctx->pc = 0x1971fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955232), (uint16_t)GPR_U32(ctx, 3));
    // 0x197200: 0x9103039f  lbu         $v1, 0x39F($t0)
    ctx->pc = 0x197200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 927)));
    // 0x197204: 0x9102039e  lbu         $v0, 0x39E($t0)
    ctx->pc = 0x197204u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 926)));
    // 0x197208: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x197208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19720c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19720cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x197210: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x197210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x197214: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x197214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197218: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x197218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19721c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197220: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197220u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x197224: 0x21023  negu        $v0, $v0
    ctx->pc = 0x197224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_197228:
    // 0x197228: 0x3e00008  jr          $ra
    ctx->pc = 0x197228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197230u;
}
