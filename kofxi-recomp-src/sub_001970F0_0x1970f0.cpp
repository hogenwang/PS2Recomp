#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001970F0
// Address: 0x1970f0 - 0x197190
void sub_001970F0_0x1970f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001970F0_0x1970f0");
#endif

    ctx->pc = 0x1970f0u;

    // 0x1970f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1970f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1970f4: 0x8c43d170  lw          $v1, -0x2E90($v0)
    ctx->pc = 0x1970f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955376)));
    // 0x1970f8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1970f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1970fc: 0x34428f00  ori         $v0, $v0, 0x8F00
    ctx->pc = 0x1970fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36608);
    // 0x197100: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x197100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x197104: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x197104u;
    {
        const bool branch_taken_0x197104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197104) {
            ctx->pc = 0x197108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197104u;
            // 0x197108: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197188u;
            goto label_197188;
        }
    }
    ctx->pc = 0x19710Cu;
    // 0x19710c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19710cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197110: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x197110u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x197114: 0x8c48d178  lw          $t0, -0x2E88($v0)
    ctx->pc = 0x197114u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955384)));
    // 0x197118: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x197118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x19711c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x19711cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x197120: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x197124: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x197124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x197128: 0xace8d188  sw          $t0, -0x2E78($a3)
    ctx->pc = 0x197128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294955400), GPR_U32(ctx, 8));
    // 0x19712c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197130: 0x25070314  addiu       $a3, $t0, 0x314
    ctx->pc = 0x197130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 788));
    // 0x197134: 0xacc8d140  sw          $t0, -0x2EC0($a2)
    ctx->pc = 0x197134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294955328), GPR_U32(ctx, 8));
    // 0x197138: 0xac47d148  sw          $a3, -0x2EB8($v0)
    ctx->pc = 0x197138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955336), GPR_U32(ctx, 7));
    // 0x19713c: 0x9106008c  lbu         $a2, 0x8C($t0)
    ctx->pc = 0x19713cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x197140: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x197140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197144: 0xa0a6d168  sb          $a2, -0x2E98($a1)
    ctx->pc = 0x197144u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294955368), (uint8_t)GPR_U32(ctx, 6));
    // 0x197148: 0xc5000090  lwc1        $f0, 0x90($t0)
    ctx->pc = 0x197148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19714c: 0xe480d158  swc1        $f0, -0x2EA8($a0)
    ctx->pc = 0x19714cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294955352), bits); }
    // 0x197150: 0xc5000094  lwc1        $f0, 0x94($t0)
    ctx->pc = 0x197150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197154: 0xe460d150  swc1        $f0, -0x2EB0($v1)
    ctx->pc = 0x197154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955344), bits); }
    // 0x197158: 0x950300ea  lhu         $v1, 0xEA($t0)
    ctx->pc = 0x197158u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 234)));
    // 0x19715c: 0xa443d160  sh          $v1, -0x2EA0($v0)
    ctx->pc = 0x19715cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955360), (uint16_t)GPR_U32(ctx, 3));
    // 0x197160: 0x9103039f  lbu         $v1, 0x39F($t0)
    ctx->pc = 0x197160u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 927)));
    // 0x197164: 0x9102039e  lbu         $v0, 0x39E($t0)
    ctx->pc = 0x197164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 926)));
    // 0x197168: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x197168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19716c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x197170: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x197170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x197174: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x197174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197178: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x197178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19717c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197180: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x197184: 0x21023  negu        $v0, $v0
    ctx->pc = 0x197184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_197188:
    // 0x197188: 0x3e00008  jr          $ra
    ctx->pc = 0x197188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197190u;
    ctx->pc = 0x197190u;
}
