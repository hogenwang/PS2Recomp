#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127758
// Address: 0x127758 - 0x1277d8
void sub_00127758_0x127758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127758_0x127758");
#endif

    ctx->pc = 0x127758u;

    // 0x127758: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x127758u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x12775c: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x12775cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x127760: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x127760u;
    {
        const bool branch_taken_0x127760 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127760u;
            // 0x127764: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127760) {
            ctx->pc = 0x127770u;
            goto label_127770;
        }
    }
    ctx->pc = 0x127768u;
    // 0x127768: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x127768u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12776c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x12776cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_127770:
    // 0x127770: 0x3c0fff00  lui         $t7, 0xFF00
    ctx->pc = 0x127770u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65280 << 16));
    // 0x127774: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x127774u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x127778: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x127778u;
    {
        const bool branch_taken_0x127778 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127778u;
            // 0x12777c: 0x3c0ff000  lui         $t7, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127778) {
            ctx->pc = 0x127788u;
            goto label_127788;
        }
    }
    ctx->pc = 0x127780u;
    // 0x127780: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x127780u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x127784: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x127784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_127788:
    // 0x127788: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x127788u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x12778c: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12778Cu;
    {
        const bool branch_taken_0x12778c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12778Cu;
            // 0x127790: 0x3c0fc000  lui         $t7, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12778c) {
            ctx->pc = 0x12779Cu;
            goto label_12779c;
        }
    }
    ctx->pc = 0x127794u;
    // 0x127794: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x127794u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x127798: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x127798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_12779c:
    // 0x12779c: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x12779cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x1277a0: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1277A0u;
    {
        const bool branch_taken_0x1277a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1277a0) {
            ctx->pc = 0x1277B0u;
            goto label_1277b0;
        }
    }
    ctx->pc = 0x1277A8u;
    // 0x1277a8: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x1277a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x1277ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1277acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1277b0:
    // 0x1277b0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1277B0u;
    {
        const bool branch_taken_0x1277b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1277B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1277B0u;
            // 0x1277b4: 0x3c0f4000  lui         $t7, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277b0) {
            ctx->pc = 0x1277C8u;
            goto label_1277c8;
        }
    }
    ctx->pc = 0x1277B8u;
    // 0x1277b8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1277b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1277bc: 0x8f7824  and         $t7, $a0, $t7
    ctx->pc = 0x1277bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
    // 0x1277c0: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1277C0u;
    {
        const bool branch_taken_0x1277c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1277C0u;
            // 0x1277c4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277c0) {
            ctx->pc = 0x1277CCu;
            goto label_1277cc;
        }
    }
    ctx->pc = 0x1277C8u;
label_1277c8:
    // 0x1277c8: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x1277c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1277cc:
    // 0x1277cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1277CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1277D4u;
    // 0x1277d4: 0x0  nop
    ctx->pc = 0x1277d4u;
    // NOP
    ctx->pc = 0x1277d8u;
}
