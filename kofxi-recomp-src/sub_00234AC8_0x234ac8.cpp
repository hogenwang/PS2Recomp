#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234AC8
// Address: 0x234ac8 - 0x234b28
void sub_00234AC8_0x234ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234AC8_0x234ac8");
#endif

    switch (ctx->pc) {
        case 0x234ac8u: goto label_234ac8;
        case 0x234accu: goto label_234acc;
        case 0x234ad0u: goto label_234ad0;
        case 0x234ad4u: goto label_234ad4;
        case 0x234ad8u: goto label_234ad8;
        case 0x234adcu: goto label_234adc;
        case 0x234ae0u: goto label_234ae0;
        case 0x234ae4u: goto label_234ae4;
        case 0x234ae8u: goto label_234ae8;
        case 0x234aecu: goto label_234aec;
        case 0x234af0u: goto label_234af0;
        case 0x234af4u: goto label_234af4;
        case 0x234af8u: goto label_234af8;
        case 0x234afcu: goto label_234afc;
        case 0x234b00u: goto label_234b00;
        case 0x234b04u: goto label_234b04;
        case 0x234b08u: goto label_234b08;
        case 0x234b0cu: goto label_234b0c;
        case 0x234b10u: goto label_234b10;
        case 0x234b14u: goto label_234b14;
        case 0x234b18u: goto label_234b18;
        case 0x234b1cu: goto label_234b1c;
        case 0x234b20u: goto label_234b20;
        case 0x234b24u: goto label_234b24;
        default: break;
    }

    ctx->pc = 0x234ac8u;

label_234ac8:
    // 0x234ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_234acc:
    // 0x234acc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x234accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_234ad0:
    // 0x234ad0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x234ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_234ad4:
    // 0x234ad4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x234ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_234ad8:
    // 0x234ad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x234ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_234adc:
    // 0x234adc: 0xc08d2e8  jal         func_234BA0
label_234ae0:
    if (ctx->pc == 0x234AE0u) {
        ctx->pc = 0x234AE0u;
            // 0x234ae0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234AE4u;
        goto label_234ae4;
    }
    ctx->pc = 0x234ADCu;
    SET_GPR_U32(ctx, 31, 0x234AE4u);
    ctx->pc = 0x234AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234ADCu;
            // 0x234ae0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234BA0u;
    if (runtime->hasFunction(0x234BA0u)) {
        auto targetFn = runtime->lookupFunction(0x234BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AE4u; }
        if (ctx->pc != 0x234AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234BA0_0x234ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AE4u; }
        if (ctx->pc != 0x234AE4u) { return; }
    }
    ctx->pc = 0x234AE4u;
label_234ae4:
    // 0x234ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234ae8:
    // 0x234ae8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_234aec:
    if (ctx->pc == 0x234AECu) {
        ctx->pc = 0x234AECu;
            // 0x234aec: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x234AF0u;
        goto label_234af0;
    }
    ctx->pc = 0x234AE8u;
    {
        const bool branch_taken_0x234ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234AE8u;
            // 0x234aec: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ae8) {
            ctx->pc = 0x234B10u;
            goto label_234b10;
        }
    }
    ctx->pc = 0x234AF0u;
label_234af0:
    // 0x234af0: 0xc08d54a  jal         func_235528
label_234af4:
    if (ctx->pc == 0x234AF4u) {
        ctx->pc = 0x234AF4u;
            // 0x234af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234AF8u;
        goto label_234af8;
    }
    ctx->pc = 0x234AF0u;
    SET_GPR_U32(ctx, 31, 0x234AF8u);
    ctx->pc = 0x234AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234AF0u;
            // 0x234af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235528u;
    if (runtime->hasFunction(0x235528u)) {
        auto targetFn = runtime->lookupFunction(0x235528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AF8u; }
        if (ctx->pc != 0x234AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235528_0x235528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AF8u; }
        if (ctx->pc != 0x234AF8u) { return; }
    }
    ctx->pc = 0x234AF8u;
label_234af8:
    // 0x234af8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_234afc:
    if (ctx->pc == 0x234AFCu) {
        ctx->pc = 0x234AFCu;
            // 0x234afc: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x234B00u;
        goto label_234b00;
    }
    ctx->pc = 0x234AF8u;
    {
        const bool branch_taken_0x234af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234AF8u;
            // 0x234afc: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234af8) {
            ctx->pc = 0x234B10u;
            goto label_234b10;
        }
    }
    ctx->pc = 0x234B00u;
label_234b00:
    // 0x234b00: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x234b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_234b04:
    // 0x234b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234b08:
    // 0x234b08: 0x40f809  jalr        $v0
label_234b0c:
    if (ctx->pc == 0x234B0Cu) {
        ctx->pc = 0x234B0Cu;
            // 0x234b0c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x234B10u;
        goto label_234b10;
    }
    ctx->pc = 0x234B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234B10u);
        ctx->pc = 0x234B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B08u;
            // 0x234b0c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x234B10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x234B10u; }
            if (ctx->pc != 0x234B10u) { return; }
        }
        }
    }
    ctx->pc = 0x234B10u;
label_234b10:
    // 0x234b10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x234b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_234b14:
    // 0x234b14: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x234b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234b18:
    // 0x234b18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x234b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234b1c:
    // 0x234b1c: 0x3e00008  jr          $ra
label_234b20:
    if (ctx->pc == 0x234B20u) {
        ctx->pc = 0x234B20u;
            // 0x234b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x234B24u;
        goto label_234b24;
    }
    ctx->pc = 0x234B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B1Cu;
            // 0x234b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234B24u;
label_234b24:
    // 0x234b24: 0x0  nop
    ctx->pc = 0x234b24u;
    // NOP
    ctx->pc = 0x234b28u;
}
