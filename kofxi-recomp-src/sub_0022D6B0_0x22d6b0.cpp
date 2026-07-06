#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D6B0
// Address: 0x22d6b0 - 0x22d780
void sub_0022D6B0_0x22d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D6B0_0x22d6b0");
#endif

    switch (ctx->pc) {
        case 0x22d70cu: goto label_22d70c;
        case 0x22d72cu: goto label_22d72c;
        case 0x22d73cu: goto label_22d73c;
        case 0x22d748u: goto label_22d748;
        case 0x22d758u: goto label_22d758;
        case 0x22d760u: goto label_22d760;
        default: break;
    }

    ctx->pc = 0x22d6b0u;

    // 0x22d6b0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x22d6b4: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22d6b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22d6b8: 0x8c4317e8  lw          $v1, 0x17E8($v0)
    ctx->pc = 0x22d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6120)));
    // 0x22d6bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22d6c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22d6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22d6c4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x22d6c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22d6c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22d6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22d6cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22d6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22d6d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d6d4: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x22d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x22d6d8: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x22d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x22d6dc: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x22d6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x22d6e0: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x22d6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x22d6e4: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x22d6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x22d6e8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x22D6E8u;
    {
        const bool branch_taken_0x22d6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D6E8u;
            // 0x22d6ec: 0xffab00b8  sd          $t3, 0xB8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6e8) {
            ctx->pc = 0x22D760u;
            goto label_22d760;
        }
    }
    ctx->pc = 0x22D6F0u;
    // 0x22d6f0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x22d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x22d6f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22d6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d6f8: 0x2452a7c0  addiu       $s2, $v0, -0x5840
    ctx->pc = 0x22d6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944704));
    // 0x22d6fc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x22d6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22d700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d704: 0xc043e16  jal         func_10F858
    ctx->pc = 0x22D704u;
    SET_GPR_U32(ctx, 31, 0x22D70Cu);
    ctx->pc = 0x22D708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D704u;
            // 0x22d708: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F858u;
    if (runtime->hasFunction(0x10F858u)) {
        auto targetFn = runtime->lookupFunction(0x10F858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D70Cu; }
        if (ctx->pc != 0x22D70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F858_0x10f858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D70Cu; }
        if (ctx->pc != 0x22D70Cu) { return; }
    }
    ctx->pc = 0x22D70Cu;
label_22d70c:
    // 0x22d70c: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x22d70cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x22d710: 0x8e6217e0  lw          $v0, 0x17E0($s3)
    ctx->pc = 0x22d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6112)));
    // 0x22d714: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22D714u;
    {
        const bool branch_taken_0x22d714 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x22d714) {
            ctx->pc = 0x22D718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22D714u;
            // 0x22d718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22D734u;
            goto label_22d734;
        }
    }
    ctx->pc = 0x22D71Cu;
    // 0x22d71c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22d720: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d724: 0xc043e52  jal         func_10F948
    ctx->pc = 0x22D724u;
    SET_GPR_U32(ctx, 31, 0x22D72Cu);
    ctx->pc = 0x22D728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D724u;
            // 0x22d728: 0x24844628  addiu       $a0, $a0, 0x4628 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D72Cu; }
        if (ctx->pc != 0x22D72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D72Cu; }
        if (ctx->pc != 0x22D72Cu) { return; }
    }
    ctx->pc = 0x22D72Cu;
label_22d72c:
    // 0x22d72c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22D72Cu;
    {
        const bool branch_taken_0x22d72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D72Cu;
            // 0x22d730: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d72c) {
            ctx->pc = 0x22D764u;
            goto label_22d764;
        }
    }
    ctx->pc = 0x22D734u;
label_22d734:
    // 0x22d734: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x22D734u;
    SET_GPR_U32(ctx, 31, 0x22D73Cu);
    ctx->pc = 0x22D738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D734u;
            // 0x22d738: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D73Cu; }
        if (ctx->pc != 0x22D73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D73Cu; }
        if (ctx->pc != 0x22D73Cu) { return; }
    }
    ctx->pc = 0x22D73Cu;
label_22d73c:
    // 0x22d73c: 0x8e2417e4  lw          $a0, 0x17E4($s1)
    ctx->pc = 0x22d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6116)));
    // 0x22d740: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x22D740u;
    SET_GPR_U32(ctx, 31, 0x22D748u);
    ctx->pc = 0x22D744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D740u;
            // 0x22d744: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D748u; }
        if (ctx->pc != 0x22D748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D748u; }
        if (ctx->pc != 0x22D748u) { return; }
    }
    ctx->pc = 0x22D748u;
label_22d748:
    // 0x22d748: 0x8e6417e0  lw          $a0, 0x17E0($s3)
    ctx->pc = 0x22d748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6112)));
    // 0x22d74c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d750: 0xc044a8a  jal         func_112A28
    ctx->pc = 0x22D750u;
    SET_GPR_U32(ctx, 31, 0x22D758u);
    ctx->pc = 0x22D754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D750u;
            // 0x22d754: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112A28u;
    if (runtime->hasFunction(0x112A28u)) {
        auto targetFn = runtime->lookupFunction(0x112A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D758u; }
        if (ctx->pc != 0x22D758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112A28_0x112a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D758u; }
        if (ctx->pc != 0x22D758u) { return; }
    }
    ctx->pc = 0x22D758u;
label_22d758:
    // 0x22d758: 0xc043320  jal         func_10CC80
    ctx->pc = 0x22D758u;
    SET_GPR_U32(ctx, 31, 0x22D760u);
    ctx->pc = 0x22D75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D758u;
            // 0x22d75c: 0x8e2417e4  lw          $a0, 0x17E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D760u; }
        if (ctx->pc != 0x22D760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D760u; }
        if (ctx->pc != 0x22D760u) { return; }
    }
    ctx->pc = 0x22D760u;
label_22d760:
    // 0x22d760: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22d760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22d764:
    // 0x22d764: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22d764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22d768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d76c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22d76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d774: 0x3e00008  jr          $ra
    ctx->pc = 0x22D774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D774u;
            // 0x22d778: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D77Cu;
    // 0x22d77c: 0x0  nop
    ctx->pc = 0x22d77cu;
    // NOP
    ctx->pc = 0x22d780u;
}
