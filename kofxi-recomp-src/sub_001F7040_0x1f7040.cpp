#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7040
// Address: 0x1f7040 - 0x1f70b0
void sub_001F7040_0x1f7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7040_0x1f7040");
#endif

    switch (ctx->pc) {
        case 0x1f7054u: goto label_1f7054;
        case 0x1f7098u: goto label_1f7098;
        case 0x1f70a8u: goto label_1f70a8;
        default: break;
    }

    ctx->pc = 0x1f7040u;

    // 0x1f7040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7048: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f7048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f704c: 0xc07d928  jal         func_1F64A0
    ctx->pc = 0x1F704Cu;
    SET_GPR_U32(ctx, 31, 0x1F7054u);
    ctx->pc = 0x1F7050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F704Cu;
            // 0x1f7050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F64A0u;
    if (runtime->hasFunction(0x1F64A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F64A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7054u; }
        if (ctx->pc != 0x1F7054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F64A0_0x1f64a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7054u; }
        if (ctx->pc != 0x1F7054u) { return; }
    }
    ctx->pc = 0x1F7054u;
label_1f7054:
    // 0x1f7054: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7054u;
    {
        const bool branch_taken_0x1f7054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7054u;
            // 0x1f7058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7054) {
            ctx->pc = 0x1F7068u;
            goto label_1f7068;
        }
    }
    ctx->pc = 0x1F705Cu;
    // 0x1f705c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F705Cu;
    {
        const bool branch_taken_0x1f705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F705Cu;
            // 0x1f7060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f705c) {
            ctx->pc = 0x1F7088u;
            goto label_1f7088;
        }
    }
    ctx->pc = 0x1F7064u;
    // 0x1f7064: 0x0  nop
    ctx->pc = 0x1f7064u;
    // NOP
label_1f7068:
    // 0x1f7068: 0x8e042018  lw          $a0, 0x2018($s0)
    ctx->pc = 0x1f7068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
    // 0x1f706c: 0x24841128  addiu       $a0, $a0, 0x1128
    ctx->pc = 0x1f706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x1f7070: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1f7070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f7074: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7074u;
    {
        const bool branch_taken_0x1f7074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F7078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7074u;
            // 0x1f7078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7074) {
            ctx->pc = 0x1F7088u;
            goto label_1f7088;
        }
    }
    ctx->pc = 0x1F707Cu;
    // 0x1f707c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f7080: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1f7080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f7084: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f7084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f7088:
    // 0x1f7088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f708c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f708cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7090: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7090u;
            // 0x1f7094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7098u;
label_1f7098:
    // 0x1f7098: 0x8c822018  lw          $v0, 0x2018($a0)
    ctx->pc = 0x1f7098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f709c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F709Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F70A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F709Cu;
            // 0x1f70a0: 0x24421150  addiu       $v0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F70A4u;
    // 0x1f70a4: 0x0  nop
    ctx->pc = 0x1f70a4u;
    // NOP
label_1f70a8:
    // 0x1f70a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F70A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F70ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70A8u;
            // 0x1f70ac: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F70B0u;
    ctx->pc = 0x1f70b0u;
}
