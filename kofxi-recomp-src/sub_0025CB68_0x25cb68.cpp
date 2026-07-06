#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CB68
// Address: 0x25cb68 - 0x25cbe8
void sub_0025CB68_0x25cb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CB68_0x25cb68");
#endif

    switch (ctx->pc) {
        case 0x25cb90u: goto label_25cb90;
        case 0x25cbbcu: goto label_25cbbc;
        case 0x25cbc4u: goto label_25cbc4;
        default: break;
    }

    ctx->pc = 0x25cb68u;

    // 0x25cb68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25cb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25cb6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25cb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25cb70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25cb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cb74: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x25cb74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x25cb78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25cb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25cb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25cb80: 0x8e441750  lw          $a0, 0x1750($s2)
    ctx->pc = 0x25cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5968)));
    // 0x25cb84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25cb88: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x25CB88u;
    SET_GPR_U32(ctx, 31, 0x25CB90u);
    ctx->pc = 0x25CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB88u;
            // 0x25cb8c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB90u; }
        if (ctx->pc != 0x25CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB90u; }
        if (ctx->pc != 0x25CB90u) { return; }
    }
    ctx->pc = 0x25CB90u;
label_25cb90:
    // 0x25cb90: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x25cb90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x25cb94: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x25cb94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x25cb98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25cb9c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x25cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x25cba0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25cba4: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x25cba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x25cba8: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x25cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25cbac: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CBACu;
    {
        const bool branch_taken_0x25cbac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CBACu;
            // 0x25cbb0: 0xa6020046  sh          $v0, 0x46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cbac) {
            ctx->pc = 0x25CBBCu;
            goto label_25cbbc;
        }
    }
    ctx->pc = 0x25CBB4u;
    // 0x25cbb4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x25CBB4u;
    SET_GPR_U32(ctx, 31, 0x25CBBCu);
    ctx->pc = 0x25CBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CBB4u;
            // 0x25cbb8: 0x86040044  lh          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBBCu; }
        if (ctx->pc != 0x25CBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBBCu; }
        if (ctx->pc != 0x25CBBCu) { return; }
    }
    ctx->pc = 0x25CBBCu;
label_25cbbc:
    // 0x25cbbc: 0xc043320  jal         func_10CC80
    ctx->pc = 0x25CBBCu;
    SET_GPR_U32(ctx, 31, 0x25CBC4u);
    ctx->pc = 0x25CBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CBBCu;
            // 0x25cbc0: 0x8e441750  lw          $a0, 0x1750($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5968)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBC4u; }
        if (ctx->pc != 0x25CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBC4u; }
        if (ctx->pc != 0x25CBC4u) { return; }
    }
    ctx->pc = 0x25CBC4u;
label_25cbc4:
    // 0x25cbc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25cbc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25cbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cbcc: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x25cbccu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x25cbd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25cbd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cbd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25cbd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cbd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25cbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x25CBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CBDCu;
            // 0x25cbe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CBE4u;
    // 0x25cbe4: 0x0  nop
    ctx->pc = 0x25cbe4u;
    // NOP
    ctx->pc = 0x25cbe8u;
}
