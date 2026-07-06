#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7028
// Address: 0x2b7028 - 0x2b70a0
void sub_002B7028_0x2b7028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7028_0x2b7028");
#endif

    switch (ctx->pc) {
        case 0x2b7050u: goto label_2b7050;
        default: break;
    }

    ctx->pc = 0x2b7028u;

    // 0x2b7028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b702c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7038: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2b7038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2b703c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2b703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b7040: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2b7040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7044: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x2b7044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b7048: 0xc0ad81a  jal         func_2B6068
    ctx->pc = 0x2B7048u;
    SET_GPR_U32(ctx, 31, 0x2B7050u);
    ctx->pc = 0x2B704Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7048u;
            // 0x2b704c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6068u;
    if (runtime->hasFunction(0x2B6068u)) {
        auto targetFn = runtime->lookupFunction(0x2B6068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7050u; }
        if (ctx->pc != 0x2B7050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6068_0x2b6068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7050u; }
        if (ctx->pc != 0x2B7050u) { return; }
    }
    ctx->pc = 0x2B7050u;
label_2b7050:
    // 0x2b7050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b7050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7054: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2b7054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b7058: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7058u;
    {
        const bool branch_taken_0x2b7058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7058) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B7060u;
    // 0x2b7060: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B7060u;
    {
        const bool branch_taken_0x2b7060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7060u;
            // 0x2b7064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7060) {
            ctx->pc = 0x2B708Cu;
            goto label_2b708c;
        }
    }
    ctx->pc = 0x2B7068u;
label_2b7068:
    // 0x2b7068: 0x4830003  bgezl       $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7068u;
    {
        const bool branch_taken_0x2b7068 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2b7068) {
            ctx->pc = 0x2B706Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7068u;
            // 0x2b706c: 0x8e030044  lw          $v1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B7078u;
            goto label_2b7078;
        }
    }
    ctx->pc = 0x2B7070u;
    // 0x2b7070: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7070u;
    {
        const bool branch_taken_0x2b7070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7070u;
            // 0x2b7074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7070) {
            ctx->pc = 0x2B708Cu;
            goto label_2b708c;
        }
    }
    ctx->pc = 0x2B7078u;
label_2b7078:
    // 0x2b7078: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2b7078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b707c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2b707cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2b7080: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7088: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x2b7088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_2b708c:
    // 0x2b708c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b708cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7094: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7094u;
            // 0x2b7098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B709Cu;
    // 0x2b709c: 0x0  nop
    ctx->pc = 0x2b709cu;
    // NOP
    ctx->pc = 0x2b70a0u;
}
