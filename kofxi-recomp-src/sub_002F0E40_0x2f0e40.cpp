#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0E40
// Address: 0x2f0e40 - 0x2f0ec0
void sub_002F0E40_0x2f0e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0E40_0x2f0e40");
#endif

    switch (ctx->pc) {
        case 0x2f0e80u: goto label_2f0e80;
        case 0x2f0e94u: goto label_2f0e94;
        default: break;
    }

    ctx->pc = 0x2f0e40u;

    // 0x2f0e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0e44: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x2f0e44u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0e4c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F0E4Cu;
    {
        const bool branch_taken_0x2f0e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E4Cu;
            // 0x2f0e50: 0x24050e60  addiu       $a1, $zero, 0xE60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e4c) {
            ctx->pc = 0x2F0E80u;
            goto label_2f0e80;
        }
    }
    ctx->pc = 0x2F0E54u;
    // 0x2f0e54: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f0e54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0e5c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f0e60: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0e60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f0e64: 0x248417e0  addiu       $a0, $a0, 0x17E0
    ctx->pc = 0x2f0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6112));
    // 0x2f0e68: 0x25080a88  addiu       $t0, $t0, 0xA88
    ctx->pc = 0x2f0e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2696));
    // 0x2f0e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e70: 0x34e763bd  ori         $a3, $a3, 0x63BD
    ctx->pc = 0x2f0e70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
    // 0x2f0e74: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2F0E74u;
    ctx->pc = 0x2F0E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E74u;
            // 0x2f0e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F0E7Cu;
    // 0x2f0e7c: 0x0  nop
    ctx->pc = 0x2f0e7cu;
    // NOP
label_2f0e80:
    // 0x2f0e80: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0E80u;
    {
        const bool branch_taken_0x2f0e80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E80u;
            // 0x2f0e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e80) {
            ctx->pc = 0x2F0E98u;
            goto label_2f0e98;
        }
    }
    ctx->pc = 0x2F0E88u;
    // 0x2f0e88: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x2f0e88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2f0e8c: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F0E8Cu;
    SET_GPR_U32(ctx, 31, 0x2F0E94u);
    ctx->pc = 0x2F0E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0E8Cu;
            // 0x2f0e90: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (runtime->hasFunction(0x2F0678u)) {
        auto targetFn = runtime->lookupFunction(0x2F0678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E94u; }
        if (ctx->pc != 0x2F0E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0678_0x2f0678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0E94u; }
        if (ctx->pc != 0x2F0E94u) { return; }
    }
    ctx->pc = 0x2F0E94u;
label_2f0e94:
    // 0x2f0e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0e98:
    // 0x2f0e98: 0x948f0000  lhu         $t7, 0x0($a0)
    ctx->pc = 0x2f0e98u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f0e9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f0e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0ea4: 0x31effff0  andi        $t7, $t7, 0xFFF0
    ctx->pc = 0x2f0ea4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65520);
    // 0x2f0ea8: 0x35ef000d  ori         $t7, $t7, 0xD
    ctx->pc = 0x2f0ea8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)13);
    // 0x2f0eac: 0xa48f0000  sh          $t7, 0x0($a0)
    ctx->pc = 0x2f0eacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x2f0eb0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2f0eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f0eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0EB4u;
            // 0x2f0eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0EBCu;
    // 0x2f0ebc: 0x0  nop
    ctx->pc = 0x2f0ebcu;
    // NOP
    ctx->pc = 0x2f0ec0u;
}
