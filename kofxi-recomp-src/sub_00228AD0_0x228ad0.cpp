#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228AD0
// Address: 0x228ad0 - 0x228b38
void sub_00228AD0_0x228ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228AD0_0x228ad0");
#endif

    switch (ctx->pc) {
        case 0x228b00u: goto label_228b00;
        default: break;
    }

    ctx->pc = 0x228ad0u;

    // 0x228ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x228ad4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x228ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x228ad8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x228ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x228adc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x228adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x228ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x228ae4: 0x24714340  addiu       $s1, $v1, 0x4340
    ctx->pc = 0x228ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 17216));
    // 0x228ae8: 0x8c45a764  lw          $a1, -0x589C($v0)
    ctx->pc = 0x228ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944612)));
    // 0x228aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228af0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x228AF0u;
    {
        const bool branch_taken_0x228af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x228AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228AF0u;
            // 0x228af4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228af0) {
            ctx->pc = 0x228B00u;
            goto label_228b00;
        }
    }
    ctx->pc = 0x228AF8u;
    // 0x228af8: 0xc08a29c  jal         func_228A70
    ctx->pc = 0x228AF8u;
    SET_GPR_U32(ctx, 31, 0x228B00u);
    ctx->pc = 0x228A70u;
    if (runtime->hasFunction(0x228A70u)) {
        auto targetFn = runtime->lookupFunction(0x228A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B00u; }
        if (ctx->pc != 0x228B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228A70_0x228a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228B00u; }
        if (ctx->pc != 0x228B00u) { return; }
    }
    ctx->pc = 0x228B00u;
label_228b00:
    // 0x228b00: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x228b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x228b04: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x228b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x228b08: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x228b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b0c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x228b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b10: 0x8c46f9e4  lw          $a2, -0x61C($v0)
    ctx->pc = 0x228b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965732)));
    // 0x228b14: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x228b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x228b18: 0x8c67a784  lw          $a3, -0x587C($v1)
    ctx->pc = 0x228b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944644)));
    // 0x228b1c: 0x24a54330  addiu       $a1, $a1, 0x4330
    ctx->pc = 0x228b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17200));
    // 0x228b20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x228b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228b24: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x228b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x228b28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x228b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228b30: 0x808b5ac  j           func_22D6B0
    ctx->pc = 0x228B30u;
    ctx->pc = 0x228B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228B30u;
            // 0x228b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x228B38u;
    ctx->pc = 0x228b38u;
}
