#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CCD78
// Address: 0x1ccd78 - 0x1ccdf8
void sub_001CCD78_0x1ccd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCD78_0x1ccd78");
#endif

    switch (ctx->pc) {
        case 0x1ccdbcu: goto label_1ccdbc;
        case 0x1ccdd0u: goto label_1ccdd0;
        default: break;
    }

    ctx->pc = 0x1ccd78u;

    // 0x1ccd78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccd7c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCD7Cu;
    {
        const bool branch_taken_0x1ccd7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD7Cu;
            // 0x1ccd80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd7c) {
            ctx->pc = 0x1CCD98u;
            goto label_1ccd98;
        }
    }
    ctx->pc = 0x1CCD84u;
    // 0x1ccd84: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ccd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ccd88: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1ccd8c: 0x2484bce0  addiu       $a0, $a0, -0x4320
    ctx->pc = 0x1ccd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950112));
    // 0x1ccd90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCD90u;
    {
        const bool branch_taken_0x1ccd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD90u;
            // 0x1ccd94: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd90) {
            ctx->pc = 0x1CCDB4u;
            goto label_1ccdb4;
        }
    }
    ctx->pc = 0x1CCD98u;
label_1ccd98:
    // 0x1ccd98: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1ccd98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ccd9c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCD9Cu;
    {
        const bool branch_taken_0x1ccd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd9c) {
            ctx->pc = 0x1CCDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD9Cu;
            // 0x1ccda0: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCDC8u;
            goto label_1ccdc8;
        }
    }
    ctx->pc = 0x1CCDA4u;
    // 0x1ccda4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ccda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ccda8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1ccda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1ccdac: 0x2484bcf0  addiu       $a0, $a0, -0x4310
    ctx->pc = 0x1ccdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950128));
    // 0x1ccdb0: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1ccdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
label_1ccdb4:
    // 0x1ccdb4: 0xc073006  jal         func_1CC018
    ctx->pc = 0x1CCDB4u;
    SET_GPR_U32(ctx, 31, 0x1CCDBCu);
    ctx->pc = 0x1CC018u;
    if (runtime->hasFunction(0x1CC018u)) {
        auto targetFn = runtime->lookupFunction(0x1CC018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDBCu; }
        if (ctx->pc != 0x1CCDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC018_0x1cc018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDBCu; }
        if (ctx->pc != 0x1CCDBCu) { return; }
    }
    ctx->pc = 0x1CCDBCu;
label_1ccdbc:
    // 0x1ccdbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CCDBCu;
    {
        const bool branch_taken_0x1ccdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDBCu;
            // 0x1ccdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdbc) {
            ctx->pc = 0x1CCDECu;
            goto label_1ccdec;
        }
    }
    ctx->pc = 0x1CCDC4u;
    // 0x1ccdc4: 0x0  nop
    ctx->pc = 0x1ccdc4u;
    // NOP
label_1ccdc8:
    // 0x1ccdc8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCDC8u;
    {
        const bool branch_taken_0x1ccdc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDC8u;
            // 0x1ccdcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdc8) {
            ctx->pc = 0x1CCDECu;
            goto label_1ccdec;
        }
    }
    ctx->pc = 0x1CCDD0u;
label_1ccdd0:
    // 0x1ccdd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1ccdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ccdd4: 0x0  nop
    ctx->pc = 0x1ccdd4u;
    // NOP
    // 0x1ccdd8: 0x0  nop
    ctx->pc = 0x1ccdd8u;
    // NOP
    // 0x1ccddc: 0x0  nop
    ctx->pc = 0x1ccddcu;
    // NOP
    // 0x1ccde0: 0x0  nop
    ctx->pc = 0x1ccde0u;
    // NOP
    // 0x1ccde4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CCDE4u;
    {
        const bool branch_taken_0x1ccde4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDE4u;
            // 0x1ccde8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccde4) {
            ctx->pc = 0x1CCDD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ccdd0;
        }
    }
    ctx->pc = 0x1CCDECu;
label_1ccdec:
    // 0x1ccdec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDF0u;
            // 0x1ccdf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCDF8u;
    ctx->pc = 0x1ccdf8u;
}
