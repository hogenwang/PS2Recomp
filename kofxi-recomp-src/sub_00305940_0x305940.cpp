#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305940
// Address: 0x305940 - 0x3059e0
void sub_00305940_0x305940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305940_0x305940");
#endif

    switch (ctx->pc) {
        case 0x305950u: goto label_305950;
        default: break;
    }

    ctx->pc = 0x305940u;

    // 0x305940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305948: 0xc068c60  jal         func_1A3180
    ctx->pc = 0x305948u;
    SET_GPR_U32(ctx, 31, 0x305950u);
    ctx->pc = 0x1A3180u;
    if (runtime->hasFunction(0x1A3180u)) {
        auto targetFn = runtime->lookupFunction(0x1A3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305950u; }
        if (ctx->pc != 0x305950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3180_0x1a3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305950u; }
        if (ctx->pc != 0x305950u) { return; }
    }
    ctx->pc = 0x305950u;
label_305950:
    // 0x305950: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x305950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x305954: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x305954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x305958: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x305958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x30595c: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x30595Cu;
    {
        const bool branch_taken_0x30595c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x30595c) {
            ctx->pc = 0x305998u;
            goto label_305998;
        }
    }
    ctx->pc = 0x305964u;
    // 0x305964: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x305964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x305968: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x305968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x30596c: 0x9467ea22  lhu         $a3, -0x15DE($v1)
    ctx->pc = 0x30596cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x305970: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x305970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x305974: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x305974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x305978: 0x9466ea2e  lhu         $a2, -0x15D2($v1)
    ctx->pc = 0x305978u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x30597c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x30597cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x305980: 0xa0609738  sb          $zero, -0x68C8($v1)
    ctx->pc = 0x305980u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    // 0x305984: 0x30e3fff6  andi        $v1, $a3, 0xFFF6
    ctx->pc = 0x305984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65526);
    // 0x305988: 0xa4a3ea22  sh          $v1, -0x15DE($a1)
    ctx->pc = 0x305988u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294961698), (uint16_t)GPR_U32(ctx, 3));
    // 0x30598c: 0x30c3fff6  andi        $v1, $a2, 0xFFF6
    ctx->pc = 0x30598cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65526);
    // 0x305990: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x305990u;
    {
        const bool branch_taken_0x305990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305990u;
            // 0x305994: 0xa483ea2e  sh          $v1, -0x15D2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294961710), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305990) {
            ctx->pc = 0x3059C8u;
            goto label_3059c8;
        }
    }
    ctx->pc = 0x305998u;
label_305998:
    // 0x305998: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x305998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x30599c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x30599cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x3059a0: 0x9467ea22  lhu         $a3, -0x15DE($v1)
    ctx->pc = 0x3059a0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x3059a4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3059a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3059a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3059a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3059ac: 0x9466ea2e  lhu         $a2, -0x15D2($v1)
    ctx->pc = 0x3059acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x3059b0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3059b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3059b4: 0xa0609738  sb          $zero, -0x68C8($v1)
    ctx->pc = 0x3059b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    // 0x3059b8: 0x30e3fff6  andi        $v1, $a3, 0xFFF6
    ctx->pc = 0x3059b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65526);
    // 0x3059bc: 0xa4a3ea22  sh          $v1, -0x15DE($a1)
    ctx->pc = 0x3059bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294961698), (uint16_t)GPR_U32(ctx, 3));
    // 0x3059c0: 0x30c3fff6  andi        $v1, $a2, 0xFFF6
    ctx->pc = 0x3059c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65526);
    // 0x3059c4: 0xa483ea2e  sh          $v1, -0x15D2($a0)
    ctx->pc = 0x3059c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294961710), (uint16_t)GPR_U32(ctx, 3));
label_3059c8:
    // 0x3059c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3059c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3059cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3059CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3059D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3059CCu;
            // 0x3059d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3059D4u;
    // 0x3059d4: 0x0  nop
    ctx->pc = 0x3059d4u;
    // NOP
    // 0x3059d8: 0x0  nop
    ctx->pc = 0x3059d8u;
    // NOP
    // 0x3059dc: 0x0  nop
    ctx->pc = 0x3059dcu;
    // NOP
    ctx->pc = 0x3059e0u;
}
