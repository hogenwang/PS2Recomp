#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031EEB0
// Address: 0x31eeb0 - 0x31ef60
void sub_0031EEB0_0x31eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EEB0_0x31eeb0");
#endif

    switch (ctx->pc) {
        case 0x31eed4u: goto label_31eed4;
        case 0x31eee8u: goto label_31eee8;
        case 0x31eef0u: goto label_31eef0;
        case 0x31ef0cu: goto label_31ef0c;
        case 0x31ef14u: goto label_31ef14;
        case 0x31ef48u: goto label_31ef48;
        default: break;
    }

    ctx->pc = 0x31eeb0u;

    // 0x31eeb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31eeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31eeb4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31eeb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31eeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31eebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31eec0: 0x8c632a10  lw          $v1, 0x2A10($v1)
    ctx->pc = 0x31eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10768)));
    // 0x31eec4: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x31EEC4u;
    {
        const bool branch_taken_0x31eec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eec4) {
            ctx->pc = 0x31EEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31EEC4u;
            // 0x31eec8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31EF4Cu;
            goto label_31ef4c;
        }
    }
    ctx->pc = 0x31EECCu;
    // 0x31eecc: 0xc0c7a9c  jal         func_31EA70
    ctx->pc = 0x31EECCu;
    SET_GPR_U32(ctx, 31, 0x31EED4u);
    ctx->pc = 0x31EA70u;
    if (runtime->hasFunction(0x31EA70u)) {
        auto targetFn = runtime->lookupFunction(0x31EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EED4u; }
        if (ctx->pc != 0x31EED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EA70_0x31ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EED4u; }
        if (ctx->pc != 0x31EED4u) { return; }
    }
    ctx->pc = 0x31EED4u;
label_31eed4:
    // 0x31eed4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31eed8: 0x3c1001da  lui         $s0, 0x1DA
    ctx->pc = 0x31eed8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)474 << 16));
    // 0x31eedc: 0x8c632a10  lw          $v1, 0x2A10($v1)
    ctx->pc = 0x31eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10768)));
    // 0x31eee0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x31EEE0u;
    {
        const bool branch_taken_0x31eee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EEE0u;
            // 0x31eee4: 0x261042c0  addiu       $s0, $s0, 0x42C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eee0) {
            ctx->pc = 0x31EF30u;
            goto label_31ef30;
        }
    }
    ctx->pc = 0x31EEE8u;
label_31eee8:
    // 0x31eee8: 0xc0c7acc  jal         func_31EB30
    ctx->pc = 0x31EEE8u;
    SET_GPR_U32(ctx, 31, 0x31EEF0u);
    ctx->pc = 0x31EEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31EEE8u;
            // 0x31eeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EB30u;
    if (runtime->hasFunction(0x31EB30u)) {
        auto targetFn = runtime->lookupFunction(0x31EB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EEF0u; }
        if (ctx->pc != 0x31EEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EB30_0x31eb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EEF0u; }
        if (ctx->pc != 0x31EEF0u) { return; }
    }
    ctx->pc = 0x31EEF0u;
label_31eef0:
    // 0x31eef0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31eef4: 0x8c632a90  lw          $v1, 0x2A90($v1)
    ctx->pc = 0x31eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10896)));
    // 0x31eef8: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x31eef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x31eefc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EEFCu;
    {
        const bool branch_taken_0x31eefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EEFCu;
            // 0x31ef00: 0x26100006  addiu       $s0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eefc) {
            ctx->pc = 0x31EF18u;
            goto label_31ef18;
        }
    }
    ctx->pc = 0x31EF04u;
    // 0x31ef04: 0xc0c7aa4  jal         func_31EA90
    ctx->pc = 0x31EF04u;
    SET_GPR_U32(ctx, 31, 0x31EF0Cu);
    ctx->pc = 0x31EA90u;
    if (runtime->hasFunction(0x31EA90u)) {
        auto targetFn = runtime->lookupFunction(0x31EA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF0Cu; }
        if (ctx->pc != 0x31EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EA90_0x31ea90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF0Cu; }
        if (ctx->pc != 0x31EF0Cu) { return; }
    }
    ctx->pc = 0x31EF0Cu;
label_31ef0c:
    // 0x31ef0c: 0xc0c7a9c  jal         func_31EA70
    ctx->pc = 0x31EF0Cu;
    SET_GPR_U32(ctx, 31, 0x31EF14u);
    ctx->pc = 0x31EA70u;
    if (runtime->hasFunction(0x31EA70u)) {
        auto targetFn = runtime->lookupFunction(0x31EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF14u; }
        if (ctx->pc != 0x31EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EA70_0x31ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF14u; }
        if (ctx->pc != 0x31EF14u) { return; }
    }
    ctx->pc = 0x31EF14u;
label_31ef14:
    // 0x31ef14: 0x0  nop
    ctx->pc = 0x31ef14u;
    // NOP
label_31ef18:
    // 0x31ef18: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ef1c: 0x8c642a10  lw          $a0, 0x2A10($v1)
    ctx->pc = 0x31ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10768)));
    // 0x31ef20: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ef24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31ef28: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x31EF28u;
    {
        const bool branch_taken_0x31ef28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF28u;
            // 0x31ef2c: 0xac642a10  sw          $a0, 0x2A10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef28) {
            ctx->pc = 0x31EEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31eee8;
        }
    }
    ctx->pc = 0x31EF30u;
label_31ef30:
    // 0x31ef30: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ef34: 0x8c632a90  lw          $v1, 0x2A90($v1)
    ctx->pc = 0x31ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10896)));
    // 0x31ef38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EF38u;
    {
        const bool branch_taken_0x31ef38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ef38) {
            ctx->pc = 0x31EF48u;
            goto label_31ef48;
        }
    }
    ctx->pc = 0x31EF40u;
    // 0x31ef40: 0xc0c7aa4  jal         func_31EA90
    ctx->pc = 0x31EF40u;
    SET_GPR_U32(ctx, 31, 0x31EF48u);
    ctx->pc = 0x31EA90u;
    if (runtime->hasFunction(0x31EA90u)) {
        auto targetFn = runtime->lookupFunction(0x31EA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF48u; }
        if (ctx->pc != 0x31EF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031EA90_0x31ea90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31EF48u; }
        if (ctx->pc != 0x31EF48u) { return; }
    }
    ctx->pc = 0x31EF48u;
label_31ef48:
    // 0x31ef48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31ef4c:
    // 0x31ef4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ef4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ef50: 0x3e00008  jr          $ra
    ctx->pc = 0x31EF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31EF50u;
            // 0x31ef54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31EF58u;
    // 0x31ef58: 0x0  nop
    ctx->pc = 0x31ef58u;
    // NOP
    // 0x31ef5c: 0x0  nop
    ctx->pc = 0x31ef5cu;
    // NOP
    ctx->pc = 0x31ef60u;
}
